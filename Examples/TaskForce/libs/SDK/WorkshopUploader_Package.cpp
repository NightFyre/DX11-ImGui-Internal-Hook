/**
 * Name: Task_Force
 * Version: 0.3.6.1537
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00419E00
	 * 		Name   -> Function WorkshopUploader.WorkshopHelpers.WorkshopItemToJSON
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FWorkshopItem                               Target                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FJsonLibraryValue UWorkshopHelpers::STATIC_WorkshopItemToJSON(const struct FWorkshopItem& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WorkshopUploader.WorkshopHelpers.WorkshopItemToJSON");
		
		UWorkshopHelpers_WorkshopItemToJSON_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00419DE0
	 * 		Name   -> Function WorkshopUploader.WorkshopHelpers.TickCallbacks
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UWorkshopHelpers::STATIC_TickCallbacks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WorkshopUploader.WorkshopHelpers.TickCallbacks");
		
		UWorkshopHelpers_TickCallbacks_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00419D60
	 * 		Name   -> Function WorkshopUploader.WorkshopHelpers.SomeTest
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString UWorkshopHelpers::STATIC_SomeTest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WorkshopUploader.WorkshopHelpers.SomeTest");
		
		UWorkshopHelpers_SomeTest_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00419D30
	 * 		Name   -> Function WorkshopUploader.WorkshopHelpers.IsEngineInstalled
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UWorkshopHelpers::STATIC_IsEngineInstalled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WorkshopUploader.WorkshopHelpers.IsEngineInstalled");
		
		UWorkshopHelpers_IsEngineInstalled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00419CB0
	 * 		Name   -> Function WorkshopUploader.WorkshopHelpers.GetUploader
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWorkshopUploader* UWorkshopHelpers::STATIC_GetUploader(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WorkshopUploader.WorkshopHelpers.GetUploader");
		
		UWorkshopHelpers_GetUploader_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWorkshopHelpers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorkshopHelpers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WorkshopUploader.WorkshopHelpers");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWorkshopManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorkshopManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WorkshopUploader.WorkshopManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004192A0
	 * 		Name   -> Function WorkshopUploader.WorkshopQueryCallbackProxy.CreateProxyObjectForQueryUser
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FWorkshopFileID                             SteamID                                                    (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		EWorkshopUserQuery                                 Query                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWorkshopUserSort                                  Sort                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWorkshopFilter                                    Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Page                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FileNameFilter                                             (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              RequiredTags                                               (Parm, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              ExcludedTags                                               (Parm, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 RequiredKeyValueTags                                       (Parm, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		class FString                                      Language                                                   (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bKeyValueTags                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLongDescription                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMetadata                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAdditionalPreviews                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bChildren                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowCached                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOnlyIDs                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTotalOnly                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWorkshopQueryCallbackProxy* UWorkshopQueryCallbackProxy::STATIC_CreateProxyObjectForQueryUser(const struct FWorkshopFileID& SteamID, EWorkshopUserQuery Query, EWorkshopUserSort Sort, EWorkshopFilter Type, int32_t Page, const class FString& FileNameFilter, TArray<class FString> RequiredTags, TArray<class FString> ExcludedTags, TMap<class FString, class FString> RequiredKeyValueTags, const class FString& Language, bool bKeyValueTags, bool bLongDescription, bool bMetadata, bool bAdditionalPreviews, bool bChildren, bool bAllowCached, bool bOnlyIDs, bool bTotalOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WorkshopUploader.WorkshopQueryCallbackProxy.CreateProxyObjectForQueryUser");
		
		UWorkshopQueryCallbackProxy_CreateProxyObjectForQueryUser_Params params {};
		params.SteamID = SteamID;
		params.Query = Query;
		params.Sort = Sort;
		params.Type = Type;
		params.Page = Page;
		params.FileNameFilter = FileNameFilter;
		params.RequiredTags = RequiredTags;
		params.ExcludedTags = ExcludedTags;
		params.RequiredKeyValueTags = RequiredKeyValueTags;
		params.Language = Language;
		params.bKeyValueTags = bKeyValueTags;
		params.bLongDescription = bLongDescription;
		params.bMetadata = bMetadata;
		params.bAdditionalPreviews = bAdditionalPreviews;
		params.bChildren = bChildren;
		params.bAllowCached = bAllowCached;
		params.bOnlyIDs = bOnlyIDs;
		params.bTotalOnly = bTotalOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00418A80
	 * 		Name   -> Function WorkshopUploader.WorkshopQueryCallbackProxy.CreateProxyObjectForQueryAll
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		EWorkshopQuery                                     Query                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWorkshopFilter                                    Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Page                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SearchText                                                 (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              RequiredTags                                               (Parm, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              ExcludedTags                                               (Parm, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		bool                                               bMatchAnyTag                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRankedByTrendDays                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 RequiredKeyValueTags                                       (Parm, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		class FString                                      Language                                                   (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bKeyValueTags                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLongDescription                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMetadata                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAdditionalPreviews                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bChildren                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowCached                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOnlyIDs                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTotalOnly                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWorkshopQueryCallbackProxy* UWorkshopQueryCallbackProxy::STATIC_CreateProxyObjectForQueryAll(EWorkshopQuery Query, EWorkshopFilter Type, int32_t Page, const class FString& SearchText, TArray<class FString> RequiredTags, TArray<class FString> ExcludedTags, bool bMatchAnyTag, bool bRankedByTrendDays, TMap<class FString, class FString> RequiredKeyValueTags, const class FString& Language, bool bKeyValueTags, bool bLongDescription, bool bMetadata, bool bAdditionalPreviews, bool bChildren, bool bAllowCached, bool bOnlyIDs, bool bTotalOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WorkshopUploader.WorkshopQueryCallbackProxy.CreateProxyObjectForQueryAll");
		
		UWorkshopQueryCallbackProxy_CreateProxyObjectForQueryAll_Params params {};
		params.Query = Query;
		params.Type = Type;
		params.Page = Page;
		params.SearchText = SearchText;
		params.RequiredTags = RequiredTags;
		params.ExcludedTags = ExcludedTags;
		params.bMatchAnyTag = bMatchAnyTag;
		params.bRankedByTrendDays = bRankedByTrendDays;
		params.RequiredKeyValueTags = RequiredKeyValueTags;
		params.Language = Language;
		params.bKeyValueTags = bKeyValueTags;
		params.bLongDescription = bLongDescription;
		params.bMetadata = bMetadata;
		params.bAdditionalPreviews = bAdditionalPreviews;
		params.bChildren = bChildren;
		params.bAllowCached = bAllowCached;
		params.bOnlyIDs = bOnlyIDs;
		params.bTotalOnly = bTotalOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00418360
	 * 		Name   -> Function WorkshopUploader.WorkshopQueryCallbackProxy.CreateProxyObjectForQuery
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FWorkshopFileID>                     FileIDs                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bPaginate                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FileNameFilter                                             (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              RequiredTags                                               (Parm, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              ExcludedTags                                               (Parm, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 RequiredKeyValueTags                                       (Parm, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		class FString                                      Language                                                   (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bKeyValueTags                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLongDescription                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMetadata                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAdditionalPreviews                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bChildren                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowCached                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWorkshopQueryCallbackProxy* UWorkshopQueryCallbackProxy::STATIC_CreateProxyObjectForQuery(TArray<struct FWorkshopFileID> FileIDs, bool bPaginate, const class FString& FileNameFilter, TArray<class FString> RequiredTags, TArray<class FString> ExcludedTags, TMap<class FString, class FString> RequiredKeyValueTags, const class FString& Language, bool bKeyValueTags, bool bLongDescription, bool bMetadata, bool bAdditionalPreviews, bool bChildren, bool bAllowCached)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WorkshopUploader.WorkshopQueryCallbackProxy.CreateProxyObjectForQuery");
		
		UWorkshopQueryCallbackProxy_CreateProxyObjectForQuery_Params params {};
		params.FileIDs = FileIDs;
		params.bPaginate = bPaginate;
		params.FileNameFilter = FileNameFilter;
		params.RequiredTags = RequiredTags;
		params.ExcludedTags = ExcludedTags;
		params.RequiredKeyValueTags = RequiredKeyValueTags;
		params.Language = Language;
		params.bKeyValueTags = bKeyValueTags;
		params.bLongDescription = bLongDescription;
		params.bMetadata = bMetadata;
		params.bAdditionalPreviews = bAdditionalPreviews;
		params.bChildren = bChildren;
		params.bAllowCached = bAllowCached;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWorkshopQueryCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorkshopQueryCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WorkshopUploader.WorkshopQueryCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00419AB0
	 * 		Name   -> Function WorkshopUploader.WorkshopUploadCallbackProxy.CreateProxyObjectForUpload
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FWorkshopItem                               Item                                                       (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      ProjectFile                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MapFile                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWorkshopUploadCallbackProxy* UWorkshopUploadCallbackProxy::STATIC_CreateProxyObjectForUpload(const struct FWorkshopItem& Item, const class FString& ProjectFile, const class FString& MapFile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WorkshopUploader.WorkshopUploadCallbackProxy.CreateProxyObjectForUpload");
		
		UWorkshopUploadCallbackProxy_CreateProxyObjectForUpload_Params params {};
		params.Item = Item;
		params.ProjectFile = ProjectFile;
		params.MapFile = MapFile;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWorkshopUploadCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorkshopUploadCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WorkshopUploader.WorkshopUploadCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWorkshopUploader.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorkshopUploader::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WorkshopUploader.WorkshopUploader");
		return ptr;
	}

}


