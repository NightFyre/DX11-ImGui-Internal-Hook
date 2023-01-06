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
	 * Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag
	 */
	struct UBlueprintGameplayTagLibrary_RemoveGameplayTag_Params
	{
	public:
		struct FGameplayTagContainer                               TagContainer;                                            // 0x0000(0x0020)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        Tag;                                                     // 0x0020(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag
	 */
	struct UBlueprintGameplayTagLibrary_NotEqual_TagTag_Params
	{
	public:
		struct FGameplayTag                                        A;                                                       // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              B;                                                       // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer
	 */
	struct UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Params
	{
	public:
		struct FGameplayTagContainer                               A;                                                       // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              B;                                                       // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer
	 */
	struct UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Params
	{
	public:
		struct FGameplayTagContainer                               A;                                                       // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               B;                                                       // 0x0020(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag
	 */
	struct UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Params
	{
	public:
		struct FGameplayTag                                        A;                                                       // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        B;                                                       // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag
	 */
	struct UBlueprintGameplayTagLibrary_MatchesTag_Params
	{
	public:
		struct FGameplayTag                                        TagOne;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        TagTwo;                                                  // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bExactMatch;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags
	 */
	struct UBlueprintGameplayTagLibrary_MatchesAnyTags_Params
	{
	public:
		struct FGameplayTag                                        TagOne;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               OtherContainer;                                          // 0x0008(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bExactMatch;                                             // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer
	 */
	struct UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Params
	{
	public:
		struct FGameplayTagContainer                               Value;                                                   // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               ReturnValue;                                             // 0x0020(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
	 */
	struct UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Params
	{
	public:
		struct FGameplayTag                                        Value;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
	 */
	struct UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Params
	{
	public:
		struct FGameplayTagQuery                                   TagQuery;                                                // 0x0000(0x0048)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayTagQuery                                   ReturnValue;                                             // 0x0048(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag
	 */
	struct UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Params
	{
	public:
		struct FGameplayTag                                        SingleTag;                                               // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               ReturnValue;                                             // 0x0008(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray
	 */
	struct UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Params
	{
	public:
		TArray<struct FGameplayTag>                                GameplayTags;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               ReturnValue;                                             // 0x0010(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty
	 */
	struct UBlueprintGameplayTagLibrary_IsTagQueryEmpty_Params
	{
	public:
		struct FGameplayTagQuery                                   TagQuery;                                                // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid
	 */
	struct UBlueprintGameplayTagLibrary_IsGameplayTagValid_Params
	{
	public:
		struct FGameplayTag                                        GameplayTag;                                             // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.HasTag
	 */
	struct UBlueprintGameplayTagLibrary_HasTag_Params
	{
	public:
		struct FGameplayTagContainer                               TagContainer;                                            // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        Tag;                                                     // 0x0020(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bExactMatch;                                             // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags
	 */
	struct UBlueprintGameplayTagLibrary_HasAnyTags_Params
	{
	public:
		struct FGameplayTagContainer                               TagContainer;                                            // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               OtherContainer;                                          // 0x0020(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bExactMatch;                                             // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0041(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags
	 */
	struct UBlueprintGameplayTagLibrary_HasAllTags_Params
	{
	public:
		struct FGameplayTagContainer                               TagContainer;                                            // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               OtherContainer;                                          // 0x0020(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bExactMatch;                                             // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0041(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
	 */
	struct UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Params
	{
	public:
		unsigned char                                              UnknownData_8KKR[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayTagContainer                               OtherContainer;                                          // 0x0010(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName
	 */
	struct UBlueprintGameplayTagLibrary_GetTagName_Params
	{
	public:
		struct FGameplayTag                                        GameplayTag;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
	 */
	struct UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Params
	{
	public:
		struct FGameplayTagContainer                               TagContainer;                                            // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer
	 */
	struct UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Params
	{
	public:
		struct FGameplayTagContainer                               TagContainer;                                            // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag
	 */
	struct UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Params
	{
	public:
		struct FGameplayTag                                        GameplayTag;                                             // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery
	 */
	struct UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ActorClass;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagQuery                                   GameplayTagQuery;                                        // 0x0010(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class AActor*>                                      OutActors;                                               // 0x0058(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer
	 */
	struct UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Params
	{
	public:
		struct FGameplayTagContainer                               A;                                                       // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               B;                                                       // 0x0020(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag
	 */
	struct UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Params
	{
	public:
		struct FGameplayTag                                        A;                                                       // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        B;                                                       // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
	 */
	struct UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Params
	{
	public:
		unsigned char                                              UnknownData_0WPG[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayTag                                        Tag;                                                     // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
	 */
	struct UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Params
	{
	public:
		struct FGameplayTagContainer                               TagContainer;                                            // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTagQuery                                   TagQuery;                                                // 0x0020(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer
	 */
	struct UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Params
	{
	public:
		struct FGameplayTagContainer                               GameplayTagContainer;                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FGameplayTag>                                GameplayTags;                                            // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
	 */
	struct UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Params
	{
	public:
		struct FGameplayTagContainer                               InOutTagContainer;                                       // 0x0000(0x0020)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               InTagContainer;                                          // 0x0020(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag
	 */
	struct UBlueprintGameplayTagLibrary_AddGameplayTag_Params
	{
	public:
		struct FGameplayTagContainer                               TagContainer;                                            // 0x0000(0x0020)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        Tag;                                                     // 0x0020(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
	 */
	struct UGameplayTagAssetInterface_HasMatchingGameplayTag_Params
	{
	public:
		struct FGameplayTag                                        TagToCheck;                                              // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
	 */
	struct UGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Params
	{
	public:
		struct FGameplayTagContainer                               TagContainer;                                            // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
	 */
	struct UGameplayTagAssetInterface_HasAllMatchingGameplayTags_Params
	{
	public:
		struct FGameplayTagContainer                               TagContainer;                                            // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
	 */
	struct UGameplayTagAssetInterface_GetOwnedGameplayTags_Params
	{
	public:
		struct FGameplayTagContainer                               TagContainer;                                            // 0x0000(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
