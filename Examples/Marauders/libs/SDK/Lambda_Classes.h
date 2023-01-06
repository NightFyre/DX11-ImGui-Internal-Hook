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
	 * Class Lambda.LambdaClientObject
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class ULambdaClientObject : public UObject
	{
	public:
		unsigned char                                              UnknownData_V41R[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		void UpdateFunctionEventInvokeConfig(class UObject* WorldContextObject, bool* Success, const struct FUpdateFunctionEventInvokeConfigRequest& UpdateFunctionEventInvokeConfigRequest, struct FUpdateFunctionEventInvokeConfigResult* UpdateFunctionEventInvokeConfigResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void UpdateFunctionConfiguration(class UObject* WorldContextObject, bool* Success, const struct FUpdateFunctionConfigurationRequest& UpdateFunctionConfigurationRequest, struct FUpdateFunctionConfigurationResult* UpdateFunctionConfigurationResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void UpdateFunctionCode(class UObject* WorldContextObject, bool* Success, const struct FUpdateFunctionCodeRequest& UpdateFunctionCodeRequest, struct FUpdateFunctionCodeResult* UpdateFunctionCodeResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void UpdateEventSourceMapping(class UObject* WorldContextObject, bool* Success, const struct FUpdateEventSourceMappingRequest& UpdateEventSourceMappingRequest, struct FUpdateEventSourceMappingResult* UpdateEventSourceMappingResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void UpdateCodeSigningConfig(class UObject* WorldContextObject, bool* Success, const struct FAWSLambdaUpdateCodeSigningConfigRequest& updateCodeSigningConfigRequest, struct FAWSLambdaUpdateCodeSigningConfigResult* updateCodeSigningConfigResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void UpdateAlias(class UObject* WorldContextObject, bool* Success, const struct FLambdaUpdateAliasRequest& updateAliasRequest, struct FLambdaUpdateAliasResult* updateAliasResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void UntagResource(class UObject* WorldContextObject, bool* Success, const struct FLambdaUntagResourceRequest& untagResourceRequest, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void TagResource(class UObject* WorldContextObject, bool* Success, const struct FLambdaTagResourceRequest& tagResourceRequest, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void RemovePermission(class UObject* WorldContextObject, bool* Success, const struct FRemovePermissionRequest& RemovePermissionRequest, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void RemoveLayerVersionPermission(class UObject* WorldContextObject, bool* Success, const struct FRemoveLayerVersionPermissionRequest& RemoveLayerVersionPermissionRequest, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void PutProvisionedConcurrencyConfig(class UObject* WorldContextObject, bool* Success, const struct FPutProvisionedConcurrencyConfigRequest& PutProvisionedConcurrencyConfigRequest, struct FPutProvisionedConcurrencyConfigResult* PutProvisionedConcurrencyConfigResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void PutFunctionEventInvokeConfig(class UObject* WorldContextObject, bool* Success, const struct FPutFunctionEventInvokeConfigRequest& PutFunctionEventInvokeConfigRequest, struct FPutFunctionEventInvokeConfigResult* PutFunctionEventInvokeConfigResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void PutFunctionConcurrency(class UObject* WorldContextObject, bool* Success, const struct FPutFunctionConcurrencyRequest& PutFunctionConcurrencyRequest, struct FPutFunctionConcurrencyResult* PutFunctionConcurrencyResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void PutFunctionCodeSigningConfig(class UObject* WorldContextObject, bool* Success, const struct FAWSLambdaPutFunctionCodeSigningConfigRequest& putFunctionCodeSigningConfigRequest, struct FAWSLambdaPutFunctionCodeSigningConfigResult* putFunctionCodeSigningConfigResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void PublishVersion(class UObject* WorldContextObject, bool* Success, const struct FPublishVersionRequest& PublishVersionRequest, struct FPublishVersionResult* PublishVersionResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void PublishLayerVersion(class UObject* WorldContextObject, bool* Success, const struct FPublishLayerVersionRequest& PublishLayerVersionRequest, struct FPublishLayerVersionResult* PublishLayerVersionResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void ListVersionsByFunction(class UObject* WorldContextObject, bool* Success, const struct FListVersionsByFunctionRequest& ListVersionsByFunctionRequest, struct FListVersionsByFunctionResult* ListVersionsByFunctionResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void ListTags(class UObject* WorldContextObject, bool* Success, const struct FListTagsRequest& ListTagsRequest, struct FListTagsResult* ListTagsResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void ListProvisionedConcurrencyConfigs(class UObject* WorldContextObject, bool* Success, const struct FListProvisionedConcurrencyConfigsRequest& ListProvisionedConcurrencyConfigsRequest, struct FListProvisionedConcurrencyConfigsResult* ListProvisionedConcurrencyConfigsResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void ListLayerVersions(class UObject* WorldContextObject, bool* Success, const struct FListLayerVersionsRequest& ListLayerVersionsRequest, struct FListLayerVersionsResult* ListLayerVersionsResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void ListLayers(class UObject* WorldContextObject, bool* Success, const struct FListLayersRequest& ListLayersRequest, struct FListLayersResult* ListLayersResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void ListFunctionsByCodeSigningConfig(class UObject* WorldContextObject, bool* Success, const struct FAWSLambdaListFunctionsByCodeSigningConfigRequest& listFunctionsByCodeSigningConfigRequest, struct FAWSLambdaListFunctionsByCodeSigningConfigResult* listFunctionsByCodeSigningConfigResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void ListFunctions(class UObject* WorldContextObject, bool* Success, const struct FListFunctionsRequest& ListFunctionsRequest, struct FListFunctionsResult* ListFunctionsResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void ListFunctionEventInvokeConfigs(class UObject* WorldContextObject, bool* Success, const struct FListFunctionEventInvokeConfigsRequest& ListFunctionEventInvokeConfigsRequest, struct FListFunctionEventInvokeConfigsResult* ListFunctionEventInvokeConfigsResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void ListEventSourceMappings(class UObject* WorldContextObject, bool* Success, const struct FListEventSourceMappingsRequest& ListEventSourceMappingsRequest, struct FListEventSourceMappingsResult* ListEventSourceMappingsResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void ListCodeSigningConfigs(class UObject* WorldContextObject, bool* Success, const struct FAWSLambdaListCodeSigningConfigsRequest& listCodeSigningConfigsRequest, struct FAWSLambdaListCodeSigningConfigsResult* listCodeSigningConfigsResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void ListAliases(class UObject* WorldContextObject, bool* Success, const struct FLambdaListAliasesRequest& listAliasesRequest, struct FLambdaListAliasesResult* listAliasesResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void Invoke(class UObject* WorldContextObject, bool* Success, const struct FInvokeRequest& InvokeRequest, struct FInvokeResult* InvokeResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void GetProvisionedConcurrencyConfig(class UObject* WorldContextObject, bool* Success, const struct FGetProvisionedConcurrencyConfigRequest& GetProvisionedConcurrencyConfigRequest, struct FGetProvisionedConcurrencyConfigResult* GetProvisionedConcurrencyConfigResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void GetPolicy(class UObject* WorldContextObject, bool* Success, const struct FGetPolicyRequest& GetPolicyRequest, struct FGetPolicyResult* GetPolicyResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void GetLayerVersionPolicy(class UObject* WorldContextObject, bool* Success, const struct FGetLayerVersionPolicyRequest& GetLayerVersionPolicyRequest, struct FGetLayerVersionPolicyResult* GetLayerVersionPolicyResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void GetLayerVersionByArn(class UObject* WorldContextObject, bool* Success, const struct FGetLayerVersionByArnRequest& GetLayerVersionByArnRequest, struct FGetLayerVersionByArnResult* GetLayerVersionByArnResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void GetLayerVersion(class UObject* WorldContextObject, bool* Success, const struct FGetLayerVersionRequest& GetLayerVersionRequest, struct FGetLayerVersionResult* GetLayerVersionResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void GetFunctionEventInvokeConfig(class UObject* WorldContextObject, bool* Success, const struct FGetFunctionEventInvokeConfigRequest& GetFunctionEventInvokeConfigRequest, struct FGetFunctionEventInvokeConfigResult* GetFunctionEventInvokeConfigResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void GetFunctionConfiguration(class UObject* WorldContextObject, bool* Success, const struct FGetFunctionConfigurationRequest& GetFunctionConfigurationRequest, struct FGetFunctionConfigurationResult* GetFunctionConfigurationResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void GetFunctionConcurrency(class UObject* WorldContextObject, bool* Success, const struct FGetFunctionConcurrencyRequest& GetFunctionConcurrencyRequest, struct FGetFunctionConcurrencyResult* GetFunctionConcurrencyResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void GetFunctionCodeSigningConfig(class UObject* WorldContextObject, bool* Success, const struct FAWSLambdaGetFunctionCodeSigningConfigRequest& getFunctionCodeSigningConfigRequest, struct FAWSLambdaGetFunctionCodeSigningConfigResult* getFunctionCodeSigningConfigResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void GetFunction(class UObject* WorldContextObject, bool* Success, const struct FGetFunctionRequest& GetFunctionRequest, struct FGetFunctionResult* GetFunctionResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void GetEventSourceMapping(class UObject* WorldContextObject, bool* Success, const struct FGetEventSourceMappingRequest& GetEventSourceMappingRequest, struct FGetEventSourceMappingResult* GetEventSourceMappingResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void GetCodeSigningConfig(class UObject* WorldContextObject, bool* Success, const struct FAWSLambdaGetCodeSigningConfigRequest& getCodeSigningConfigRequest, struct FAWSLambdaGetCodeSigningConfigResult* getCodeSigningConfigResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void GetAlias(class UObject* WorldContextObject, bool* Success, const struct FGetAliasRequest& GetAliasRequest, struct FGetAliasResult* GetAliasResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void GetAccountSettings(class UObject* WorldContextObject, bool* Success, const struct FGetAccountSettingsRequest& GetAccountSettingsRequest, struct FGetAccountSettingsResult* GetAccountSettingsResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void DeleteProvisionedConcurrencyConfig(class UObject* WorldContextObject, bool* Success, const struct FDeleteProvisionedConcurrencyConfigRequest& DeleteProvisionedConcurrencyConfigRequest, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void DeleteLayerVersion(class UObject* WorldContextObject, bool* Success, const struct FDeleteLayerVersionRequest& DeleteLayerVersionRequest, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void DeleteFunctionEventInvokeConfig(class UObject* WorldContextObject, bool* Success, const struct FDeleteFunctionEventInvokeConfigRequest& DeleteFunctionEventInvokeConfigRequest, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void DeleteFunctionConcurrency(class UObject* WorldContextObject, bool* Success, const struct FDeleteFunctionConcurrencyRequest& DeleteFunctionConcurrencyRequest, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void DeleteFunctionCodeSigningConfig(class UObject* WorldContextObject, bool* Success, const struct FAWSLambdaDeleteFunctionCodeSigningConfigRequest& deleteFunctionCodeSigningConfigRequest, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void DeleteFunction(class UObject* WorldContextObject, bool* Success, const struct FDeleteFunctionRequest& DeleteFunctionRequest, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void DeleteEventSourceMapping(class UObject* WorldContextObject, bool* Success, const struct FDeleteEventSourceMappingRequest& DeleteEventSourceMappingRequest, struct FDeleteEventSourceMappingResult* DeleteEventSourceMappingResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void DeleteCodeSigningConfig(class UObject* WorldContextObject, bool* Success, const struct FAWSLambdaDeleteCodeSigningConfigRequest& deleteCodeSigningConfigRequest, struct FAWSLambdaDeleteCodeSigningConfigResult* deleteCodeSigningConfigResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void DeleteAlias(class UObject* WorldContextObject, bool* Success, const struct FLambdaDeleteAliasRequest& deleteAliasRequest, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		class ULambdaClientObject* CreateLambdaObject(const struct FAWSCredentials& credentials, const struct FAWSClientConfiguration& clientConfiguration);
		void CreateFunction(class UObject* WorldContextObject, bool* Success, const struct FCreateFunctionRequest& CreateFunctionRequest, struct FCreateFunctionResult* CreateFunctionResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void CreateEventSourceMapping(class UObject* WorldContextObject, bool* Success, const struct FCreateEventSourceMappingRequest& CreateEventSourceMappingRequest, struct FCreateEventSourceMappingResult* CreateEventSourceMappingResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void CreateCodeSigningConfig(class UObject* WorldContextObject, bool* Success, const struct FAWSLambdaCreateCodeSigningConfigRequest& createCodeSigningConfigRequest, struct FAWSLambdaCreateCodeSigningConfigResult* createCodeSigningConfigResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void CreateAlias(class UObject* WorldContextObject, bool* Success, const struct FLambdaCreateAliasRequest& createAliasRequest, struct FLambdaCreateAliasResult* createAliasResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void AddPermission(class UObject* WorldContextObject, bool* Success, const struct FAddPermissionRequest& AddPermissionRequest, struct FAddPermissionResult* AddPermissionResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void AddLayerVersionPermission(class UObject* WorldContextObject, bool* Success, const struct FAddLayerVersionPermissionRequest& AddLayerVersionPermissionRequest, struct FAddLayerVersionPermissionResult* AddLayerVersionPermissionResult, ELambdaError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
