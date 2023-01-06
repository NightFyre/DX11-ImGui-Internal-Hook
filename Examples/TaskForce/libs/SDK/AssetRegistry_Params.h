#pragma once

/**
 * Name: Task_Force
 * Version: 0.3.6.1537
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath
	 */
	struct UAssetRegistryHelpers_ToSoftObjectPath_Params
	{
	public:
		struct FAssetData                                          InAssetData;                                             // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSoftObjectPath                                     ReturnValue;                                             // 0x0050(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues
	 */
	struct UAssetRegistryHelpers_SetFilterTagsAndValues_Params
	{
	public:
		struct FARFilter                                           InFilter;                                                // 0x0000(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FTagAndValue>                                InTagsAndValues;                                         // 0x00E8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FARFilter                                           ReturnValue;                                             // 0x00F8(0x00E8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AssetRegistry.AssetRegistryHelpers.IsValid
	 */
	struct UAssetRegistryHelpers_IsValid_Params
	{
	public:
		struct FAssetData                                          InAssetData;                                             // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AssetRegistry.AssetRegistryHelpers.IsUAsset
	 */
	struct UAssetRegistryHelpers_IsUAsset_Params
	{
	public:
		struct FAssetData                                          InAssetData;                                             // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AssetRegistry.AssetRegistryHelpers.IsRedirector
	 */
	struct UAssetRegistryHelpers_IsRedirector_Params
	{
	public:
		struct FAssetData                                          InAssetData;                                             // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded
	 */
	struct UAssetRegistryHelpers_IsAssetLoaded_Params
	{
	public:
		struct FAssetData                                          InAssetData;                                             // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AssetRegistry.AssetRegistryHelpers.GetTagValue
	 */
	struct UAssetRegistryHelpers_GetTagValue_Params
	{
	public:
		struct FAssetData                                          InAssetData;                                             // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                InTagName;                                               // 0x0050(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OutTagValue;                                             // 0x0058(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AssetRegistry.AssetRegistryHelpers.GetFullName
	 */
	struct UAssetRegistryHelpers_GetFullName_Params
	{
	public:
		struct FAssetData                                          InAssetData;                                             // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0050(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AssetRegistry.AssetRegistryHelpers.GetExportTextName
	 */
	struct UAssetRegistryHelpers_GetExportTextName_Params
	{
	public:
		struct FAssetData                                          InAssetData;                                             // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0050(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AssetRegistry.AssetRegistryHelpers.GetClass
	 */
	struct UAssetRegistryHelpers_GetClass_Params
	{
	public:
		struct FAssetData                                          InAssetData;                                             // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry
	 */
	struct UAssetRegistryHelpers_GetAssetRegistry_Params
	{	};

	/**
	 * Function AssetRegistry.AssetRegistryHelpers.GetAsset
	 */
	struct UAssetRegistryHelpers_GetAsset_Params
	{
	public:
		struct FAssetData                                          InAssetData;                                             // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AssetRegistry.AssetRegistryHelpers.CreateAssetData
	 */
	struct UAssetRegistryHelpers_CreateAssetData_Params
	{
	public:
		class UObject*                                             InAsset;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowBlueprintClass;                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WP29[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FAssetData                                          ReturnValue;                                             // 0x0010(0x0050)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AssetRegistry.AssetRegistry.UseFilterToExcludeAssets
	 */
	struct UAssetRegistry_UseFilterToExcludeAssets_Params
	{
	public:
		TArray<struct FAssetData>                                  AssetDataList;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FARFilter                                           Filter;                                                  // 0x0010(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AssetRegistry.AssetRegistry.SearchAllAssets
	 */
	struct UAssetRegistry_SearchAllAssets_Params
	{
	public:
		bool                                                       bSynchronousSearch;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AssetRegistry.AssetRegistry.ScanPathsSynchronous
	 */
	struct UAssetRegistry_ScanPathsSynchronous_Params
	{
	public:
		TArray<class FString>                                      InPaths;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bForceRescan;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AssetRegistry.AssetRegistry.ScanModifiedAssetFiles
	 */
	struct UAssetRegistry_ScanModifiedAssetFiles_Params
	{
	public:
		TArray<class FString>                                      InFilePaths;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AssetRegistry.AssetRegistry.ScanFilesSynchronous
	 */
	struct UAssetRegistry_ScanFilesSynchronous_Params
	{
	public:
		TArray<class FString>                                      InFilePaths;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bForceRescan;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter
	 */
	struct UAssetRegistry_RunAssetsThroughFilter_Params
	{
	public:
		TArray<struct FAssetData>                                  AssetDataList;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FARFilter                                           Filter;                                                  // 0x0010(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AssetRegistry.AssetRegistry.PrioritizeSearchPath
	 */
	struct UAssetRegistry_PrioritizeSearchPath_Params
	{
	public:
		class FString                                              PathToPrioritize;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AssetRegistry.AssetRegistry.K2_GetReferencers
	 */
	struct UAssetRegistry_K2_GetReferencers_Params
	{
	public:
		class FName                                                PackageName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAssetRegistryDependencyOptions                     ReferenceOptions;                                        // 0x0008(0x0005)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UBRN[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FName>                                        OutReferencers;                                          // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AssetRegistry.AssetRegistry.K2_GetDependencies
	 */
	struct UAssetRegistry_K2_GetDependencies_Params
	{
	public:
		class FName                                                PackageName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAssetRegistryDependencyOptions                     DependencyOptions;                                       // 0x0008(0x0005)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Z5ZK[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FName>                                        OutDependencies;                                         // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AssetRegistry.AssetRegistry.IsLoadingAssets
	 */
	struct UAssetRegistry_IsLoadingAssets_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AssetRegistry.AssetRegistry.HasAssets
	 */
	struct UAssetRegistry_HasAssets_Params
	{
	public:
		class FName                                                PackagePath;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRecursive;                                              // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AssetRegistry.AssetRegistry.GetSubPaths
	 */
	struct UAssetRegistry_GetSubPaths_Params
	{
	public:
		class FString                                              InBasePath;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      OutPathList;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bInRecurse;                                              // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AssetRegistry.AssetRegistry.GetAssetsByPath
	 */
	struct UAssetRegistry_GetAssetsByPath_Params
	{
	public:
		class FName                                                PackagePath;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FAssetData>                                  OutAssetData;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bRecursive;                                              // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIncludeOnlyOnDiskAssets;                                // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001A(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AssetRegistry.AssetRegistry.GetAssetsByPackageName
	 */
	struct UAssetRegistry_GetAssetsByPackageName_Params
	{
	public:
		class FName                                                PackageName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FAssetData>                                  OutAssetData;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bIncludeOnlyOnDiskAssets;                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AssetRegistry.AssetRegistry.GetAssetsByClass
	 */
	struct UAssetRegistry_GetAssetsByClass_Params
	{
	public:
		class FName                                                ClassName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FAssetData>                                  OutAssetData;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bSearchSubClasses;                                       // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AssetRegistry.AssetRegistry.GetAssets
	 */
	struct UAssetRegistry_GetAssets_Params
	{
	public:
		struct FARFilter                                           Filter;                                                  // 0x0000(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FAssetData>                                  OutAssetData;                                            // 0x00E8(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00F8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AssetRegistry.AssetRegistry.GetAssetByObjectPath
	 */
	struct UAssetRegistry_GetAssetByObjectPath_Params
	{
	public:
		class FName                                                ObjectPath;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIncludeOnlyOnDiskAssets;                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MV7X[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FAssetData                                          ReturnValue;                                             // 0x0010(0x0050)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AssetRegistry.AssetRegistry.GetAllCachedPaths
	 */
	struct UAssetRegistry_GetAllCachedPaths_Params
	{
	public:
		TArray<class FString>                                      OutPathList;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AssetRegistry.AssetRegistry.GetAllAssets
	 */
	struct UAssetRegistry_GetAllAssets_Params
	{
	public:
		TArray<struct FAssetData>                                  OutAssetData;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bIncludeOnlyOnDiskAssets;                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
