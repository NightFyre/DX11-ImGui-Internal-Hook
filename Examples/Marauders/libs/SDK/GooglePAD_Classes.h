#pragma once

/**
 * Name: RaidGame
 * Version: 1
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
	 * Class GooglePAD.GooglePADFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGooglePADFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		EGooglePADErrorCode ShowCellularDataConfirmation();
		EGooglePADErrorCode RequestRemoval(const class FString& Name);
		EGooglePADErrorCode RequestInfo(TArray<class FString> AssetPacks);
		EGooglePADErrorCode RequestDownload(TArray<class FString> AssetPacks);
		void ReleaseDownloadState(int32_t State);
		void ReleaseAssetPackLocation(int32_t Location);
		int32_t GetTotalBytesToDownload(int32_t State);
		EGooglePADStorageMethod GetStorageMethod(int32_t Location);
		EGooglePADErrorCode GetShowCellularDataConfirmationStatus(EGooglePADCellularDataConfirmStatus* status);
		EGooglePADDownloadStatus GetDownloadStatus(int32_t State);
		EGooglePADErrorCode GetDownloadState(const class FString& Name, int32_t* State);
		int32_t GetBytesDownloaded(int32_t State);
		class FString GetAssetsPath(int32_t Location);
		EGooglePADErrorCode GetAssetPackLocation(const class FString& Name, int32_t* Location);
		EGooglePADErrorCode CancelDownload(TArray<class FString> AssetPacks);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
