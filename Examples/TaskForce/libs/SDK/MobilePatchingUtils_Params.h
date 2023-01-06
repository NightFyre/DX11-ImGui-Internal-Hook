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
	 * Function MobilePatchingUtils.MobileInstalledContent.Mount
	 */
	struct UMobileInstalledContent_Mount_Params
	{
	public:
		int32_t                                                    PakOrder;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YKE8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              MountPoint;                                              // 0x0008(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MobilePatchingUtils.MobileInstalledContent.GetInstalledContentSize
	 */
	struct UMobileInstalledContent_GetInstalledContentSize_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MobilePatchingUtils.MobileInstalledContent.GetDiskFreeSpace
	 */
	struct UMobileInstalledContent_GetDiskFreeSpace_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MobilePatchingUtils.MobilePendingContent.StartInstall
	 */
	struct UMobilePendingContent_StartInstall_Params
	{
	public:
		class FScriptDelegate                                      OnSucceeded;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailed;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MobilePatchingUtils.MobilePendingContent.GetTotalDownloadedSize
	 */
	struct UMobilePendingContent_GetTotalDownloadedSize_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MobilePatchingUtils.MobilePendingContent.GetRequiredDiskSpace
	 */
	struct UMobilePendingContent_GetRequiredDiskSpace_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MobilePatchingUtils.MobilePendingContent.GetInstallProgress
	 */
	struct UMobilePendingContent_GetInstallProgress_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MobilePatchingUtils.MobilePendingContent.GetDownloadStatusText
	 */
	struct UMobilePendingContent_GetDownloadStatusText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MobilePatchingUtils.MobilePendingContent.GetDownloadSpeed
	 */
	struct UMobilePendingContent_GetDownloadSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MobilePatchingUtils.MobilePendingContent.GetDownloadSize
	 */
	struct UMobilePendingContent_GetDownloadSize_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MobilePatchingUtils.MobilePatchingLibrary.RequestContent
	 */
	struct UMobilePatchingLibrary_RequestContent_Params
	{
	public:
		class FString                                              RemoteManifestURL;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              CloudURL;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InstallDirectory;                                        // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSucceeded;                                             // 0x0030(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailed;                                                // 0x0040(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MobilePatchingUtils.MobilePatchingLibrary.HasActiveWiFiConnection
	 */
	struct UMobilePatchingLibrary_HasActiveWiFiConnection_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MobilePatchingUtils.MobilePatchingLibrary.GetSupportedPlatformNames
	 */
	struct UMobilePatchingLibrary_GetSupportedPlatformNames_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MobilePatchingUtils.MobilePatchingLibrary.GetInstalledContent
	 */
	struct UMobilePatchingLibrary_GetInstalledContent_Params
	{
	public:
		class FString                                              InstallDirectory;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMobileInstalledContent*                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MobilePatchingUtils.MobilePatchingLibrary.GetActiveDeviceProfileName
	 */
	struct UMobilePatchingLibrary_GetActiveDeviceProfileName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
