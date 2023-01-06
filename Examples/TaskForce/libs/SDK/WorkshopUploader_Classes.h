#pragma once

/**
 * Name: Task_Force
 * Version: 0.3.6.1537
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
	 * Class WorkshopUploader.WorkshopHelpers
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWorkshopHelpers : public UBlueprintFunctionLibrary
	{
	public:
		struct FJsonLibraryValue STATIC_WorkshopItemToJSON(const struct FWorkshopItem& Target);
		void STATIC_TickCallbacks();
		class FString STATIC_SomeTest();
		bool STATIC_IsEngineInstalled();
		class UWorkshopUploader* STATIC_GetUploader(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class WorkshopUploader.WorkshopManager
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UWorkshopManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_CY5O[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WorkshopUploader.WorkshopQueryCallbackProxy
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UWorkshopQueryCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4FRR[0x40];                                  // 0x0048(0x0040) MISSED OFFSET (PADDING)

	public:
		class UWorkshopQueryCallbackProxy* STATIC_CreateProxyObjectForQueryUser(const struct FWorkshopFileID& SteamID, EWorkshopUserQuery Query, EWorkshopUserSort Sort, EWorkshopFilter Type, int32_t Page, const class FString& FileNameFilter, TArray<class FString> RequiredTags, TArray<class FString> ExcludedTags, TMap<class FString, class FString> RequiredKeyValueTags, const class FString& Language, bool bKeyValueTags, bool bLongDescription, bool bMetadata, bool bAdditionalPreviews, bool bChildren, bool bAllowCached, bool bOnlyIDs, bool bTotalOnly);
		class UWorkshopQueryCallbackProxy* STATIC_CreateProxyObjectForQueryAll(EWorkshopQuery Query, EWorkshopFilter Type, int32_t Page, const class FString& SearchText, TArray<class FString> RequiredTags, TArray<class FString> ExcludedTags, bool bMatchAnyTag, bool bRankedByTrendDays, TMap<class FString, class FString> RequiredKeyValueTags, const class FString& Language, bool bKeyValueTags, bool bLongDescription, bool bMetadata, bool bAdditionalPreviews, bool bChildren, bool bAllowCached, bool bOnlyIDs, bool bTotalOnly);
		class UWorkshopQueryCallbackProxy* STATIC_CreateProxyObjectForQuery(TArray<struct FWorkshopFileID> FileIDs, bool bPaginate, const class FString& FileNameFilter, TArray<class FString> RequiredTags, TArray<class FString> ExcludedTags, TMap<class FString, class FString> RequiredKeyValueTags, const class FString& Language, bool bKeyValueTags, bool bLongDescription, bool bMetadata, bool bAdditionalPreviews, bool bChildren, bool bAllowCached);
		static UClass* StaticClass();
	};

	/**
	 * Class WorkshopUploader.WorkshopUploadCallbackProxy
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UWorkshopUploadCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B1YH[0x18];                                  // 0x0048(0x0018) MISSED OFFSET (PADDING)

	public:
		class UWorkshopUploadCallbackProxy* STATIC_CreateProxyObjectForUpload(const struct FWorkshopItem& Item, const class FString& ProjectFile, const class FString& MapFile);
		static UClass* StaticClass();
	};

	/**
	 * Class WorkshopUploader.WorkshopUploader
	 * Size -> 0x0170 (FullSize[0x0198] - InheritedSize[0x0028])
	 */
	class UWorkshopUploader : public UObject
	{
	public:
		unsigned char                                              UnknownData_RT0D[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCookEvent;                                             // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPackageEvent;                                          // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPrepareEvent;                                          // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUploadEvent;                                           // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCommitEvent;                                           // 0x0070(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSuccessEvent;                                          // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnErrorEvent;                                            // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NOOS[0xF8];                                  // 0x00A0(0x00F8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
