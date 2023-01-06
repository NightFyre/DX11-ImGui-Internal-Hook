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
	 * Class DynamoDB.DynamoDBAttributeValueHelper
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDynamoDBAttributeValueHelper : public UBlueprintFunctionLibrary
	{
	public:
		class FString JsonToDynamoDBAttributeValue(const class FString& Json);
		class FString DynamoDBAttributeValueToJson(const class FString& AttributeValue);
		static UClass* StaticClass();
	};

	/**
	 * Class DynamoDB.DynamoDBClientObject
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UDynamoDBClientObject : public UObject
	{
	public:
		unsigned char                                              UnknownData_O34W[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		void UpdateTimeToLive(class UObject* WorldContextObject, bool* Success, const struct FUpdateTimeToLiveRequest& UpdateTimeToLiveRequest, struct FUpdateTimeToLiveResult* UpdateTimeToLiveResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void UpdateTableReplicaAutoScaling(class UObject* WorldContextObject, bool* Success, const struct FUpdateTableReplicaAutoScalingRequest& UpdateTableReplicaAutoScalingRequest, struct FUpdateTableReplicaAutoScalingResult* UpdateTableReplicaAutoScalingResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void UpdateTable(class UObject* WorldContextObject, bool* Success, const struct FUpdateTableRequest& UpdateTableRequest, struct FUpdateTableResult* UpdateTableResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void UpdateItem(class UObject* WorldContextObject, bool* Success, const struct FUpdateItemRequest& UpdateItemRequest, struct FUpdateItemResult* UpdateItemResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void UpdateGlobalTableSettings(class UObject* WorldContextObject, bool* Success, const struct FUpdateGlobalTableSettingsRequest& UpdateGlobalTableSettingsRequest, struct FUpdateGlobalTableSettingsResult* UpdateGlobalTableSettingsResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void UpdateGlobalTable(class UObject* WorldContextObject, bool* Success, const struct FUpdateGlobalTableRequest& UpdateGlobalTableRequest, struct FUpdateGlobalTableResult* UpdateGlobalTableResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void UpdateContributorInsights(class UObject* WorldContextObject, bool* Success, const struct FUpdateContributorInsightsRequest& UpdateContributorInsightsRequest, struct FUpdateContributorInsightsResult* UpdateContributorInsightsResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void UpdateContinuousBackups(class UObject* WorldContextObject, bool* Success, const struct FUpdateContinuousBackupsRequest& UpdateContinuousBackupsRequest, struct FUpdateContinuousBackupsResult* UpdateContinuousBackupsResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void UntagResource(class UObject* WorldContextObject, bool* Success, const struct FDynamoDBUntagResourceRequest& untagResourceRequest, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void TransactWriteItems(class UObject* WorldContextObject, bool* Success, const struct FTransactWriteItemsRequest& TransactWriteItemsRequest, struct FTransactWriteItemsResult* TransactWriteItemsResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void TransactGetItems(class UObject* WorldContextObject, bool* Success, const struct FTransactGetItemsRequest& TransactGetItemsRequest, struct FTransactGetItemsResult* TransactGetItemsResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void TagResource(class UObject* WorldContextObject, bool* Success, const struct FDynamoDBTagResourceRequest& tagResourceRequest, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void Scan(class UObject* WorldContextObject, bool* Success, const struct FScanRequest& ScanRequest, struct FScanResult* ScanResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void RestoreTableToPointInTime(class UObject* WorldContextObject, bool* Success, const struct FRestoreTableToPointInTimeRequest& RestoreTableToPointInTimeRequest, struct FRestoreTableToPointInTimeResult* RestoreTableToPointInTimeResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void RestoreTableFromBackup(class UObject* WorldContextObject, bool* Success, const struct FRestoreTableFromBackupRequest& RestoreTableFromBackupRequest, struct FRestoreTableFromBackupResult* RestoreTableFromBackupResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void Query(class UObject* WorldContextObject, bool* Success, const struct FQueryRequest& QueryRequest, struct FQueryResult* QueryResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void PutItem(class UObject* WorldContextObject, bool* Success, const struct FPutItemRequest& PutItemRequest, struct FPutItemResult* PutItemResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void ListTagsOfResource(class UObject* WorldContextObject, bool* Success, const struct FListTagsOfResourceRequest& ListTagsOfResourceRequest, struct FListTagsOfResourceResult* ListTagsOfResourceResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void ListTables(class UObject* WorldContextObject, bool* Success, const struct FListTablesRequest& ListTablesRequest, struct FListTablesResult* ListTablesResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void ListGlobalTables(class UObject* WorldContextObject, bool* Success, const struct FListGlobalTablesRequest& ListGlobalTablesRequest, struct FListGlobalTablesResult* ListGlobalTablesResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void ListExports(class UObject* WorldContextObject, bool* Success, const struct FAWSDynamoDBListExportsRequest& listExportsRequest, struct FAWSDynamoDBListExportsResult* listExportsResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void ListContributorInsights(class UObject* WorldContextObject, bool* Success, const struct FListContributorInsightsRequest& ListContributorInsightsRequest, struct FListContributorInsightsResult* ListContributorInsightsResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void ListBackups(class UObject* WorldContextObject, bool* Success, const struct FListBackupsRequest& ListBackupsRequest, struct FListBackupsResult* ListBackupsResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void GetItem(class UObject* WorldContextObject, bool* Success, const struct FGetItemRequest& GetItemRequest, struct FGetItemResult* GetItemResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void ExportTableToPointInTime(class UObject* WorldContextObject, bool* Success, const struct FAWSDynamoDBExportTableToPointInTimeRequest& exportTableToPointInTimeRequest, struct FAWSDynamoDBExportTableToPointInTimeResult* exportTableToPointInTimeResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void ExecuteTransaction(class UObject* WorldContextObject, bool* Success, const struct FAWSDynamoDBExecuteTransactionRequest& executeTransactionRequest, struct FAWSDynamoDBExecuteTransactionResult* executeTransactionResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void ExecuteStatement(class UObject* WorldContextObject, bool* Success, const struct FAWSDynamoDBExecuteStatementRequest& executeStatementRequest, struct FAWSDynamoDBExecuteStatementResult* executeStatementResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void EnableKinesisStreamingDestination(class UObject* WorldContextObject, bool* Success, const struct FAWSDynamoDBEnableKinesisStreamingDestinationRequest& enableKinesisStreamingDestinationRequest, struct FAWSDynamoDBEnableKinesisStreamingDestinationResult* enableKinesisStreamingDestinationResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void DisableKinesisStreamingDestination(class UObject* WorldContextObject, bool* Success, const struct FAWSDynamoDBDisableKinesisStreamingDestinationRequest& disableKinesisStreamingDestinationRequest, struct FAWSDynamoDBDisableKinesisStreamingDestinationResult* disableKinesisStreamingDestinationResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void DescribeTimeToLive(class UObject* WorldContextObject, bool* Success, const struct FDescribeTimeToLiveRequest& DescribeTimeToLiveRequest, struct FDescribeTimeToLiveResult* DescribeTimeToLiveResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void DescribeTableReplicaAutoScaling(class UObject* WorldContextObject, bool* Success, const struct FDescribeTableReplicaAutoScalingRequest& DescribeTableReplicaAutoScalingRequest, struct FDescribeTableReplicaAutoScalingResult* DescribeTableReplicaAutoScalingResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void DescribeTable(class UObject* WorldContextObject, bool* Success, const struct FDescribeTableRequest& DescribeTableRequest, struct FDescribeTableResult* DescribeTableResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void DescribeLimits(class UObject* WorldContextObject, bool* Success, const struct FDescribeLimitsRequest& DescribeLimitsRequest, struct FDescribeLimitsResult* DescribeLimitsResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void DescribeKinesisStreamingDestination(class UObject* WorldContextObject, bool* Success, const struct FAWSDynamoDBDescribeKinesisStreamingDestinationRequest& describeKinesisStreamingDestinationRequest, struct FAWSDynamoDBDescribeKinesisStreamingDestinationResult* describeKinesisStreamingDestinationResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void DescribeGlobalTableSettings(class UObject* WorldContextObject, bool* Success, const struct FDescribeGlobalTableSettingsRequest& DescribeGlobalTableSettingsRequest, struct FDescribeGlobalTableSettingsResult* DescribeGlobalTableSettingsResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void DescribeGlobalTable(class UObject* WorldContextObject, bool* Success, const struct FDescribeGlobalTableRequest& DescribeGlobalTableRequest, struct FDescribeGlobalTableResult* DescribeGlobalTableResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void DescribeExport(class UObject* WorldContextObject, bool* Success, const struct FAWSDynamoDBDescribeExportRequest& describeExportRequest, struct FAWSDynamoDBDescribeExportResult* describeExportResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void DescribeEndpoints(class UObject* WorldContextObject, bool* Success, const struct FDescribeEndpointsRequest& DescribeEndpointsRequest, struct FDescribeEndpointsResult* DescribeEndpointsResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void DescribeContributorInsights(class UObject* WorldContextObject, bool* Success, const struct FDescribeContributorInsightsRequest& DescribeContributorInsightsRequest, struct FDescribeContributorInsightsResult* DescribeContributorInsightsResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void DescribeContinuousBackups(class UObject* WorldContextObject, bool* Success, const struct FDescribeContinuousBackupsRequest& DescribeContinuousBackupsRequest, struct FDescribeContinuousBackupsResult* DescribeContinuousBackupsResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void DescribeBackup(class UObject* WorldContextObject, bool* Success, const struct FDescribeBackupRequest& DescribeBackupRequest, struct FDescribeBackupResult* DescribeBackupResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void DeleteTable(class UObject* WorldContextObject, bool* Success, const struct FDeleteTableRequest& DeleteTableRequest, struct FDeleteTableResult* DeleteTableResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void DeleteItem(class UObject* WorldContextObject, bool* Success, const struct FDeleteItemRequest& DeleteItemRequest, struct FDeleteItemResult* DeleteItemResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void DeleteBackup(class UObject* WorldContextObject, bool* Success, const struct FDeleteBackupRequest& DeleteBackupRequest, struct FDeleteBackupResult* DeleteBackupResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void CreateTable(class UObject* WorldContextObject, bool* Success, const struct FCreateTableRequest& CreateTableRequest, struct FCreateTableResult* CreateTableResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void CreateGlobalTable(class UObject* WorldContextObject, bool* Success, const struct FCreateGlobalTableRequest& CreateGlobalTableRequest, struct FCreateGlobalTableResult* CreateGlobalTableResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		class UDynamoDBClientObject* CreateDynamoDBObject(const struct FAWSCredentials& credentials, const struct FAWSClientConfiguration& clientConfiguration);
		void CreateBackup(class UObject* WorldContextObject, bool* Success, const struct FCreateBackupRequest& CreateBackupRequest, struct FCreateBackupResult* CreateBackupResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void BatchWriteItem(class UObject* WorldContextObject, bool* Success, const struct FBatchWriteItemRequest& BatchWriteItemRequest, struct FBatchWriteItemResult* BatchWriteItemResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void BatchGetItem(class UObject* WorldContextObject, bool* Success, const struct FBatchGetItemRequest& BatchGetItemRequest, struct FBatchGetItemResult* BatchGetItemResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		void BatchExecuteStatement(class UObject* WorldContextObject, bool* Success, const struct FAWSDynamoDBBatchExecuteStatementRequest& batchExecuteStatementRequest, struct FAWSDynamoDBBatchExecuteStatementResult* batchExecuteStatementResult, EDynamoDBError* errorType, class FString* ErrorMessage, const struct FLatentActionInfo& LatentInfo);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
