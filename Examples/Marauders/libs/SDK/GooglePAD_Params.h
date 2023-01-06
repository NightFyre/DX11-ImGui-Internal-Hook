#pragma once

/**
 * Name: RaidGame
 * Version: 1
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
	 * Function GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation
	 */
	struct UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Params
	{
	public:
		EGooglePADErrorCode                                        ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GooglePAD.GooglePADFunctionLibrary.RequestRemoval
	 */
	struct UGooglePADFunctionLibrary_RequestRemoval_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGooglePADErrorCode                                        ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GooglePAD.GooglePADFunctionLibrary.RequestInfo
	 */
	struct UGooglePADFunctionLibrary_RequestInfo_Params
	{
	public:
		TArray<class FString>                                      AssetPacks;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		EGooglePADErrorCode                                        ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GooglePAD.GooglePADFunctionLibrary.RequestDownload
	 */
	struct UGooglePADFunctionLibrary_RequestDownload_Params
	{
	public:
		TArray<class FString>                                      AssetPacks;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		EGooglePADErrorCode                                        ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState
	 */
	struct UGooglePADFunctionLibrary_ReleaseDownloadState_Params
	{
	public:
		int32_t                                                    State;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation
	 */
	struct UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Params
	{
	public:
		int32_t                                                    Location;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload
	 */
	struct UGooglePADFunctionLibrary_GetTotalBytesToDownload_Params
	{
	public:
		int32_t                                                    State;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GooglePAD.GooglePADFunctionLibrary.GetStorageMethod
	 */
	struct UGooglePADFunctionLibrary_GetStorageMethod_Params
	{
	public:
		int32_t                                                    Location;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGooglePADStorageMethod                                    ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus
	 */
	struct UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Params
	{
	public:
		EGooglePADCellularDataConfirmStatus                        status;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGooglePADErrorCode                                        ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus
	 */
	struct UGooglePADFunctionLibrary_GetDownloadStatus_Params
	{
	public:
		int32_t                                                    State;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGooglePADDownloadStatus                                   ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GooglePAD.GooglePADFunctionLibrary.GetDownloadState
	 */
	struct UGooglePADFunctionLibrary_GetDownloadState_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    State;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGooglePADErrorCode                                        ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded
	 */
	struct UGooglePADFunctionLibrary_GetBytesDownloaded_Params
	{
	public:
		int32_t                                                    State;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GooglePAD.GooglePADFunctionLibrary.GetAssetsPath
	 */
	struct UGooglePADFunctionLibrary_GetAssetsPath_Params
	{
	public:
		int32_t                                                    Location;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OO7D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation
	 */
	struct UGooglePADFunctionLibrary_GetAssetPackLocation_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Location;                                                // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGooglePADErrorCode                                        ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GooglePAD.GooglePADFunctionLibrary.CancelDownload
	 */
	struct UGooglePADFunctionLibrary_CancelDownload_Params
	{
	public:
		TArray<class FString>                                      AssetPacks;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		EGooglePADErrorCode                                        ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
