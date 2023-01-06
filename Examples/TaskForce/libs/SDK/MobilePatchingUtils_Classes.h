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
	 * Class MobilePatchingUtils.MobileInstalledContent
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UMobileInstalledContent : public UObject
	{
	public:
		unsigned char                                              UnknownData_0XLT[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		bool Mount(int32_t PakOrder, const class FString& MountPoint);
		float GetInstalledContentSize();
		float GetDiskFreeSpace();
		static UClass* StaticClass();
	};

	/**
	 * Class MobilePatchingUtils.MobilePendingContent
	 * Size -> 0x0040 (FullSize[0x0088] - InheritedSize[0x0048])
	 */
	class UMobilePendingContent : public UMobileInstalledContent
	{
	public:
		unsigned char                                              UnknownData_9MLC[0x40];                                  // 0x0048(0x0040) MISSED OFFSET (PADDING)

	public:
		void StartInstall(const class FScriptDelegate& OnSucceeded, const class FScriptDelegate& OnFailed);
		float GetTotalDownloadedSize();
		float GetRequiredDiskSpace();
		float GetInstallProgress();
		class FText GetDownloadStatusText();
		float GetDownloadSpeed();
		float GetDownloadSize();
		static UClass* StaticClass();
	};

	/**
	 * Class MobilePatchingUtils.MobilePatchingLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMobilePatchingLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_RequestContent(const class FString& RemoteManifestURL, const class FString& CloudURL, const class FString& InstallDirectory, const class FScriptDelegate& OnSucceeded, const class FScriptDelegate& OnFailed);
		bool STATIC_HasActiveWiFiConnection();
		TArray<class FString> STATIC_GetSupportedPlatformNames();
		class UMobileInstalledContent* STATIC_GetInstalledContent(const class FString& InstallDirectory);
		class FString STATIC_GetActiveDeviceProfileName();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
