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
	 * Class AssetRegistry.AssetRegistryImpl
	 * Size -> 0x0750 (FullSize[0x0778] - InheritedSize[0x0028])
	 */
	class UAssetRegistryImpl : public UObject
	{
	public:
		unsigned char                                              UnknownData_8TPM[0x750];                                 // 0x0028(0x0750) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AssetRegistry.AssetRegistryHelpers
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAssetRegistryHelpers : public UObject
	{
	public:
		struct FSoftObjectPath STATIC_ToSoftObjectPath(const struct FAssetData& InAssetData);
		struct FARFilter STATIC_SetFilterTagsAndValues(const struct FARFilter& InFilter, TArray<struct FTagAndValue> InTagsAndValues);
		bool STATIC_IsValid(const struct FAssetData& InAssetData);
		bool STATIC_IsUAsset(const struct FAssetData& InAssetData);
		bool STATIC_IsRedirector(const struct FAssetData& InAssetData);
		bool STATIC_IsAssetLoaded(const struct FAssetData& InAssetData);
		bool STATIC_GetTagValue(const struct FAssetData& InAssetData, const class FName& InTagName, class FString* OutTagValue);
		class FString STATIC_GetFullName(const struct FAssetData& InAssetData);
		class FString STATIC_GetExportTextName(const struct FAssetData& InAssetData);
		class UClass* STATIC_GetClass(const struct FAssetData& InAssetData);
		void STATIC_GetAssetRegistry();
		class UObject* STATIC_GetAsset(const struct FAssetData& InAssetData);
		struct FAssetData STATIC_CreateAssetData(class UObject* InAsset, bool bAllowBlueprintClass);
		static UClass* StaticClass();
	};

	/**
	 * Class AssetRegistry.AssetRegistry
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAssetRegistry : public UInterface
	{
	public:
		void UseFilterToExcludeAssets(TArray<struct FAssetData>* AssetDataList, const struct FARFilter& Filter);
		void SearchAllAssets(bool bSynchronousSearch);
		void ScanPathsSynchronous(TArray<class FString> InPaths, bool bForceRescan);
		void ScanModifiedAssetFiles(TArray<class FString> InFilePaths);
		void ScanFilesSynchronous(TArray<class FString> InFilePaths, bool bForceRescan);
		void RunAssetsThroughFilter(TArray<struct FAssetData>* AssetDataList, const struct FARFilter& Filter);
		void PrioritizeSearchPath(const class FString& PathToPrioritize);
		bool K2_GetReferencers(const class FName& PackageName, const struct FAssetRegistryDependencyOptions& ReferenceOptions, TArray<class FName>* OutReferencers);
		bool K2_GetDependencies(const class FName& PackageName, const struct FAssetRegistryDependencyOptions& DependencyOptions, TArray<class FName>* OutDependencies);
		bool IsLoadingAssets();
		bool HasAssets(const class FName& PackagePath, bool bRecursive);
		void GetSubPaths(const class FString& InBasePath, TArray<class FString>* OutPathList, bool bInRecurse);
		bool GetAssetsByPath(const class FName& PackagePath, TArray<struct FAssetData>* OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets);
		bool GetAssetsByPackageName(const class FName& PackageName, TArray<struct FAssetData>* OutAssetData, bool bIncludeOnlyOnDiskAssets);
		bool GetAssetsByClass(const class FName& ClassName, TArray<struct FAssetData>* OutAssetData, bool bSearchSubClasses);
		bool GetAssets(const struct FARFilter& Filter, TArray<struct FAssetData>* OutAssetData);
		struct FAssetData GetAssetByObjectPath(const class FName& ObjectPath, bool bIncludeOnlyOnDiskAssets);
		void GetAllCachedPaths(TArray<class FString>* OutPathList);
		bool GetAllAssets(TArray<struct FAssetData>* OutAssetData, bool bIncludeOnlyOnDiskAssets);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
