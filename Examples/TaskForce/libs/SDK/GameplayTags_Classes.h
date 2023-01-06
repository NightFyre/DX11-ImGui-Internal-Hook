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
	 * Class GameplayTags.BlueprintGameplayTagLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_RemoveGameplayTag(struct FGameplayTagContainer* TagContainer, const struct FGameplayTag& Tag);
		bool STATIC_NotEqual_TagTag(const struct FGameplayTag& A, const class FString& B);
		bool STATIC_NotEqual_TagContainerTagContainer(const struct FGameplayTagContainer& A, const class FString& B);
		bool STATIC_NotEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B);
		bool STATIC_NotEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B);
		bool STATIC_MatchesTag(const struct FGameplayTag& TagOne, const struct FGameplayTag& TagTwo, bool bExactMatch);
		bool STATIC_MatchesAnyTags(const struct FGameplayTag& TagOne, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch);
		struct FGameplayTagContainer STATIC_MakeLiteralGameplayTagContainer(const struct FGameplayTagContainer& Value);
		struct FGameplayTag STATIC_MakeLiteralGameplayTag(const struct FGameplayTag& Value);
		struct FGameplayTagQuery STATIC_MakeGameplayTagQuery(const struct FGameplayTagQuery& TagQuery);
		struct FGameplayTagContainer STATIC_MakeGameplayTagContainerFromTag(const struct FGameplayTag& SingleTag);
		struct FGameplayTagContainer STATIC_MakeGameplayTagContainerFromArray(TArray<struct FGameplayTag> GameplayTags);
		bool STATIC_IsTagQueryEmpty(const struct FGameplayTagQuery& TagQuery);
		bool STATIC_IsGameplayTagValid(const struct FGameplayTag& GameplayTag);
		bool STATIC_HasTag(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTag& Tag, bool bExactMatch);
		bool STATIC_HasAnyTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch);
		bool STATIC_HasAllTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch);
		bool STATIC_HasAllMatchingGameplayTags(const struct FGameplayTagContainer& OtherContainer);
		class FName STATIC_GetTagName(const struct FGameplayTag& GameplayTag);
		int32_t STATIC_GetNumGameplayTagsInContainer(const struct FGameplayTagContainer& TagContainer);
		class FString STATIC_GetDebugStringFromGameplayTagContainer(const struct FGameplayTagContainer& TagContainer);
		class FString STATIC_GetDebugStringFromGameplayTag(const struct FGameplayTag& GameplayTag);
		void STATIC_GetAllActorsOfClassMatchingTagQuery(class UObject* WorldContextObject, class UClass* ActorClass, const struct FGameplayTagQuery& GameplayTagQuery, TArray<class AActor*>* OutActors);
		bool STATIC_EqualEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B);
		bool STATIC_EqualEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B);
		bool STATIC_DoesTagAssetInterfaceHaveTag(const struct FGameplayTag& Tag);
		bool STATIC_DoesContainerMatchTagQuery(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagQuery& TagQuery);
		void STATIC_BreakGameplayTagContainer(const struct FGameplayTagContainer& GameplayTagContainer, TArray<struct FGameplayTag>* GameplayTags);
		void STATIC_AppendGameplayTagContainers(struct FGameplayTagContainer* InOutTagContainer, const struct FGameplayTagContainer& InTagContainer);
		void STATIC_AddGameplayTag(struct FGameplayTagContainer* TagContainer, const struct FGameplayTag& Tag);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTags.GameplayTagAssetInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGameplayTagAssetInterface : public UInterface
	{
	public:
		bool HasMatchingGameplayTag(const struct FGameplayTag& TagToCheck);
		bool HasAnyMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer);
		bool HasAllMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer);
		void GetOwnedGameplayTags(struct FGameplayTagContainer* TagContainer);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTags.EditableGameplayTagQuery
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UEditableGameplayTagQuery : public UObject
	{
	public:
		class FString                                              UserDescription;                                         // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q1F6[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEditableGameplayTagQueryExpression*                 RootExpression;                                          // 0x0048(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTagQuery                                   TagQueryExportText_Helper;                               // 0x0050(0x0048) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTags.EditableGameplayTagQueryExpression
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEditableGameplayTagQueryExpression : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UEditableGameplayTagQueryExpression_AnyTagsMatch : public UEditableGameplayTagQueryExpression
	{
	public:
		struct FGameplayTagContainer                               Tags;                                                    // 0x0028(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UEditableGameplayTagQueryExpression_AllTagsMatch : public UEditableGameplayTagQueryExpression
	{
	public:
		struct FGameplayTagContainer                               Tags;                                                    // 0x0028(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression
	{
	public:
		struct FGameplayTagContainer                               Tags;                                                    // 0x0028(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression
	{
	public:
		TArray<class UEditableGameplayTagQueryExpression*>         Expressions;                                             // 0x0028(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression
	{
	public:
		TArray<class UEditableGameplayTagQueryExpression*>         Expressions;                                             // 0x0028(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression
	{
	public:
		TArray<class UEditableGameplayTagQueryExpression*>         Expressions;                                             // 0x0028(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTags.GameplayTagsManager
	 * Size -> 0x0188 (FullSize[0x01B0] - InheritedSize[0x0028])
	 */
	class UGameplayTagsManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_967S[0x98];                                  // 0x0028(0x0098) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTagSource>                          TagSources;                                              // 0x00C0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BD96[0x80];                                  // 0x00D0(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UDataTable*>                                  GameplayTagTables;                                       // 0x0150(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IQO3[0x50];                                  // 0x0160(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTags.GameplayTagsList
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UGameplayTagsList : public UObject
	{
	public:
		class FString                                              ConfigFileName;                                          // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameplayTagTableRow>                        GameplayTagList;                                         // 0x0038(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTags.RestrictedGameplayTagsList
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class URestrictedGameplayTagsList : public UObject
	{
	public:
		class FString                                              ConfigFileName;                                          // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRestrictedGameplayTagTableRow>              RestrictedGameplayTagList;                               // 0x0038(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTags.GameplayTagsSettings
	 * Size -> 0x0070 (FullSize[0x00B8] - InheritedSize[0x0048])
	 */
	class UGameplayTagsSettings : public UGameplayTagsList
	{
	public:
		bool                                                       ImportTagsFromConfig;                                    // 0x0048(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       WarnOnInvalidTags;                                       // 0x0049(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FastReplication;                                         // 0x004A(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OTS4[0x5];                                   // 0x004B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              InvalidTagCharacters;                                    // 0x0050(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameplayTagCategoryRemap>                   CategoryRemapping;                                       // 0x0060(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		TArray<struct FSoftObjectPath>                             GameplayTagTableList;                                    // 0x0070(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		TArray<struct FGameplayTagRedirect>                        GameplayTagRedirects;                                    // 0x0080(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		TArray<class FName>                                        CommonlyReplicatedTags;                                  // 0x0090(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		int32_t                                                    NumBitsForContainerSize;                                 // 0x00A0(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NetIndexFirstBitSegment;                                 // 0x00A4(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRestrictedConfigInfo>                       RestrictedConfigFiles;                                   // 0x00A8(0x0010) Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayTags.GameplayTagsDeveloperSettings
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UGameplayTagsDeveloperSettings : public UObject
	{
	public:
		class FString                                              DeveloperConfigName;                                     // 0x0028(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
