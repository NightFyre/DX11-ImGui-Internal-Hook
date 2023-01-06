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
	 * Function WorkshopUploader.WorkshopHelpers.WorkshopItemToJSON
	 */
	struct UWorkshopHelpers_WorkshopItemToJSON_Params
	{
	public:
		struct FWorkshopItem                                       Target;                                                  // 0x0000(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FJsonLibraryValue                                   ReturnValue;                                             // 0x00B0(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WorkshopUploader.WorkshopHelpers.TickCallbacks
	 */
	struct UWorkshopHelpers_TickCallbacks_Params
	{	};

	/**
	 * Function WorkshopUploader.WorkshopHelpers.SomeTest
	 */
	struct UWorkshopHelpers_SomeTest_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WorkshopUploader.WorkshopHelpers.IsEngineInstalled
	 */
	struct UWorkshopHelpers_IsEngineInstalled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WorkshopUploader.WorkshopHelpers.GetUploader
	 */
	struct UWorkshopHelpers_GetUploader_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWorkshopUploader*                                   ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WorkshopUploader.WorkshopQueryCallbackProxy.CreateProxyObjectForQueryUser
	 */
	struct UWorkshopQueryCallbackProxy_CreateProxyObjectForQueryUser_Params
	{
	public:
		struct FWorkshopFileID                                     SteamID;                                                 // 0x0000(0x0008)  (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		EWorkshopUserQuery                                         Query;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWorkshopUserSort                                          Sort;                                                    // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWorkshopFilter                                            Type;                                                    // 0x000A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VAJV[0x1];                                   // 0x000B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Page;                                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              FileNameFilter;                                          // 0x0010(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      RequiredTags;                                            // 0x0020(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		TArray<class FString>                                      ExcludedTags;                                            // 0x0030(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         RequiredKeyValueTags;                                    // 0x0040(0x0050)  (Parm, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		class FString                                              Language;                                                // 0x0090(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bKeyValueTags;                                           // 0x00A0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLongDescription;                                        // 0x00A1(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMetadata;                                               // 0x00A2(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAdditionalPreviews;                                     // 0x00A3(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bChildren;                                               // 0x00A4(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowCached;                                            // 0x00A5(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOnlyIDs;                                                // 0x00A6(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bTotalOnly;                                              // 0x00A7(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWorkshopQueryCallbackProxy*                         ReturnValue;                                             // 0x00A8(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WorkshopUploader.WorkshopQueryCallbackProxy.CreateProxyObjectForQueryAll
	 */
	struct UWorkshopQueryCallbackProxy_CreateProxyObjectForQueryAll_Params
	{
	public:
		EWorkshopQuery                                             Query;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWorkshopFilter                                            Type;                                                    // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TJ35[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Page;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              SearchText;                                              // 0x0008(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      RequiredTags;                                            // 0x0018(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		TArray<class FString>                                      ExcludedTags;                                            // 0x0028(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		bool                                                       bMatchAnyTag;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRankedByTrendDays;                                      // 0x0039(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CKAE[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<class FString, class FString>                         RequiredKeyValueTags;                                    // 0x0040(0x0050)  (Parm, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		class FString                                              Language;                                                // 0x0090(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bKeyValueTags;                                           // 0x00A0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLongDescription;                                        // 0x00A1(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMetadata;                                               // 0x00A2(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAdditionalPreviews;                                     // 0x00A3(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bChildren;                                               // 0x00A4(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowCached;                                            // 0x00A5(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOnlyIDs;                                                // 0x00A6(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bTotalOnly;                                              // 0x00A7(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWorkshopQueryCallbackProxy*                         ReturnValue;                                             // 0x00A8(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WorkshopUploader.WorkshopQueryCallbackProxy.CreateProxyObjectForQuery
	 */
	struct UWorkshopQueryCallbackProxy_CreateProxyObjectForQuery_Params
	{
	public:
		TArray<struct FWorkshopFileID>                             FileIDs;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bPaginate;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EESX[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              FileNameFilter;                                          // 0x0018(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      RequiredTags;                                            // 0x0028(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		TArray<class FString>                                      ExcludedTags;                                            // 0x0038(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         RequiredKeyValueTags;                                    // 0x0048(0x0050)  (Parm, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		class FString                                              Language;                                                // 0x0098(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bKeyValueTags;                                           // 0x00A8(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLongDescription;                                        // 0x00A9(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMetadata;                                               // 0x00AA(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAdditionalPreviews;                                     // 0x00AB(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bChildren;                                               // 0x00AC(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowCached;                                            // 0x00AD(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_85OS[0x2];                                   // 0x00AE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWorkshopQueryCallbackProxy*                         ReturnValue;                                             // 0x00B0(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WorkshopUploader.WorkshopUploadCallbackProxy.CreateProxyObjectForUpload
	 */
	struct UWorkshopUploadCallbackProxy_CreateProxyObjectForUpload_Params
	{
	public:
		struct FWorkshopItem                                       Item;                                                    // 0x0000(0x00B0)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              ProjectFile;                                             // 0x00B0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              MapFile;                                                 // 0x00C0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWorkshopUploadCallbackProxy*                        ReturnValue;                                             // 0x00D0(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
