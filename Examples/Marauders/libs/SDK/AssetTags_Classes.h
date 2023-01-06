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
	 * Class AssetTags.AssetTagsSubsystem
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAssetTagsSubsystem : public UEngineSubsystem
	{
	public:
		TArray<class FName> GetCollectionsContainingAssetPtr(class UObject* AssetPtr);
		TArray<class FName> GetCollectionsContainingAssetData(const struct FAssetData& AssetData);
		TArray<class FName> GetCollectionsContainingAsset(const class FName& AssetPathName);
		TArray<class FName> GetCollections();
		TArray<struct FAssetData> GetAssetsInCollection(const class FName& Name);
		bool CollectionExists(const class FName& Name);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
