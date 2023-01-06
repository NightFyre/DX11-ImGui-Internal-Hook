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
	 * 		Name   -> PredefinedFunction UAssetRegistryImpl.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAssetRegistryImpl::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AssetRegistry.AssetRegistryImpl");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAssetData                                  InAssetData                                                (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSoftObjectPath UAssetRegistryHelpers::ToSoftObjectPath(const struct FAssetData& InAssetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath");
		
		UAssetRegistryHelpers_ToSoftObjectPath_Params params {};
		params.InAssetData = InAssetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARFilter                                   InFilter                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTagAndValue>                        InTagsAndValues                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FARFilter UAssetRegistryHelpers::SetFilterTagsAndValues(const struct FARFilter& InFilter, TArray<struct FTagAndValue> InTagsAndValues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues");
		
		UAssetRegistryHelpers_SetFilterTagsAndValues_Params params {};
		params.InFilter = InFilter;
		params.InTagsAndValues = InTagsAndValues;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AssetRegistry.AssetRegistryHelpers.IsValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAssetData                                  InAssetData                                                (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAssetRegistryHelpers::IsValid(const struct FAssetData& InAssetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.IsValid");
		
		UAssetRegistryHelpers_IsValid_Params params {};
		params.InAssetData = InAssetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AssetRegistry.AssetRegistryHelpers.IsUAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAssetData                                  InAssetData                                                (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAssetRegistryHelpers::IsUAsset(const struct FAssetData& InAssetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.IsUAsset");
		
		UAssetRegistryHelpers_IsUAsset_Params params {};
		params.InAssetData = InAssetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AssetRegistry.AssetRegistryHelpers.IsRedirector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAssetData                                  InAssetData                                                (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAssetRegistryHelpers::IsRedirector(const struct FAssetData& InAssetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.IsRedirector");
		
		UAssetRegistryHelpers_IsRedirector_Params params {};
		params.InAssetData = InAssetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAssetData                                  InAssetData                                                (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAssetRegistryHelpers::IsAssetLoaded(const struct FAssetData& InAssetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded");
		
		UAssetRegistryHelpers_IsAssetLoaded_Params params {};
		params.InAssetData = InAssetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AssetRegistry.AssetRegistryHelpers.GetTagValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAssetData                                  InAssetData                                                (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InTagName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutTagValue                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAssetRegistryHelpers::GetTagValue(const struct FAssetData& InAssetData, const class FName& InTagName, class FString* OutTagValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.GetTagValue");
		
		UAssetRegistryHelpers_GetTagValue_Params params {};
		params.InAssetData = InAssetData;
		params.InTagName = InTagName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTagValue != nullptr)
			*OutTagValue = params.OutTagValue;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AssetRegistry.AssetRegistryHelpers.GetFullName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAssetData                                  InAssetData                                                (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UAssetRegistryHelpers::GetFullName(const struct FAssetData& InAssetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.GetFullName");
		
		UAssetRegistryHelpers_GetFullName_Params params {};
		params.InAssetData = InAssetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AssetRegistry.AssetRegistryHelpers.GetExportTextName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAssetData                                  InAssetData                                                (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UAssetRegistryHelpers::GetExportTextName(const struct FAssetData& InAssetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.GetExportTextName");
		
		UAssetRegistryHelpers_GetExportTextName_Params params {};
		params.InAssetData = InAssetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AssetRegistry.AssetRegistryHelpers.GetClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAssetData                                  InAssetData                                                (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UClass* UAssetRegistryHelpers::GetClass(const struct FAssetData& InAssetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.GetClass");
		
		UAssetRegistryHelpers_GetClass_Params params {};
		params.InAssetData = InAssetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry
	 * 		Flags  -> ()
	 */
	void UAssetRegistryHelpers::GetAssetRegistry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry");
		
		UAssetRegistryHelpers_GetAssetRegistry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AssetRegistry.AssetRegistryHelpers.GetAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAssetData                                  InAssetData                                                (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UAssetRegistryHelpers::GetAsset(const struct FAssetData& InAssetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.GetAsset");
		
		UAssetRegistryHelpers_GetAsset_Params params {};
		params.InAssetData = InAssetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AssetRegistry.AssetRegistryHelpers.CreateAssetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InAsset                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowBlueprintClass                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAssetData UAssetRegistryHelpers::CreateAssetData(class UObject* InAsset, bool bAllowBlueprintClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistryHelpers.CreateAssetData");
		
		UAssetRegistryHelpers_CreateAssetData_Params params {};
		params.InAsset = InAsset;
		params.bAllowBlueprintClass = bAllowBlueprintClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAssetRegistryHelpers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAssetRegistryHelpers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AssetRegistry.AssetRegistryHelpers");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AssetRegistry.AssetRegistry.WaitForCompletion
	 * 		Flags  -> ()
	 */
	void UAssetRegistry::WaitForCompletion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.WaitForCompletion");
		
		UAssetRegistry_WaitForCompletion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AssetRegistry.AssetRegistry.UseFilterToExcludeAssets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FAssetData>                          AssetDataList                                              (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FARFilter                                   Filter                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAssetRegistry::UseFilterToExcludeAssets(TArray<struct FAssetData>* AssetDataList, const struct FARFilter& Filter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.UseFilterToExcludeAssets");
		
		UAssetRegistry_UseFilterToExcludeAssets_Params params {};
		params.Filter = Filter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AssetDataList != nullptr)
			*AssetDataList = params.AssetDataList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AssetRegistry.AssetRegistry.SearchAllAssets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSynchronousSearch                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAssetRegistry::SearchAllAssets(bool bSynchronousSearch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.SearchAllAssets");
		
		UAssetRegistry_SearchAllAssets_Params params {};
		params.bSynchronousSearch = bSynchronousSearch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AssetRegistry.AssetRegistry.ScanPathsSynchronous
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              InPaths                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceRescan                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAssetRegistry::ScanPathsSynchronous(TArray<class FString> InPaths, bool bForceRescan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.ScanPathsSynchronous");
		
		UAssetRegistry_ScanPathsSynchronous_Params params {};
		params.InPaths = InPaths;
		params.bForceRescan = bForceRescan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AssetRegistry.AssetRegistry.ScanModifiedAssetFiles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              InFilePaths                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAssetRegistry::ScanModifiedAssetFiles(TArray<class FString> InFilePaths)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.ScanModifiedAssetFiles");
		
		UAssetRegistry_ScanModifiedAssetFiles_Params params {};
		params.InFilePaths = InFilePaths;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AssetRegistry.AssetRegistry.ScanFilesSynchronous
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              InFilePaths                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceRescan                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAssetRegistry::ScanFilesSynchronous(TArray<class FString> InFilePaths, bool bForceRescan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.ScanFilesSynchronous");
		
		UAssetRegistry_ScanFilesSynchronous_Params params {};
		params.InFilePaths = InFilePaths;
		params.bForceRescan = bForceRescan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FAssetData>                          AssetDataList                                              (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FARFilter                                   Filter                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAssetRegistry::RunAssetsThroughFilter(TArray<struct FAssetData>* AssetDataList, const struct FARFilter& Filter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter");
		
		UAssetRegistry_RunAssetsThroughFilter_Params params {};
		params.Filter = Filter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AssetDataList != nullptr)
			*AssetDataList = params.AssetDataList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AssetRegistry.AssetRegistry.PrioritizeSearchPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PathToPrioritize                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAssetRegistry::PrioritizeSearchPath(const class FString& PathToPrioritize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.PrioritizeSearchPath");
		
		UAssetRegistry_PrioritizeSearchPath_Params params {};
		params.PathToPrioritize = PathToPrioritize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AssetRegistry.AssetRegistry.K2_GetReferencers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PackageName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAssetRegistryDependencyOptions             ReferenceOptions                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FName>                                OutReferencers                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UAssetRegistry::K2_GetReferencers(const class FName& PackageName, const struct FAssetRegistryDependencyOptions& ReferenceOptions, TArray<class FName>* OutReferencers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.K2_GetReferencers");
		
		UAssetRegistry_K2_GetReferencers_Params params {};
		params.PackageName = PackageName;
		params.ReferenceOptions = ReferenceOptions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutReferencers != nullptr)
			*OutReferencers = params.OutReferencers;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AssetRegistry.AssetRegistry.K2_GetDependencies
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PackageName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAssetRegistryDependencyOptions             DependencyOptions                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FName>                                OutDependencies                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UAssetRegistry::K2_GetDependencies(const class FName& PackageName, const struct FAssetRegistryDependencyOptions& DependencyOptions, TArray<class FName>* OutDependencies)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.K2_GetDependencies");
		
		UAssetRegistry_K2_GetDependencies_Params params {};
		params.PackageName = PackageName;
		params.DependencyOptions = DependencyOptions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDependencies != nullptr)
			*OutDependencies = params.OutDependencies;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AssetRegistry.AssetRegistry.IsLoadingAssets
	 * 		Flags  -> ()
	 */
	bool UAssetRegistry::IsLoadingAssets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.IsLoadingAssets");
		
		UAssetRegistry_IsLoadingAssets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AssetRegistry.AssetRegistry.HasAssets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PackagePath                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecursive                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAssetRegistry::HasAssets(const class FName& PackagePath, bool bRecursive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.HasAssets");
		
		UAssetRegistry_HasAssets_Params params {};
		params.PackagePath = PackagePath;
		params.bRecursive = bRecursive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AssetRegistry.AssetRegistry.GetSubPaths
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InBasePath                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              OutPathList                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bInRecurse                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAssetRegistry::GetSubPaths(const class FString& InBasePath, TArray<class FString>* OutPathList, bool bInRecurse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetSubPaths");
		
		UAssetRegistry_GetSubPaths_Params params {};
		params.InBasePath = InBasePath;
		params.bInRecurse = bInRecurse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPathList != nullptr)
			*OutPathList = params.OutPathList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AssetRegistry.AssetRegistry.GetAssetsByPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PackagePath                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAssetData>                          OutAssetData                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecursive                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeOnlyOnDiskAssets                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAssetRegistry::GetAssetsByPath(const class FName& PackagePath, TArray<struct FAssetData>* OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAssetsByPath");
		
		UAssetRegistry_GetAssetsByPath_Params params {};
		params.PackagePath = PackagePath;
		params.bRecursive = bRecursive;
		params.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAssetData != nullptr)
			*OutAssetData = params.OutAssetData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AssetRegistry.AssetRegistry.GetAssetsByPackageName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PackageName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAssetData>                          OutAssetData                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeOnlyOnDiskAssets                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAssetRegistry::GetAssetsByPackageName(const class FName& PackageName, TArray<struct FAssetData>* OutAssetData, bool bIncludeOnlyOnDiskAssets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAssetsByPackageName");
		
		UAssetRegistry_GetAssetsByPackageName_Params params {};
		params.PackageName = PackageName;
		params.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAssetData != nullptr)
			*OutAssetData = params.OutAssetData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AssetRegistry.AssetRegistry.GetAssetsByClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ClassName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAssetData>                          OutAssetData                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bSearchSubClasses                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAssetRegistry::GetAssetsByClass(const class FName& ClassName, TArray<struct FAssetData>* OutAssetData, bool bSearchSubClasses)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAssetsByClass");
		
		UAssetRegistry_GetAssetsByClass_Params params {};
		params.ClassName = ClassName;
		params.bSearchSubClasses = bSearchSubClasses;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAssetData != nullptr)
			*OutAssetData = params.OutAssetData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AssetRegistry.AssetRegistry.GetAssets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FARFilter                                   Filter                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAssetData>                          OutAssetData                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UAssetRegistry::GetAssets(const struct FARFilter& Filter, TArray<struct FAssetData>* OutAssetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAssets");
		
		UAssetRegistry_GetAssets_Params params {};
		params.Filter = Filter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAssetData != nullptr)
			*OutAssetData = params.OutAssetData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AssetRegistry.AssetRegistry.GetAssetByObjectPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ObjectPath                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeOnlyOnDiskAssets                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAssetData UAssetRegistry::GetAssetByObjectPath(const class FName& ObjectPath, bool bIncludeOnlyOnDiskAssets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAssetByObjectPath");
		
		UAssetRegistry_GetAssetByObjectPath_Params params {};
		params.ObjectPath = ObjectPath;
		params.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AssetRegistry.AssetRegistry.GetAllCachedPaths
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              OutPathList                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UAssetRegistry::GetAllCachedPaths(TArray<class FString>* OutPathList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAllCachedPaths");
		
		UAssetRegistry_GetAllCachedPaths_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPathList != nullptr)
			*OutPathList = params.OutPathList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AssetRegistry.AssetRegistry.GetAllAssets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FAssetData>                          OutAssetData                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeOnlyOnDiskAssets                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAssetRegistry::GetAllAssets(TArray<struct FAssetData>* OutAssetData, bool bIncludeOnlyOnDiskAssets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AssetRegistry.AssetRegistry.GetAllAssets");
		
		UAssetRegistry_GetAllAssets_Params params {};
		params.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAssetData != nullptr)
			*OutAssetData = params.OutAssetData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAssetRegistry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAssetRegistry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AssetRegistry.AssetRegistry");
		return ptr;
	}

}


