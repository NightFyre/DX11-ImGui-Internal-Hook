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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AssetRegistry.AssetData
	 * Size -> 0x0050
	 */
	struct FAssetData
	{
	public:
		class FName                                                ObjectPath;                                              // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PackageName;                                             // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PackagePath;                                             // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AssetName;                                               // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AssetClass;                                              // 0x0020(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_15G5[0x28];                                  // 0x0028(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AssetRegistry.ARFilter
	 * Size -> 0x00E8
	 */
	struct FARFilter
	{
	public:
		TArray<class FName>                                        PackageNames;                                            // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<class FName>                                        PackagePaths;                                            // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<class FName>                                        ObjectPaths;                                             // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<class FName>                                        ClassNames;                                              // 0x0030(0x0010) BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UXZB[0x50];                                  // 0x0040(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              RecursiveClassesExclusionSet[0x50];                      // 0x0090(0x0050) UNKNOWN PROPERTY: SetProperty AssetRegistry.ARFilter.RecursiveClassesExclusionSet
		bool                                                       bRecursivePaths;                                         // 0x00E0(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecursiveClasses;                                       // 0x00E1(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeOnlyOnDiskAssets;                                // 0x00E2(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FKHA[0x5];                                   // 0x00E3(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AssetRegistry.TagAndValue
	 * Size -> 0x0018
	 */
	struct FTagAndValue
	{
	public:
		class FName                                                Tag;                                                     // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Value;                                                   // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AssetRegistry.AssetRegistryDependencyOptions
	 * Size -> 0x0005
	 */
	struct FAssetRegistryDependencyOptions
	{
	public:
		bool                                                       bIncludeSoftPackageReferences;                           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeHardPackageReferences;                           // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeSearchableNames;                                 // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeSoftManagementReferences;                        // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeHardManagementReferences;                        // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AssetRegistry.AssetBundleEntry
	 * Size -> 0x0028
	 */
	struct FAssetBundleEntry
	{
	public:
		struct FPrimaryAssetId                                     BundleScope;                                             // 0x0000(0x0010) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BundleName;                                              // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSoftObjectPath>                             BundleAssets;                                            // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AssetRegistry.AssetBundleData
	 * Size -> 0x0010
	 */
	struct FAssetBundleData
	{
	public:
		TArray<struct FAssetBundleEntry>                           Bundles;                                                 // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
