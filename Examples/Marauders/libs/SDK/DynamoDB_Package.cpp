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
	 * 		Name   -> Function DynamoDB.DynamoDBAttributeValueHelper.JsonToDynamoDBAttributeValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Json                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UDynamoDBAttributeValueHelper::JsonToDynamoDBAttributeValue(const class FString& Json)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBAttributeValueHelper.JsonToDynamoDBAttributeValue");
		
		UDynamoDBAttributeValueHelper_JsonToDynamoDBAttributeValue_Params params {};
		params.Json = Json;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBAttributeValueHelper.DynamoDBAttributeValueToJson
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      AttributeValue                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UDynamoDBAttributeValueHelper::DynamoDBAttributeValueToJson(const class FString& AttributeValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBAttributeValueHelper.DynamoDBAttributeValueToJson");
		
		UDynamoDBAttributeValueHelper_DynamoDBAttributeValueToJson_Params params {};
		params.AttributeValue = AttributeValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDynamoDBAttributeValueHelper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamoDBAttributeValueHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DynamoDB.DynamoDBAttributeValueHelper");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.UpdateTimeToLive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUpdateTimeToLiveRequest                    UpdateTimeToLiveRequest                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FUpdateTimeToLiveResult                     UpdateTimeToLiveResult                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::UpdateTimeToLive(class UObject* WorldContextObject, bool* Success, const struct FUpdateTimeToLiveRequest& UpdateTimeToLiveRequest, struct FUpdateTimeToLiveResult* UpdateTimeToLiveResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.UpdateTimeToLive");
		
		UDynamoDBClientObject_UpdateTimeToLive_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.UpdateTimeToLiveRequest = UpdateTimeToLiveRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (UpdateTimeToLiveResult != nullptr)
			*UpdateTimeToLiveResult = params.UpdateTimeToLiveResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.UpdateTableReplicaAutoScaling
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUpdateTableReplicaAutoScalingRequest       UpdateTableReplicaAutoScalingRequest                       (Parm, NativeAccessSpecifierPublic)
	 * 		struct FUpdateTableReplicaAutoScalingResult        UpdateTableReplicaAutoScalingResult                        (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::UpdateTableReplicaAutoScaling(class UObject* WorldContextObject, bool* Success, const struct FUpdateTableReplicaAutoScalingRequest& UpdateTableReplicaAutoScalingRequest, struct FUpdateTableReplicaAutoScalingResult* UpdateTableReplicaAutoScalingResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.UpdateTableReplicaAutoScaling");
		
		UDynamoDBClientObject_UpdateTableReplicaAutoScaling_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.UpdateTableReplicaAutoScalingRequest = UpdateTableReplicaAutoScalingRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (UpdateTableReplicaAutoScalingResult != nullptr)
			*UpdateTableReplicaAutoScalingResult = params.UpdateTableReplicaAutoScalingResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.UpdateTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUpdateTableRequest                         UpdateTableRequest                                         (Parm, NativeAccessSpecifierPublic)
	 * 		struct FUpdateTableResult                          UpdateTableResult                                          (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::UpdateTable(class UObject* WorldContextObject, bool* Success, const struct FUpdateTableRequest& UpdateTableRequest, struct FUpdateTableResult* UpdateTableResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.UpdateTable");
		
		UDynamoDBClientObject_UpdateTable_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.UpdateTableRequest = UpdateTableRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (UpdateTableResult != nullptr)
			*UpdateTableResult = params.UpdateTableResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.UpdateItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUpdateItemRequest                          UpdateItemRequest                                          (Parm, NativeAccessSpecifierPublic)
	 * 		struct FUpdateItemResult                           UpdateItemResult                                           (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::UpdateItem(class UObject* WorldContextObject, bool* Success, const struct FUpdateItemRequest& UpdateItemRequest, struct FUpdateItemResult* UpdateItemResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.UpdateItem");
		
		UDynamoDBClientObject_UpdateItem_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.UpdateItemRequest = UpdateItemRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (UpdateItemResult != nullptr)
			*UpdateItemResult = params.UpdateItemResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.UpdateGlobalTableSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUpdateGlobalTableSettingsRequest           UpdateGlobalTableSettingsRequest                           (Parm, NativeAccessSpecifierPublic)
	 * 		struct FUpdateGlobalTableSettingsResult            UpdateGlobalTableSettingsResult                            (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::UpdateGlobalTableSettings(class UObject* WorldContextObject, bool* Success, const struct FUpdateGlobalTableSettingsRequest& UpdateGlobalTableSettingsRequest, struct FUpdateGlobalTableSettingsResult* UpdateGlobalTableSettingsResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.UpdateGlobalTableSettings");
		
		UDynamoDBClientObject_UpdateGlobalTableSettings_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.UpdateGlobalTableSettingsRequest = UpdateGlobalTableSettingsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (UpdateGlobalTableSettingsResult != nullptr)
			*UpdateGlobalTableSettingsResult = params.UpdateGlobalTableSettingsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.UpdateGlobalTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUpdateGlobalTableRequest                   UpdateGlobalTableRequest                                   (Parm, NativeAccessSpecifierPublic)
	 * 		struct FUpdateGlobalTableResult                    UpdateGlobalTableResult                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::UpdateGlobalTable(class UObject* WorldContextObject, bool* Success, const struct FUpdateGlobalTableRequest& UpdateGlobalTableRequest, struct FUpdateGlobalTableResult* UpdateGlobalTableResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.UpdateGlobalTable");
		
		UDynamoDBClientObject_UpdateGlobalTable_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.UpdateGlobalTableRequest = UpdateGlobalTableRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (UpdateGlobalTableResult != nullptr)
			*UpdateGlobalTableResult = params.UpdateGlobalTableResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.UpdateContributorInsights
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUpdateContributorInsightsRequest           UpdateContributorInsightsRequest                           (Parm, NativeAccessSpecifierPublic)
	 * 		struct FUpdateContributorInsightsResult            UpdateContributorInsightsResult                            (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::UpdateContributorInsights(class UObject* WorldContextObject, bool* Success, const struct FUpdateContributorInsightsRequest& UpdateContributorInsightsRequest, struct FUpdateContributorInsightsResult* UpdateContributorInsightsResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.UpdateContributorInsights");
		
		UDynamoDBClientObject_UpdateContributorInsights_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.UpdateContributorInsightsRequest = UpdateContributorInsightsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (UpdateContributorInsightsResult != nullptr)
			*UpdateContributorInsightsResult = params.UpdateContributorInsightsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.UpdateContinuousBackups
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUpdateContinuousBackupsRequest             UpdateContinuousBackupsRequest                             (Parm, NativeAccessSpecifierPublic)
	 * 		struct FUpdateContinuousBackupsResult              UpdateContinuousBackupsResult                              (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::UpdateContinuousBackups(class UObject* WorldContextObject, bool* Success, const struct FUpdateContinuousBackupsRequest& UpdateContinuousBackupsRequest, struct FUpdateContinuousBackupsResult* UpdateContinuousBackupsResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.UpdateContinuousBackups");
		
		UDynamoDBClientObject_UpdateContinuousBackups_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.UpdateContinuousBackupsRequest = UpdateContinuousBackupsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (UpdateContinuousBackupsResult != nullptr)
			*UpdateContinuousBackupsResult = params.UpdateContinuousBackupsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.UntagResource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDynamoDBUntagResourceRequest               untagResourceRequest                                       (Parm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::UntagResource(class UObject* WorldContextObject, bool* Success, const struct FDynamoDBUntagResourceRequest& untagResourceRequest, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.UntagResource");
		
		UDynamoDBClientObject_UntagResource_Params params {};
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
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.TransactWriteItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransactWriteItemsRequest                  TransactWriteItemsRequest                                  (Parm, NativeAccessSpecifierPublic)
	 * 		struct FTransactWriteItemsResult                   TransactWriteItemsResult                                   (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::TransactWriteItems(class UObject* WorldContextObject, bool* Success, const struct FTransactWriteItemsRequest& TransactWriteItemsRequest, struct FTransactWriteItemsResult* TransactWriteItemsResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.TransactWriteItems");
		
		UDynamoDBClientObject_TransactWriteItems_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.TransactWriteItemsRequest = TransactWriteItemsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (TransactWriteItemsResult != nullptr)
			*TransactWriteItemsResult = params.TransactWriteItemsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.TransactGetItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransactGetItemsRequest                    TransactGetItemsRequest                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FTransactGetItemsResult                     TransactGetItemsResult                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::TransactGetItems(class UObject* WorldContextObject, bool* Success, const struct FTransactGetItemsRequest& TransactGetItemsRequest, struct FTransactGetItemsResult* TransactGetItemsResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.TransactGetItems");
		
		UDynamoDBClientObject_TransactGetItems_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.TransactGetItemsRequest = TransactGetItemsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (TransactGetItemsResult != nullptr)
			*TransactGetItemsResult = params.TransactGetItemsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.TagResource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDynamoDBTagResourceRequest                 tagResourceRequest                                         (Parm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::TagResource(class UObject* WorldContextObject, bool* Success, const struct FDynamoDBTagResourceRequest& tagResourceRequest, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.TagResource");
		
		UDynamoDBClientObject_TagResource_Params params {};
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
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.Scan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FScanRequest                                ScanRequest                                                (Parm, NativeAccessSpecifierPublic)
	 * 		struct FScanResult                                 ScanResult                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::Scan(class UObject* WorldContextObject, bool* Success, const struct FScanRequest& ScanRequest, struct FScanResult* ScanResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.Scan");
		
		UDynamoDBClientObject_Scan_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ScanRequest = ScanRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (ScanResult != nullptr)
			*ScanResult = params.ScanResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.RestoreTableToPointInTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRestoreTableToPointInTimeRequest           RestoreTableToPointInTimeRequest                           (Parm, NativeAccessSpecifierPublic)
	 * 		struct FRestoreTableToPointInTimeResult            RestoreTableToPointInTimeResult                            (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::RestoreTableToPointInTime(class UObject* WorldContextObject, bool* Success, const struct FRestoreTableToPointInTimeRequest& RestoreTableToPointInTimeRequest, struct FRestoreTableToPointInTimeResult* RestoreTableToPointInTimeResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.RestoreTableToPointInTime");
		
		UDynamoDBClientObject_RestoreTableToPointInTime_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.RestoreTableToPointInTimeRequest = RestoreTableToPointInTimeRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (RestoreTableToPointInTimeResult != nullptr)
			*RestoreTableToPointInTimeResult = params.RestoreTableToPointInTimeResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.RestoreTableFromBackup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRestoreTableFromBackupRequest              RestoreTableFromBackupRequest                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FRestoreTableFromBackupResult               RestoreTableFromBackupResult                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::RestoreTableFromBackup(class UObject* WorldContextObject, bool* Success, const struct FRestoreTableFromBackupRequest& RestoreTableFromBackupRequest, struct FRestoreTableFromBackupResult* RestoreTableFromBackupResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.RestoreTableFromBackup");
		
		UDynamoDBClientObject_RestoreTableFromBackup_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.RestoreTableFromBackupRequest = RestoreTableFromBackupRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (RestoreTableFromBackupResult != nullptr)
			*RestoreTableFromBackupResult = params.RestoreTableFromBackupResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.Query
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FQueryRequest                               QueryRequest                                               (Parm, NativeAccessSpecifierPublic)
	 * 		struct FQueryResult                                QueryResult                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::Query(class UObject* WorldContextObject, bool* Success, const struct FQueryRequest& QueryRequest, struct FQueryResult* QueryResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.Query");
		
		UDynamoDBClientObject_Query_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.QueryRequest = QueryRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (QueryResult != nullptr)
			*QueryResult = params.QueryResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.PutItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPutItemRequest                             PutItemRequest                                             (Parm, NativeAccessSpecifierPublic)
	 * 		struct FPutItemResult                              PutItemResult                                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::PutItem(class UObject* WorldContextObject, bool* Success, const struct FPutItemRequest& PutItemRequest, struct FPutItemResult* PutItemResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.PutItem");
		
		UDynamoDBClientObject_PutItem_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PutItemRequest = PutItemRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (PutItemResult != nullptr)
			*PutItemResult = params.PutItemResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.ListTagsOfResource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FListTagsOfResourceRequest                  ListTagsOfResourceRequest                                  (Parm, NativeAccessSpecifierPublic)
	 * 		struct FListTagsOfResourceResult                   ListTagsOfResourceResult                                   (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::ListTagsOfResource(class UObject* WorldContextObject, bool* Success, const struct FListTagsOfResourceRequest& ListTagsOfResourceRequest, struct FListTagsOfResourceResult* ListTagsOfResourceResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.ListTagsOfResource");
		
		UDynamoDBClientObject_ListTagsOfResource_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ListTagsOfResourceRequest = ListTagsOfResourceRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (ListTagsOfResourceResult != nullptr)
			*ListTagsOfResourceResult = params.ListTagsOfResourceResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.ListTables
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FListTablesRequest                          ListTablesRequest                                          (Parm, NativeAccessSpecifierPublic)
	 * 		struct FListTablesResult                           ListTablesResult                                           (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::ListTables(class UObject* WorldContextObject, bool* Success, const struct FListTablesRequest& ListTablesRequest, struct FListTablesResult* ListTablesResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.ListTables");
		
		UDynamoDBClientObject_ListTables_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ListTablesRequest = ListTablesRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (ListTablesResult != nullptr)
			*ListTablesResult = params.ListTablesResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.ListGlobalTables
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FListGlobalTablesRequest                    ListGlobalTablesRequest                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FListGlobalTablesResult                     ListGlobalTablesResult                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::ListGlobalTables(class UObject* WorldContextObject, bool* Success, const struct FListGlobalTablesRequest& ListGlobalTablesRequest, struct FListGlobalTablesResult* ListGlobalTablesResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.ListGlobalTables");
		
		UDynamoDBClientObject_ListGlobalTables_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ListGlobalTablesRequest = ListGlobalTablesRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (ListGlobalTablesResult != nullptr)
			*ListGlobalTablesResult = params.ListGlobalTablesResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.ListExports
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAWSDynamoDBListExportsRequest              listExportsRequest                                         (Parm, NativeAccessSpecifierPublic)
	 * 		struct FAWSDynamoDBListExportsResult               listExportsResult                                          (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::ListExports(class UObject* WorldContextObject, bool* Success, const struct FAWSDynamoDBListExportsRequest& listExportsRequest, struct FAWSDynamoDBListExportsResult* listExportsResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.ListExports");
		
		UDynamoDBClientObject_ListExports_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.listExportsRequest = listExportsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (listExportsResult != nullptr)
			*listExportsResult = params.listExportsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.ListContributorInsights
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FListContributorInsightsRequest             ListContributorInsightsRequest                             (Parm, NativeAccessSpecifierPublic)
	 * 		struct FListContributorInsightsResult              ListContributorInsightsResult                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::ListContributorInsights(class UObject* WorldContextObject, bool* Success, const struct FListContributorInsightsRequest& ListContributorInsightsRequest, struct FListContributorInsightsResult* ListContributorInsightsResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.ListContributorInsights");
		
		UDynamoDBClientObject_ListContributorInsights_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ListContributorInsightsRequest = ListContributorInsightsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (ListContributorInsightsResult != nullptr)
			*ListContributorInsightsResult = params.ListContributorInsightsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.ListBackups
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FListBackupsRequest                         ListBackupsRequest                                         (Parm, NativeAccessSpecifierPublic)
	 * 		struct FListBackupsResult                          ListBackupsResult                                          (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::ListBackups(class UObject* WorldContextObject, bool* Success, const struct FListBackupsRequest& ListBackupsRequest, struct FListBackupsResult* ListBackupsResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.ListBackups");
		
		UDynamoDBClientObject_ListBackups_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ListBackupsRequest = ListBackupsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (ListBackupsResult != nullptr)
			*ListBackupsResult = params.ListBackupsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.GetItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGetItemRequest                             GetItemRequest                                             (Parm, NativeAccessSpecifierPublic)
	 * 		struct FGetItemResult                              GetItemResult                                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::GetItem(class UObject* WorldContextObject, bool* Success, const struct FGetItemRequest& GetItemRequest, struct FGetItemResult* GetItemResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.GetItem");
		
		UDynamoDBClientObject_GetItem_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.GetItemRequest = GetItemRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (GetItemResult != nullptr)
			*GetItemResult = params.GetItemResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.ExportTableToPointInTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAWSDynamoDBExportTableToPointInTimeRequest exportTableToPointInTimeRequest                            (Parm, NativeAccessSpecifierPublic)
	 * 		struct FAWSDynamoDBExportTableToPointInTimeResult  exportTableToPointInTimeResult                             (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::ExportTableToPointInTime(class UObject* WorldContextObject, bool* Success, const struct FAWSDynamoDBExportTableToPointInTimeRequest& exportTableToPointInTimeRequest, struct FAWSDynamoDBExportTableToPointInTimeResult* exportTableToPointInTimeResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.ExportTableToPointInTime");
		
		UDynamoDBClientObject_ExportTableToPointInTime_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.exportTableToPointInTimeRequest = exportTableToPointInTimeRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (exportTableToPointInTimeResult != nullptr)
			*exportTableToPointInTimeResult = params.exportTableToPointInTimeResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.ExecuteTransaction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAWSDynamoDBExecuteTransactionRequest       executeTransactionRequest                                  (Parm, NativeAccessSpecifierPublic)
	 * 		struct FAWSDynamoDBExecuteTransactionResult        executeTransactionResult                                   (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::ExecuteTransaction(class UObject* WorldContextObject, bool* Success, const struct FAWSDynamoDBExecuteTransactionRequest& executeTransactionRequest, struct FAWSDynamoDBExecuteTransactionResult* executeTransactionResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.ExecuteTransaction");
		
		UDynamoDBClientObject_ExecuteTransaction_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.executeTransactionRequest = executeTransactionRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (executeTransactionResult != nullptr)
			*executeTransactionResult = params.executeTransactionResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.ExecuteStatement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAWSDynamoDBExecuteStatementRequest         executeStatementRequest                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FAWSDynamoDBExecuteStatementResult          executeStatementResult                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::ExecuteStatement(class UObject* WorldContextObject, bool* Success, const struct FAWSDynamoDBExecuteStatementRequest& executeStatementRequest, struct FAWSDynamoDBExecuteStatementResult* executeStatementResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.ExecuteStatement");
		
		UDynamoDBClientObject_ExecuteStatement_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.executeStatementRequest = executeStatementRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (executeStatementResult != nullptr)
			*executeStatementResult = params.executeStatementResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.EnableKinesisStreamingDestination
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAWSDynamoDBEnableKinesisStreamingDestinationRequest enableKinesisStreamingDestinationRequest                   (Parm, NativeAccessSpecifierPublic)
	 * 		struct FAWSDynamoDBEnableKinesisStreamingDestinationResult enableKinesisStreamingDestinationResult                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::EnableKinesisStreamingDestination(class UObject* WorldContextObject, bool* Success, const struct FAWSDynamoDBEnableKinesisStreamingDestinationRequest& enableKinesisStreamingDestinationRequest, struct FAWSDynamoDBEnableKinesisStreamingDestinationResult* enableKinesisStreamingDestinationResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.EnableKinesisStreamingDestination");
		
		UDynamoDBClientObject_EnableKinesisStreamingDestination_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.enableKinesisStreamingDestinationRequest = enableKinesisStreamingDestinationRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (enableKinesisStreamingDestinationResult != nullptr)
			*enableKinesisStreamingDestinationResult = params.enableKinesisStreamingDestinationResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.DisableKinesisStreamingDestination
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAWSDynamoDBDisableKinesisStreamingDestinationRequest disableKinesisStreamingDestinationRequest                  (Parm, NativeAccessSpecifierPublic)
	 * 		struct FAWSDynamoDBDisableKinesisStreamingDestinationResult disableKinesisStreamingDestinationResult                   (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::DisableKinesisStreamingDestination(class UObject* WorldContextObject, bool* Success, const struct FAWSDynamoDBDisableKinesisStreamingDestinationRequest& disableKinesisStreamingDestinationRequest, struct FAWSDynamoDBDisableKinesisStreamingDestinationResult* disableKinesisStreamingDestinationResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.DisableKinesisStreamingDestination");
		
		UDynamoDBClientObject_DisableKinesisStreamingDestination_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.disableKinesisStreamingDestinationRequest = disableKinesisStreamingDestinationRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (disableKinesisStreamingDestinationResult != nullptr)
			*disableKinesisStreamingDestinationResult = params.disableKinesisStreamingDestinationResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.DescribeTimeToLive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDescribeTimeToLiveRequest                  DescribeTimeToLiveRequest                                  (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDescribeTimeToLiveResult                   DescribeTimeToLiveResult                                   (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::DescribeTimeToLive(class UObject* WorldContextObject, bool* Success, const struct FDescribeTimeToLiveRequest& DescribeTimeToLiveRequest, struct FDescribeTimeToLiveResult* DescribeTimeToLiveResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.DescribeTimeToLive");
		
		UDynamoDBClientObject_DescribeTimeToLive_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DescribeTimeToLiveRequest = DescribeTimeToLiveRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DescribeTimeToLiveResult != nullptr)
			*DescribeTimeToLiveResult = params.DescribeTimeToLiveResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.DescribeTableReplicaAutoScaling
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDescribeTableReplicaAutoScalingRequest     DescribeTableReplicaAutoScalingRequest                     (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDescribeTableReplicaAutoScalingResult      DescribeTableReplicaAutoScalingResult                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::DescribeTableReplicaAutoScaling(class UObject* WorldContextObject, bool* Success, const struct FDescribeTableReplicaAutoScalingRequest& DescribeTableReplicaAutoScalingRequest, struct FDescribeTableReplicaAutoScalingResult* DescribeTableReplicaAutoScalingResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.DescribeTableReplicaAutoScaling");
		
		UDynamoDBClientObject_DescribeTableReplicaAutoScaling_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DescribeTableReplicaAutoScalingRequest = DescribeTableReplicaAutoScalingRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DescribeTableReplicaAutoScalingResult != nullptr)
			*DescribeTableReplicaAutoScalingResult = params.DescribeTableReplicaAutoScalingResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.DescribeTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDescribeTableRequest                       DescribeTableRequest                                       (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDescribeTableResult                        DescribeTableResult                                        (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::DescribeTable(class UObject* WorldContextObject, bool* Success, const struct FDescribeTableRequest& DescribeTableRequest, struct FDescribeTableResult* DescribeTableResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.DescribeTable");
		
		UDynamoDBClientObject_DescribeTable_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DescribeTableRequest = DescribeTableRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DescribeTableResult != nullptr)
			*DescribeTableResult = params.DescribeTableResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.DescribeLimits
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDescribeLimitsRequest                      DescribeLimitsRequest                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FDescribeLimitsResult                       DescribeLimitsResult                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::DescribeLimits(class UObject* WorldContextObject, bool* Success, const struct FDescribeLimitsRequest& DescribeLimitsRequest, struct FDescribeLimitsResult* DescribeLimitsResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.DescribeLimits");
		
		UDynamoDBClientObject_DescribeLimits_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DescribeLimitsRequest = DescribeLimitsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DescribeLimitsResult != nullptr)
			*DescribeLimitsResult = params.DescribeLimitsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.DescribeKinesisStreamingDestination
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAWSDynamoDBDescribeKinesisStreamingDestinationRequest describeKinesisStreamingDestinationRequest                 (Parm, NativeAccessSpecifierPublic)
	 * 		struct FAWSDynamoDBDescribeKinesisStreamingDestinationResult describeKinesisStreamingDestinationResult                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::DescribeKinesisStreamingDestination(class UObject* WorldContextObject, bool* Success, const struct FAWSDynamoDBDescribeKinesisStreamingDestinationRequest& describeKinesisStreamingDestinationRequest, struct FAWSDynamoDBDescribeKinesisStreamingDestinationResult* describeKinesisStreamingDestinationResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.DescribeKinesisStreamingDestination");
		
		UDynamoDBClientObject_DescribeKinesisStreamingDestination_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.describeKinesisStreamingDestinationRequest = describeKinesisStreamingDestinationRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (describeKinesisStreamingDestinationResult != nullptr)
			*describeKinesisStreamingDestinationResult = params.describeKinesisStreamingDestinationResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.DescribeGlobalTableSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDescribeGlobalTableSettingsRequest         DescribeGlobalTableSettingsRequest                         (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDescribeGlobalTableSettingsResult          DescribeGlobalTableSettingsResult                          (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::DescribeGlobalTableSettings(class UObject* WorldContextObject, bool* Success, const struct FDescribeGlobalTableSettingsRequest& DescribeGlobalTableSettingsRequest, struct FDescribeGlobalTableSettingsResult* DescribeGlobalTableSettingsResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.DescribeGlobalTableSettings");
		
		UDynamoDBClientObject_DescribeGlobalTableSettings_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DescribeGlobalTableSettingsRequest = DescribeGlobalTableSettingsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DescribeGlobalTableSettingsResult != nullptr)
			*DescribeGlobalTableSettingsResult = params.DescribeGlobalTableSettingsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.DescribeGlobalTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDescribeGlobalTableRequest                 DescribeGlobalTableRequest                                 (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDescribeGlobalTableResult                  DescribeGlobalTableResult                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::DescribeGlobalTable(class UObject* WorldContextObject, bool* Success, const struct FDescribeGlobalTableRequest& DescribeGlobalTableRequest, struct FDescribeGlobalTableResult* DescribeGlobalTableResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.DescribeGlobalTable");
		
		UDynamoDBClientObject_DescribeGlobalTable_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DescribeGlobalTableRequest = DescribeGlobalTableRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DescribeGlobalTableResult != nullptr)
			*DescribeGlobalTableResult = params.DescribeGlobalTableResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.DescribeExport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAWSDynamoDBDescribeExportRequest           describeExportRequest                                      (Parm, NativeAccessSpecifierPublic)
	 * 		struct FAWSDynamoDBDescribeExportResult            describeExportResult                                       (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::DescribeExport(class UObject* WorldContextObject, bool* Success, const struct FAWSDynamoDBDescribeExportRequest& describeExportRequest, struct FAWSDynamoDBDescribeExportResult* describeExportResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.DescribeExport");
		
		UDynamoDBClientObject_DescribeExport_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.describeExportRequest = describeExportRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (describeExportResult != nullptr)
			*describeExportResult = params.describeExportResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.DescribeEndpoints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDescribeEndpointsRequest                   DescribeEndpointsRequest                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FDescribeEndpointsResult                    DescribeEndpointsResult                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::DescribeEndpoints(class UObject* WorldContextObject, bool* Success, const struct FDescribeEndpointsRequest& DescribeEndpointsRequest, struct FDescribeEndpointsResult* DescribeEndpointsResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.DescribeEndpoints");
		
		UDynamoDBClientObject_DescribeEndpoints_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DescribeEndpointsRequest = DescribeEndpointsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DescribeEndpointsResult != nullptr)
			*DescribeEndpointsResult = params.DescribeEndpointsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.DescribeContributorInsights
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDescribeContributorInsightsRequest         DescribeContributorInsightsRequest                         (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDescribeContributorInsightsResult          DescribeContributorInsightsResult                          (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::DescribeContributorInsights(class UObject* WorldContextObject, bool* Success, const struct FDescribeContributorInsightsRequest& DescribeContributorInsightsRequest, struct FDescribeContributorInsightsResult* DescribeContributorInsightsResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.DescribeContributorInsights");
		
		UDynamoDBClientObject_DescribeContributorInsights_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DescribeContributorInsightsRequest = DescribeContributorInsightsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DescribeContributorInsightsResult != nullptr)
			*DescribeContributorInsightsResult = params.DescribeContributorInsightsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.DescribeContinuousBackups
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDescribeContinuousBackupsRequest           DescribeContinuousBackupsRequest                           (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDescribeContinuousBackupsResult            DescribeContinuousBackupsResult                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::DescribeContinuousBackups(class UObject* WorldContextObject, bool* Success, const struct FDescribeContinuousBackupsRequest& DescribeContinuousBackupsRequest, struct FDescribeContinuousBackupsResult* DescribeContinuousBackupsResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.DescribeContinuousBackups");
		
		UDynamoDBClientObject_DescribeContinuousBackups_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DescribeContinuousBackupsRequest = DescribeContinuousBackupsRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DescribeContinuousBackupsResult != nullptr)
			*DescribeContinuousBackupsResult = params.DescribeContinuousBackupsResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.DescribeBackup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDescribeBackupRequest                      DescribeBackupRequest                                      (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDescribeBackupResult                       DescribeBackupResult                                       (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::DescribeBackup(class UObject* WorldContextObject, bool* Success, const struct FDescribeBackupRequest& DescribeBackupRequest, struct FDescribeBackupResult* DescribeBackupResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.DescribeBackup");
		
		UDynamoDBClientObject_DescribeBackup_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DescribeBackupRequest = DescribeBackupRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DescribeBackupResult != nullptr)
			*DescribeBackupResult = params.DescribeBackupResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.DeleteTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDeleteTableRequest                         DeleteTableRequest                                         (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDeleteTableResult                          DeleteTableResult                                          (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::DeleteTable(class UObject* WorldContextObject, bool* Success, const struct FDeleteTableRequest& DeleteTableRequest, struct FDeleteTableResult* DeleteTableResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.DeleteTable");
		
		UDynamoDBClientObject_DeleteTable_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DeleteTableRequest = DeleteTableRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DeleteTableResult != nullptr)
			*DeleteTableResult = params.DeleteTableResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.DeleteItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDeleteItemRequest                          DeleteItemRequest                                          (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDeleteItemResult                           DeleteItemResult                                           (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::DeleteItem(class UObject* WorldContextObject, bool* Success, const struct FDeleteItemRequest& DeleteItemRequest, struct FDeleteItemResult* DeleteItemResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.DeleteItem");
		
		UDynamoDBClientObject_DeleteItem_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DeleteItemRequest = DeleteItemRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DeleteItemResult != nullptr)
			*DeleteItemResult = params.DeleteItemResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.DeleteBackup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDeleteBackupRequest                        DeleteBackupRequest                                        (Parm, NativeAccessSpecifierPublic)
	 * 		struct FDeleteBackupResult                         DeleteBackupResult                                         (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::DeleteBackup(class UObject* WorldContextObject, bool* Success, const struct FDeleteBackupRequest& DeleteBackupRequest, struct FDeleteBackupResult* DeleteBackupResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.DeleteBackup");
		
		UDynamoDBClientObject_DeleteBackup_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DeleteBackupRequest = DeleteBackupRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DeleteBackupResult != nullptr)
			*DeleteBackupResult = params.DeleteBackupResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.CreateTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCreateTableRequest                         CreateTableRequest                                         (Parm, NativeAccessSpecifierPublic)
	 * 		struct FCreateTableResult                          CreateTableResult                                          (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::CreateTable(class UObject* WorldContextObject, bool* Success, const struct FCreateTableRequest& CreateTableRequest, struct FCreateTableResult* CreateTableResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.CreateTable");
		
		UDynamoDBClientObject_CreateTable_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.CreateTableRequest = CreateTableRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (CreateTableResult != nullptr)
			*CreateTableResult = params.CreateTableResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.CreateGlobalTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCreateGlobalTableRequest                   CreateGlobalTableRequest                                   (Parm, NativeAccessSpecifierPublic)
	 * 		struct FCreateGlobalTableResult                    CreateGlobalTableResult                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::CreateGlobalTable(class UObject* WorldContextObject, bool* Success, const struct FCreateGlobalTableRequest& CreateGlobalTableRequest, struct FCreateGlobalTableResult* CreateGlobalTableResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.CreateGlobalTable");
		
		UDynamoDBClientObject_CreateGlobalTable_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.CreateGlobalTableRequest = CreateGlobalTableRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (CreateGlobalTableResult != nullptr)
			*CreateGlobalTableResult = params.CreateGlobalTableResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.CreateDynamoDBObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAWSCredentials                             credentials                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAWSClientConfiguration                     clientConfiguration                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UDynamoDBClientObject* UDynamoDBClientObject::CreateDynamoDBObject(const struct FAWSCredentials& credentials, const struct FAWSClientConfiguration& clientConfiguration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.CreateDynamoDBObject");
		
		UDynamoDBClientObject_CreateDynamoDBObject_Params params {};
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
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.CreateBackup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCreateBackupRequest                        CreateBackupRequest                                        (Parm, NativeAccessSpecifierPublic)
	 * 		struct FCreateBackupResult                         CreateBackupResult                                         (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::CreateBackup(class UObject* WorldContextObject, bool* Success, const struct FCreateBackupRequest& CreateBackupRequest, struct FCreateBackupResult* CreateBackupResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.CreateBackup");
		
		UDynamoDBClientObject_CreateBackup_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.CreateBackupRequest = CreateBackupRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (CreateBackupResult != nullptr)
			*CreateBackupResult = params.CreateBackupResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.BatchWriteItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBatchWriteItemRequest                      BatchWriteItemRequest                                      (Parm, NativeAccessSpecifierPublic)
	 * 		struct FBatchWriteItemResult                       BatchWriteItemResult                                       (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::BatchWriteItem(class UObject* WorldContextObject, bool* Success, const struct FBatchWriteItemRequest& BatchWriteItemRequest, struct FBatchWriteItemResult* BatchWriteItemResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.BatchWriteItem");
		
		UDynamoDBClientObject_BatchWriteItem_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.BatchWriteItemRequest = BatchWriteItemRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (BatchWriteItemResult != nullptr)
			*BatchWriteItemResult = params.BatchWriteItemResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.BatchGetItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBatchGetItemRequest                        BatchGetItemRequest                                        (Parm, NativeAccessSpecifierPublic)
	 * 		struct FBatchGetItemResult                         BatchGetItemResult                                         (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::BatchGetItem(class UObject* WorldContextObject, bool* Success, const struct FBatchGetItemRequest& BatchGetItemRequest, struct FBatchGetItemResult* BatchGetItemResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.BatchGetItem");
		
		UDynamoDBClientObject_BatchGetItem_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.BatchGetItemRequest = BatchGetItemRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (BatchGetItemResult != nullptr)
			*BatchGetItemResult = params.BatchGetItemResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DynamoDB.DynamoDBClientObject.BatchExecuteStatement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAWSDynamoDBBatchExecuteStatementRequest    batchExecuteStatementRequest                               (Parm, NativeAccessSpecifierPublic)
	 * 		struct FAWSDynamoDBBatchExecuteStatementResult     batchExecuteStatementResult                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EDynamoDBError                                     errorType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDynamoDBClientObject::BatchExecuteStatement(class UObject* WorldContextObject, bool* Success, const struct FAWSDynamoDBBatchExecuteStatementRequest& batchExecuteStatementRequest, struct FAWSDynamoDBBatchExecuteStatementResult* batchExecuteStatementResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamoDB.DynamoDBClientObject.BatchExecuteStatement");
		
		UDynamoDBClientObject_BatchExecuteStatement_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.batchExecuteStatementRequest = batchExecuteStatementRequest;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (batchExecuteStatementResult != nullptr)
			*batchExecuteStatementResult = params.batchExecuteStatementResult;
		if (errorType != nullptr)
			*errorType = params.errorType;
		if (ErrorMessage != nullptr)
			*ErrorMessage = params.ErrorMessage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDynamoDBClientObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamoDBClientObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DynamoDB.DynamoDBClientObject");
		return ptr;
	}

}


