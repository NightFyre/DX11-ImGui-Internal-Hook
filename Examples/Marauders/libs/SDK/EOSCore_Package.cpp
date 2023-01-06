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
	 * 		Name   -> PredefinedFunction UEOSCoreSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAchievements.GetAchievements
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreAchievements* UCoreAchievements::GetAchievements(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAchievements.GetAchievements");
		
		UCoreAchievements_GetAchievements_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAchievements.EOSAchievementsUnlockAchievements
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAchievementsUnlockAchievementsOptions   Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreAchievements::EOSAchievementsUnlockAchievements(class UObject* WorldContextObject, const struct FEOSAchievementsUnlockAchievementsOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAchievements.EOSAchievementsUnlockAchievements");
		
		UCoreAchievements_EOSAchievementsUnlockAchievements_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAchievements.EOSAchievementsRemoveNotifyAchievementsUnlocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          ID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreAchievements::EOSAchievementsRemoveNotifyAchievementsUnlocked(class UObject* WorldContextObject, const struct FEOSNotificationId& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAchievements.EOSAchievementsRemoveNotifyAchievementsUnlocked");
		
		UCoreAchievements_EOSAchievementsRemoveNotifyAchievementsUnlocked_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAchievements.EOSAchievementsQueryPlayerAchievements
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAchievementsQueryPlayerAchievementsOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreAchievements::EOSAchievementsQueryPlayerAchievements(class UObject* WorldContextObject, const struct FEOSAchievementsQueryPlayerAchievementsOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAchievements.EOSAchievementsQueryPlayerAchievements");
		
		UCoreAchievements_EOSAchievementsQueryPlayerAchievements_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAchievements.EOSAchievementsQueryDefinitions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAchievementsQueryDefinitionsOptions     Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreAchievements::EOSAchievementsQueryDefinitions(class UObject* WorldContextObject, const struct FEOSAchievementsQueryDefinitionsOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAchievements.EOSAchievementsQueryDefinitions");
		
		UCoreAchievements_EOSAchievementsQueryDefinitions_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAchievements.EOSAchievementsGetPlayerAchievementCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAchievementsGetPlayerAchievementCountOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UCoreAchievements::EOSAchievementsGetPlayerAchievementCount(class UObject* WorldContextObject, const struct FEOSAchievementsGetPlayerAchievementCountOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAchievements.EOSAchievementsGetPlayerAchievementCount");
		
		UCoreAchievements_EOSAchievementsGetPlayerAchievementCount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAchievements.EOSAchievementsGetAchievementDefinitionCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAchievementsGetAchievementDefinitionCountOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UCoreAchievements::EOSAchievementsGetAchievementDefinitionCount(class UObject* WorldContextObject, const struct FEOSAchievementsGetAchievementDefinitionCountOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAchievements.EOSAchievementsGetAchievementDefinitionCount");
		
		UCoreAchievements_EOSAchievementsGetAchievementDefinitionCount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAchievements.EOSAchievementsCopyPlayerAchievementByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAchievementsCopyPlayerAchievementByIndexOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSAchievementsPlayerAchievement           OutAchievement                                             (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAchievements::EOSAchievementsCopyPlayerAchievementByIndex(class UObject* WorldContextObject, const struct FEOSAchievementsCopyPlayerAchievementByIndexOptions& Options, struct FEOSAchievementsPlayerAchievement* OutAchievement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAchievements.EOSAchievementsCopyPlayerAchievementByIndex");
		
		UCoreAchievements_EOSAchievementsCopyPlayerAchievementByIndex_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAchievement != nullptr)
			*OutAchievement = params.OutAchievement;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAchievements.EOSAchievementsCopyAchievementDefinitionV2ByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAchievementsCopyAchievementDefinitionV2ByIndexOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSAchievementsDefinitionV2                OutDefinition                                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAchievements::EOSAchievementsCopyAchievementDefinitionV2ByIndex(class UObject* WorldContextObject, const struct FEOSAchievementsCopyAchievementDefinitionV2ByIndexOptions& Options, struct FEOSAchievementsDefinitionV2* OutDefinition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAchievements.EOSAchievementsCopyAchievementDefinitionV2ByIndex");
		
		UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByIndex_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDefinition != nullptr)
			*OutDefinition = params.OutDefinition;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAchievements.EOSAchievementsCopyAchievementDefinitionV2ByAchievementId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAchievementsCopyAchievementDefinitionV2ByAchievementIdOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FEOSAchievementsDefinitionV2                OutDefinition                                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAchievements::EOSAchievementsCopyAchievementDefinitionV2ByAchievementId(class UObject* WorldContextObject, const struct FEOSAchievementsCopyAchievementDefinitionV2ByAchievementIdOptions& Options, struct FEOSAchievementsDefinitionV2* OutDefinition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAchievements.EOSAchievementsCopyAchievementDefinitionV2ByAchievementId");
		
		UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByAchievementId_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDefinition != nullptr)
			*OutDefinition = params.OutDefinition;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAchievements.EOSAchievementsAddNotifyAchievementsUnlockedV2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreAchievements::EOSAchievementsAddNotifyAchievementsUnlockedV2(class UObject* WorldContextObject, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAchievements.EOSAchievementsAddNotifyAchievementsUnlockedV2");
		
		UCoreAchievements_EOSAchievementsAddNotifyAchievementsUnlockedV2_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreAchievements.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreAchievements::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.CoreAchievements");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreAsyncAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreAsyncAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreAsyncAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreAchievementsQueryDefinitions.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSAchievementsOnQueryDefinitionsCompleteCallbackInfo Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreAchievementsQueryDefinitions::HandleCallback(const struct FEOSAchievementsOnQueryDefinitionsCompleteCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreAchievementsQueryDefinitions.HandleCallback");
		
		UEOSCoreAchievementsQueryDefinitions_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreAchievementsQueryDefinitions.EOSAchievementsQueryDefinitionsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAchievementsQueryDefinitionsOptions     Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreAchievementsQueryDefinitions* UEOSCoreAchievementsQueryDefinitions::EOSAchievementsQueryDefinitionsAsync(class UObject* WorldContextObject, const struct FEOSAchievementsQueryDefinitionsOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreAchievementsQueryDefinitions.EOSAchievementsQueryDefinitionsAsync");
		
		UEOSCoreAchievementsQueryDefinitions_EOSAchievementsQueryDefinitionsAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreAchievementsQueryDefinitions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreAchievementsQueryDefinitions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreAchievementsQueryDefinitions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreAchievementsQueryPlayerAchievements.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSAchievementsOnQueryPlayerAchievementsCompleteCallbackInfo Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreAchievementsQueryPlayerAchievements::HandleCallback(const struct FEOSAchievementsOnQueryPlayerAchievementsCompleteCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreAchievementsQueryPlayerAchievements.HandleCallback");
		
		UEOSCoreAchievementsQueryPlayerAchievements_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreAchievementsQueryPlayerAchievements.EOSAchievementsQueryPlayerAchievementsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAchievementsQueryPlayerAchievementsOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreAchievementsQueryPlayerAchievements* UEOSCoreAchievementsQueryPlayerAchievements::EOSAchievementsQueryPlayerAchievementsAsync(class UObject* WorldContextObject, const struct FEOSAchievementsQueryPlayerAchievementsOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreAchievementsQueryPlayerAchievements.EOSAchievementsQueryPlayerAchievementsAsync");
		
		UEOSCoreAchievementsQueryPlayerAchievements_EOSAchievementsQueryPlayerAchievementsAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreAchievementsQueryPlayerAchievements.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreAchievementsQueryPlayerAchievements::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreAchievementsQueryPlayerAchievements");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreAchievementsUnlockAchievements.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSAchievementsOnUnlockAchievementsCompleteCallbackInfo Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreAchievementsUnlockAchievements::HandleCallback(const struct FEOSAchievementsOnUnlockAchievementsCompleteCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreAchievementsUnlockAchievements.HandleCallback");
		
		UEOSCoreAchievementsUnlockAchievements_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreAchievementsUnlockAchievements.EOSAchievementsUnlockAchievements
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAchievementsUnlockAchievementsOptions   Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreAchievementsUnlockAchievements* UEOSCoreAchievementsUnlockAchievements::EOSAchievementsUnlockAchievements(class UObject* WorldContextObject, const struct FEOSAchievementsUnlockAchievementsOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreAchievementsUnlockAchievements.EOSAchievementsUnlockAchievements");
		
		UEOSCoreAchievementsUnlockAchievements_EOSAchievementsUnlockAchievements_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreAchievementsUnlockAchievements.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreAchievementsUnlockAchievements::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreAchievementsUnlockAchievements");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatClient.GetAntiCheatClient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreAntiCheatClient* UCoreAntiCheatClient::GetAntiCheatClient(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatClient.GetAntiCheatClient");
		
		UCoreAntiCheatClient_GetAntiCheatClient_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientUnregisterPeer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatClientUnregisterPeerOptions    Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAntiCheatClient::EOSAntiCheatClientUnregisterPeer(class UObject* WorldContextObject, const struct FEOSAntiCheatClientUnregisterPeerOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientUnregisterPeer");
		
		UCoreAntiCheatClient_EOSAntiCheatClientUnregisterPeer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientUnprotectMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatClientUnprotectMessageOptions  Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              OutBuffer                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAntiCheatClient::EOSAntiCheatClientUnprotectMessage(class UObject* WorldContextObject, const struct FEOSAntiCheatClientUnprotectMessageOptions& Options, TArray<unsigned char> OutBuffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientUnprotectMessage");
		
		UCoreAntiCheatClient_EOSAntiCheatClientUnprotectMessage_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.OutBuffer = OutBuffer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientRemoveNotifyPeerAuthStatusChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          NotificationID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreAntiCheatClient::EOSAntiCheatClientRemoveNotifyPeerAuthStatusChanged(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientRemoveNotifyPeerAuthStatusChanged");
		
		UCoreAntiCheatClient_EOSAntiCheatClientRemoveNotifyPeerAuthStatusChanged_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.NotificationID = NotificationID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientRemoveNotifyPeerActionRequired
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          NotificationID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreAntiCheatClient::EOSAntiCheatClientRemoveNotifyPeerActionRequired(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientRemoveNotifyPeerActionRequired");
		
		UCoreAntiCheatClient_EOSAntiCheatClientRemoveNotifyPeerActionRequired_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.NotificationID = NotificationID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientRemoveNotifyMessageToServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          NotificationID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreAntiCheatClient::EOSAntiCheatClientRemoveNotifyMessageToServer(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientRemoveNotifyMessageToServer");
		
		UCoreAntiCheatClient_EOSAntiCheatClientRemoveNotifyMessageToServer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.NotificationID = NotificationID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientRemoveNotifyMessageToPeer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          NotificationID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreAntiCheatClient::EOSAntiCheatClientRemoveNotifyMessageToPeer(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientRemoveNotifyMessageToPeer");
		
		UCoreAntiCheatClient_EOSAntiCheatClientRemoveNotifyMessageToPeer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.NotificationID = NotificationID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientRemoveNotifyClientIntegrityViolated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          NotificationID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreAntiCheatClient::EOSAntiCheatClientRemoveNotifyClientIntegrityViolated(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientRemoveNotifyClientIntegrityViolated");
		
		UCoreAntiCheatClient_EOSAntiCheatClientRemoveNotifyClientIntegrityViolated_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.NotificationID = NotificationID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientRegisterPeer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatClientRegisterPeerOptions      Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAntiCheatClient::EOSAntiCheatClientRegisterPeer(class UObject* WorldContextObject, const struct FEOSAntiCheatClientRegisterPeerOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientRegisterPeer");
		
		UCoreAntiCheatClient_EOSAntiCheatClientRegisterPeer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientReceiveMessageFromServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatClientReceiveMessageFromServerOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAntiCheatClient::EOSAntiCheatClientReceiveMessageFromServer(class UObject* WorldContextObject, const struct FEOSAntiCheatClientReceiveMessageFromServerOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientReceiveMessageFromServer");
		
		UCoreAntiCheatClient_EOSAntiCheatClientReceiveMessageFromServer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientReceiveMessageFromPeer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatClientReceiveMessageFromPeerOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAntiCheatClient::EOSAntiCheatClientReceiveMessageFromPeer(class UObject* WorldContextObject, const struct FEOSAntiCheatClientReceiveMessageFromPeerOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientReceiveMessageFromPeer");
		
		UCoreAntiCheatClient_EOSAntiCheatClientReceiveMessageFromPeer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientProtectMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatClientProtectMessageOptions    Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              OutBuffer                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAntiCheatClient::EOSAntiCheatClientProtectMessage(class UObject* WorldContextObject, const struct FEOSAntiCheatClientProtectMessageOptions& Options, TArray<unsigned char>* OutBuffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientProtectMessage");
		
		UCoreAntiCheatClient_EOSAntiCheatClientProtectMessage_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutBuffer != nullptr)
			*OutBuffer = params.OutBuffer;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientPollStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatClientPollStatusOptions        Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EEOSEAntiCheatClientViolationType                  ViolationType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutMessage                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAntiCheatClient::EOSAntiCheatClientPollStatus(class UObject* WorldContextObject, const struct FEOSAntiCheatClientPollStatusOptions& Options, EEOSEAntiCheatClientViolationType* ViolationType, class FString* OutMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientPollStatus");
		
		UCoreAntiCheatClient_EOSAntiCheatClientPollStatus_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ViolationType != nullptr)
			*ViolationType = params.ViolationType;
		if (OutMessage != nullptr)
			*OutMessage = params.OutMessage;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientGetProtectMessageOutputLength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatClientGetProtectMessageOutputLengthOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutBufferLengthBytes                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAntiCheatClient::EOSAntiCheatClientGetProtectMessageOutputLength(class UObject* WorldContextObject, const struct FEOSAntiCheatClientGetProtectMessageOutputLengthOptions& Options, int32_t* OutBufferLengthBytes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientGetProtectMessageOutputLength");
		
		UCoreAntiCheatClient_EOSAntiCheatClientGetProtectMessageOutputLength_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutBufferLengthBytes != nullptr)
			*OutBufferLengthBytes = params.OutBufferLengthBytes;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientEndSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatClientEndSessionOptions        Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAntiCheatClient::EOSAntiCheatClientEndSession(class UObject* WorldContextObject, const struct FEOSAntiCheatClientEndSessionOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientEndSession");
		
		UCoreAntiCheatClient_EOSAntiCheatClientEndSession_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientBeginSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatClientBeginSessionOptions      Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAntiCheatClient::EOSAntiCheatClientBeginSession(class UObject* WorldContextObject, const struct FEOSAntiCheatClientBeginSessionOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientBeginSession");
		
		UCoreAntiCheatClient_EOSAntiCheatClientBeginSession_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientAddNotifyPeerAuthStatusChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatClientAddNotifyPeerAuthStatusChangedOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreAntiCheatClient::EOSAntiCheatClientAddNotifyPeerAuthStatusChanged(class UObject* WorldContextObject, const struct FEOSAntiCheatClientAddNotifyPeerAuthStatusChangedOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientAddNotifyPeerAuthStatusChanged");
		
		UCoreAntiCheatClient_EOSAntiCheatClientAddNotifyPeerAuthStatusChanged_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientAddNotifyPeerActionRequired
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatClientAddNotifyPeerActionRequiredOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreAntiCheatClient::EOSAntiCheatClientAddNotifyPeerActionRequired(class UObject* WorldContextObject, const struct FEOSAntiCheatClientAddNotifyPeerActionRequiredOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientAddNotifyPeerActionRequired");
		
		UCoreAntiCheatClient_EOSAntiCheatClientAddNotifyPeerActionRequired_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientAddNotifyMessageToServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatClientAddNotifyMessageToServerOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreAntiCheatClient::EOSAntiCheatClientAddNotifyMessageToServer(class UObject* WorldContextObject, const struct FEOSAntiCheatClientAddNotifyMessageToServerOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientAddNotifyMessageToServer");
		
		UCoreAntiCheatClient_EOSAntiCheatClientAddNotifyMessageToServer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientAddNotifyMessageToPeer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatClientAddNotifyMessageToPeerOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreAntiCheatClient::EOSAntiCheatClientAddNotifyMessageToPeer(class UObject* WorldContextObject, const struct FEOSAntiCheatClientAddNotifyMessageToPeerOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientAddNotifyMessageToPeer");
		
		UCoreAntiCheatClient_EOSAntiCheatClientAddNotifyMessageToPeer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientAddNotifyClientIntegrityViolated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatClientAddNotifyClientIntegrityViolatedOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreAntiCheatClient::EOSAntiCheatClientAddNotifyClientIntegrityViolated(class UObject* WorldContextObject, const struct FEOSAntiCheatClientAddNotifyClientIntegrityViolatedOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientAddNotifyClientIntegrityViolated");
		
		UCoreAntiCheatClient_EOSAntiCheatClientAddNotifyClientIntegrityViolated_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientAddExternalIntegrityCatalog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatClientAddExternalIntegrityCatalogOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAntiCheatClient::EOSAntiCheatClientAddExternalIntegrityCatalog(class UObject* WorldContextObject, const struct FEOSAntiCheatClientAddExternalIntegrityCatalogOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientAddExternalIntegrityCatalog");
		
		UCoreAntiCheatClient_EOSAntiCheatClientAddExternalIntegrityCatalog_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreAntiCheatClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreAntiCheatClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.CoreAntiCheatClient");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatServer.GetAntiCheatServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreAntiCheatServer* UCoreAntiCheatServer::GetAntiCheatServer(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatServer.GetAntiCheatServer");
		
		UCoreAntiCheatServer_GetAntiCheatServer_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerUnregisterClient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatServerUnregisterClientOptions  Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAntiCheatServer::EOSAntiCheatServerUnregisterClient(class UObject* WorldContextObject, const struct FEOSAntiCheatServerUnregisterClientOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerUnregisterClient");
		
		UCoreAntiCheatServer_EOSAntiCheatServerUnregisterClient_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerUnprotectMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatServerUnprotectMessageOptions  Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              OutBuffer                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutBufferLengthBytes                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAntiCheatServer::EOSAntiCheatServerUnprotectMessage(class UObject* WorldContextObject, const struct FEOSAntiCheatServerUnprotectMessageOptions& Options, TArray<unsigned char>* OutBuffer, int32_t* OutBufferLengthBytes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerUnprotectMessage");
		
		UCoreAntiCheatServer_EOSAntiCheatServerUnprotectMessage_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutBuffer != nullptr)
			*OutBuffer = params.OutBuffer;
		if (OutBufferLengthBytes != nullptr)
			*OutBufferLengthBytes = params.OutBufferLengthBytes;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerSetGameSessionId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatCommonSetGameSessionIdOptions  Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAntiCheatServer::EOSAntiCheatServerSetGameSessionId(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonSetGameSessionIdOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerSetGameSessionId");
		
		UCoreAntiCheatServer_EOSAntiCheatServerSetGameSessionId_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerSetClientNetworkState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatServerSetClientNetworkStateOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAntiCheatServer::EOSAntiCheatServerSetClientNetworkState(class UObject* WorldContextObject, const struct FEOSAntiCheatServerSetClientNetworkStateOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerSetClientNetworkState");
		
		UCoreAntiCheatServer_EOSAntiCheatServerSetClientNetworkState_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerSetClientDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatCommonSetClientDetailsOptions  Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAntiCheatServer::EOSAntiCheatServerSetClientDetails(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonSetClientDetailsOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerSetClientDetails");
		
		UCoreAntiCheatServer_EOSAntiCheatServerSetClientDetails_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerRemoveNotifyMessageToClient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          NotificationID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreAntiCheatServer::EOSAntiCheatServerRemoveNotifyMessageToClient(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerRemoveNotifyMessageToClient");
		
		UCoreAntiCheatServer_EOSAntiCheatServerRemoveNotifyMessageToClient_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.NotificationID = NotificationID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerRemoveNotifyClientAuthStatusChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          NotificationID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreAntiCheatServer::EOSAntiCheatServerRemoveNotifyClientAuthStatusChanged(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerRemoveNotifyClientAuthStatusChanged");
		
		UCoreAntiCheatServer_EOSAntiCheatServerRemoveNotifyClientAuthStatusChanged_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.NotificationID = NotificationID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerRemoveNotifyClientActionRequired
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          NotificationID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreAntiCheatServer::EOSAntiCheatServerRemoveNotifyClientActionRequired(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerRemoveNotifyClientActionRequired");
		
		UCoreAntiCheatServer_EOSAntiCheatServerRemoveNotifyClientActionRequired_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.NotificationID = NotificationID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerRegisterEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatCommonRegisterEventOptions     Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAntiCheatServer::EOSAntiCheatServerRegisterEvent(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonRegisterEventOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerRegisterEvent");
		
		UCoreAntiCheatServer_EOSAntiCheatServerRegisterEvent_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerRegisterClient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatServerRegisterClientOptions    Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAntiCheatServer::EOSAntiCheatServerRegisterClient(class UObject* WorldContextObject, const struct FEOSAntiCheatServerRegisterClientOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerRegisterClient");
		
		UCoreAntiCheatServer_EOSAntiCheatServerRegisterClient_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerReceiveMessageFromClient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatServerReceiveMessageFromClientOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAntiCheatServer::EOSAntiCheatServerReceiveMessageFromClient(class UObject* WorldContextObject, const struct FEOSAntiCheatServerReceiveMessageFromClientOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerReceiveMessageFromClient");
		
		UCoreAntiCheatServer_EOSAntiCheatServerReceiveMessageFromClient_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerProtectMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatServerProtectMessageOptions    Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              OutBuffer                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutBufferLengthBytes                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAntiCheatServer::EOSAntiCheatServerProtectMessage(class UObject* WorldContextObject, const struct FEOSAntiCheatServerProtectMessageOptions& Options, TArray<unsigned char>* OutBuffer, int32_t* OutBufferLengthBytes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerProtectMessage");
		
		UCoreAntiCheatServer_EOSAntiCheatServerProtectMessage_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutBuffer != nullptr)
			*OutBuffer = params.OutBuffer;
		if (OutBufferLengthBytes != nullptr)
			*OutBufferLengthBytes = params.OutBufferLengthBytes;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogPlayerUseWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatCommonLogPlayerUseWeaponOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAntiCheatServer::EOSAntiCheatServerLogPlayerUseWeapon(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonLogPlayerUseWeaponOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogPlayerUseWeapon");
		
		UCoreAntiCheatServer_EOSAntiCheatServerLogPlayerUseWeapon_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogPlayerUseAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatCommonLogPlayerUseAbilityOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAntiCheatServer::EOSAntiCheatServerLogPlayerUseAbility(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonLogPlayerUseAbilityOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogPlayerUseAbility");
		
		UCoreAntiCheatServer_EOSAntiCheatServerLogPlayerUseAbility_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogPlayerTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatCommonLogPlayerTickOptions     Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAntiCheatServer::EOSAntiCheatServerLogPlayerTick(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonLogPlayerTickOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogPlayerTick");
		
		UCoreAntiCheatServer_EOSAntiCheatServerLogPlayerTick_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogPlayerTakeDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatCommonLogPlayerTakeDamageOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAntiCheatServer::EOSAntiCheatServerLogPlayerTakeDamage(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonLogPlayerTakeDamageOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogPlayerTakeDamage");
		
		UCoreAntiCheatServer_EOSAntiCheatServerLogPlayerTakeDamage_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogPlayerSpawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatCommonLogPlayerSpawnOptions    Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAntiCheatServer::EOSAntiCheatServerLogPlayerSpawn(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonLogPlayerSpawnOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogPlayerSpawn");
		
		UCoreAntiCheatServer_EOSAntiCheatServerLogPlayerSpawn_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogPlayerRevive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatCommonLogPlayerReviveOptions   Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAntiCheatServer::EOSAntiCheatServerLogPlayerRevive(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonLogPlayerReviveOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogPlayerRevive");
		
		UCoreAntiCheatServer_EOSAntiCheatServerLogPlayerRevive_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogPlayerDespawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatCommonLogPlayerDespawnOptions  Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAntiCheatServer::EOSAntiCheatServerLogPlayerDespawn(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonLogPlayerDespawnOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogPlayerDespawn");
		
		UCoreAntiCheatServer_EOSAntiCheatServerLogPlayerDespawn_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogGameRoundStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatCommonLogGameRoundStartOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAntiCheatServer::EOSAntiCheatServerLogGameRoundStart(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonLogGameRoundStartOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogGameRoundStart");
		
		UCoreAntiCheatServer_EOSAntiCheatServerLogGameRoundStart_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogGameRoundEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatCommonLogGameRoundEndOptions   Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAntiCheatServer::EOSAntiCheatServerLogGameRoundEnd(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonLogGameRoundEndOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogGameRoundEnd");
		
		UCoreAntiCheatServer_EOSAntiCheatServerLogGameRoundEnd_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatCommonLogEventOptions          Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAntiCheatServer::EOSAntiCheatServerLogEvent(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonLogEventOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogEvent");
		
		UCoreAntiCheatServer_EOSAntiCheatServerLogEvent_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerGetProtectMessageOutputLength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatServerGetProtectMessageOutputLengthOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutBufferLengthBytes                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAntiCheatServer::EOSAntiCheatServerGetProtectMessageOutputLength(class UObject* WorldContextObject, const struct FEOSAntiCheatServerGetProtectMessageOutputLengthOptions& Options, int32_t* OutBufferLengthBytes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerGetProtectMessageOutputLength");
		
		UCoreAntiCheatServer_EOSAntiCheatServerGetProtectMessageOutputLength_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutBufferLengthBytes != nullptr)
			*OutBufferLengthBytes = params.OutBufferLengthBytes;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerEndSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatServerEndSessionOptions        Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAntiCheatServer::EOSAntiCheatServerEndSession(class UObject* WorldContextObject, const struct FEOSAntiCheatServerEndSessionOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerEndSession");
		
		UCoreAntiCheatServer_EOSAntiCheatServerEndSession_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerBeginSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatServerBeginSessionOptions      Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAntiCheatServer::EOSAntiCheatServerBeginSession(class UObject* WorldContextObject, const struct FEOSAntiCheatServerBeginSessionOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerBeginSession");
		
		UCoreAntiCheatServer_EOSAntiCheatServerBeginSession_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerAddNotifyMessageToClient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatServerAddNotifyMessageToClientOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreAntiCheatServer::EOSAntiCheatServerAddNotifyMessageToClient(class UObject* WorldContextObject, const struct FEOSAntiCheatServerAddNotifyMessageToClientOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerAddNotifyMessageToClient");
		
		UCoreAntiCheatServer_EOSAntiCheatServerAddNotifyMessageToClient_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerAddNotifyClientAuthStatusChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatServerAddNotifyClientAuthStatusChangedOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreAntiCheatServer::EOSAntiCheatServerAddNotifyClientAuthStatusChanged(class UObject* WorldContextObject, const struct FEOSAntiCheatServerAddNotifyClientAuthStatusChangedOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerAddNotifyClientAuthStatusChanged");
		
		UCoreAntiCheatServer_EOSAntiCheatServerAddNotifyClientAuthStatusChanged_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerAddNotifyClientActionRequired
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAntiCheatServerAddNotifyClientActionRequiredOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreAntiCheatServer::EOSAntiCheatServerAddNotifyClientActionRequired(class UObject* WorldContextObject, const struct FEOSAntiCheatServerAddNotifyClientActionRequiredOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerAddNotifyClientActionRequired");
		
		UCoreAntiCheatServer_EOSAntiCheatServerAddNotifyClientActionRequired_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreAntiCheatServer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreAntiCheatServer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.CoreAntiCheatServer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreAuthLogin.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSAuthLoginCallbackInfo                   Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreAuthLogin::HandleCallback(const struct FEOSAuthLoginCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreAuthLogin.HandleCallback");
		
		UEOSCoreAuthLogin_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreAuthLogin.EOSAuthLoginAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAuthLoginOptions                        Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreAuthLogin* UEOSCoreAuthLogin::EOSAuthLoginAsync(class UObject* WorldContextObject, const struct FEOSAuthLoginOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreAuthLogin.EOSAuthLoginAsync");
		
		UEOSCoreAuthLogin_EOSAuthLoginAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreAuthLogin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreAuthLogin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreAuthLogin");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreAuthLogout.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSAuthLogoutCallbackInfo                  Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreAuthLogout::HandleCallback(const struct FEOSAuthLogoutCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreAuthLogout.HandleCallback");
		
		UEOSCoreAuthLogout_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreAuthLogout.EOSAuthLogoutAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAuthLogoutOptions                       Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreAuthLogout* UEOSCoreAuthLogout::EOSAuthLogoutAsync(class UObject* WorldContextObject, const struct FEOSAuthLogoutOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreAuthLogout.EOSAuthLogoutAsync");
		
		UEOSCoreAuthLogout_EOSAuthLogoutAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreAuthLogout.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreAuthLogout::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreAuthLogout");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreAuthLinkAccount.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSAuthLinkAccountCallbackInfo             Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreAuthLinkAccount::HandleCallback(const struct FEOSAuthLinkAccountCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreAuthLinkAccount.HandleCallback");
		
		UEOSCoreAuthLinkAccount_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreAuthLinkAccount.EOSAuthLinkAccount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAuthLinkAccountOptions                  Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreAuthLinkAccount* UEOSCoreAuthLinkAccount::EOSAuthLinkAccount(class UObject* WorldContextObject, const struct FEOSAuthLinkAccountOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreAuthLinkAccount.EOSAuthLinkAccount");
		
		UEOSCoreAuthLinkAccount_EOSAuthLinkAccount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreAuthLinkAccount.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreAuthLinkAccount::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreAuthLinkAccount");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreAuthDeletePersistentAuth.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSAuthDeletePersistentAuthCallbackInfo    Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreAuthDeletePersistentAuth::HandleCallback(const struct FEOSAuthDeletePersistentAuthCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreAuthDeletePersistentAuth.HandleCallback");
		
		UEOSCoreAuthDeletePersistentAuth_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreAuthDeletePersistentAuth.EOSAuthDeletePersistentAuthAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAuthDeletePersistentAuthOptions         Options                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreAuthDeletePersistentAuth* UEOSCoreAuthDeletePersistentAuth::EOSAuthDeletePersistentAuthAsync(class UObject* WorldContextObject, const struct FEOSAuthDeletePersistentAuthOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreAuthDeletePersistentAuth.EOSAuthDeletePersistentAuthAsync");
		
		UEOSCoreAuthDeletePersistentAuth_EOSAuthDeletePersistentAuthAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreAuthDeletePersistentAuth.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreAuthDeletePersistentAuth::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreAuthDeletePersistentAuth");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreAuthVerifyUserAuth.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSAuthVerifyUserAuthCallbackInfo          Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreAuthVerifyUserAuth::HandleCallback(const struct FEOSAuthVerifyUserAuthCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreAuthVerifyUserAuth.HandleCallback");
		
		UEOSCoreAuthVerifyUserAuth_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreAuthVerifyUserAuth.EOSAuthVerifyUserAuthAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAuthVerifyUserAuthOptions               Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreAuthVerifyUserAuth* UEOSCoreAuthVerifyUserAuth::EOSAuthVerifyUserAuthAsync(class UObject* WorldContextObject, const struct FEOSAuthVerifyUserAuthOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreAuthVerifyUserAuth.EOSAuthVerifyUserAuthAsync");
		
		UEOSCoreAuthVerifyUserAuth_EOSAuthVerifyUserAuthAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreAuthVerifyUserAuth.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreAuthVerifyUserAuth::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreAuthVerifyUserAuth");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAuthentication.GetAuthentication
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreAuthentication* UCoreAuthentication::GetAuthentication(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAuthentication.GetAuthentication");
		
		UCoreAuthentication_GetAuthentication_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAuthentication.EOSAuthVerifyUserAuth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAuthVerifyUserAuthOptions               Options                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreAuthentication::EOSAuthVerifyUserAuth(class UObject* WorldContextObject, const struct FEOSAuthVerifyUserAuthOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAuthentication.EOSAuthVerifyUserAuth");
		
		UCoreAuthentication_EOSAuthVerifyUserAuth_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAuthentication.EOSAuthVerifyIdToken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAuthVerifyIdTokenOptions                Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreAuthentication::EOSAuthVerifyIdToken(class UObject* WorldContextObject, const struct FEOSAuthVerifyIdTokenOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAuthentication.EOSAuthVerifyIdToken");
		
		UCoreAuthentication_EOSAuthVerifyIdToken_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAuthentication.EOSAuthRemoveNotifyLoginStatusChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          ID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreAuthentication::EOSAuthRemoveNotifyLoginStatusChanged(class UObject* WorldContextObject, const struct FEOSNotificationId& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAuthentication.EOSAuthRemoveNotifyLoginStatusChanged");
		
		UCoreAuthentication_EOSAuthRemoveNotifyLoginStatusChanged_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAuthentication.EOSAuthQueryIdToken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAuthQueryIdTokenOptions                 Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreAuthentication::EOSAuthQueryIdToken(class UObject* WorldContextObject, const struct FEOSAuthQueryIdTokenOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAuthentication.EOSAuthQueryIdToken");
		
		UCoreAuthentication_EOSAuthQueryIdToken_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAuthentication.EOSAuthLogout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAuthLogoutOptions                       Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreAuthentication::EOSAuthLogout(class UObject* WorldContextObject, const struct FEOSAuthLogoutOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAuthentication.EOSAuthLogout");
		
		UCoreAuthentication_EOSAuthLogout_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAuthentication.EOSAuthLogin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAuthLoginOptions                        Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreAuthentication::EOSAuthLogin(class UObject* WorldContextObject, const struct FEOSAuthLoginOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAuthentication.EOSAuthLogin");
		
		UCoreAuthentication_EOSAuthLogin_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAuthentication.EOSAuthLinkAccount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAuthLinkAccountOptions                  Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreAuthentication::EOSAuthLinkAccount(class UObject* WorldContextObject, const struct FEOSAuthLinkAccountOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAuthentication.EOSAuthLinkAccount");
		
		UCoreAuthentication_EOSAuthLinkAccount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAuthentication.EOSAuthGetSelectedAccountId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEpicAccountId                           LocalUserId                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEpicAccountId                           OutSelectedAccountId                                       (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAuthentication::EOSAuthGetSelectedAccountId(class UObject* WorldContextObject, const struct FEOSEpicAccountId& LocalUserId, struct FEOSEpicAccountId* OutSelectedAccountId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAuthentication.EOSAuthGetSelectedAccountId");
		
		UCoreAuthentication_EOSAuthGetSelectedAccountId_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LocalUserId = LocalUserId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSelectedAccountId != nullptr)
			*OutSelectedAccountId = params.OutSelectedAccountId;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAuthentication.EOSAuthGetMergedAccountsCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEpicAccountId                           LocalUserId                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UCoreAuthentication::EOSAuthGetMergedAccountsCount(class UObject* WorldContextObject, const struct FEOSEpicAccountId& LocalUserId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAuthentication.EOSAuthGetMergedAccountsCount");
		
		UCoreAuthentication_EOSAuthGetMergedAccountsCount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LocalUserId = LocalUserId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAuthentication.EOSAuthGetMergedAccountByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEpicAccountId                           LocalUserId                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEOSEpicAccountId UCoreAuthentication::EOSAuthGetMergedAccountByIndex(class UObject* WorldContextObject, const struct FEOSEpicAccountId& LocalUserId, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAuthentication.EOSAuthGetMergedAccountByIndex");
		
		UCoreAuthentication_EOSAuthGetMergedAccountByIndex_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LocalUserId = LocalUserId;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAuthentication.EOSAuthGetLoginStatusPure
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEpicAccountId                           LocalUserId                                                (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSELoginStatus UCoreAuthentication::EOSAuthGetLoginStatusPure(class UObject* WorldContextObject, const struct FEOSEpicAccountId& LocalUserId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAuthentication.EOSAuthGetLoginStatusPure");
		
		UCoreAuthentication_EOSAuthGetLoginStatusPure_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LocalUserId = LocalUserId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAuthentication.EOSAuthGetLoginStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEpicAccountId                           LocalUserId                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSELoginStatus UCoreAuthentication::EOSAuthGetLoginStatus(class UObject* WorldContextObject, const struct FEOSEpicAccountId& LocalUserId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAuthentication.EOSAuthGetLoginStatus");
		
		UCoreAuthentication_EOSAuthGetLoginStatus_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LocalUserId = LocalUserId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAuthentication.EOSAuthGetLoggedInAccountsCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UCoreAuthentication::EOSAuthGetLoggedInAccountsCount(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAuthentication.EOSAuthGetLoggedInAccountsCount");
		
		UCoreAuthentication_EOSAuthGetLoggedInAccountsCount_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAuthentication.EOSAuthGetLoggedInAccountByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEOSEpicAccountId UCoreAuthentication::EOSAuthGetLoggedInAccountByIndex(class UObject* WorldContextObject, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAuthentication.EOSAuthGetLoggedInAccountByIndex");
		
		UCoreAuthentication_EOSAuthGetLoggedInAccountByIndex_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAuthentication.EOSAuthDeletePersistentAuth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAuthDeletePersistentAuthOptions         Options                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreAuthentication::EOSAuthDeletePersistentAuth(class UObject* WorldContextObject, const struct FEOSAuthDeletePersistentAuthOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAuthentication.EOSAuthDeletePersistentAuth");
		
		UCoreAuthentication_EOSAuthDeletePersistentAuth_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAuthentication.EOSAuthCopyUserAuthToken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAuthCopyUserAuthTokenOptions            Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSEpicAccountId                           LocalUserId                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAuthToken                               OutUserAuthToken                                           (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAuthentication::EOSAuthCopyUserAuthToken(class UObject* WorldContextObject, const struct FEOSAuthCopyUserAuthTokenOptions& Options, const struct FEOSEpicAccountId& LocalUserId, struct FEOSAuthToken* OutUserAuthToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAuthentication.EOSAuthCopyUserAuthToken");
		
		UCoreAuthentication_EOSAuthCopyUserAuthToken_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.LocalUserId = LocalUserId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutUserAuthToken != nullptr)
			*OutUserAuthToken = params.OutUserAuthToken;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAuthentication.EOSAuthCopyIdToken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAuthCopyIdTokenOptions                  Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSAuthIdToken                             OutIdToken                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreAuthentication::EOSAuthCopyIdToken(class UObject* WorldContextObject, const struct FEOSAuthCopyIdTokenOptions& Options, struct FEOSAuthIdToken* OutIdToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAuthentication.EOSAuthCopyIdToken");
		
		UCoreAuthentication_EOSAuthCopyIdToken_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIdToken != nullptr)
			*OutIdToken = params.OutIdToken;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreAuthentication.EOSAuthAddNotifyLoginStatusChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreAuthentication::EOSAuthAddNotifyLoginStatusChanged(class UObject* WorldContextObject, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreAuthentication.EOSAuthAddNotifyLoginStatusChanged");
		
		UCoreAuthentication_EOSAuthAddNotifyLoginStatusChanged_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreAuthentication.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreAuthentication::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.CoreAuthentication");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreChat.SendChatMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSProductUserId                           LocalUserId                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSProductUserId                           Target                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEOSEPacketReliability                             Reliability                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreChat::SendChatMessage(class UObject* WorldContextObject, const struct FEOSProductUserId& LocalUserId, const struct FEOSProductUserId& Target, const class FString& Message, EEOSEPacketReliability Reliability)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreChat.SendChatMessage");
		
		UCoreChat_SendChatMessage_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LocalUserId = LocalUserId;
		params.Target = Target;
		params.Message = Message;
		params.Reliability = Reliability;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreChat.ListenForChatMessages
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSProductUserId                           LocalUserId                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreChat::ListenForChatMessages(class UObject* WorldContextObject, const struct FEOSProductUserId& LocalUserId, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreChat.ListenForChatMessages");
		
		UCoreChat_ListenForChatMessages_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LocalUserId = LocalUserId;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreChat.GetChat
	 * 		Flags  -> ()
	 */
	class UCoreChat* UCoreChat::GetChat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreChat.GetChat");
		
		UCoreChat_GetChat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreChat.ClearAllChatListeners
	 * 		Flags  -> ()
	 */
	void UCoreChat::ClearAllChatListeners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreChat.ClearAllChatListeners");
		
		UCoreChat_ClearAllChatListeners_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreChat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreChat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.CoreChat");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreConnect.GetConnect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreConnect* UCoreConnect::GetConnect(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreConnect.GetConnect");
		
		UCoreConnect_GetConnect_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreConnect.EOSConnectVerifyIdToken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSConnectVerifyIdTokenOptions             Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreConnect::EOSConnectVerifyIdToken(class UObject* WorldContextObject, const struct FEOSConnectVerifyIdTokenOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreConnect.EOSConnectVerifyIdToken");
		
		UCoreConnect_EOSConnectVerifyIdToken_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreConnect.EOSConnectUnlinkAccount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSConnectUnlinkAccountOptions             Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreConnect::EOSConnectUnlinkAccount(class UObject* WorldContextObject, const struct FEOSConnectUnlinkAccountOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreConnect.EOSConnectUnlinkAccount");
		
		UCoreConnect_EOSConnectUnlinkAccount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreConnect.EOSConnectTransferDeviceIdAccount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSConnectTransferDeviceIdAccountOptions   Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreConnect::EOSConnectTransferDeviceIdAccount(class UObject* WorldContextObject, const struct FEOSConnectTransferDeviceIdAccountOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreConnect.EOSConnectTransferDeviceIdAccount");
		
		UCoreConnect_EOSConnectTransferDeviceIdAccount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreConnect.EOSConnectRemoveNotifyLoginStatusChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          ID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreConnect::EOSConnectRemoveNotifyLoginStatusChanged(class UObject* WorldContextObject, const struct FEOSNotificationId& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreConnect.EOSConnectRemoveNotifyLoginStatusChanged");
		
		UCoreConnect_EOSConnectRemoveNotifyLoginStatusChanged_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreConnect.EOSConnectRemoveNotifyAuthExpiration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          ID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreConnect::EOSConnectRemoveNotifyAuthExpiration(class UObject* WorldContextObject, const struct FEOSNotificationId& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreConnect.EOSConnectRemoveNotifyAuthExpiration");
		
		UCoreConnect_EOSConnectRemoveNotifyAuthExpiration_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreConnect.EOSConnectQueryProductUserIdMappings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSConnectQueryProductUserIdMappingsOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreConnect::EOSConnectQueryProductUserIdMappings(class UObject* WorldContextObject, const struct FEOSConnectQueryProductUserIdMappingsOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreConnect.EOSConnectQueryProductUserIdMappings");
		
		UCoreConnect_EOSConnectQueryProductUserIdMappings_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreConnect.EOSConnectQueryExternalAccountMappings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSConnectQueryExternalAccountMappingsOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreConnect::EOSConnectQueryExternalAccountMappings(class UObject* WorldContextObject, const struct FEOSConnectQueryExternalAccountMappingsOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreConnect.EOSConnectQueryExternalAccountMappings");
		
		UCoreConnect_EOSConnectQueryExternalAccountMappings_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreConnect.EOSConnectLogin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSConnectLoginOptions                     Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreConnect::EOSConnectLogin(class UObject* WorldContextObject, const struct FEOSConnectLoginOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreConnect.EOSConnectLogin");
		
		UCoreConnect_EOSConnectLogin_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreConnect.EOSConnectLinkAccount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSConnectLinkAccountOptions               Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreConnect::EOSConnectLinkAccount(class UObject* WorldContextObject, const struct FEOSConnectLinkAccountOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreConnect.EOSConnectLinkAccount");
		
		UCoreConnect_EOSConnectLinkAccount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreConnect.EOSConnectGetProductUserIdMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSConnectGetProductUserIdMappingOptions   Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutString                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreConnect::EOSConnectGetProductUserIdMapping(class UObject* WorldContextObject, const struct FEOSConnectGetProductUserIdMappingOptions& Options, class FString* OutString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreConnect.EOSConnectGetProductUserIdMapping");
		
		UCoreConnect_EOSConnectGetProductUserIdMapping_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutString != nullptr)
			*OutString = params.OutString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreConnect.EOSConnectGetProductUserExternalAccountCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSConnectGetProductUserExternalAccountCountOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UCoreConnect::EOSConnectGetProductUserExternalAccountCount(class UObject* WorldContextObject, const struct FEOSConnectGetProductUserExternalAccountCountOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreConnect.EOSConnectGetProductUserExternalAccountCount");
		
		UCoreConnect_EOSConnectGetProductUserExternalAccountCount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreConnect.EOSConnectGetLoginStatusPure
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSProductUserId                           LocalUserId                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EEOSELoginStatus UCoreConnect::EOSConnectGetLoginStatusPure(class UObject* WorldContextObject, const struct FEOSProductUserId& LocalUserId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreConnect.EOSConnectGetLoginStatusPure");
		
		UCoreConnect_EOSConnectGetLoginStatusPure_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LocalUserId = LocalUserId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreConnect.EOSConnectGetLoginStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSProductUserId                           LocalUserId                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EEOSELoginStatus UCoreConnect::EOSConnectGetLoginStatus(class UObject* WorldContextObject, const struct FEOSProductUserId& LocalUserId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreConnect.EOSConnectGetLoginStatus");
		
		UCoreConnect_EOSConnectGetLoginStatus_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LocalUserId = LocalUserId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreConnect.EOSConnectGetLoggedInUsersCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UCoreConnect::EOSConnectGetLoggedInUsersCount(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreConnect.EOSConnectGetLoggedInUsersCount");
		
		UCoreConnect_EOSConnectGetLoggedInUsersCount_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreConnect.EOSConnectGetLoggedInUserByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEOSProductUserId UCoreConnect::EOSConnectGetLoggedInUserByIndex(class UObject* WorldContextObject, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreConnect.EOSConnectGetLoggedInUserByIndex");
		
		UCoreConnect_EOSConnectGetLoggedInUserByIndex_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreConnect.EOSConnectGetExternalAccountMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSConnectGetExternalAccountMappingsOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	struct FEOSProductUserId UCoreConnect::EOSConnectGetExternalAccountMapping(class UObject* WorldContextObject, const struct FEOSConnectGetExternalAccountMappingsOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreConnect.EOSConnectGetExternalAccountMapping");
		
		UCoreConnect_EOSConnectGetExternalAccountMapping_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreConnect.EOSConnectDeleteDeviceId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSConnectDeleteDeviceIdOptions            Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreConnect::EOSConnectDeleteDeviceId(class UObject* WorldContextObject, const struct FEOSConnectDeleteDeviceIdOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreConnect.EOSConnectDeleteDeviceId");
		
		UCoreConnect_EOSConnectDeleteDeviceId_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreConnect.EOSConnectCreateUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSConnectCreateUserOptions                Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreConnect::EOSConnectCreateUser(class UObject* WorldContextObject, const struct FEOSConnectCreateUserOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreConnect.EOSConnectCreateUser");
		
		UCoreConnect_EOSConnectCreateUser_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreConnect.EOSConnectCreateDeviceId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSConnectCreateDeviceIdOptions            Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreConnect::EOSConnectCreateDeviceId(class UObject* WorldContextObject, const struct FEOSConnectCreateDeviceIdOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreConnect.EOSConnectCreateDeviceId");
		
		UCoreConnect_EOSConnectCreateDeviceId_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreConnect.EOSConnectCopyProductUserInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSConnectCopyProductUserInfoOptions       Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSConnectExternalAccountInfo              OutExternalAccountInfo                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreConnect::EOSConnectCopyProductUserInfo(class UObject* WorldContextObject, const struct FEOSConnectCopyProductUserInfoOptions& Options, struct FEOSConnectExternalAccountInfo* OutExternalAccountInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreConnect.EOSConnectCopyProductUserInfo");
		
		UCoreConnect_EOSConnectCopyProductUserInfo_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutExternalAccountInfo != nullptr)
			*OutExternalAccountInfo = params.OutExternalAccountInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreConnect.EOSConnectCopyProductUserExternalAccountByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSConnectCopyProductUserExternalAccountByIndexOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSConnectExternalAccountInfo              OutExternalAccountInfo                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreConnect::EOSConnectCopyProductUserExternalAccountByIndex(class UObject* WorldContextObject, const struct FEOSConnectCopyProductUserExternalAccountByIndexOptions& Options, struct FEOSConnectExternalAccountInfo* OutExternalAccountInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreConnect.EOSConnectCopyProductUserExternalAccountByIndex");
		
		UCoreConnect_EOSConnectCopyProductUserExternalAccountByIndex_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutExternalAccountInfo != nullptr)
			*OutExternalAccountInfo = params.OutExternalAccountInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreConnect.EOSConnectCopyProductUserExternalAccountByAccountType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSConnectCopyProductUserExternalAccountByAccountTypeOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSConnectExternalAccountInfo              OutExternalAccountInfo                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreConnect::EOSConnectCopyProductUserExternalAccountByAccountType(class UObject* WorldContextObject, const struct FEOSConnectCopyProductUserExternalAccountByAccountTypeOptions& Options, struct FEOSConnectExternalAccountInfo* OutExternalAccountInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreConnect.EOSConnectCopyProductUserExternalAccountByAccountType");
		
		UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountType_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutExternalAccountInfo != nullptr)
			*OutExternalAccountInfo = params.OutExternalAccountInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreConnect.EOSConnectCopyProductUserExternalAccountByAccountId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSConnectCopyProductUserExternalAccountByAccountIdOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FEOSConnectExternalAccountInfo              OutExternalAccountInfo                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreConnect::EOSConnectCopyProductUserExternalAccountByAccountId(class UObject* WorldContextObject, const struct FEOSConnectCopyProductUserExternalAccountByAccountIdOptions& Options, struct FEOSConnectExternalAccountInfo* OutExternalAccountInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreConnect.EOSConnectCopyProductUserExternalAccountByAccountId");
		
		UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountId_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutExternalAccountInfo != nullptr)
			*OutExternalAccountInfo = params.OutExternalAccountInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreConnect.EOSConnectCopyIdToken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSConnectCopyIdTokenOptions               Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSConnectIdToken                          OutIdToken                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreConnect::EOSConnectCopyIdToken(class UObject* WorldContextObject, const struct FEOSConnectCopyIdTokenOptions& Options, struct FEOSConnectIdToken* OutIdToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreConnect.EOSConnectCopyIdToken");
		
		UCoreConnect_EOSConnectCopyIdToken_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIdToken != nullptr)
			*OutIdToken = params.OutIdToken;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreConnect.EOSConnectAddNotifyLoginStatusChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreConnect::EOSConnectAddNotifyLoginStatusChanged(class UObject* WorldContextObject, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreConnect.EOSConnectAddNotifyLoginStatusChanged");
		
		UCoreConnect_EOSConnectAddNotifyLoginStatusChanged_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreConnect.EOSConnectAddNotifyAuthExpiration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreConnect::EOSConnectAddNotifyAuthExpiration(class UObject* WorldContextObject, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreConnect.EOSConnectAddNotifyAuthExpiration");
		
		UCoreConnect_EOSConnectAddNotifyAuthExpiration_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreConnect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreConnect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.CoreConnect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreConnectLogin.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSConnectLoginCallbackInfo                Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreConnectLogin::HandleCallback(const struct FEOSConnectLoginCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreConnectLogin.HandleCallback");
		
		UEOSCoreConnectLogin_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreConnectLogin.EOSConnectLoginAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSConnectLoginOptions                     Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreConnectLogin* UEOSCoreConnectLogin::EOSConnectLoginAsync(class UObject* WorldContextObject, const struct FEOSConnectLoginOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreConnectLogin.EOSConnectLoginAsync");
		
		UEOSCoreConnectLogin_EOSConnectLoginAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreConnectLogin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreConnectLogin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreConnectLogin");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreConnectCreateUser.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSConnectCreateUserCallbackInfo           Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreConnectCreateUser::HandleCallback(const struct FEOSConnectCreateUserCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreConnectCreateUser.HandleCallback");
		
		UEOSCoreConnectCreateUser_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreConnectCreateUser.EOSConnectCreateUserAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSConnectCreateUserOptions                Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreConnectCreateUser* UEOSCoreConnectCreateUser::EOSConnectCreateUserAsync(class UObject* WorldContextObject, const struct FEOSConnectCreateUserOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreConnectCreateUser.EOSConnectCreateUserAsync");
		
		UEOSCoreConnectCreateUser_EOSConnectCreateUserAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreConnectCreateUser.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreConnectCreateUser::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreConnectCreateUser");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreConnectLinkAccount.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSConnectLinkAccountCallbackInfo          Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreConnectLinkAccount::HandleCallback(const struct FEOSConnectLinkAccountCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreConnectLinkAccount.HandleCallback");
		
		UEOSCoreConnectLinkAccount_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreConnectLinkAccount.EOSConnectLinkAccountAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSConnectLinkAccountOptions               Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreConnectLinkAccount* UEOSCoreConnectLinkAccount::EOSConnectLinkAccountAsync(class UObject* WorldContextObject, const struct FEOSConnectLinkAccountOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreConnectLinkAccount.EOSConnectLinkAccountAsync");
		
		UEOSCoreConnectLinkAccount_EOSConnectLinkAccountAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreConnectLinkAccount.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreConnectLinkAccount::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreConnectLinkAccount");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreConnectUnlinkAccount.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSConnectUnlinkAccountCallbackInfo        Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreConnectUnlinkAccount::HandleCallback(const struct FEOSConnectUnlinkAccountCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreConnectUnlinkAccount.HandleCallback");
		
		UEOSCoreConnectUnlinkAccount_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreConnectUnlinkAccount.EOSConnectUnlinkAccountAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSConnectUnlinkAccountOptions             Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreConnectUnlinkAccount* UEOSCoreConnectUnlinkAccount::EOSConnectUnlinkAccountAsync(class UObject* WorldContextObject, const struct FEOSConnectUnlinkAccountOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreConnectUnlinkAccount.EOSConnectUnlinkAccountAsync");
		
		UEOSCoreConnectUnlinkAccount_EOSConnectUnlinkAccountAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreConnectUnlinkAccount.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreConnectUnlinkAccount::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreConnectUnlinkAccount");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreConnectCreateDeviceId.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSConnectCreateDeviceIdCallbackInfo       Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreConnectCreateDeviceId::HandleCallback(const struct FEOSConnectCreateDeviceIdCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreConnectCreateDeviceId.HandleCallback");
		
		UEOSCoreConnectCreateDeviceId_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreConnectCreateDeviceId.EOSConnectCreateDeviceIdAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSConnectCreateDeviceIdOptions            Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreConnectCreateDeviceId* UEOSCoreConnectCreateDeviceId::EOSConnectCreateDeviceIdAsync(class UObject* WorldContextObject, const struct FEOSConnectCreateDeviceIdOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreConnectCreateDeviceId.EOSConnectCreateDeviceIdAsync");
		
		UEOSCoreConnectCreateDeviceId_EOSConnectCreateDeviceIdAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreConnectCreateDeviceId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreConnectCreateDeviceId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreConnectCreateDeviceId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreConnectDeleteDeviceId.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSConnectDeleteDeviceIdCallbackInfo       Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreConnectDeleteDeviceId::HandleCallback(const struct FEOSConnectDeleteDeviceIdCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreConnectDeleteDeviceId.HandleCallback");
		
		UEOSCoreConnectDeleteDeviceId_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreConnectDeleteDeviceId.EOSConnectDeleteDeviceIdAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSConnectDeleteDeviceIdOptions            Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreConnectDeleteDeviceId* UEOSCoreConnectDeleteDeviceId::EOSConnectDeleteDeviceIdAsync(class UObject* WorldContextObject, const struct FEOSConnectDeleteDeviceIdOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreConnectDeleteDeviceId.EOSConnectDeleteDeviceIdAsync");
		
		UEOSCoreConnectDeleteDeviceId_EOSConnectDeleteDeviceIdAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreConnectDeleteDeviceId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreConnectDeleteDeviceId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreConnectDeleteDeviceId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreConnectTransferDeviceIdAccount.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSConnectTransferDeviceIdAccountCallbackInfo Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreConnectTransferDeviceIdAccount::HandleCallback(const struct FEOSConnectTransferDeviceIdAccountCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreConnectTransferDeviceIdAccount.HandleCallback");
		
		UEOSCoreConnectTransferDeviceIdAccount_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreConnectTransferDeviceIdAccount.EOSConnectTransferDeviceIdAccountAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSConnectTransferDeviceIdAccountOptions   Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreConnectTransferDeviceIdAccount* UEOSCoreConnectTransferDeviceIdAccount::EOSConnectTransferDeviceIdAccountAsync(class UObject* WorldContextObject, const struct FEOSConnectTransferDeviceIdAccountOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreConnectTransferDeviceIdAccount.EOSConnectTransferDeviceIdAccountAsync");
		
		UEOSCoreConnectTransferDeviceIdAccount_EOSConnectTransferDeviceIdAccountAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreConnectTransferDeviceIdAccount.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreConnectTransferDeviceIdAccount::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreConnectTransferDeviceIdAccount");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreConnectQueryExternalAccountMappings.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSConnectQueryExternalAccountMappingsCallbackInfo Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreConnectQueryExternalAccountMappings::HandleCallback(const struct FEOSConnectQueryExternalAccountMappingsCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreConnectQueryExternalAccountMappings.HandleCallback");
		
		UEOSCoreConnectQueryExternalAccountMappings_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreConnectQueryExternalAccountMappings.EOSConnectQueryExternalAccountMappingsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSConnectQueryExternalAccountMappingsOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreConnectQueryExternalAccountMappings* UEOSCoreConnectQueryExternalAccountMappings::EOSConnectQueryExternalAccountMappingsAsync(class UObject* WorldContextObject, const struct FEOSConnectQueryExternalAccountMappingsOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreConnectQueryExternalAccountMappings.EOSConnectQueryExternalAccountMappingsAsync");
		
		UEOSCoreConnectQueryExternalAccountMappings_EOSConnectQueryExternalAccountMappingsAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreConnectQueryExternalAccountMappings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreConnectQueryExternalAccountMappings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreConnectQueryExternalAccountMappings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreConnectQueryProductUserIdMappings.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSConnectQueryProductUserIdMappingsCallbackInfo Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreConnectQueryProductUserIdMappings::HandleCallback(const struct FEOSConnectQueryProductUserIdMappingsCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreConnectQueryProductUserIdMappings.HandleCallback");
		
		UEOSCoreConnectQueryProductUserIdMappings_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreConnectQueryProductUserIdMappings.EOSConnectQueryProductUserIdMappingsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSConnectQueryProductUserIdMappingsOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreConnectQueryProductUserIdMappings* UEOSCoreConnectQueryProductUserIdMappings::EOSConnectQueryProductUserIdMappingsAsync(class UObject* WorldContextObject, const struct FEOSConnectQueryProductUserIdMappingsOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreConnectQueryProductUserIdMappings.EOSConnectQueryProductUserIdMappingsAsync");
		
		UEOSCoreConnectQueryProductUserIdMappings_EOSConnectQueryProductUserIdMappingsAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreConnectQueryProductUserIdMappings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreConnectQueryProductUserIdMappings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreConnectQueryProductUserIdMappings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.UpdateUniqueNetIdFromOSS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEOSCoreLibrary::UpdateUniqueNetIdFromOSS(class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.UpdateUniqueNetIdFromOSS");
		
		UEOSCoreLibrary_UpdateUniqueNetIdFromOSS_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.RemoveListenForEOSMessages
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreLibrary::RemoveListenForEOSMessages(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.RemoveListenForEOSMessages");
		
		UEOSCoreLibrary_RemoveListenForEOSMessages_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.MakeString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEOSSessionSetting UEOSCoreLibrary::MakeString(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.MakeString");
		
		UEOSCoreLibrary_MakeString_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.MakeSearchString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEOSSessionSearchSetting UEOSCoreLibrary::MakeSearchString(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.MakeSearchString");
		
		UEOSCoreLibrary_MakeSearchString_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.MakeSearchInteger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEOSSessionSearchSetting UEOSCoreLibrary::MakeSearchInteger(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.MakeSearchInteger");
		
		UEOSCoreLibrary_MakeSearchInteger_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.MakeSearchBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEOSSessionSearchSetting UEOSCoreLibrary::MakeSearchBool(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.MakeSearchBool");
		
		UEOSCoreLibrary_MakeSearchBool_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.MakeParamString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEOSAntiCheatCommonLogEventParamPair UEOSCoreLibrary::MakeParamString(const class FString& String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.MakeParamString");
		
		UEOSCoreLibrary_MakeParamString_Params params {};
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.MakeParamInt64
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int64_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEOSAntiCheatCommonLogEventParamPair UEOSCoreLibrary::MakeParamInt64(int64_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.MakeParamInt64");
		
		UEOSCoreLibrary_MakeParamInt64_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.MakeParamInt32
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEOSAntiCheatCommonLogEventParamPair UEOSCoreLibrary::MakeParamInt32(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.MakeParamInt32");
		
		UEOSCoreLibrary_MakeParamInt32_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.MakeInteger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEOSSessionSetting UEOSCoreLibrary::MakeInteger(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.MakeInteger");
		
		UEOSCoreLibrary_MakeInteger_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.MakeBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEOSSessionSetting UEOSCoreLibrary::MakeBool(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.MakeBool");
		
		UEOSCoreLibrary_MakeBool_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.Login
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      LoginId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Password                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEOSLoginCredentialType                            AuthType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEOSEExternalCredentialType                        CredentialsType                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AdditionalData                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreLibrary::Login(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& LoginId, const class FString& Password, EEOSLoginCredentialType AuthType, EEOSEExternalCredentialType CredentialsType, const class FString& AdditionalData, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.Login");
		
		UEOSCoreLibrary_Login_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.LoginId = LoginId;
		params.Password = Password;
		params.AuthType = AuthType;
		params.CredentialsType = CredentialsType;
		params.AdditionalData = AdditionalData;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.ListenForEOSMessages
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreLibrary::ListenForEOSMessages(class UObject* WorldContextObject, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.ListenForEOSMessages");
		
		UEOSCoreLibrary_ListenForEOSMessages_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.IsProductUserIdIdenticalWith
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSProductUserId                           A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSProductUserId                           B                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEOSCoreLibrary::IsProductUserIdIdenticalWith(const struct FEOSProductUserId& A, const struct FEOSProductUserId& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.IsProductUserIdIdenticalWith");
		
		UEOSCoreLibrary_IsProductUserIdIdenticalWith_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.IsEpicAccountIdIdenticalWith
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSEpicAccountId                           A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEpicAccountId                           B                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEOSCoreLibrary::IsEpicAccountIdIdenticalWith(const struct FEOSEpicAccountId& A, const struct FEOSEpicAccountId& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.IsEpicAccountIdIdenticalWith");
		
		UEOSCoreLibrary_IsEpicAccountIdIdenticalWith_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.GetString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSSessionSetting                          Settings                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UEOSCoreLibrary::GetString(const struct FEOSSessionSetting& Settings, class FString* Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.GetString");
		
		UEOSCoreLibrary_GetString_Params params {};
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key != nullptr)
			*Key = params.Key;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.GetSessionAttributeString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSSessionsAttributeData                   Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UEOSCoreLibrary::GetSessionAttributeString(const struct FEOSSessionsAttributeData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.GetSessionAttributeString");
		
		UEOSCoreLibrary_GetSessionAttributeString_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.GetSessionAttributeInt64
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSSessionsAttributeData                   Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UEOSCoreLibrary::GetSessionAttributeInt64(const struct FEOSSessionsAttributeData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.GetSessionAttributeInt64");
		
		UEOSCoreLibrary_GetSessionAttributeInt64_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.GetSessionAttributeDouble
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSSessionsAttributeData                   Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UEOSCoreLibrary::GetSessionAttributeDouble(const struct FEOSSessionsAttributeData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.GetSessionAttributeDouble");
		
		UEOSCoreLibrary_GetSessionAttributeDouble_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.GetSessionAttributeBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSSessionsAttributeData                   Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UEOSCoreLibrary::GetSessionAttributeBool(const struct FEOSSessionsAttributeData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.GetSessionAttributeBool");
		
		UEOSCoreLibrary_GetSessionAttributeBool_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.GetLobbyAttributeString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSLobbyAttributeData                      Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UEOSCoreLibrary::GetLobbyAttributeString(const struct FEOSLobbyAttributeData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.GetLobbyAttributeString");
		
		UEOSCoreLibrary_GetLobbyAttributeString_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.GetLobbyAttributeInt64
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSLobbyAttributeData                      Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UEOSCoreLibrary::GetLobbyAttributeInt64(const struct FEOSLobbyAttributeData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.GetLobbyAttributeInt64");
		
		UEOSCoreLibrary_GetLobbyAttributeInt64_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.GetLobbyAttributeDouble
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSLobbyAttributeData                      Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UEOSCoreLibrary::GetLobbyAttributeDouble(const struct FEOSLobbyAttributeData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.GetLobbyAttributeDouble");
		
		UEOSCoreLibrary_GetLobbyAttributeDouble_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.GetLobbyAttributeBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSLobbyAttributeData                      Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UEOSCoreLibrary::GetLobbyAttributeBool(const struct FEOSLobbyAttributeData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.GetLobbyAttributeBool");
		
		UEOSCoreLibrary_GetLobbyAttributeBool_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.GetInteger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSSessionSetting                          Settings                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEOSCoreLibrary::GetInteger(const struct FEOSSessionSetting& Settings, class FString* Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.GetInteger");
		
		UEOSCoreLibrary_GetInteger_Params params {};
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key != nullptr)
			*Key = params.Key;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.GetCurrentProductId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UserIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEOSProductUserId UEOSCoreLibrary::GetCurrentProductId(class UObject* WorldContextObject, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.GetCurrentProductId");
		
		UEOSCoreLibrary_GetCurrentProductId_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.GetCurrentAccountId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UserIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEOSEpicAccountId UEOSCoreLibrary::GetCurrentAccountId(class UObject* WorldContextObject, int32_t UserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.GetCurrentAccountId");
		
		UEOSCoreLibrary_GetCurrentAccountId_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.UserIndex = UserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.GetBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSSessionSetting                          Settings                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEOSCoreLibrary::GetBool(const struct FEOSSessionSetting& Settings, class FString* Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.GetBool");
		
		UEOSCoreLibrary_GetBool_Params params {};
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key != nullptr)
			*Key = params.Key;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.FromUnixTimestamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Timestamp                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FDateTime UEOSCoreLibrary::FromUnixTimestamp(const class FString& Timestamp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.FromUnixTimestamp");
		
		UEOSCoreLibrary_FromUnixTimestamp_Params params {};
		params.Timestamp = Timestamp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.EOSProductUserIdToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSProductUserId                           ID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      String                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UEOSCoreLibrary::EOSProductUserIdToString(const struct FEOSProductUserId& ID, class FString* String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.EOSProductUserIdToString");
		
		UEOSCoreLibrary_EOSProductUserIdToString_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (String != nullptr)
			*String = params.String;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.EOSProductUserIdIsValidPure
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSProductUserId                           ID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEOSCoreLibrary::EOSProductUserIdIsValidPure(const struct FEOSProductUserId& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.EOSProductUserIdIsValidPure");
		
		UEOSCoreLibrary_EOSProductUserIdIsValidPure_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.EOSProductUserIdIsValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSProductUserId                           ID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEOSCoreLibrary::EOSProductUserIdIsValid(const struct FEOSProductUserId& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.EOSProductUserIdIsValid");
		
		UEOSCoreLibrary_EOSProductUserIdIsValid_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.EOSProductUserIdFromString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEOSProductUserId UEOSCoreLibrary::EOSProductUserIdFromString(const class FString& String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.EOSProductUserIdFromString");
		
		UEOSCoreLibrary_EOSProductUserIdFromString_Params params {};
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.EOSPlatformSetNetworkStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EOSENetworkStatus                                  NewStatus                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UEOSCoreLibrary::EOSPlatformSetNetworkStatus(class UObject* WorldContextObject, EOSENetworkStatus NewStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.EOSPlatformSetNetworkStatus");
		
		UEOSCoreLibrary_EOSPlatformSetNetworkStatus_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.NewStatus = NewStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.EOSPlatformSetApplicationStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EOSEApplicationStatus                              NewStatus                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UEOSCoreLibrary::EOSPlatformSetApplicationStatus(class UObject* WorldContextObject, EOSEApplicationStatus NewStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.EOSPlatformSetApplicationStatus");
		
		UEOSCoreLibrary_EOSPlatformSetApplicationStatus_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.NewStatus = NewStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.EOSPlatformGetNetworkStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSENetworkStatus UEOSCoreLibrary::EOSPlatformGetNetworkStatus(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.EOSPlatformGetNetworkStatus");
		
		UEOSCoreLibrary_EOSPlatformGetNetworkStatus_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.EOSPlatformGetDesktopCrossplayStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSPlatformGetDesktopCrossplayStatusOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSPlatformGetDesktopCrossplayStatusInfo   OutDesktopCrossplayStatusInfo                              (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UEOSCoreLibrary::EOSPlatformGetDesktopCrossplayStatus(class UObject* WorldContextObject, const struct FEOSPlatformGetDesktopCrossplayStatusOptions& Options, struct FEOSPlatformGetDesktopCrossplayStatusInfo* OutDesktopCrossplayStatusInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.EOSPlatformGetDesktopCrossplayStatus");
		
		UEOSCoreLibrary_EOSPlatformGetDesktopCrossplayStatus_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDesktopCrossplayStatusInfo != nullptr)
			*OutDesktopCrossplayStatusInfo = params.OutDesktopCrossplayStatusInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.EOSPlatformGetApplicationStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSEApplicationStatus UEOSCoreLibrary::EOSPlatformGetApplicationStatus(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.EOSPlatformGetApplicationStatus");
		
		UEOSCoreLibrary_EOSPlatformGetApplicationStatus_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.EOSEResultToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EOSResult                                          Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UEOSCoreLibrary::EOSEResultToString(EOSResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.EOSEResultToString");
		
		UEOSCoreLibrary_EOSEResultToString_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.EOSEResultIsOperationComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EOSResult                                          Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEOSCoreLibrary::EOSEResultIsOperationComplete(EOSResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.EOSEResultIsOperationComplete");
		
		UEOSCoreLibrary_EOSEResultIsOperationComplete_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.EOSEpicAccountIdToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSEpicAccountId                           ID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      String                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UEOSCoreLibrary::EOSEpicAccountIdToString(const struct FEOSEpicAccountId& ID, class FString* String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.EOSEpicAccountIdToString");
		
		UEOSCoreLibrary_EOSEpicAccountIdToString_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (String != nullptr)
			*String = params.String;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.EOSEpicAccountIdIsValidPure
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSEpicAccountId                           ID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEOSCoreLibrary::EOSEpicAccountIdIsValidPure(const struct FEOSEpicAccountId& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.EOSEpicAccountIdIsValidPure");
		
		UEOSCoreLibrary_EOSEpicAccountIdIsValidPure_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.EOSEpicAccountIdIsValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSEpicAccountId                           ID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEOSCoreLibrary::EOSEpicAccountIdIsValid(const struct FEOSEpicAccountId& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.EOSEpicAccountIdIsValid");
		
		UEOSCoreLibrary_EOSEpicAccountIdIsValid_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.EOSEpicAccountIdFromString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEOSEpicAccountId UEOSCoreLibrary::EOSEpicAccountIdFromString(const class FString& String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.EOSEpicAccountIdFromString");
		
		UEOSCoreLibrary_EOSEpicAccountIdFromString_Params params {};
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.EOSContinuanceTokenToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FContinuanceToken                           ID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      String                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UEOSCoreLibrary::EOSContinuanceTokenToString(const struct FContinuanceToken& ID, class FString* String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.EOSContinuanceTokenToString");
		
		UEOSCoreLibrary_EOSContinuanceTokenToString_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (String != nullptr)
			*String = params.String;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.EOSByteArrayToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              Array                                                      (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      String                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UEOSCoreLibrary::EOSByteArrayToString(TArray<unsigned char> Array, int32_t Length, class FString* String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.EOSByteArrayToString");
		
		UEOSCoreLibrary_EOSByteArrayToString_Params params {};
		params.Array = Array;
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (String != nullptr)
			*String = params.String;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.EOS_Success
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EOSResult                                          status                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESuccessFail                                       Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreLibrary::EOS_Success(EOSResult status, ESuccessFail* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.EOS_Success");
		
		UEOSCoreLibrary_EOS_Success_Params params {};
		params.status = status;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.EOS_Initialized
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEOSCoreLibrary::EOS_Initialized(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.EOS_Initialized");
		
		UEOSCoreLibrary_EOS_Initialized_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.CoreStringToByte
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> UEOSCoreLibrary::CoreStringToByte(const class FString& String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.CoreStringToByte");
		
		UEOSCoreLibrary_CoreStringToByte_Params params {};
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.CoreBytesToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              Data                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString UEOSCoreLibrary::CoreBytesToString(TArray<unsigned char> Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.CoreBytesToString");
		
		UEOSCoreLibrary_CoreBytesToString_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLibrary.BreakUIEventIdStruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSUIEventId                               eventId                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      outEventId                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreLibrary::BreakUIEventIdStruct(const struct FEOSUIEventId& eventId, class FString* outEventId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLibrary.BreakUIEventIdStruct");
		
		UEOSCoreLibrary_BreakUIEventIdStruct_Params params {};
		params.eventId = eventId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outEventId != nullptr)
			*outEventId = params.outEventId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreCustomInvites.GetCustomInvites
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreCustomInvites* UCoreCustomInvites::GetCustomInvites(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreCustomInvites.GetCustomInvites");
		
		UCoreCustomInvites_GetCustomInvites_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreCustomInvites.EOSCustomInvitesSetCustomInvite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSCustomInvitesSetCustomInviteOptions     Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreCustomInvites::EOSCustomInvitesSetCustomInvite(class UObject* WorldContextObject, const struct FEOSCustomInvitesSetCustomInviteOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreCustomInvites.EOSCustomInvitesSetCustomInvite");
		
		UCoreCustomInvites_EOSCustomInvitesSetCustomInvite_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreCustomInvites.EOSCustomInvitesSendCustomInvite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSCustomInvitesSendCustomInviteOptions    Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreCustomInvites::EOSCustomInvitesSendCustomInvite(class UObject* WorldContextObject, const struct FEOSCustomInvitesSendCustomInviteOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreCustomInvites.EOSCustomInvitesSendCustomInvite");
		
		UCoreCustomInvites_EOSCustomInvitesSendCustomInvite_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreCustomInvites.EOSCustomInvitesRemoveNotifyCustomInviteRejected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          ID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreCustomInvites::EOSCustomInvitesRemoveNotifyCustomInviteRejected(class UObject* WorldContextObject, const struct FEOSNotificationId& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreCustomInvites.EOSCustomInvitesRemoveNotifyCustomInviteRejected");
		
		UCoreCustomInvites_EOSCustomInvitesRemoveNotifyCustomInviteRejected_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreCustomInvites.EOSCustomInvitesRemoveNotifyCustomInviteReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          ID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreCustomInvites::EOSCustomInvitesRemoveNotifyCustomInviteReceived(class UObject* WorldContextObject, const struct FEOSNotificationId& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreCustomInvites.EOSCustomInvitesRemoveNotifyCustomInviteReceived");
		
		UCoreCustomInvites_EOSCustomInvitesRemoveNotifyCustomInviteReceived_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreCustomInvites.EOSCustomInvitesRemoveNotifyCustomInviteAccepted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          ID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreCustomInvites::EOSCustomInvitesRemoveNotifyCustomInviteAccepted(class UObject* WorldContextObject, const struct FEOSNotificationId& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreCustomInvites.EOSCustomInvitesRemoveNotifyCustomInviteAccepted");
		
		UCoreCustomInvites_EOSCustomInvitesRemoveNotifyCustomInviteAccepted_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreCustomInvites.EOSCustomInvitesFinalizeInvite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSCustomInvitesFinalizeInviteOptions      Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreCustomInvites::EOSCustomInvitesFinalizeInvite(class UObject* WorldContextObject, const struct FEOSCustomInvitesFinalizeInviteOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreCustomInvites.EOSCustomInvitesFinalizeInvite");
		
		UCoreCustomInvites_EOSCustomInvitesFinalizeInvite_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreCustomInvites.EOSCustomInvitesAddNotifyCustomInviteRejected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSCustomInvitesAddNotifyCustomInviteRejectedOptions Options                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreCustomInvites::EOSCustomInvitesAddNotifyCustomInviteRejected(class UObject* WorldContextObject, const struct FEOSCustomInvitesAddNotifyCustomInviteRejectedOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreCustomInvites.EOSCustomInvitesAddNotifyCustomInviteRejected");
		
		UCoreCustomInvites_EOSCustomInvitesAddNotifyCustomInviteRejected_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreCustomInvites.EOSCustomInvitesAddNotifyCustomInviteReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSCustomInvitesAddNotifyCustomInviteReceivedOptions Options                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreCustomInvites::EOSCustomInvitesAddNotifyCustomInviteReceived(class UObject* WorldContextObject, const struct FEOSCustomInvitesAddNotifyCustomInviteReceivedOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreCustomInvites.EOSCustomInvitesAddNotifyCustomInviteReceived");
		
		UCoreCustomInvites_EOSCustomInvitesAddNotifyCustomInviteReceived_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreCustomInvites.EOSCustomInvitesAddNotifyCustomInviteAccepted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreCustomInvites::EOSCustomInvitesAddNotifyCustomInviteAccepted(class UObject* WorldContextObject, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreCustomInvites.EOSCustomInvitesAddNotifyCustomInviteAccepted");
		
		UCoreCustomInvites_EOSCustomInvitesAddNotifyCustomInviteAccepted_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreCustomInvites.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreCustomInvites::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.CoreCustomInvites");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreEcom.GetEcom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreEcom* UCoreEcom::GetEcom(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreEcom.GetEcom");
		
		UCoreEcom_GetEcom_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreEcom.EOSEcomTransaction_GetTransactionId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomHTransaction                        Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutTransactionId                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreEcom::EOSEcomTransaction_GetTransactionId(class UObject* WorldContextObject, const struct FEOSEcomHTransaction& Handle, class FString* OutTransactionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreEcom.EOSEcomTransaction_GetTransactionId");
		
		UCoreEcom_EOSEcomTransaction_GetTransactionId_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTransactionId != nullptr)
			*OutTransactionId = params.OutTransactionId;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreEcom.EOSEcomTransaction_GetEntitlementsCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomHTransaction                        Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomTransactionGetEntitlementsCountOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UCoreEcom::EOSEcomTransaction_GetEntitlementsCount(class UObject* WorldContextObject, const struct FEOSEcomHTransaction& Handle, const struct FEOSEcomTransactionGetEntitlementsCountOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreEcom.EOSEcomTransaction_GetEntitlementsCount");
		
		UCoreEcom_EOSEcomTransaction_GetEntitlementsCount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreEcom.EOSEcomTransaction_CopyEntitlementByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomHTransaction                        Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomTransactionCopyEntitlementByIndexOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomEntitlement                         OutEntitlement                                             (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreEcom::EOSEcomTransaction_CopyEntitlementByIndex(class UObject* WorldContextObject, const struct FEOSEcomHTransaction& Handle, const struct FEOSEcomTransactionCopyEntitlementByIndexOptions& Options, struct FEOSEcomEntitlement* OutEntitlement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreEcom.EOSEcomTransaction_CopyEntitlementByIndex");
		
		UCoreEcom_EOSEcomTransaction_CopyEntitlementByIndex_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEntitlement != nullptr)
			*OutEntitlement = params.OutEntitlement;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreEcom.EOSEcomRedeemEntitlements
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomRedeemEntitlementsOptions           Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreEcom::EOSEcomRedeemEntitlements(class UObject* WorldContextObject, const struct FEOSEcomRedeemEntitlementsOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreEcom.EOSEcomRedeemEntitlements");
		
		UCoreEcom_EOSEcomRedeemEntitlements_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreEcom.EOSEcomQueryOwnershipToken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomQueryOwnershipTokenOptions          Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreEcom::EOSEcomQueryOwnershipToken(class UObject* WorldContextObject, const struct FEOSEcomQueryOwnershipTokenOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreEcom.EOSEcomQueryOwnershipToken");
		
		UCoreEcom_EOSEcomQueryOwnershipToken_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreEcom.EOSEcomQueryOwnership
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomQueryOwnershipOptions               Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreEcom::EOSEcomQueryOwnership(class UObject* WorldContextObject, const struct FEOSEcomQueryOwnershipOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreEcom.EOSEcomQueryOwnership");
		
		UCoreEcom_EOSEcomQueryOwnership_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreEcom.EOSEcomQueryOffers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomQueryOffersOptions                  Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreEcom::EOSEcomQueryOffers(class UObject* WorldContextObject, const struct FEOSEcomQueryOffersOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreEcom.EOSEcomQueryOffers");
		
		UCoreEcom_EOSEcomQueryOffers_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreEcom.EOSEcomQueryEntitlements
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomQueryEntitlementsOptions            Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreEcom::EOSEcomQueryEntitlements(class UObject* WorldContextObject, const struct FEOSEcomQueryEntitlementsOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreEcom.EOSEcomQueryEntitlements");
		
		UCoreEcom_EOSEcomQueryEntitlements_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreEcom.EOSEcomGetTransactionCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomGetTransactionCountOptions          Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UCoreEcom::EOSEcomGetTransactionCount(class UObject* WorldContextObject, const struct FEOSEcomGetTransactionCountOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreEcom.EOSEcomGetTransactionCount");
		
		UCoreEcom_EOSEcomGetTransactionCount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreEcom.EOSEcomGetOfferItemCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomGetOfferItemCountOptions            Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	int32_t UCoreEcom::EOSEcomGetOfferItemCount(class UObject* WorldContextObject, const struct FEOSEcomGetOfferItemCountOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreEcom.EOSEcomGetOfferItemCount");
		
		UCoreEcom_EOSEcomGetOfferItemCount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreEcom.EOSEcomGetOfferImageInfoCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomGetOfferImageInfoCountOptions       Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	int32_t UCoreEcom::EOSEcomGetOfferImageInfoCount(class UObject* WorldContextObject, const struct FEOSEcomGetOfferImageInfoCountOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreEcom.EOSEcomGetOfferImageInfoCount");
		
		UCoreEcom_EOSEcomGetOfferImageInfoCount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreEcom.EOSEcomGetOfferCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomGetOfferCountOptions                Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UCoreEcom::EOSEcomGetOfferCount(class UObject* WorldContextObject, const struct FEOSEcomGetOfferCountOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreEcom.EOSEcomGetOfferCount");
		
		UCoreEcom_EOSEcomGetOfferCount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreEcom.EOSEcomGetItemReleaseCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomGetItemReleaseCountOptions          Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	int32_t UCoreEcom::EOSEcomGetItemReleaseCount(class UObject* WorldContextObject, const struct FEOSEcomGetItemReleaseCountOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreEcom.EOSEcomGetItemReleaseCount");
		
		UCoreEcom_EOSEcomGetItemReleaseCount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreEcom.EOSEcomGetItemImageInfoCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomGetItemImageInfoCountOptions        Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	int32_t UCoreEcom::EOSEcomGetItemImageInfoCount(class UObject* WorldContextObject, const struct FEOSEcomGetItemImageInfoCountOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreEcom.EOSEcomGetItemImageInfoCount");
		
		UCoreEcom_EOSEcomGetItemImageInfoCount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreEcom.EOSEcomGetEntitlementsCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomGetEntitlementsCountOptions         Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UCoreEcom::EOSEcomGetEntitlementsCount(class UObject* WorldContextObject, const struct FEOSEcomGetEntitlementsCountOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreEcom.EOSEcomGetEntitlementsCount");
		
		UCoreEcom_EOSEcomGetEntitlementsCount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreEcom.EOSEcomGetEntitlementsByNameCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomGetEntitlementsByNameCountOptions   Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	int32_t UCoreEcom::EOSEcomGetEntitlementsByNameCount(class UObject* WorldContextObject, const struct FEOSEcomGetEntitlementsByNameCountOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreEcom.EOSEcomGetEntitlementsByNameCount");
		
		UCoreEcom_EOSEcomGetEntitlementsByNameCount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreEcom.EOSEcomCopyTransactionByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomCopyTransactionByIndexOptions       Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomHTransaction                        OutTransaction                                             (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreEcom::EOSEcomCopyTransactionByIndex(class UObject* WorldContextObject, const struct FEOSEcomCopyTransactionByIndexOptions& Options, struct FEOSEcomHTransaction* OutTransaction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreEcom.EOSEcomCopyTransactionByIndex");
		
		UCoreEcom_EOSEcomCopyTransactionByIndex_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTransaction != nullptr)
			*OutTransaction = params.OutTransaction;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreEcom.EOSEcomCopyTransactionById
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomCopyTransactionByIdOptions          Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomHTransaction                        OutTransaction                                             (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreEcom::EOSEcomCopyTransactionById(class UObject* WorldContextObject, const struct FEOSEcomCopyTransactionByIdOptions& Options, struct FEOSEcomHTransaction* OutTransaction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreEcom.EOSEcomCopyTransactionById");
		
		UCoreEcom_EOSEcomCopyTransactionById_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTransaction != nullptr)
			*OutTransaction = params.OutTransaction;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreEcom.EOSEcomCopyOfferItemByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomCopyOfferItemByIndexOptions         Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomCatalogItem                         OutItem                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreEcom::EOSEcomCopyOfferItemByIndex(class UObject* WorldContextObject, const struct FEOSEcomCopyOfferItemByIndexOptions& Options, struct FEOSEcomCatalogItem* OutItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreEcom.EOSEcomCopyOfferItemByIndex");
		
		UCoreEcom_EOSEcomCopyOfferItemByIndex_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutItem != nullptr)
			*OutItem = params.OutItem;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreEcom.EOSEcomCopyOfferImageInfoByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomCopyOfferImageInfoByIndexOptions    Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomKeyImageInfo                        OutImageInfo                                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreEcom::EOSEcomCopyOfferImageInfoByIndex(class UObject* WorldContextObject, const struct FEOSEcomCopyOfferImageInfoByIndexOptions& Options, struct FEOSEcomKeyImageInfo* OutImageInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreEcom.EOSEcomCopyOfferImageInfoByIndex");
		
		UCoreEcom_EOSEcomCopyOfferImageInfoByIndex_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutImageInfo != nullptr)
			*OutImageInfo = params.OutImageInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreEcom.EOSEcomCopyOfferByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomCopyOfferByIndexOptions             Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomCatalogOffer                        OutOffer                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreEcom::EOSEcomCopyOfferByIndex(class UObject* WorldContextObject, const struct FEOSEcomCopyOfferByIndexOptions& Options, struct FEOSEcomCatalogOffer* OutOffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreEcom.EOSEcomCopyOfferByIndex");
		
		UCoreEcom_EOSEcomCopyOfferByIndex_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutOffer != nullptr)
			*OutOffer = params.OutOffer;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreEcom.EOSEcomCopyOfferById
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomCopyOfferByIdOptions                Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomCatalogOffer                        OutOffer                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreEcom::EOSEcomCopyOfferById(class UObject* WorldContextObject, const struct FEOSEcomCopyOfferByIdOptions& Options, struct FEOSEcomCatalogOffer* OutOffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreEcom.EOSEcomCopyOfferById");
		
		UCoreEcom_EOSEcomCopyOfferById_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutOffer != nullptr)
			*OutOffer = params.OutOffer;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreEcom.EOSEcomCopyItemReleaseByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomCopyItemReleaseByIndexOptions       Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomCatalogRelease                      OutRelease                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreEcom::EOSEcomCopyItemReleaseByIndex(class UObject* WorldContextObject, const struct FEOSEcomCopyItemReleaseByIndexOptions& Options, struct FEOSEcomCatalogRelease* OutRelease)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreEcom.EOSEcomCopyItemReleaseByIndex");
		
		UCoreEcom_EOSEcomCopyItemReleaseByIndex_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutRelease != nullptr)
			*OutRelease = params.OutRelease;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreEcom.EOSEcomCopyItemImageInfoByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomCopyItemImageInfoByIndexOptions     Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomKeyImageInfo                        OutImageInfo                                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreEcom::EOSEcomCopyItemImageInfoByIndex(class UObject* WorldContextObject, const struct FEOSEcomCopyItemImageInfoByIndexOptions& Options, struct FEOSEcomKeyImageInfo* OutImageInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreEcom.EOSEcomCopyItemImageInfoByIndex");
		
		UCoreEcom_EOSEcomCopyItemImageInfoByIndex_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutImageInfo != nullptr)
			*OutImageInfo = params.OutImageInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreEcom.EOSEcomCopyItemById
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomCopyItemByIdOptions                 Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomCatalogItem                         OutItem                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreEcom::EOSEcomCopyItemById(class UObject* WorldContextObject, const struct FEOSEcomCopyItemByIdOptions& Options, struct FEOSEcomCatalogItem* OutItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreEcom.EOSEcomCopyItemById");
		
		UCoreEcom_EOSEcomCopyItemById_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutItem != nullptr)
			*OutItem = params.OutItem;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreEcom.EOSEcomCopyEntitlementByNameAndIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomCopyEntitlementByNameAndIndexOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomEntitlement                         OutEntitlement                                             (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreEcom::EOSEcomCopyEntitlementByNameAndIndex(class UObject* WorldContextObject, const struct FEOSEcomCopyEntitlementByNameAndIndexOptions& Options, struct FEOSEcomEntitlement* OutEntitlement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreEcom.EOSEcomCopyEntitlementByNameAndIndex");
		
		UCoreEcom_EOSEcomCopyEntitlementByNameAndIndex_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEntitlement != nullptr)
			*OutEntitlement = params.OutEntitlement;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreEcom.EOSEcomCopyEntitlementByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomCopyEntitlementByIndexOptions       Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomEntitlement                         OutEntitlement                                             (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreEcom::EOSEcomCopyEntitlementByIndex(class UObject* WorldContextObject, const struct FEOSEcomCopyEntitlementByIndexOptions& Options, struct FEOSEcomEntitlement* OutEntitlement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreEcom.EOSEcomCopyEntitlementByIndex");
		
		UCoreEcom_EOSEcomCopyEntitlementByIndex_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEntitlement != nullptr)
			*OutEntitlement = params.OutEntitlement;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreEcom.EOSEcomCopyEntitlementById
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomCopyEntitlementByIdOptions          Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomEntitlement                         OutEntitlement                                             (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreEcom::EOSEcomCopyEntitlementById(class UObject* WorldContextObject, const struct FEOSEcomCopyEntitlementByIdOptions& Options, struct FEOSEcomEntitlement* OutEntitlement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreEcom.EOSEcomCopyEntitlementById");
		
		UCoreEcom_EOSEcomCopyEntitlementById_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEntitlement != nullptr)
			*OutEntitlement = params.OutEntitlement;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreEcom.EOSEcomCheckout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomCheckoutOptions                     Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreEcom::EOSEcomCheckout(class UObject* WorldContextObject, const struct FEOSEcomCheckoutOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreEcom.EOSEcomCheckout");
		
		UCoreEcom_EOSEcomCheckout_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreEcom.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreEcom::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.CoreEcom");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreEcomQueryOwnership.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSEcomQueryOwnershipCallbackInfo          Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreEcomQueryOwnership::HandleCallback(const struct FEOSEcomQueryOwnershipCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreEcomQueryOwnership.HandleCallback");
		
		UEOSCoreEcomQueryOwnership_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreEcomQueryOwnership.EOSEcomQueryOwnershipAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomQueryOwnershipOptions               Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreEcomQueryOwnership* UEOSCoreEcomQueryOwnership::EOSEcomQueryOwnershipAsync(class UObject* WorldContextObject, const struct FEOSEcomQueryOwnershipOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreEcomQueryOwnership.EOSEcomQueryOwnershipAsync");
		
		UEOSCoreEcomQueryOwnership_EOSEcomQueryOwnershipAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreEcomQueryOwnership.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreEcomQueryOwnership::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreEcomQueryOwnership");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreEcomQueryOwnershipToken.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSEcomQueryOwnershipTokenCallbackInfo     Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreEcomQueryOwnershipToken::HandleCallback(const struct FEOSEcomQueryOwnershipTokenCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreEcomQueryOwnershipToken.HandleCallback");
		
		UEOSCoreEcomQueryOwnershipToken_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreEcomQueryOwnershipToken.EOSEcomQueryOwnershipTokenAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomQueryOwnershipTokenOptions          Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreEcomQueryOwnershipToken* UEOSCoreEcomQueryOwnershipToken::EOSEcomQueryOwnershipTokenAsync(class UObject* WorldContextObject, const struct FEOSEcomQueryOwnershipTokenOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreEcomQueryOwnershipToken.EOSEcomQueryOwnershipTokenAsync");
		
		UEOSCoreEcomQueryOwnershipToken_EOSEcomQueryOwnershipTokenAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreEcomQueryOwnershipToken.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreEcomQueryOwnershipToken::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreEcomQueryOwnershipToken");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreEcomQueryEntitlements.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSEcomQueryEntitlementsCallbackInfo       Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreEcomQueryEntitlements::HandleCallback(const struct FEOSEcomQueryEntitlementsCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreEcomQueryEntitlements.HandleCallback");
		
		UEOSCoreEcomQueryEntitlements_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreEcomQueryEntitlements.EOSEcomQueryEntitlementsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomQueryEntitlementsOptions            Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreEcomQueryEntitlements* UEOSCoreEcomQueryEntitlements::EOSEcomQueryEntitlementsAsync(class UObject* WorldContextObject, const struct FEOSEcomQueryEntitlementsOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreEcomQueryEntitlements.EOSEcomQueryEntitlementsAsync");
		
		UEOSCoreEcomQueryEntitlements_EOSEcomQueryEntitlementsAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreEcomQueryEntitlements.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreEcomQueryEntitlements::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreEcomQueryEntitlements");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreEcomQueryOffers.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSEcomQueryOffersCallbackInfo             Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreEcomQueryOffers::HandleCallback(const struct FEOSEcomQueryOffersCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreEcomQueryOffers.HandleCallback");
		
		UEOSCoreEcomQueryOffers_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreEcomQueryOffers.EOSEcomQueryOffersAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomQueryOffersOptions                  Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreEcomQueryOffers* UEOSCoreEcomQueryOffers::EOSEcomQueryOffersAsync(class UObject* WorldContextObject, const struct FEOSEcomQueryOffersOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreEcomQueryOffers.EOSEcomQueryOffersAsync");
		
		UEOSCoreEcomQueryOffers_EOSEcomQueryOffersAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreEcomQueryOffers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreEcomQueryOffers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreEcomQueryOffers");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreEcomCheckout.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSEcomCheckoutCallbackInfo                Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreEcomCheckout::HandleCallback(const struct FEOSEcomCheckoutCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreEcomCheckout.HandleCallback");
		
		UEOSCoreEcomCheckout_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreEcomCheckout.EOSEcomCheckoutAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomCheckoutOptions                     Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreEcomCheckout* UEOSCoreEcomCheckout::EOSEcomCheckoutAsync(class UObject* WorldContextObject, const struct FEOSEcomCheckoutOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreEcomCheckout.EOSEcomCheckoutAsync");
		
		UEOSCoreEcomCheckout_EOSEcomCheckoutAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreEcomCheckout.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreEcomCheckout::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreEcomCheckout");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreEcomRedeemEntitlements.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSEcomRedeemEntitlementsCallbackInfo      Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreEcomRedeemEntitlements::HandleCallback(const struct FEOSEcomRedeemEntitlementsCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreEcomRedeemEntitlements.HandleCallback");
		
		UEOSCoreEcomRedeemEntitlements_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreEcomRedeemEntitlements.EOSEcomRedeemEntitlementsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSEcomRedeemEntitlementsOptions           Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreEcomRedeemEntitlements* UEOSCoreEcomRedeemEntitlements::EOSEcomRedeemEntitlementsAsync(class UObject* WorldContextObject, const struct FEOSEcomRedeemEntitlementsOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreEcomRedeemEntitlements.EOSEcomRedeemEntitlementsAsync");
		
		UEOSCoreEcomRedeemEntitlements_EOSEcomRedeemEntitlementsAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreEcomRedeemEntitlements.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreEcomRedeemEntitlements::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreEcomRedeemEntitlements");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreFriends.GetFriends
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreFriends* UCoreFriends::GetFriends(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreFriends.GetFriends");
		
		UCoreFriends_GetFriends_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreFriends.EOSFriendsSendInvite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSFriendsSendInviteOptions                Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreFriends::EOSFriendsSendInvite(class UObject* WorldContextObject, const struct FEOSFriendsSendInviteOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreFriends.EOSFriendsSendInvite");
		
		UCoreFriends_EOSFriendsSendInvite_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreFriends.EOSFriendsRemoveNotifyFriendsUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          ID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreFriends::EOSFriendsRemoveNotifyFriendsUpdate(class UObject* WorldContextObject, const struct FEOSNotificationId& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreFriends.EOSFriendsRemoveNotifyFriendsUpdate");
		
		UCoreFriends_EOSFriendsRemoveNotifyFriendsUpdate_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreFriends.EOSFriendsRejectInvite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSFriendsRejectInviteOptions              Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreFriends::EOSFriendsRejectInvite(class UObject* WorldContextObject, const struct FEOSFriendsRejectInviteOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreFriends.EOSFriendsRejectInvite");
		
		UCoreFriends_EOSFriendsRejectInvite_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreFriends.EOSFriendsQueryFriends
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSFriendsQueryFriendsOptions              Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreFriends::EOSFriendsQueryFriends(class UObject* WorldContextObject, const struct FEOSFriendsQueryFriendsOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreFriends.EOSFriendsQueryFriends");
		
		UCoreFriends_EOSFriendsQueryFriends_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreFriends.EOSFriendsGetStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSFriendsGetStatusOptions                 Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EEOSEFriendsStatus UCoreFriends::EOSFriendsGetStatus(class UObject* WorldContextObject, const struct FEOSFriendsGetStatusOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreFriends.EOSFriendsGetStatus");
		
		UCoreFriends_EOSFriendsGetStatus_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreFriends.EOSFriendsGetFriendsCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSFriendsGetFriendsCountOptions           Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UCoreFriends::EOSFriendsGetFriendsCount(class UObject* WorldContextObject, const struct FEOSFriendsGetFriendsCountOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreFriends.EOSFriendsGetFriendsCount");
		
		UCoreFriends_EOSFriendsGetFriendsCount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreFriends.EOSFriendsGetFriendAtIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSFriendsGetFriendAtIndexOptions          Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSEpicAccountId UCoreFriends::EOSFriendsGetFriendAtIndex(class UObject* WorldContextObject, const struct FEOSFriendsGetFriendAtIndexOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreFriends.EOSFriendsGetFriendAtIndex");
		
		UCoreFriends_EOSFriendsGetFriendAtIndex_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreFriends.EOSFriendsAddNotifyFriendsUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreFriends::EOSFriendsAddNotifyFriendsUpdate(class UObject* WorldContextObject, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreFriends.EOSFriendsAddNotifyFriendsUpdate");
		
		UCoreFriends_EOSFriendsAddNotifyFriendsUpdate_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreFriends.EOSFriendsAcceptInvite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSFriendsAcceptInviteOptions              Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreFriends::EOSFriendsAcceptInvite(class UObject* WorldContextObject, const struct FEOSFriendsAcceptInviteOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreFriends.EOSFriendsAcceptInvite");
		
		UCoreFriends_EOSFriendsAcceptInvite_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreFriends.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreFriends::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.CoreFriends");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreFriendsQueryFriends.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSFriendsQueryFriendsCallbackInfo         Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreFriendsQueryFriends::HandleCallback(const struct FEOSFriendsQueryFriendsCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreFriendsQueryFriends.HandleCallback");
		
		UEOSCoreFriendsQueryFriends_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreFriendsQueryFriends.EOSFriendsQueryFriendsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSFriendsQueryFriendsOptions              Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreFriendsQueryFriends* UEOSCoreFriendsQueryFriends::EOSFriendsQueryFriendsAsync(class UObject* WorldContextObject, const struct FEOSFriendsQueryFriendsOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreFriendsQueryFriends.EOSFriendsQueryFriendsAsync");
		
		UEOSCoreFriendsQueryFriends_EOSFriendsQueryFriendsAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreFriendsQueryFriends.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreFriendsQueryFriends::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreFriendsQueryFriends");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreFriendsSendInvite.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSFriendsSendInviteCallbackInfo           Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreFriendsSendInvite::HandleCallback(const struct FEOSFriendsSendInviteCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreFriendsSendInvite.HandleCallback");
		
		UEOSCoreFriendsSendInvite_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreFriendsSendInvite.EOSFriendsSendInviteAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSFriendsSendInviteOptions                Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreFriendsSendInvite* UEOSCoreFriendsSendInvite::EOSFriendsSendInviteAsync(class UObject* WorldContextObject, const struct FEOSFriendsSendInviteOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreFriendsSendInvite.EOSFriendsSendInviteAsync");
		
		UEOSCoreFriendsSendInvite_EOSFriendsSendInviteAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreFriendsSendInvite.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreFriendsSendInvite::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreFriendsSendInvite");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreFriendsAcceptInvite.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSFriendsAcceptInviteCallbackInfo         Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreFriendsAcceptInvite::HandleCallback(const struct FEOSFriendsAcceptInviteCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreFriendsAcceptInvite.HandleCallback");
		
		UEOSCoreFriendsAcceptInvite_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreFriendsAcceptInvite.EOSFriendsAcceptInviteAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSFriendsAcceptInviteOptions              Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreFriendsAcceptInvite* UEOSCoreFriendsAcceptInvite::EOSFriendsAcceptInviteAsync(class UObject* WorldContextObject, const struct FEOSFriendsAcceptInviteOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreFriendsAcceptInvite.EOSFriendsAcceptInviteAsync");
		
		UEOSCoreFriendsAcceptInvite_EOSFriendsAcceptInviteAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreFriendsAcceptInvite.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreFriendsAcceptInvite::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreFriendsAcceptInvite");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreFriendsRejectInvite.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSFriendsRejectInviteCallbackInfo         Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreFriendsRejectInvite::HandleCallback(const struct FEOSFriendsRejectInviteCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreFriendsRejectInvite.HandleCallback");
		
		UEOSCoreFriendsRejectInvite_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreFriendsRejectInvite.EOSFriendsRejectInviteAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSFriendsRejectInviteOptions              Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreFriendsRejectInvite* UEOSCoreFriendsRejectInvite::EOSFriendsRejectInviteAsync(class UObject* WorldContextObject, const struct FEOSFriendsRejectInviteOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreFriendsRejectInvite.EOSFriendsRejectInviteAsync");
		
		UEOSCoreFriendsRejectInvite_EOSFriendsRejectInviteAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreFriendsRejectInvite.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreFriendsRejectInvite::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreFriendsRejectInvite");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLeaderboards.GetLeaderboards
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreLeaderboards* UCoreLeaderboards::GetLeaderboards(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLeaderboards.GetLeaderboards");
		
		UCoreLeaderboards_GetLeaderboards_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLeaderboards.EOSLeaderboardsQueryLeaderboardUserScores
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLeaderboardsQueryLeaderboardUserScoresOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreLeaderboards::EOSLeaderboardsQueryLeaderboardUserScores(class UObject* WorldContextObject, const struct FEOSLeaderboardsQueryLeaderboardUserScoresOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLeaderboards.EOSLeaderboardsQueryLeaderboardUserScores");
		
		UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardUserScores_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLeaderboards.EOSLeaderboardsQueryLeaderboardRanks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLeaderboardsQueryLeaderboardRanksOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreLeaderboards::EOSLeaderboardsQueryLeaderboardRanks(class UObject* WorldContextObject, const struct FEOSLeaderboardsQueryLeaderboardRanksOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLeaderboards.EOSLeaderboardsQueryLeaderboardRanks");
		
		UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardRanks_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLeaderboards.EOSLeaderboardsQueryLeaderboardDefinitions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLeaderboardsQueryLeaderboardDefinitionsOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreLeaderboards::EOSLeaderboardsQueryLeaderboardDefinitions(class UObject* WorldContextObject, const struct FEOSLeaderboardsQueryLeaderboardDefinitionsOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLeaderboards.EOSLeaderboardsQueryLeaderboardDefinitions");
		
		UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardDefinitions_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLeaderboards.EOSLeaderboardsGetLeaderboardUserScoreCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLeaderboardsGetLeaderboardUserScoreCountOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	int32_t UCoreLeaderboards::EOSLeaderboardsGetLeaderboardUserScoreCount(class UObject* WorldContextObject, const struct FEOSLeaderboardsGetLeaderboardUserScoreCountOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLeaderboards.EOSLeaderboardsGetLeaderboardUserScoreCount");
		
		UCoreLeaderboards_EOSLeaderboardsGetLeaderboardUserScoreCount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLeaderboards.EOSLeaderboardsGetLeaderboardRecordCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLeaderboardsGetLeaderboardRecordCountOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UCoreLeaderboards::EOSLeaderboardsGetLeaderboardRecordCount(class UObject* WorldContextObject, const struct FEOSLeaderboardsGetLeaderboardRecordCountOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLeaderboards.EOSLeaderboardsGetLeaderboardRecordCount");
		
		UCoreLeaderboards_EOSLeaderboardsGetLeaderboardRecordCount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLeaderboards.EOSLeaderboardsGetLeaderboardDefinitionCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLeaderboardsGetLeaderboardDefinitionCountOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UCoreLeaderboards::EOSLeaderboardsGetLeaderboardDefinitionCount(class UObject* WorldContextObject, const struct FEOSLeaderboardsGetLeaderboardDefinitionCountOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLeaderboards.EOSLeaderboardsGetLeaderboardDefinitionCount");
		
		UCoreLeaderboards_EOSLeaderboardsGetLeaderboardDefinitionCount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLeaderboards.EOSLeaderboardsCopyLeaderboardUserScoreByUserId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLeaderboardsCopyLeaderboardUserScoreByUserIdOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FEOSLeaderboardsLeaderboardUserScore        OutLeaderboardUserScore                                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLeaderboards::EOSLeaderboardsCopyLeaderboardUserScoreByUserId(class UObject* WorldContextObject, const struct FEOSLeaderboardsCopyLeaderboardUserScoreByUserIdOptions& Options, struct FEOSLeaderboardsLeaderboardUserScore* OutLeaderboardUserScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLeaderboards.EOSLeaderboardsCopyLeaderboardUserScoreByUserId");
		
		UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByUserId_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLeaderboardUserScore != nullptr)
			*OutLeaderboardUserScore = params.OutLeaderboardUserScore;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLeaderboards.EOSLeaderboardsCopyLeaderboardUserScoreByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLeaderboardsCopyLeaderboardUserScoreByIndexOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FEOSLeaderboardsLeaderboardUserScore        OutLeaderboardUserScore                                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLeaderboards::EOSLeaderboardsCopyLeaderboardUserScoreByIndex(class UObject* WorldContextObject, const struct FEOSLeaderboardsCopyLeaderboardUserScoreByIndexOptions& Options, struct FEOSLeaderboardsLeaderboardUserScore* OutLeaderboardUserScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLeaderboards.EOSLeaderboardsCopyLeaderboardUserScoreByIndex");
		
		UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByIndex_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLeaderboardUserScore != nullptr)
			*OutLeaderboardUserScore = params.OutLeaderboardUserScore;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLeaderboards.EOSLeaderboardsCopyLeaderboardRecordByUserId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLeaderboardsCopyLeaderboardRecordByUserIdOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSLeaderboardsLeaderboardRecord           OutLeaderboardRecord                                       (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLeaderboards::EOSLeaderboardsCopyLeaderboardRecordByUserId(class UObject* WorldContextObject, const struct FEOSLeaderboardsCopyLeaderboardRecordByUserIdOptions& Options, struct FEOSLeaderboardsLeaderboardRecord* OutLeaderboardRecord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLeaderboards.EOSLeaderboardsCopyLeaderboardRecordByUserId");
		
		UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByUserId_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLeaderboardRecord != nullptr)
			*OutLeaderboardRecord = params.OutLeaderboardRecord;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLeaderboards.EOSLeaderboardsCopyLeaderboardRecordByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLeaderboardsCopyLeaderboardRecordByIndexOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSLeaderboardsLeaderboardRecord           OutLeaderboardRecord                                       (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLeaderboards::EOSLeaderboardsCopyLeaderboardRecordByIndex(class UObject* WorldContextObject, const struct FEOSLeaderboardsCopyLeaderboardRecordByIndexOptions& Options, struct FEOSLeaderboardsLeaderboardRecord* OutLeaderboardRecord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLeaderboards.EOSLeaderboardsCopyLeaderboardRecordByIndex");
		
		UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByIndex_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLeaderboardRecord != nullptr)
			*OutLeaderboardRecord = params.OutLeaderboardRecord;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLeaderboards.EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardIdOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FEOSLeaderboardsDefinition                  OutLeaderboardDefinition                                   (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLeaderboards::EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId(class UObject* WorldContextObject, const struct FEOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardIdOptions& Options, struct FEOSLeaderboardsDefinition* OutLeaderboardDefinition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLeaderboards.EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId");
		
		UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLeaderboardDefinition != nullptr)
			*OutLeaderboardDefinition = params.OutLeaderboardDefinition;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLeaderboards.EOSLeaderboardsCopyLeaderboardDefinitionByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLeaderboardsCopyLeaderboardDefinitionByIndexOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSLeaderboardsDefinition                  OutLeaderboardDefinition                                   (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLeaderboards::EOSLeaderboardsCopyLeaderboardDefinitionByIndex(class UObject* WorldContextObject, const struct FEOSLeaderboardsCopyLeaderboardDefinitionByIndexOptions& Options, struct FEOSLeaderboardsDefinition* OutLeaderboardDefinition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLeaderboards.EOSLeaderboardsCopyLeaderboardDefinitionByIndex");
		
		UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByIndex_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLeaderboardDefinition != nullptr)
			*OutLeaderboardDefinition = params.OutLeaderboardDefinition;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreLeaderboards.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreLeaderboards::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.CoreLeaderboards");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLeaderboardsQueryLeaderboardDefinitions.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSLeaderboardsOnQueryLeaderboardDefinitionsCompleteCallbackInfo Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreLeaderboardsQueryLeaderboardDefinitions::HandleCallback(const struct FEOSLeaderboardsOnQueryLeaderboardDefinitionsCompleteCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLeaderboardsQueryLeaderboardDefinitions.HandleCallback");
		
		UEOSCoreLeaderboardsQueryLeaderboardDefinitions_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLeaderboardsQueryLeaderboardDefinitions.EOSLeaderboardsQueryLeaderboardDefinitionsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLeaderboardsQueryLeaderboardDefinitionsOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreLeaderboardsQueryLeaderboardDefinitions* UEOSCoreLeaderboardsQueryLeaderboardDefinitions::EOSLeaderboardsQueryLeaderboardDefinitionsAsync(class UObject* WorldContextObject, const struct FEOSLeaderboardsQueryLeaderboardDefinitionsOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLeaderboardsQueryLeaderboardDefinitions.EOSLeaderboardsQueryLeaderboardDefinitionsAsync");
		
		UEOSCoreLeaderboardsQueryLeaderboardDefinitions_EOSLeaderboardsQueryLeaderboardDefinitionsAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreLeaderboardsQueryLeaderboardDefinitions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreLeaderboardsQueryLeaderboardDefinitions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreLeaderboardsQueryLeaderboardDefinitions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLeaderboardsQueryLeaderboardRanks.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSLeaderboardsOnQueryLeaderboardRanksCompleteCallbackInfo Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreLeaderboardsQueryLeaderboardRanks::HandleCallback(const struct FEOSLeaderboardsOnQueryLeaderboardRanksCompleteCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLeaderboardsQueryLeaderboardRanks.HandleCallback");
		
		UEOSCoreLeaderboardsQueryLeaderboardRanks_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLeaderboardsQueryLeaderboardRanks.EOSLeaderboardsQueryLeaderboardRanksAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLeaderboardsQueryLeaderboardRanksOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreLeaderboardsQueryLeaderboardRanks* UEOSCoreLeaderboardsQueryLeaderboardRanks::EOSLeaderboardsQueryLeaderboardRanksAsync(class UObject* WorldContextObject, const struct FEOSLeaderboardsQueryLeaderboardRanksOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLeaderboardsQueryLeaderboardRanks.EOSLeaderboardsQueryLeaderboardRanksAsync");
		
		UEOSCoreLeaderboardsQueryLeaderboardRanks_EOSLeaderboardsQueryLeaderboardRanksAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreLeaderboardsQueryLeaderboardRanks.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreLeaderboardsQueryLeaderboardRanks::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreLeaderboardsQueryLeaderboardRanks");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLeaderboardsQueryLeaderboardUserScores.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSLeaderboardsOnQueryLeaderboardUserScoresCompleteCallbackInfo Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreLeaderboardsQueryLeaderboardUserScores::HandleCallback(const struct FEOSLeaderboardsOnQueryLeaderboardUserScoresCompleteCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLeaderboardsQueryLeaderboardUserScores.HandleCallback");
		
		UEOSCoreLeaderboardsQueryLeaderboardUserScores_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLeaderboardsQueryLeaderboardUserScores.EOSLeaderboardsQueryLeaderboardUserScoresAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLeaderboardsQueryLeaderboardUserScoresOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreLeaderboardsQueryLeaderboardUserScores* UEOSCoreLeaderboardsQueryLeaderboardUserScores::EOSLeaderboardsQueryLeaderboardUserScoresAsync(class UObject* WorldContextObject, const struct FEOSLeaderboardsQueryLeaderboardUserScoresOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLeaderboardsQueryLeaderboardUserScores.EOSLeaderboardsQueryLeaderboardUserScoresAsync");
		
		UEOSCoreLeaderboardsQueryLeaderboardUserScores_EOSLeaderboardsQueryLeaderboardUserScoresAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreLeaderboardsQueryLeaderboardUserScores.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreLeaderboardsQueryLeaderboardUserScores::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreLeaderboardsQueryLeaderboardUserScores");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.GetLobby
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreLobby* UCoreLobby::GetLobby(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.GetLobby");
		
		UCoreLobby_GetLobby_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyUpdateLobbyModification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyUpdateLobbyModificationOptions     Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbyModification                      OutLobbyModificationHandle                                 (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLobby::EOSLobbyUpdateLobbyModification(class UObject* WorldContextObject, const struct FEOSLobbyUpdateLobbyModificationOptions& Options, struct FEOSHLobbyModification* OutLobbyModificationHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyUpdateLobbyModification");
		
		UCoreLobby_EOSLobbyUpdateLobbyModification_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLobbyModificationHandle != nullptr)
			*OutLobbyModificationHandle = params.OutLobbyModificationHandle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyUpdateLobby
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyUpdateLobbyOptions                 Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreLobby::EOSLobbyUpdateLobby(class UObject* WorldContextObject, const struct FEOSLobbyUpdateLobbyOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyUpdateLobby");
		
		UCoreLobby_EOSLobbyUpdateLobby_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbySendInvite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbySendInviteOptions                  Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreLobby::EOSLobbySendInvite(class UObject* WorldContextObject, const struct FEOSLobbySendInviteOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbySendInvite");
		
		UCoreLobby_EOSLobbySendInvite_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbySearchSetTargetUserId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbySearch                            Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbySearchSetTargetUserIdOptions       Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLobby::EOSLobbySearchSetTargetUserId(class UObject* WorldContextObject, const struct FEOSHLobbySearch& Handle, const struct FEOSLobbySearchSetTargetUserIdOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbySearchSetTargetUserId");
		
		UCoreLobby_EOSLobbySearchSetTargetUserId_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbySearchSetParameterString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbySearch                            Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEOSEComparisonOp                                  ComparisonOp                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLobby::EOSLobbySearchSetParameterString(class UObject* WorldContextObject, const struct FEOSHLobbySearch& Handle, const class FString& Key, const class FString& Value, EEOSEComparisonOp ComparisonOp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbySearchSetParameterString");
		
		UCoreLobby_EOSLobbySearchSetParameterString_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Key = Key;
		params.Value = Value;
		params.ComparisonOp = ComparisonOp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbySearchSetParameterInt64
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbySearch                            Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEOSEComparisonOp                                  ComparisonOp                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLobby::EOSLobbySearchSetParameterInt64(class UObject* WorldContextObject, const struct FEOSHLobbySearch& Handle, const class FString& Key, const class FString& Value, EEOSEComparisonOp ComparisonOp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbySearchSetParameterInt64");
		
		UCoreLobby_EOSLobbySearchSetParameterInt64_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Key = Key;
		params.Value = Value;
		params.ComparisonOp = ComparisonOp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbySearchSetParameterDouble
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbySearch                            Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEOSEComparisonOp                                  ComparisonOp                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLobby::EOSLobbySearchSetParameterDouble(class UObject* WorldContextObject, const struct FEOSHLobbySearch& Handle, const class FString& Key, const class FString& Value, EEOSEComparisonOp ComparisonOp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbySearchSetParameterDouble");
		
		UCoreLobby_EOSLobbySearchSetParameterDouble_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Key = Key;
		params.Value = Value;
		params.ComparisonOp = ComparisonOp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbySearchSetParameterBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbySearch                            Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEOSEComparisonOp                                  ComparisonOp                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLobby::EOSLobbySearchSetParameterBool(class UObject* WorldContextObject, const struct FEOSHLobbySearch& Handle, const class FString& Key, bool bValue, EEOSEComparisonOp ComparisonOp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbySearchSetParameterBool");
		
		UCoreLobby_EOSLobbySearchSetParameterBool_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Key = Key;
		params.bValue = bValue;
		params.ComparisonOp = ComparisonOp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbySearchSetMaxResults
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbySearch                            Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbySearchSetMaxResultsOptions         Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLobby::EOSLobbySearchSetMaxResults(class UObject* WorldContextObject, const struct FEOSHLobbySearch& Handle, const struct FEOSLobbySearchSetMaxResultsOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbySearchSetMaxResults");
		
		UCoreLobby_EOSLobbySearchSetMaxResults_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbySearchSetLobbyId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbySearch                            Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbySearchSetLobbyIdOptions            Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLobby::EOSLobbySearchSetLobbyId(class UObject* WorldContextObject, const struct FEOSHLobbySearch& Handle, const struct FEOSLobbySearchSetLobbyIdOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbySearchSetLobbyId");
		
		UCoreLobby_EOSLobbySearchSetLobbyId_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbySearchRemoveParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbySearch                            Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbySearchRemoveParameterOptions       Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLobby::EOSLobbySearchRemoveParameter(class UObject* WorldContextObject, const struct FEOSHLobbySearch& Handle, const struct FEOSLobbySearchRemoveParameterOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbySearchRemoveParameter");
		
		UCoreLobby_EOSLobbySearchRemoveParameter_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbySearchRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSHLobbySearch                            LobbySearchHandle                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreLobby::EOSLobbySearchRelease(const struct FEOSHLobbySearch& LobbySearchHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbySearchRelease");
		
		UCoreLobby_EOSLobbySearchRelease_Params params {};
		params.LobbySearchHandle = LobbySearchHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbySearchGetSearchResultCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbySearch                            Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbySearchGetSearchResultCountOptions  Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UCoreLobby::EOSLobbySearchGetSearchResultCount(class UObject* WorldContextObject, const struct FEOSHLobbySearch& Handle, const struct FEOSLobbySearchGetSearchResultCountOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbySearchGetSearchResultCount");
		
		UCoreLobby_EOSLobbySearchGetSearchResultCount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbySearchFind
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbySearch                            Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbySearchFindOptions                  Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreLobby::EOSLobbySearchFind(class UObject* WorldContextObject, const struct FEOSHLobbySearch& Handle, const struct FEOSLobbySearchFindOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbySearchFind");
		
		UCoreLobby_EOSLobbySearchFind_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbySearchCopySearchResultByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbySearch                            Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbySearchCopySearchResultByIndexOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbyDetails                           OutLobbyDetailsHandle                                      (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLobby::EOSLobbySearchCopySearchResultByIndex(class UObject* WorldContextObject, const struct FEOSHLobbySearch& Handle, const struct FEOSLobbySearchCopySearchResultByIndexOptions& Options, struct FEOSHLobbyDetails* OutLobbyDetailsHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbySearchCopySearchResultByIndex");
		
		UCoreLobby_EOSLobbySearchCopySearchResultByIndex_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLobbyDetailsHandle != nullptr)
			*OutLobbyDetailsHandle = params.OutLobbyDetailsHandle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyRemoveNotifySendLobbyNativeInviteRequested
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          ID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreLobby::EOSLobbyRemoveNotifySendLobbyNativeInviteRequested(class UObject* WorldContextObject, const struct FEOSNotificationId& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyRemoveNotifySendLobbyNativeInviteRequested");
		
		UCoreLobby_EOSLobbyRemoveNotifySendLobbyNativeInviteRequested_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyRemoveNotifyRTCRoomConnectionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          ID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreLobby::EOSLobbyRemoveNotifyRTCRoomConnectionChanged(class UObject* WorldContextObject, const struct FEOSNotificationId& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyRemoveNotifyRTCRoomConnectionChanged");
		
		UCoreLobby_EOSLobbyRemoveNotifyRTCRoomConnectionChanged_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyRemoveNotifyLobbyUpdateReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          ID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreLobby::EOSLobbyRemoveNotifyLobbyUpdateReceived(class UObject* WorldContextObject, const struct FEOSNotificationId& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyRemoveNotifyLobbyUpdateReceived");
		
		UCoreLobby_EOSLobbyRemoveNotifyLobbyUpdateReceived_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyRemoveNotifyLobbyMemberUpdateReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          ID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreLobby::EOSLobbyRemoveNotifyLobbyMemberUpdateReceived(class UObject* WorldContextObject, const struct FEOSNotificationId& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyRemoveNotifyLobbyMemberUpdateReceived");
		
		UCoreLobby_EOSLobbyRemoveNotifyLobbyMemberUpdateReceived_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyRemoveNotifyLobbyMemberStatusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          ID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreLobby::EOSLobbyRemoveNotifyLobbyMemberStatusReceived(class UObject* WorldContextObject, const struct FEOSNotificationId& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyRemoveNotifyLobbyMemberStatusReceived");
		
		UCoreLobby_EOSLobbyRemoveNotifyLobbyMemberStatusReceived_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyRemoveNotifyLobbyInviteRejected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          ID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreLobby::EOSLobbyRemoveNotifyLobbyInviteRejected(class UObject* WorldContextObject, const struct FEOSNotificationId& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyRemoveNotifyLobbyInviteRejected");
		
		UCoreLobby_EOSLobbyRemoveNotifyLobbyInviteRejected_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyRemoveNotifyLobbyInviteReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          ID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreLobby::EOSLobbyRemoveNotifyLobbyInviteReceived(class UObject* WorldContextObject, const struct FEOSNotificationId& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyRemoveNotifyLobbyInviteReceived");
		
		UCoreLobby_EOSLobbyRemoveNotifyLobbyInviteReceived_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyRemoveNotifyLobbyInviteAccepted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          ID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreLobby::EOSLobbyRemoveNotifyLobbyInviteAccepted(class UObject* WorldContextObject, const struct FEOSNotificationId& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyRemoveNotifyLobbyInviteAccepted");
		
		UCoreLobby_EOSLobbyRemoveNotifyLobbyInviteAccepted_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyRemoveNotifyJoinLobbyAccepted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          ID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreLobby::EOSLobbyRemoveNotifyJoinLobbyAccepted(class UObject* WorldContextObject, const struct FEOSNotificationId& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyRemoveNotifyJoinLobbyAccepted");
		
		UCoreLobby_EOSLobbyRemoveNotifyJoinLobbyAccepted_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyRejectInvite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyRejectInviteOptions                Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreLobby::EOSLobbyRejectInvite(class UObject* WorldContextObject, const struct FEOSLobbyRejectInviteOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyRejectInvite");
		
		UCoreLobby_EOSLobbyRejectInvite_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyQueryInvites
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyQueryInvitesOptions                Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreLobby::EOSLobbyQueryInvites(class UObject* WorldContextObject, const struct FEOSLobbyQueryInvitesOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyQueryInvites");
		
		UCoreLobby_EOSLobbyQueryInvites_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyPromoteMember
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyPromoteMemberOptions               Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreLobby::EOSLobbyPromoteMember(class UObject* WorldContextObject, const struct FEOSLobbyPromoteMemberOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyPromoteMember");
		
		UCoreLobby_EOSLobbyPromoteMember_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyModificationSetPermissionLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbyModification                      Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyModificationSetPermissionLevelOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLobby::EOSLobbyModificationSetPermissionLevel(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const struct FEOSLobbyModificationSetPermissionLevelOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyModificationSetPermissionLevel");
		
		UCoreLobby_EOSLobbyModificationSetPermissionLevel_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyModificationSetMaxMembers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbyModification                      Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyModificationSetMaxMembersOptions   Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLobby::EOSLobbyModificationSetMaxMembers(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const struct FEOSLobbyModificationSetMaxMembersOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyModificationSetMaxMembers");
		
		UCoreLobby_EOSLobbyModificationSetMaxMembers_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyModificationSetInvitesAllowed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbyModification                      Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyModificationSetInvitesAllowedOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLobby::EOSLobbyModificationSetInvitesAllowed(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const struct FEOSLobbyModificationSetInvitesAllowedOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyModificationSetInvitesAllowed");
		
		UCoreLobby_EOSLobbyModificationSetInvitesAllowed_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyModificationSetBucketId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbyModification                      Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyModificationSetBucketIdOptions     Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLobby::EOSLobbyModificationSetBucketId(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const struct FEOSLobbyModificationSetBucketIdOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyModificationSetBucketId");
		
		UCoreLobby_EOSLobbyModificationSetBucketId_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyModificationRemoveMemberAttribute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbyModification                      Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyModificationRemoveMemberAttributeOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLobby::EOSLobbyModificationRemoveMemberAttribute(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const struct FEOSLobbyModificationRemoveMemberAttributeOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyModificationRemoveMemberAttribute");
		
		UCoreLobby_EOSLobbyModificationRemoveMemberAttribute_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyModificationRemoveAttribute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbyModification                      Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyModificationRemoveAttributeOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLobby::EOSLobbyModificationRemoveAttribute(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const struct FEOSLobbyModificationRemoveAttributeOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyModificationRemoveAttribute");
		
		UCoreLobby_EOSLobbyModificationRemoveAttribute_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyModificationRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSHLobbyModification                      LobbyModificationHandle                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreLobby::EOSLobbyModificationRelease(const struct FEOSHLobbyModification& LobbyModificationHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyModificationRelease");
		
		UCoreLobby_EOSLobbyModificationRelease_Params params {};
		params.LobbyModificationHandle = LobbyModificationHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyModificationAddMemberAttributeString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbyModification                      Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEOSELobbyAttributeVisibility                      Visibility                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLobby::EOSLobbyModificationAddMemberAttributeString(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const class FString& Key, const class FString& Value, EEOSELobbyAttributeVisibility Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyModificationAddMemberAttributeString");
		
		UCoreLobby_EOSLobbyModificationAddMemberAttributeString_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Key = Key;
		params.Value = Value;
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyModificationAddMemberAttributeInt64
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbyModification                      Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEOSELobbyAttributeVisibility                      Visibility                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLobby::EOSLobbyModificationAddMemberAttributeInt64(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const class FString& Key, const class FString& Value, EEOSELobbyAttributeVisibility Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyModificationAddMemberAttributeInt64");
		
		UCoreLobby_EOSLobbyModificationAddMemberAttributeInt64_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Key = Key;
		params.Value = Value;
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyModificationAddMemberAttributeDouble
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbyModification                      Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEOSELobbyAttributeVisibility                      Visibility                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLobby::EOSLobbyModificationAddMemberAttributeDouble(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const class FString& Key, const class FString& Value, EEOSELobbyAttributeVisibility Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyModificationAddMemberAttributeDouble");
		
		UCoreLobby_EOSLobbyModificationAddMemberAttributeDouble_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Key = Key;
		params.Value = Value;
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyModificationAddMemberAttributeBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbyModification                      Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEOSELobbyAttributeVisibility                      Visibility                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLobby::EOSLobbyModificationAddMemberAttributeBool(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const class FString& Key, bool bValue, EEOSELobbyAttributeVisibility Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyModificationAddMemberAttributeBool");
		
		UCoreLobby_EOSLobbyModificationAddMemberAttributeBool_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Key = Key;
		params.bValue = bValue;
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyModificationAddAttributeString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbyModification                      Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEOSELobbyAttributeVisibility                      Visibility                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLobby::EOSLobbyModificationAddAttributeString(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const class FString& Key, const class FString& Value, EEOSELobbyAttributeVisibility Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyModificationAddAttributeString");
		
		UCoreLobby_EOSLobbyModificationAddAttributeString_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Key = Key;
		params.Value = Value;
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyModificationAddAttributeInt64
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbyModification                      Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEOSELobbyAttributeVisibility                      Visibility                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLobby::EOSLobbyModificationAddAttributeInt64(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const class FString& Key, const class FString& Value, EEOSELobbyAttributeVisibility Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyModificationAddAttributeInt64");
		
		UCoreLobby_EOSLobbyModificationAddAttributeInt64_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Key = Key;
		params.Value = Value;
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyModificationAddAttributeDouble
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbyModification                      Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEOSELobbyAttributeVisibility                      Visibility                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLobby::EOSLobbyModificationAddAttributeDouble(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const class FString& Key, const class FString& Value, EEOSELobbyAttributeVisibility Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyModificationAddAttributeDouble");
		
		UCoreLobby_EOSLobbyModificationAddAttributeDouble_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Key = Key;
		params.Value = Value;
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyModificationAddAttributeBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbyModification                      Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEOSELobbyAttributeVisibility                      Visibility                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLobby::EOSLobbyModificationAddAttributeBool(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const class FString& Key, bool bValue, EEOSELobbyAttributeVisibility Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyModificationAddAttributeBool");
		
		UCoreLobby_EOSLobbyModificationAddAttributeBool_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Key = Key;
		params.bValue = bValue;
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyModificationAddAttribute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbyModification                      Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyModificationAddAttributeOptions    Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLobby::EOSLobbyModificationAddAttribute(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const struct FEOSLobbyModificationAddAttributeOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyModificationAddAttribute");
		
		UCoreLobby_EOSLobbyModificationAddAttribute_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyLeaveLobby
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyLeaveLobbyOptions                  Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreLobby::EOSLobbyLeaveLobby(class UObject* WorldContextObject, const struct FEOSLobbyLeaveLobbyOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyLeaveLobby");
		
		UCoreLobby_EOSLobbyLeaveLobby_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyKickMember
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyKickMemberOptions                  Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreLobby::EOSLobbyKickMember(class UObject* WorldContextObject, const struct FEOSLobbyKickMemberOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyKickMember");
		
		UCoreLobby_EOSLobbyKickMember_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyJoinLobbyById
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyJoinLobbyByIdOptions               Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreLobby::EOSLobbyJoinLobbyById(class UObject* WorldContextObject, const struct FEOSLobbyJoinLobbyByIdOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyJoinLobbyById");
		
		UCoreLobby_EOSLobbyJoinLobbyById_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyJoinLobby
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyJoinLobbyOptions                   Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreLobby::EOSLobbyJoinLobby(class UObject* WorldContextObject, const struct FEOSLobbyJoinLobbyOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyJoinLobby");
		
		UCoreLobby_EOSLobbyJoinLobby_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyIsRTCRoomConnected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyIsRTCRoomConnectedOptions          Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               bOutIsConnected                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLobby::EOSLobbyIsRTCRoomConnected(class UObject* WorldContextObject, const struct FEOSLobbyIsRTCRoomConnectedOptions& Options, bool* bOutIsConnected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyIsRTCRoomConnected");
		
		UCoreLobby_EOSLobbyIsRTCRoomConnected_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutIsConnected != nullptr)
			*bOutIsConnected = params.bOutIsConnected;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyHardMuteMember
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyHardMuteMemberOptions              Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreLobby::EOSLobbyHardMuteMember(class UObject* WorldContextObject, const struct FEOSLobbyHardMuteMemberOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyHardMuteMember");
		
		UCoreLobby_EOSLobbyHardMuteMember_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyGetRTCRoomName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyGetRTCRoomNameOptions              Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutBuffer                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InOutBufferLength                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLobby::EOSLobbyGetRTCRoomName(class UObject* WorldContextObject, const struct FEOSLobbyGetRTCRoomNameOptions& Options, class FString* OutBuffer, int32_t InOutBufferLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyGetRTCRoomName");
		
		UCoreLobby_EOSLobbyGetRTCRoomName_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.InOutBufferLength = InOutBufferLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutBuffer != nullptr)
			*OutBuffer = params.OutBuffer;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyGetInviteIdByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyGetInviteIdByIndexOptions          Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutInviteId                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLobby::EOSLobbyGetInviteIdByIndex(class UObject* WorldContextObject, const struct FEOSLobbyGetInviteIdByIndexOptions& Options, class FString* OutInviteId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyGetInviteIdByIndex");
		
		UCoreLobby_EOSLobbyGetInviteIdByIndex_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutInviteId != nullptr)
			*OutInviteId = params.OutInviteId;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyGetInviteCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyGetInviteCountOptions              Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UCoreLobby::EOSLobbyGetInviteCount(class UObject* WorldContextObject, const struct FEOSLobbyGetInviteCountOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyGetInviteCount");
		
		UCoreLobby_EOSLobbyGetInviteCount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyDetailsRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSHLobbyDetails                           LobbyHandle                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreLobby::EOSLobbyDetailsRelease(const struct FEOSHLobbyDetails& LobbyHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyDetailsRelease");
		
		UCoreLobby_EOSLobbyDetailsRelease_Params params {};
		params.LobbyHandle = LobbyHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyDetailsGetMemberCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbyDetails                           Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyDetailsGetMemberCountOptions       Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UCoreLobby::EOSLobbyDetailsGetMemberCount(class UObject* WorldContextObject, const struct FEOSHLobbyDetails& Handle, const struct FEOSLobbyDetailsGetMemberCountOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyDetailsGetMemberCount");
		
		UCoreLobby_EOSLobbyDetailsGetMemberCount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyDetailsGetMemberByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbyDetails                           Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyDetailsGetMemberByIndexOptions     Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSProductUserId UCoreLobby::EOSLobbyDetailsGetMemberByIndex(class UObject* WorldContextObject, const struct FEOSHLobbyDetails& Handle, const struct FEOSLobbyDetailsGetMemberByIndexOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyDetailsGetMemberByIndex");
		
		UCoreLobby_EOSLobbyDetailsGetMemberByIndex_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyDetailsGetMemberAttributeCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbyDetails                           Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyDetailsGetMemberAttributeCountOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UCoreLobby::EOSLobbyDetailsGetMemberAttributeCount(class UObject* WorldContextObject, const struct FEOSHLobbyDetails& Handle, const struct FEOSLobbyDetailsGetMemberAttributeCountOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyDetailsGetMemberAttributeCount");
		
		UCoreLobby_EOSLobbyDetailsGetMemberAttributeCount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyDetailsGetLobbyOwner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbyDetails                           Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyDetailsGetLobbyOwnerOptions        Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSProductUserId UCoreLobby::EOSLobbyDetailsGetLobbyOwner(class UObject* WorldContextObject, const struct FEOSHLobbyDetails& Handle, const struct FEOSLobbyDetailsGetLobbyOwnerOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyDetailsGetLobbyOwner");
		
		UCoreLobby_EOSLobbyDetailsGetLobbyOwner_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyDetailsGetAttributeCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbyDetails                           Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyDetailsGetAttributeCountOptions    Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UCoreLobby::EOSLobbyDetailsGetAttributeCount(class UObject* WorldContextObject, const struct FEOSHLobbyDetails& Handle, const struct FEOSLobbyDetailsGetAttributeCountOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyDetailsGetAttributeCount");
		
		UCoreLobby_EOSLobbyDetailsGetAttributeCount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyDetailsCopyMemberAttributeByKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbyDetails                           Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyDetailsCopyMemberAttributeByKeyOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyAttribute                          OutAttribute                                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLobby::EOSLobbyDetailsCopyMemberAttributeByKey(class UObject* WorldContextObject, const struct FEOSHLobbyDetails& Handle, const struct FEOSLobbyDetailsCopyMemberAttributeByKeyOptions& Options, struct FEOSLobbyAttribute* OutAttribute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyDetailsCopyMemberAttributeByKey");
		
		UCoreLobby_EOSLobbyDetailsCopyMemberAttributeByKey_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAttribute != nullptr)
			*OutAttribute = params.OutAttribute;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyDetailsCopyMemberAttributeByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbyDetails                           Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyDetailsCopyMemberAttributeByIndexOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyAttribute                          OutAttribute                                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLobby::EOSLobbyDetailsCopyMemberAttributeByIndex(class UObject* WorldContextObject, const struct FEOSHLobbyDetails& Handle, const struct FEOSLobbyDetailsCopyMemberAttributeByIndexOptions& Options, struct FEOSLobbyAttribute* OutAttribute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyDetailsCopyMemberAttributeByIndex");
		
		UCoreLobby_EOSLobbyDetailsCopyMemberAttributeByIndex_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAttribute != nullptr)
			*OutAttribute = params.OutAttribute;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyDetailsCopyInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbyDetails                           Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyDetailsCopyInfoOptions             Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyDetailsInfo                        OutLobbyDetailsInfo                                        (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLobby::EOSLobbyDetailsCopyInfo(class UObject* WorldContextObject, const struct FEOSHLobbyDetails& Handle, const struct FEOSLobbyDetailsCopyInfoOptions& Options, struct FEOSLobbyDetailsInfo* OutLobbyDetailsInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyDetailsCopyInfo");
		
		UCoreLobby_EOSLobbyDetailsCopyInfo_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLobbyDetailsInfo != nullptr)
			*OutLobbyDetailsInfo = params.OutLobbyDetailsInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyDetailsCopyAttributeByKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbyDetails                           Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyDetailsCopyAttributeByKeyOptions   Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyAttribute                          OutAttribute                                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLobby::EOSLobbyDetailsCopyAttributeByKey(class UObject* WorldContextObject, const struct FEOSHLobbyDetails& Handle, const struct FEOSLobbyDetailsCopyAttributeByKeyOptions& Options, struct FEOSLobbyAttribute* OutAttribute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyDetailsCopyAttributeByKey");
		
		UCoreLobby_EOSLobbyDetailsCopyAttributeByKey_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAttribute != nullptr)
			*OutAttribute = params.OutAttribute;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyDetailsCopyAttributeByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbyDetails                           Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyDetailsCopyAttributeByIndexOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyAttribute                          OutAttribute                                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLobby::EOSLobbyDetailsCopyAttributeByIndex(class UObject* WorldContextObject, const struct FEOSHLobbyDetails& Handle, const struct FEOSLobbyDetailsCopyAttributeByIndexOptions& Options, struct FEOSLobbyAttribute* OutAttribute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyDetailsCopyAttributeByIndex");
		
		UCoreLobby_EOSLobbyDetailsCopyAttributeByIndex_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAttribute != nullptr)
			*OutAttribute = params.OutAttribute;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyDestroyLobby
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyDestroyLobbyOptions                Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreLobby::EOSLobbyDestroyLobby(class UObject* WorldContextObject, const struct FEOSLobbyDestroyLobbyOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyDestroyLobby");
		
		UCoreLobby_EOSLobbyDestroyLobby_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyCreateLobbySearch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyCreateLobbySearchOptions           Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbySearch                            outLobbySearchHandle                                       (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLobby::EOSLobbyCreateLobbySearch(class UObject* WorldContextObject, const struct FEOSLobbyCreateLobbySearchOptions& Options, struct FEOSHLobbySearch* outLobbySearchHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyCreateLobbySearch");
		
		UCoreLobby_EOSLobbyCreateLobbySearch_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outLobbySearchHandle != nullptr)
			*outLobbySearchHandle = params.outLobbySearchHandle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyCreateLobby
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyCreateLobbyOptions                 Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreLobby::EOSLobbyCreateLobby(class UObject* WorldContextObject, const struct FEOSLobbyCreateLobbyOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyCreateLobby");
		
		UCoreLobby_EOSLobbyCreateLobby_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyCopyLobbyDetailsHandleByUiEventId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyCopyLobbyDetailsHandleByUiEventIdOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbyDetails                           OutLobbyDetailsHandle                                      (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLobby::EOSLobbyCopyLobbyDetailsHandleByUiEventId(class UObject* WorldContextObject, const struct FEOSLobbyCopyLobbyDetailsHandleByUiEventIdOptions& Options, struct FEOSHLobbyDetails* OutLobbyDetailsHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyCopyLobbyDetailsHandleByUiEventId");
		
		UCoreLobby_EOSLobbyCopyLobbyDetailsHandleByUiEventId_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLobbyDetailsHandle != nullptr)
			*OutLobbyDetailsHandle = params.OutLobbyDetailsHandle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyCopyLobbyDetailsHandleByInviteId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyCopyLobbyDetailsHandleByInviteIdOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbyDetails                           OutLobbyDetailsHandle                                      (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLobby::EOSLobbyCopyLobbyDetailsHandleByInviteId(class UObject* WorldContextObject, const struct FEOSLobbyCopyLobbyDetailsHandleByInviteIdOptions& Options, struct FEOSHLobbyDetails* OutLobbyDetailsHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyCopyLobbyDetailsHandleByInviteId");
		
		UCoreLobby_EOSLobbyCopyLobbyDetailsHandleByInviteId_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLobbyDetailsHandle != nullptr)
			*OutLobbyDetailsHandle = params.OutLobbyDetailsHandle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyCopyLobbyDetailsHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyCopyLobbyDetailsHandleOptions      Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbyDetails                           OutLobbyDetailsHandle                                      (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreLobby::EOSLobbyCopyLobbyDetailsHandle(class UObject* WorldContextObject, const struct FEOSLobbyCopyLobbyDetailsHandleOptions& Options, struct FEOSHLobbyDetails* OutLobbyDetailsHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyCopyLobbyDetailsHandle");
		
		UCoreLobby_EOSLobbyCopyLobbyDetailsHandle_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLobbyDetailsHandle != nullptr)
			*OutLobbyDetailsHandle = params.OutLobbyDetailsHandle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyAddNotifySendLobbyNativeInviteRequested
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyAddNotifySendLobbyNativeInviteRequestedOptions Options                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreLobby::EOSLobbyAddNotifySendLobbyNativeInviteRequested(class UObject* WorldContextObject, const struct FEOSLobbyAddNotifySendLobbyNativeInviteRequestedOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyAddNotifySendLobbyNativeInviteRequested");
		
		UCoreLobby_EOSLobbyAddNotifySendLobbyNativeInviteRequested_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyAddNotifyRTCRoomConnectionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyAddNotifyRTCRoomConnectionChangedOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreLobby::EOSLobbyAddNotifyRTCRoomConnectionChanged(class UObject* WorldContextObject, const struct FEOSLobbyAddNotifyRTCRoomConnectionChangedOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyAddNotifyRTCRoomConnectionChanged");
		
		UCoreLobby_EOSLobbyAddNotifyRTCRoomConnectionChanged_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyAddNotifyLobbyUpdateReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreLobby::EOSLobbyAddNotifyLobbyUpdateReceived(class UObject* WorldContextObject, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyAddNotifyLobbyUpdateReceived");
		
		UCoreLobby_EOSLobbyAddNotifyLobbyUpdateReceived_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyAddNotifyLobbyMemberUpdateReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreLobby::EOSLobbyAddNotifyLobbyMemberUpdateReceived(class UObject* WorldContextObject, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyAddNotifyLobbyMemberUpdateReceived");
		
		UCoreLobby_EOSLobbyAddNotifyLobbyMemberUpdateReceived_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyAddNotifyLobbyMemberStatusReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreLobby::EOSLobbyAddNotifyLobbyMemberStatusReceived(class UObject* WorldContextObject, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyAddNotifyLobbyMemberStatusReceived");
		
		UCoreLobby_EOSLobbyAddNotifyLobbyMemberStatusReceived_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyAddNotifyLobbyInviteRejected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyAddNotifyLobbyInviteRejectedOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreLobby::EOSLobbyAddNotifyLobbyInviteRejected(class UObject* WorldContextObject, const struct FEOSLobbyAddNotifyLobbyInviteRejectedOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyAddNotifyLobbyInviteRejected");
		
		UCoreLobby_EOSLobbyAddNotifyLobbyInviteRejected_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyAddNotifyLobbyInviteReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreLobby::EOSLobbyAddNotifyLobbyInviteReceived(class UObject* WorldContextObject, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyAddNotifyLobbyInviteReceived");
		
		UCoreLobby_EOSLobbyAddNotifyLobbyInviteReceived_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyAddNotifyLobbyInviteAccepted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyAddNotifyLobbyInviteAcceptedOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreLobby::EOSLobbyAddNotifyLobbyInviteAccepted(class UObject* WorldContextObject, const struct FEOSLobbyAddNotifyLobbyInviteAcceptedOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyAddNotifyLobbyInviteAccepted");
		
		UCoreLobby_EOSLobbyAddNotifyLobbyInviteAccepted_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreLobby.EOSLobbyAddNotifyJoinLobbyAccepted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyAddNotifyJoinLobbyAcceptedOptions  Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreLobby::EOSLobbyAddNotifyJoinLobbyAccepted(class UObject* WorldContextObject, const struct FEOSLobbyAddNotifyJoinLobbyAcceptedOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreLobby.EOSLobbyAddNotifyJoinLobbyAccepted");
		
		UCoreLobby_EOSLobbyAddNotifyJoinLobbyAccepted_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreLobby.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreLobby::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.CoreLobby");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLobbyCreateLobby.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSLobbyCreateLobbyCallbackInfo            Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreLobbyCreateLobby::HandleCallback(const struct FEOSLobbyCreateLobbyCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLobbyCreateLobby.HandleCallback");
		
		UEOSCoreLobbyCreateLobby_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLobbyCreateLobby.EOSLobbyCreateLobbyAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyCreateLobbyOptions                 Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreLobbyCreateLobby* UEOSCoreLobbyCreateLobby::EOSLobbyCreateLobbyAsync(class UObject* WorldContextObject, const struct FEOSLobbyCreateLobbyOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLobbyCreateLobby.EOSLobbyCreateLobbyAsync");
		
		UEOSCoreLobbyCreateLobby_EOSLobbyCreateLobbyAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreLobbyCreateLobby.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreLobbyCreateLobby::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreLobbyCreateLobby");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLobbyDestroyLobby.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSLobbyDestroyLobbyCallbackInfo           Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreLobbyDestroyLobby::HandleCallback(const struct FEOSLobbyDestroyLobbyCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLobbyDestroyLobby.HandleCallback");
		
		UEOSCoreLobbyDestroyLobby_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLobbyDestroyLobby.EOSLobbyDestroyLobbyAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyDestroyLobbyOptions                Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreLobbyDestroyLobby* UEOSCoreLobbyDestroyLobby::EOSLobbyDestroyLobbyAsync(class UObject* WorldContextObject, const struct FEOSLobbyDestroyLobbyOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLobbyDestroyLobby.EOSLobbyDestroyLobbyAsync");
		
		UEOSCoreLobbyDestroyLobby_EOSLobbyDestroyLobbyAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreLobbyDestroyLobby.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreLobbyDestroyLobby::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreLobbyDestroyLobby");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLobbyJoinLobby.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSLobbyJoinLobbyCallbackInfo              Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreLobbyJoinLobby::HandleCallback(const struct FEOSLobbyJoinLobbyCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLobbyJoinLobby.HandleCallback");
		
		UEOSCoreLobbyJoinLobby_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLobbyJoinLobby.EOSLobbyJoinLobbyAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyJoinLobbyOptions                   Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreLobbyJoinLobby* UEOSCoreLobbyJoinLobby::EOSLobbyJoinLobbyAsync(class UObject* WorldContextObject, const struct FEOSLobbyJoinLobbyOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLobbyJoinLobby.EOSLobbyJoinLobbyAsync");
		
		UEOSCoreLobbyJoinLobby_EOSLobbyJoinLobbyAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreLobbyJoinLobby.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreLobbyJoinLobby::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreLobbyJoinLobby");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLobbyLeaveLobby.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSLobbyLeaveLobbyCallbackInfo             Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreLobbyLeaveLobby::HandleCallback(const struct FEOSLobbyLeaveLobbyCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLobbyLeaveLobby.HandleCallback");
		
		UEOSCoreLobbyLeaveLobby_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLobbyLeaveLobby.EOSLobbyLeaveLobbyAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyLeaveLobbyOptions                  Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreLobbyLeaveLobby* UEOSCoreLobbyLeaveLobby::EOSLobbyLeaveLobbyAsync(class UObject* WorldContextObject, const struct FEOSLobbyLeaveLobbyOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLobbyLeaveLobby.EOSLobbyLeaveLobbyAsync");
		
		UEOSCoreLobbyLeaveLobby_EOSLobbyLeaveLobbyAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreLobbyLeaveLobby.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreLobbyLeaveLobby::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreLobbyLeaveLobby");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLobbyUpdateLobby.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSLobbyUpdateLobbyCallbackInfo            Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreLobbyUpdateLobby::HandleCallback(const struct FEOSLobbyUpdateLobbyCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLobbyUpdateLobby.HandleCallback");
		
		UEOSCoreLobbyUpdateLobby_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLobbyUpdateLobby.EOSLobbyUpdateLobbyAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyUpdateLobbyOptions                 Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreLobbyUpdateLobby* UEOSCoreLobbyUpdateLobby::EOSLobbyUpdateLobbyAsync(class UObject* WorldContextObject, const struct FEOSLobbyUpdateLobbyOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLobbyUpdateLobby.EOSLobbyUpdateLobbyAsync");
		
		UEOSCoreLobbyUpdateLobby_EOSLobbyUpdateLobbyAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreLobbyUpdateLobby.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreLobbyUpdateLobby::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreLobbyUpdateLobby");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLobbyPromoteMember.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSLobbyPromoteMemberCallbackInfo          Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreLobbyPromoteMember::HandleCallback(const struct FEOSLobbyPromoteMemberCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLobbyPromoteMember.HandleCallback");
		
		UEOSCoreLobbyPromoteMember_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLobbyPromoteMember.EOSLobbyPromoteMemberAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyPromoteMemberOptions               Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreLobbyPromoteMember* UEOSCoreLobbyPromoteMember::EOSLobbyPromoteMemberAsync(class UObject* WorldContextObject, const struct FEOSLobbyPromoteMemberOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLobbyPromoteMember.EOSLobbyPromoteMemberAsync");
		
		UEOSCoreLobbyPromoteMember_EOSLobbyPromoteMemberAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreLobbyPromoteMember.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreLobbyPromoteMember::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreLobbyPromoteMember");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLobbyKickMember.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSLobbyKickMemberCallbackInfo             Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreLobbyKickMember::HandleCallback(const struct FEOSLobbyKickMemberCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLobbyKickMember.HandleCallback");
		
		UEOSCoreLobbyKickMember_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLobbyKickMember.EOSLobbyKickMemberAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyKickMemberOptions                  Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreLobbyKickMember* UEOSCoreLobbyKickMember::EOSLobbyKickMemberAsync(class UObject* WorldContextObject, const struct FEOSLobbyKickMemberOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLobbyKickMember.EOSLobbyKickMemberAsync");
		
		UEOSCoreLobbyKickMember_EOSLobbyKickMemberAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreLobbyKickMember.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreLobbyKickMember::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreLobbyKickMember");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLobbySendInvite.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSLobbySendInviteCallbackInfo             Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreLobbySendInvite::HandleCallback(const struct FEOSLobbySendInviteCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLobbySendInvite.HandleCallback");
		
		UEOSCoreLobbySendInvite_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLobbySendInvite.EOSLobbySendInviteAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbySendInviteOptions                  Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreLobbySendInvite* UEOSCoreLobbySendInvite::EOSLobbySendInviteAsync(class UObject* WorldContextObject, const struct FEOSLobbySendInviteOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLobbySendInvite.EOSLobbySendInviteAsync");
		
		UEOSCoreLobbySendInvite_EOSLobbySendInviteAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreLobbySendInvite.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreLobbySendInvite::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreLobbySendInvite");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLobbyRejectInvite.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSLobbyRejectInviteCallbackInfo           Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreLobbyRejectInvite::HandleCallback(const struct FEOSLobbyRejectInviteCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLobbyRejectInvite.HandleCallback");
		
		UEOSCoreLobbyRejectInvite_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLobbyRejectInvite.EOSLobbyRejectInviteAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyRejectInviteOptions                Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreLobbyRejectInvite* UEOSCoreLobbyRejectInvite::EOSLobbyRejectInviteAsync(class UObject* WorldContextObject, const struct FEOSLobbyRejectInviteOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLobbyRejectInvite.EOSLobbyRejectInviteAsync");
		
		UEOSCoreLobbyRejectInvite_EOSLobbyRejectInviteAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreLobbyRejectInvite.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreLobbyRejectInvite::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreLobbyRejectInvite");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLobbyQueryInvites.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSLobbyQueryInvitesCallbackInfo           Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreLobbyQueryInvites::HandleCallback(const struct FEOSLobbyQueryInvitesCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLobbyQueryInvites.HandleCallback");
		
		UEOSCoreLobbyQueryInvites_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLobbyQueryInvites.EOSLobbyQueryInvitesAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbyQueryInvitesOptions                Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreLobbyQueryInvites* UEOSCoreLobbyQueryInvites::EOSLobbyQueryInvitesAsync(class UObject* WorldContextObject, const struct FEOSLobbyQueryInvitesOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLobbyQueryInvites.EOSLobbyQueryInvitesAsync");
		
		UEOSCoreLobbyQueryInvites_EOSLobbyQueryInvitesAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreLobbyQueryInvites.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreLobbyQueryInvites::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreLobbyQueryInvites");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLobbySearchFind.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSLobbySearchFindCallbackInfo             Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreLobbySearchFind::HandleCallback(const struct FEOSLobbySearchFindCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLobbySearchFind.HandleCallback");
		
		UEOSCoreLobbySearchFind_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreLobbySearchFind.EOSLobbySearchFindAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHLobbySearch                            Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSLobbySearchFindOptions                  Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreLobbySearchFind* UEOSCoreLobbySearchFind::EOSLobbySearchFindAsync(class UObject* WorldContextObject, const struct FEOSHLobbySearch& Handle, const struct FEOSLobbySearchFindOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreLobbySearchFind.EOSLobbySearchFindAsync");
		
		UEOSCoreLobbySearchFind_EOSLobbySearchFindAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreLobbySearchFind.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreLobbySearchFind::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreLobbySearchFind");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreMetrics.GetMetrics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreMetrics* UCoreMetrics::GetMetrics(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreMetrics.GetMetrics");
		
		UCoreMetrics_GetMetrics_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreMetrics.EOSMetricsEndPlayerSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSMetricsEndPlayerSessionOptions          Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreMetrics::EOSMetricsEndPlayerSession(class UObject* WorldContextObject, const struct FEOSMetricsEndPlayerSessionOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreMetrics.EOSMetricsEndPlayerSession");
		
		UCoreMetrics_EOSMetricsEndPlayerSession_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreMetrics.EOSMetricsBeginPlayerSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSMetricsBeginPlayerSessionOptions        Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreMetrics::EOSMetricsBeginPlayerSession(class UObject* WorldContextObject, const struct FEOSMetricsBeginPlayerSessionOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreMetrics.EOSMetricsBeginPlayerSession");
		
		UCoreMetrics_EOSMetricsBeginPlayerSession_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreMetrics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreMetrics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.CoreMetrics");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreMods.GetMods
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreMods* UCoreMods::GetMods(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreMods.GetMods");
		
		UCoreMods_GetMods_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreMods.EOSModsUpdateMod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSModsUpdateModOptions                    Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreMods::EOSModsUpdateMod(class UObject* WorldContextObject, const struct FEOSModsUpdateModOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreMods.EOSModsUpdateMod");
		
		UCoreMods_EOSModsUpdateMod_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreMods.EOSModsUninstallMod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSModsUninstallModOptions                 Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreMods::EOSModsUninstallMod(class UObject* WorldContextObject, const struct FEOSModsUninstallModOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreMods.EOSModsUninstallMod");
		
		UCoreMods_EOSModsUninstallMod_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreMods.EOSModsInstallMod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSModsInstallModOptions                   Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreMods::EOSModsInstallMod(class UObject* WorldContextObject, const struct FEOSModsInstallModOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreMods.EOSModsInstallMod");
		
		UCoreMods_EOSModsInstallMod_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreMods.EOSModsEnumerateMods
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSModsEnumerateModsOptions                Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreMods::EOSModsEnumerateMods(class UObject* WorldContextObject, const struct FEOSModsEnumerateModsOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreMods.EOSModsEnumerateMods");
		
		UCoreMods_EOSModsEnumerateMods_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreMods.EOSModsCopyModInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSModsCopyModInfoOptions                  Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSModsModInfo                             OutEnumeratedMods                                          (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreMods::EOSModsCopyModInfo(class UObject* WorldContextObject, const struct FEOSModsCopyModInfoOptions& Options, struct FEOSModsModInfo* OutEnumeratedMods)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreMods.EOSModsCopyModInfo");
		
		UCoreMods_EOSModsCopyModInfo_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEnumeratedMods != nullptr)
			*OutEnumeratedMods = params.OutEnumeratedMods;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreMods.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreMods::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.CoreMods");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreP2P.GetP2P
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreP2P* UCoreP2P::GetP2P(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreP2P.GetP2P");
		
		UCoreP2P_GetP2P_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreP2P.EOSP2PSetRelayControl
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSP2PSetRelayControlOptions               Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreP2P::EOSP2PSetRelayControl(class UObject* WorldContextObject, const struct FEOSP2PSetRelayControlOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreP2P.EOSP2PSetRelayControl");
		
		UCoreP2P_EOSP2PSetRelayControl_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreP2P.EOSP2PSetPortRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSP2PSetPortRangeOptions                  Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreP2P::EOSP2PSetPortRange(class UObject* WorldContextObject, const struct FEOSP2PSetPortRangeOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreP2P.EOSP2PSetPortRange");
		
		UCoreP2P_EOSP2PSetPortRange_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreP2P.EOSP2PSetPacketQueueSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSP2PSetPacketQueueSizeOptions            Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreP2P::EOSP2PSetPacketQueueSize(class UObject* WorldContextObject, const struct FEOSP2PSetPacketQueueSizeOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreP2P.EOSP2PSetPacketQueueSize");
		
		UCoreP2P_EOSP2PSetPacketQueueSize_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreP2P.EOSP2PSendPacket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSP2PSendPacketOptions                    Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreP2P::EOSP2PSendPacket(class UObject* WorldContextObject, const struct FEOSP2PSendPacketOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreP2P.EOSP2PSendPacket");
		
		UCoreP2P_EOSP2PSendPacket_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreP2P.EOSP2PRemoveNotifyPeerConnectionRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          NotificationID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreP2P::EOSP2PRemoveNotifyPeerConnectionRequest(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreP2P.EOSP2PRemoveNotifyPeerConnectionRequest");
		
		UCoreP2P_EOSP2PRemoveNotifyPeerConnectionRequest_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.NotificationID = NotificationID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreP2P.EOSP2PRemoveNotifyPeerConnectionClosed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          NotificationID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreP2P::EOSP2PRemoveNotifyPeerConnectionClosed(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreP2P.EOSP2PRemoveNotifyPeerConnectionClosed");
		
		UCoreP2P_EOSP2PRemoveNotifyPeerConnectionClosed_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.NotificationID = NotificationID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreP2P.EOSP2PRemoveNotifyIncomingPacketQueueFull
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          NotificationID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreP2P::EOSP2PRemoveNotifyIncomingPacketQueueFull(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreP2P.EOSP2PRemoveNotifyIncomingPacketQueueFull");
		
		UCoreP2P_EOSP2PRemoveNotifyIncomingPacketQueueFull_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.NotificationID = NotificationID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreP2P.EOSP2PReceivePacket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSP2PReceivePacketOptions                 Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSProductUserId                           OutPeerId                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSP2PSocketId                             OutSocketId                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutChannel                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              OutData                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutBytesWritten                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreP2P::EOSP2PReceivePacket(class UObject* WorldContextObject, const struct FEOSP2PReceivePacketOptions& Options, struct FEOSProductUserId* OutPeerId, struct FEOSP2PSocketId* OutSocketId, int32_t* OutChannel, TArray<unsigned char>* OutData, int32_t* OutBytesWritten)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreP2P.EOSP2PReceivePacket");
		
		UCoreP2P_EOSP2PReceivePacket_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPeerId != nullptr)
			*OutPeerId = params.OutPeerId;
		if (OutSocketId != nullptr)
			*OutSocketId = params.OutSocketId;
		if (OutChannel != nullptr)
			*OutChannel = params.OutChannel;
		if (OutData != nullptr)
			*OutData = params.OutData;
		if (OutBytesWritten != nullptr)
			*OutBytesWritten = params.OutBytesWritten;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreP2P.EOSP2PQueryNATType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreP2P::EOSP2PQueryNATType(class UObject* WorldContextObject, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreP2P.EOSP2PQueryNATType");
		
		UCoreP2P_EOSP2PQueryNATType_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreP2P.EOSP2PGetRelayControl
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSP2PGetRelayControlOptions               Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EEOSERelayControl                                  OutRelayControl                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreP2P::EOSP2PGetRelayControl(class UObject* WorldContextObject, const struct FEOSP2PGetRelayControlOptions& Options, EEOSERelayControl* OutRelayControl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreP2P.EOSP2PGetRelayControl");
		
		UCoreP2P_EOSP2PGetRelayControl_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutRelayControl != nullptr)
			*OutRelayControl = params.OutRelayControl;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreP2P.EOSP2PGetPortRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSP2PGetPortRangeOptions                  Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutPort                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutNumAdditionalPortsToTry                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreP2P::EOSP2PGetPortRange(class UObject* WorldContextObject, const struct FEOSP2PGetPortRangeOptions& Options, int32_t* OutPort, int32_t OutNumAdditionalPortsToTry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreP2P.EOSP2PGetPortRange");
		
		UCoreP2P_EOSP2PGetPortRange_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.OutNumAdditionalPortsToTry = OutNumAdditionalPortsToTry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPort != nullptr)
			*OutPort = params.OutPort;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreP2P.EOSP2PGetPacketQueueInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSP2PGetPacketQueueInfoOptions            Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSP2PPacketQueueInfo                      OutPacketQueueInfo                                         (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreP2P::EOSP2PGetPacketQueueInfo(class UObject* WorldContextObject, const struct FEOSP2PGetPacketQueueInfoOptions& Options, struct FEOSP2PPacketQueueInfo* OutPacketQueueInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreP2P.EOSP2PGetPacketQueueInfo");
		
		UCoreP2P_EOSP2PGetPacketQueueInfo_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPacketQueueInfo != nullptr)
			*OutPacketQueueInfo = params.OutPacketQueueInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreP2P.EOSP2PGetNextReceivedPacketSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSP2PGetNextReceivedPacketSizeOptions     Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutPacketSizeBytes                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreP2P::EOSP2PGetNextReceivedPacketSize(class UObject* WorldContextObject, const struct FEOSP2PGetNextReceivedPacketSizeOptions& Options, int32_t* OutPacketSizeBytes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreP2P.EOSP2PGetNextReceivedPacketSize");
		
		UCoreP2P_EOSP2PGetNextReceivedPacketSize_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPacketSizeBytes != nullptr)
			*OutPacketSizeBytes = params.OutPacketSizeBytes;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreP2P.EOSP2PGetNATType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSP2PGetNATTypeOptions                    Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EEOSENATType                                       OutNatType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreP2P::EOSP2PGetNATType(class UObject* WorldContextObject, const struct FEOSP2PGetNATTypeOptions& Options, EEOSENATType* OutNatType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreP2P.EOSP2PGetNATType");
		
		UCoreP2P_EOSP2PGetNATType_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNatType != nullptr)
			*OutNatType = params.OutNatType;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreP2P.EOSP2PCloseConnections
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSP2PCloseConnectionsOptions              Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreP2P::EOSP2PCloseConnections(class UObject* WorldContextObject, const struct FEOSP2PCloseConnectionsOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreP2P.EOSP2PCloseConnections");
		
		UCoreP2P_EOSP2PCloseConnections_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreP2P.EOSP2PCloseConnection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSP2PCloseConnectionOptions               Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreP2P::EOSP2PCloseConnection(class UObject* WorldContextObject, const struct FEOSP2PCloseConnectionOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreP2P.EOSP2PCloseConnection");
		
		UCoreP2P_EOSP2PCloseConnection_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreP2P.EOSP2PAddNotifyPeerConnectionRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSP2PAddNotifyPeerConnectionRequestOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreP2P::EOSP2PAddNotifyPeerConnectionRequest(class UObject* WorldContextObject, const struct FEOSP2PAddNotifyPeerConnectionRequestOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreP2P.EOSP2PAddNotifyPeerConnectionRequest");
		
		UCoreP2P_EOSP2PAddNotifyPeerConnectionRequest_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreP2P.EOSP2PAddNotifyPeerConnectionClosed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSP2PAddNotifyPeerConnectionClosedOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreP2P::EOSP2PAddNotifyPeerConnectionClosed(class UObject* WorldContextObject, const struct FEOSP2PAddNotifyPeerConnectionClosedOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreP2P.EOSP2PAddNotifyPeerConnectionClosed");
		
		UCoreP2P_EOSP2PAddNotifyPeerConnectionClosed_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreP2P.EOSP2PAddNotifyIncomingPacketQueueFull
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSP2PAddNotifyIncomingPacketQueueFullOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreP2P::EOSP2PAddNotifyIncomingPacketQueueFull(class UObject* WorldContextObject, const struct FEOSP2PAddNotifyIncomingPacketQueueFullOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreP2P.EOSP2PAddNotifyIncomingPacketQueueFull");
		
		UCoreP2P_EOSP2PAddNotifyIncomingPacketQueueFull_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreP2P.EOSP2PAcceptConnection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSP2PAcceptConnectionOptions              Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreP2P::EOSP2PAcceptConnection(class UObject* WorldContextObject, const struct FEOSP2PAcceptConnectionOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreP2P.EOSP2PAcceptConnection");
		
		UCoreP2P_EOSP2PAcceptConnection_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreP2P.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreP2P::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.CoreP2P");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CorePlayerDataStorage.GetPlayerDataStorage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCorePlayerDataStorage* UCorePlayerDataStorage::GetPlayerDataStorage(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CorePlayerDataStorage.GetPlayerDataStorage");
		
		UCorePlayerDataStorage_GetPlayerDataStorage_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageWriteFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSPlayerDataStorageWriteFileOptions       WriteOptions                                               (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCorePlayerDataStorage::EOSPlayerDataStorageWriteFile(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageWriteFileOptions& WriteOptions, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageWriteFile");
		
		UCorePlayerDataStorage_EOSPlayerDataStorageWriteFile_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.WriteOptions = WriteOptions;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageReadFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSPlayerDataStorageReadFileOptions        ReadOptions                                                (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCorePlayerDataStorage::EOSPlayerDataStorageReadFile(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageReadFileOptions& ReadOptions, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageReadFile");
		
		UCorePlayerDataStorage_EOSPlayerDataStorageReadFile_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ReadOptions = ReadOptions;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageQueryFileList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSPlayerDataStorageQueryFileListOptions   QueryFileListOptions                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCorePlayerDataStorage::EOSPlayerDataStorageQueryFileList(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageQueryFileListOptions& QueryFileListOptions, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageQueryFileList");
		
		UCorePlayerDataStorage_EOSPlayerDataStorageQueryFileList_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.QueryFileListOptions = QueryFileListOptions;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageQueryFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSPlayerDataStorageQueryFileOptions       QueryFileOptions                                           (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCorePlayerDataStorage::EOSPlayerDataStorageQueryFile(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageQueryFileOptions& QueryFileOptions, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageQueryFile");
		
		UCorePlayerDataStorage_EOSPlayerDataStorageQueryFile_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.QueryFileOptions = QueryFileOptions;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageGetFileMetadataCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSPlayerDataStorageGetFileMetadataCountOptions GetFileMetadataCountOptions                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutFileMetadataCount                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCorePlayerDataStorage::EOSPlayerDataStorageGetFileMetadataCount(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageGetFileMetadataCountOptions& GetFileMetadataCountOptions, int32_t* OutFileMetadataCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageGetFileMetadataCount");
		
		UCorePlayerDataStorage_EOSPlayerDataStorageGetFileMetadataCount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.GetFileMetadataCountOptions = GetFileMetadataCountOptions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutFileMetadataCount != nullptr)
			*OutFileMetadataCount = params.OutFileMetadataCount;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageFileTransferRequestRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHPlayerDataStorageFileTransferRequest   Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCorePlayerDataStorage::EOSPlayerDataStorageFileTransferRequestRelease(class UObject* WorldContextObject, const struct FEOSHPlayerDataStorageFileTransferRequest& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageFileTransferRequestRelease");
		
		UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestRelease_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageFileTransferRequestGetFileRequestState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHPlayerDataStorageFileTransferRequest   Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCorePlayerDataStorage::EOSPlayerDataStorageFileTransferRequestGetFileRequestState(class UObject* WorldContextObject, const struct FEOSHPlayerDataStorageFileTransferRequest& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageFileTransferRequestGetFileRequestState");
		
		UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFileRequestState_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageFileTransferRequestGetFilename
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHPlayerDataStorageFileTransferRequest   Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FilenameStringBufferSizeBytes                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutStringBuffer                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCorePlayerDataStorage::EOSPlayerDataStorageFileTransferRequestGetFilename(class UObject* WorldContextObject, const struct FEOSHPlayerDataStorageFileTransferRequest& Handle, int32_t FilenameStringBufferSizeBytes, class FString* OutStringBuffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageFileTransferRequestGetFilename");
		
		UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFilename_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.FilenameStringBufferSizeBytes = FilenameStringBufferSizeBytes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutStringBuffer != nullptr)
			*OutStringBuffer = params.OutStringBuffer;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageFileTransferRequestCancelRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHPlayerDataStorageFileTransferRequest   Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCorePlayerDataStorage::EOSPlayerDataStorageFileTransferRequestCancelRequest(class UObject* WorldContextObject, const struct FEOSHPlayerDataStorageFileTransferRequest& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageFileTransferRequestCancelRequest");
		
		UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestCancelRequest_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageDuplicateFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSPlayerDataStorageDuplicateFileOptions   DuplicateOptions                                           (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCorePlayerDataStorage::EOSPlayerDataStorageDuplicateFile(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageDuplicateFileOptions& DuplicateOptions, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageDuplicateFile");
		
		UCorePlayerDataStorage_EOSPlayerDataStorageDuplicateFile_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DuplicateOptions = DuplicateOptions;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageDeleteFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSPlayerDataStorageDeleteFileOptions      DeleteOptions                                              (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCorePlayerDataStorage::EOSPlayerDataStorageDeleteFile(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageDeleteFileOptions& DeleteOptions, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageDeleteFile");
		
		UCorePlayerDataStorage_EOSPlayerDataStorageDeleteFile_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DeleteOptions = DeleteOptions;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageDeleteCache
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSPlayerDataStorageDeleteCacheOptions     Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCorePlayerDataStorage::EOSPlayerDataStorageDeleteCache(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageDeleteCacheOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageDeleteCache");
		
		UCorePlayerDataStorage_EOSPlayerDataStorageDeleteCache_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageCopyFileMetadataByFilename
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSPlayerDataStorageCopyFileMetadataByFilenameOptions CopyFileMetadataOptions                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FEOSPlayerDataStorageFileMetadata           OutMetadata                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCorePlayerDataStorage::EOSPlayerDataStorageCopyFileMetadataByFilename(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageCopyFileMetadataByFilenameOptions& CopyFileMetadataOptions, struct FEOSPlayerDataStorageFileMetadata* OutMetadata)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageCopyFileMetadataByFilename");
		
		UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataByFilename_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.CopyFileMetadataOptions = CopyFileMetadataOptions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMetadata != nullptr)
			*OutMetadata = params.OutMetadata;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageCopyFileMetadataAtIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSPlayerDataStorageCopyFileMetadataAtIndexOptions CopyFileMetadataOptions                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSPlayerDataStorageFileMetadata           OutMetadata                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCorePlayerDataStorage::EOSPlayerDataStorageCopyFileMetadataAtIndex(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageCopyFileMetadataAtIndexOptions& CopyFileMetadataOptions, struct FEOSPlayerDataStorageFileMetadata* OutMetadata)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageCopyFileMetadataAtIndex");
		
		UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataAtIndex_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.CopyFileMetadataOptions = CopyFileMetadataOptions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMetadata != nullptr)
			*OutMetadata = params.OutMetadata;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCorePlayerDataStorage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCorePlayerDataStorage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.CorePlayerDataStorage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCorePlayerDataStorageQueryFile.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSPlayerDataStorageQueryFileCallbackInfo  Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCorePlayerDataStorageQueryFile::HandleCallback(const struct FEOSPlayerDataStorageQueryFileCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCorePlayerDataStorageQueryFile.HandleCallback");
		
		UEOSCorePlayerDataStorageQueryFile_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCorePlayerDataStorageQueryFile.EOSPlayerDataStorageQueryFileAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSPlayerDataStorageQueryFileOptions       QueryFileOptions                                           (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCorePlayerDataStorageQueryFile* UEOSCorePlayerDataStorageQueryFile::EOSPlayerDataStorageQueryFileAsync(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageQueryFileOptions& QueryFileOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCorePlayerDataStorageQueryFile.EOSPlayerDataStorageQueryFileAsync");
		
		UEOSCorePlayerDataStorageQueryFile_EOSPlayerDataStorageQueryFileAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.QueryFileOptions = QueryFileOptions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCorePlayerDataStorageQueryFile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCorePlayerDataStorageQueryFile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCorePlayerDataStorageQueryFile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCorePlayerDataStorageQueryFileList.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSPlayerDataStorageQueryFileListCallbackInfo Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCorePlayerDataStorageQueryFileList::HandleCallback(const struct FEOSPlayerDataStorageQueryFileListCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCorePlayerDataStorageQueryFileList.HandleCallback");
		
		UEOSCorePlayerDataStorageQueryFileList_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCorePlayerDataStorageQueryFileList.EOSPlayerDataStorageQueryFileListAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSPlayerDataStorageQueryFileListOptions   QueryFileListOptions                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UEOSCorePlayerDataStorageQueryFileList* UEOSCorePlayerDataStorageQueryFileList::EOSPlayerDataStorageQueryFileListAsync(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageQueryFileListOptions& QueryFileListOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCorePlayerDataStorageQueryFileList.EOSPlayerDataStorageQueryFileListAsync");
		
		UEOSCorePlayerDataStorageQueryFileList_EOSPlayerDataStorageQueryFileListAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.QueryFileListOptions = QueryFileListOptions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCorePlayerDataStorageQueryFileList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCorePlayerDataStorageQueryFileList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCorePlayerDataStorageQueryFileList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCorePlayerDataStorageDuplicateFile.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSPlayerDataStorageDuplicateFileCallbackInfo Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCorePlayerDataStorageDuplicateFile::HandleCallback(const struct FEOSPlayerDataStorageDuplicateFileCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCorePlayerDataStorageDuplicateFile.HandleCallback");
		
		UEOSCorePlayerDataStorageDuplicateFile_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCorePlayerDataStorageDuplicateFile.EOSPlayerDataStorageDuplicateFileAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSPlayerDataStorageDuplicateFileOptions   DuplicateOptions                                           (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCorePlayerDataStorageDuplicateFile* UEOSCorePlayerDataStorageDuplicateFile::EOSPlayerDataStorageDuplicateFileAsync(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageDuplicateFileOptions& DuplicateOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCorePlayerDataStorageDuplicateFile.EOSPlayerDataStorageDuplicateFileAsync");
		
		UEOSCorePlayerDataStorageDuplicateFile_EOSPlayerDataStorageDuplicateFileAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DuplicateOptions = DuplicateOptions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCorePlayerDataStorageDuplicateFile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCorePlayerDataStorageDuplicateFile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCorePlayerDataStorageDuplicateFile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCorePlayerDataStorageDeleteFile.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSPlayerDataStorageDeleteFileCallbackInfo Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCorePlayerDataStorageDeleteFile::HandleCallback(const struct FEOSPlayerDataStorageDeleteFileCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCorePlayerDataStorageDeleteFile.HandleCallback");
		
		UEOSCorePlayerDataStorageDeleteFile_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCorePlayerDataStorageDeleteFile.EOSPlayerDataStorageDeleteFileAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSPlayerDataStorageDeleteFileOptions      DeleteOptions                                              (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCorePlayerDataStorageDeleteFile* UEOSCorePlayerDataStorageDeleteFile::EOSPlayerDataStorageDeleteFileAsync(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageDeleteFileOptions& DeleteOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCorePlayerDataStorageDeleteFile.EOSPlayerDataStorageDeleteFileAsync");
		
		UEOSCorePlayerDataStorageDeleteFile_EOSPlayerDataStorageDeleteFileAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.DeleteOptions = DeleteOptions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCorePlayerDataStorageDeleteFile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCorePlayerDataStorageDeleteFile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCorePlayerDataStorageDeleteFile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCorePlayerDataStorageReadFile.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSPlayerDataStorageReadFileCallbackInfo   Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCorePlayerDataStorageReadFile::HandleCallback(const struct FEOSPlayerDataStorageReadFileCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCorePlayerDataStorageReadFile.HandleCallback");
		
		UEOSCorePlayerDataStorageReadFile_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCorePlayerDataStorageReadFile.EOSPlayerDataStorageReadFileAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSPlayerDataStorageReadFileOptions        ReadOptions                                                (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCorePlayerDataStorageReadFile* UEOSCorePlayerDataStorageReadFile::EOSPlayerDataStorageReadFileAsync(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageReadFileOptions& ReadOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCorePlayerDataStorageReadFile.EOSPlayerDataStorageReadFileAsync");
		
		UEOSCorePlayerDataStorageReadFile_EOSPlayerDataStorageReadFileAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ReadOptions = ReadOptions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCorePlayerDataStorageReadFile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCorePlayerDataStorageReadFile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCorePlayerDataStorageReadFile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCorePlayerDataStorageWriteFile.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSPlayerDataStorageWriteFileCallbackInfo  Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCorePlayerDataStorageWriteFile::HandleCallback(const struct FEOSPlayerDataStorageWriteFileCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCorePlayerDataStorageWriteFile.HandleCallback");
		
		UEOSCorePlayerDataStorageWriteFile_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCorePlayerDataStorageWriteFile.EOSPlayerDataStorageWriteFileAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSPlayerDataStorageWriteFileOptions       WriteOptions                                               (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCorePlayerDataStorageWriteFile* UEOSCorePlayerDataStorageWriteFile::EOSPlayerDataStorageWriteFileAsync(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageWriteFileOptions& WriteOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCorePlayerDataStorageWriteFile.EOSPlayerDataStorageWriteFileAsync");
		
		UEOSCorePlayerDataStorageWriteFile_EOSPlayerDataStorageWriteFileAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.WriteOptions = WriteOptions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCorePlayerDataStorageWriteFile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCorePlayerDataStorageWriteFile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCorePlayerDataStorageWriteFile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CorePresence.GetPresence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCorePresence* UCorePresence::GetPresence(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CorePresence.GetPresence");
		
		UCorePresence_GetPresence_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CorePresence.EOSPresenceSetPresence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSPresenceSetPresenceOptions              Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCorePresence::EOSPresenceSetPresence(class UObject* WorldContextObject, const struct FEOSPresenceSetPresenceOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CorePresence.EOSPresenceSetPresence");
		
		UCorePresence_EOSPresenceSetPresence_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CorePresence.EOSPresenceRemoveNotifyOnPresenceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          NotificationID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCorePresence::EOSPresenceRemoveNotifyOnPresenceChanged(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CorePresence.EOSPresenceRemoveNotifyOnPresenceChanged");
		
		UCorePresence_EOSPresenceRemoveNotifyOnPresenceChanged_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.NotificationID = NotificationID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CorePresence.EOSPresenceRemoveNotifyJoinGameAccepted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          ID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCorePresence::EOSPresenceRemoveNotifyJoinGameAccepted(class UObject* WorldContextObject, const struct FEOSNotificationId& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CorePresence.EOSPresenceRemoveNotifyJoinGameAccepted");
		
		UCorePresence_EOSPresenceRemoveNotifyJoinGameAccepted_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CorePresence.EOSPresenceQueryPresence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSPresenceQueryPresenceOptions            Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCorePresence::EOSPresenceQueryPresence(class UObject* WorldContextObject, const struct FEOSPresenceQueryPresenceOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CorePresence.EOSPresenceQueryPresence");
		
		UCorePresence_EOSPresenceQueryPresence_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CorePresence.EOSPresenceModificationSetStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHPresenceModification                   Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSPresenceModificationSetStatusOptions    Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCorePresence::EOSPresenceModificationSetStatus(class UObject* WorldContextObject, const struct FEOSHPresenceModification& Handle, const struct FEOSPresenceModificationSetStatusOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CorePresence.EOSPresenceModificationSetStatus");
		
		UCorePresence_EOSPresenceModificationSetStatus_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CorePresence.EOSPresenceModificationSetRawRichText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHPresenceModification                   Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSPresenceModificationSetRawRichTextOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCorePresence::EOSPresenceModificationSetRawRichText(class UObject* WorldContextObject, const struct FEOSHPresenceModification& Handle, const struct FEOSPresenceModificationSetRawRichTextOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CorePresence.EOSPresenceModificationSetRawRichText");
		
		UCorePresence_EOSPresenceModificationSetRawRichText_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CorePresence.EOSPresenceModificationSetJoinInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHPresenceModification                   Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSPresenceModificationSetJoinInfoOptions  Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCorePresence::EOSPresenceModificationSetJoinInfo(class UObject* WorldContextObject, const struct FEOSHPresenceModification& Handle, const struct FEOSPresenceModificationSetJoinInfoOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CorePresence.EOSPresenceModificationSetJoinInfo");
		
		UCorePresence_EOSPresenceModificationSetJoinInfo_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CorePresence.EOSPresenceModificationSetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHPresenceModification                   Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSPresenceModificationSetDataOptions      Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCorePresence::EOSPresenceModificationSetData(class UObject* WorldContextObject, const struct FEOSHPresenceModification& Handle, const struct FEOSPresenceModificationSetDataOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CorePresence.EOSPresenceModificationSetData");
		
		UCorePresence_EOSPresenceModificationSetData_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CorePresence.EOSPresenceModificationRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHPresenceModification                   PresenceModificationHandle                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCorePresence::EOSPresenceModificationRelease(class UObject* WorldContextObject, const struct FEOSHPresenceModification& PresenceModificationHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CorePresence.EOSPresenceModificationRelease");
		
		UCorePresence_EOSPresenceModificationRelease_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PresenceModificationHandle = PresenceModificationHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CorePresence.EOSPresenceModificationDeleteData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHPresenceModification                   Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSPresenceModificationDeleteDataOptions   Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCorePresence::EOSPresenceModificationDeleteData(class UObject* WorldContextObject, const struct FEOSHPresenceModification& Handle, const struct FEOSPresenceModificationDeleteDataOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CorePresence.EOSPresenceModificationDeleteData");
		
		UCorePresence_EOSPresenceModificationDeleteData_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CorePresence.EOSPresenceHasPresence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSPresenceHasPresenceOptions              Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UCorePresence::EOSPresenceHasPresence(class UObject* WorldContextObject, const struct FEOSPresenceHasPresenceOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CorePresence.EOSPresenceHasPresence");
		
		UCorePresence_EOSPresenceHasPresence_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CorePresence.EOSPresenceGetJoinInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSPresenceGetJoinInfoOptions              Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutInfo                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCorePresence::EOSPresenceGetJoinInfo(class UObject* WorldContextObject, const struct FEOSPresenceGetJoinInfoOptions& Options, class FString* OutInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CorePresence.EOSPresenceGetJoinInfo");
		
		UCorePresence_EOSPresenceGetJoinInfo_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutInfo != nullptr)
			*OutInfo = params.OutInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CorePresence.EOSPresenceCreatePresenceModification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSPresenceCreatePresenceModificationOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSHPresenceModification                   OutPresenceModificationHandle                              (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCorePresence::EOSPresenceCreatePresenceModification(class UObject* WorldContextObject, const struct FEOSPresenceCreatePresenceModificationOptions& Options, struct FEOSHPresenceModification* OutPresenceModificationHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CorePresence.EOSPresenceCreatePresenceModification");
		
		UCorePresence_EOSPresenceCreatePresenceModification_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPresenceModificationHandle != nullptr)
			*OutPresenceModificationHandle = params.OutPresenceModificationHandle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CorePresence.EOSPresenceCopyPresence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSPresenceCopyPresenceOptions             Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSPresenceInfo                            OutPresence                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCorePresence::EOSPresenceCopyPresence(class UObject* WorldContextObject, const struct FEOSPresenceCopyPresenceOptions& Options, struct FEOSPresenceInfo* OutPresence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CorePresence.EOSPresenceCopyPresence");
		
		UCorePresence_EOSPresenceCopyPresence_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPresence != nullptr)
			*OutPresence = params.OutPresence;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CorePresence.EOSPresenceAddNotifyOnPresenceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCorePresence::EOSPresenceAddNotifyOnPresenceChanged(class UObject* WorldContextObject, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CorePresence.EOSPresenceAddNotifyOnPresenceChanged");
		
		UCorePresence_EOSPresenceAddNotifyOnPresenceChanged_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CorePresence.EOSPresenceAddNotifyJoinGameAccepted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCorePresence::EOSPresenceAddNotifyJoinGameAccepted(class UObject* WorldContextObject, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CorePresence.EOSPresenceAddNotifyJoinGameAccepted");
		
		UCorePresence_EOSPresenceAddNotifyJoinGameAccepted_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCorePresence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCorePresence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.CorePresence");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCorePresenceQueryPresence.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSPresenceQueryPresenceCallbackInfo       Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCorePresenceQueryPresence::HandleCallback(const struct FEOSPresenceQueryPresenceCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCorePresenceQueryPresence.HandleCallback");
		
		UEOSCorePresenceQueryPresence_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCorePresenceQueryPresence.EOSPresenceQueryPresenceAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSPresenceQueryPresenceOptions            Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UEOSCorePresenceQueryPresence* UEOSCorePresenceQueryPresence::EOSPresenceQueryPresenceAsync(class UObject* WorldContextObject, const struct FEOSPresenceQueryPresenceOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCorePresenceQueryPresence.EOSPresenceQueryPresenceAsync");
		
		UEOSCorePresenceQueryPresence_EOSPresenceQueryPresenceAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCorePresenceQueryPresence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCorePresenceQueryPresence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCorePresenceQueryPresence");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCorePresenceSetPresence.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSPresenceSetPresenceCallbackInfo         Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCorePresenceSetPresence::HandleCallback(const struct FEOSPresenceSetPresenceCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCorePresenceSetPresence.HandleCallback");
		
		UEOSCorePresenceSetPresence_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCorePresenceSetPresence.EOSPresenceSetPresenceAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSPresenceSetPresenceOptions              Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UEOSCorePresenceSetPresence* UEOSCorePresenceSetPresence::EOSPresenceSetPresenceAsync(class UObject* WorldContextObject, const struct FEOSPresenceSetPresenceOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCorePresenceSetPresence.EOSPresenceSetPresenceAsync");
		
		UEOSCorePresenceSetPresence_EOSPresenceSetPresenceAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCorePresenceSetPresence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCorePresenceSetPresence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCorePresenceSetPresence");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreProgressionSnapshot.GetProgressionSnapshot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreProgressionSnapshot* UCoreProgressionSnapshot::GetProgressionSnapshot(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreProgressionSnapshot.GetProgressionSnapshot");
		
		UCoreProgressionSnapshot_GetProgressionSnapshot_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreProgressionSnapshot.EOSProgressionSnapshotSubmitSnapshot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSProgressionSnapshotSubmitSnapshotOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreProgressionSnapshot::EOSProgressionSnapshotSubmitSnapshot(class UObject* WorldContextObject, const struct FEOSProgressionSnapshotSubmitSnapshotOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreProgressionSnapshot.EOSProgressionSnapshotSubmitSnapshot");
		
		UCoreProgressionSnapshot_EOSProgressionSnapshotSubmitSnapshot_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreProgressionSnapshot.EOSProgressionSnapshotEndSnapshot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSProgressionSnapshotEndSnapshotOptions   Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreProgressionSnapshot::EOSProgressionSnapshotEndSnapshot(class UObject* WorldContextObject, const struct FEOSProgressionSnapshotEndSnapshotOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreProgressionSnapshot.EOSProgressionSnapshotEndSnapshot");
		
		UCoreProgressionSnapshot_EOSProgressionSnapshotEndSnapshot_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreProgressionSnapshot.EOSProgressionSnapshotDeleteSnapshot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSProgressionSnapshotDeleteSnapshotOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreProgressionSnapshot::EOSProgressionSnapshotDeleteSnapshot(class UObject* WorldContextObject, const struct FEOSProgressionSnapshotDeleteSnapshotOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreProgressionSnapshot.EOSProgressionSnapshotDeleteSnapshot");
		
		UCoreProgressionSnapshot_EOSProgressionSnapshotDeleteSnapshot_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreProgressionSnapshot.EOSProgressionSnapshotBeginSnapshot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSProgressionSnapshotBeginSnapshotOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutSnapshotId                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreProgressionSnapshot::EOSProgressionSnapshotBeginSnapshot(class UObject* WorldContextObject, const struct FEOSProgressionSnapshotBeginSnapshotOptions& Options, int32_t* OutSnapshotId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreProgressionSnapshot.EOSProgressionSnapshotBeginSnapshot");
		
		UCoreProgressionSnapshot_EOSProgressionSnapshotBeginSnapshot_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSnapshotId != nullptr)
			*OutSnapshotId = params.OutSnapshotId;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreProgressionSnapshot.EOSProgressionSnapshotAddProgression
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSProgressionSnapshotAddProgressionOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreProgressionSnapshot::EOSProgressionSnapshotAddProgression(class UObject* WorldContextObject, const struct FEOSProgressionSnapshotAddProgressionOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreProgressionSnapshot.EOSProgressionSnapshotAddProgression");
		
		UCoreProgressionSnapshot_EOSProgressionSnapshotAddProgression_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreProgressionSnapshot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreProgressionSnapshot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.CoreProgressionSnapshot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreReports.GetReports
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreReports* UCoreReports::GetReports(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreReports.GetReports");
		
		UCoreReports_GetReports_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreReports.EOSReportsSendPlayerBehaviorReport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSReportsSendPlayerBehaviorReportOptions  Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreReports::EOSReportsSendPlayerBehaviorReport(class UObject* WorldContextObject, const struct FEOSReportsSendPlayerBehaviorReportOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreReports.EOSReportsSendPlayerBehaviorReport");
		
		UCoreReports_EOSReportsSendPlayerBehaviorReport_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreReports.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreReports::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.CoreReports");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSReportsSendPlayerBehaviorReport.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSReportsSendPlayerBehaviorReportCompleteCallbackInfo Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSReportsSendPlayerBehaviorReport::HandleCallback(const struct FEOSReportsSendPlayerBehaviorReportCompleteCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSReportsSendPlayerBehaviorReport.HandleCallback");
		
		UEOSReportsSendPlayerBehaviorReport_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSReportsSendPlayerBehaviorReport.EOSReportsSendPlayerBehaviorReportAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSReportsSendPlayerBehaviorReportOptions  Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSReportsSendPlayerBehaviorReport* UEOSReportsSendPlayerBehaviorReport::EOSReportsSendPlayerBehaviorReportAsync(class UObject* WorldContextObject, const struct FEOSReportsSendPlayerBehaviorReportOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSReportsSendPlayerBehaviorReport.EOSReportsSendPlayerBehaviorReportAsync");
		
		UEOSReportsSendPlayerBehaviorReport_EOSReportsSendPlayerBehaviorReportAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSReportsSendPlayerBehaviorReport.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSReportsSendPlayerBehaviorReport::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSReportsSendPlayerBehaviorReport");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTC.GetRTC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreRTC* UCoreRTC::GetRTC(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTC.GetRTC");
		
		UCoreRTC_GetRTC_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTC.EOSRTCRemoveNotifyParticipantStatusChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          NotificationID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreRTC::EOSRTCRemoveNotifyParticipantStatusChanged(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTC.EOSRTCRemoveNotifyParticipantStatusChanged");
		
		UCoreRTC_EOSRTCRemoveNotifyParticipantStatusChanged_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.NotificationID = NotificationID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTC.EOSRTCRemoveNotifyDisconnected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          NotificationID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreRTC::EOSRTCRemoveNotifyDisconnected(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTC.EOSRTCRemoveNotifyDisconnected");
		
		UCoreRTC_EOSRTCRemoveNotifyDisconnected_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.NotificationID = NotificationID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTC.EOSRTCLeaveRoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLeaveRoomOptions                           Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreRTC::EOSRTCLeaveRoom(class UObject* WorldContextObject, const struct FLeaveRoomOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTC.EOSRTCLeaveRoom");
		
		UCoreRTC_EOSRTCLeaveRoom_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTC.EOSRTCJoinRoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FJoinRoomOptions                            Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreRTC::EOSRTCJoinRoom(class UObject* WorldContextObject, const struct FJoinRoomOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTC.EOSRTCJoinRoom");
		
		UCoreRTC_EOSRTCJoinRoom_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTC.EOSRTCGetAudioInterface
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEOSHRTCAudio UCoreRTC::EOSRTCGetAudioInterface(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTC.EOSRTCGetAudioInterface");
		
		UCoreRTC_EOSRTCGetAudioInterface_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTC.EOSRTCBlockParticipant
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBlockParticipantOptions                    Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreRTC::EOSRTCBlockParticipant(class UObject* WorldContextObject, const struct FBlockParticipantOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTC.EOSRTCBlockParticipant");
		
		UCoreRTC_EOSRTCBlockParticipant_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTC.EOSRTCAddNotifyParticipantStatusChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAddNotifyParticipantStatusChangedOptions   Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreRTC::EOSRTCAddNotifyParticipantStatusChanged(class UObject* WorldContextObject, const struct FAddNotifyParticipantStatusChangedOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTC.EOSRTCAddNotifyParticipantStatusChanged");
		
		UCoreRTC_EOSRTCAddNotifyParticipantStatusChanged_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTC.EOSRTCAddNotifyDisconnected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAddNotifyDisconnectedOptions               Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreRTC::EOSRTCAddNotifyDisconnected(class UObject* WorldContextObject, const struct FAddNotifyDisconnectedOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTC.EOSRTCAddNotifyDisconnected");
		
		UCoreRTC_EOSRTCAddNotifyDisconnected_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreRTC.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreRTC::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.CoreRTC");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTCAdmin.GetRTCAdmin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreRTCAdmin* UCoreRTCAdmin::GetRTCAdmin(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTCAdmin.GetRTCAdmin");
		
		UCoreRTCAdmin_GetRTCAdmin_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTCAdmin.EOSRTCAdminSetParticipantHardMute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSetParticipantHardMuteOptions           Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreRTCAdmin::EOSRTCAdminSetParticipantHardMute(class UObject* WorldContextObject, const struct FEOSSetParticipantHardMuteOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTCAdmin.EOSRTCAdminSetParticipantHardMute");
		
		UCoreRTCAdmin_EOSRTCAdminSetParticipantHardMute_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTCAdmin.EOSRTCAdminQueryJoinRoomToken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSQueryJoinRoomTokenOptions               Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreRTCAdmin::EOSRTCAdminQueryJoinRoomToken(class UObject* WorldContextObject, const struct FEOSQueryJoinRoomTokenOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTCAdmin.EOSRTCAdminQueryJoinRoomToken");
		
		UCoreRTCAdmin_EOSRTCAdminQueryJoinRoomToken_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTCAdmin.EOSRTCAdminKick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSKickOptions                             Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreRTCAdmin::EOSRTCAdminKick(class UObject* WorldContextObject, const struct FEOSKickOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTCAdmin.EOSRTCAdminKick");
		
		UCoreRTCAdmin_EOSRTCAdminKick_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTCAdmin.EOSRTCAdminCopyUserTokenByUserId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSCopyUserTokenByUserIdOptions            Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSUserToken                               OutUserToken                                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreRTCAdmin::EOSRTCAdminCopyUserTokenByUserId(class UObject* WorldContextObject, const struct FEOSCopyUserTokenByUserIdOptions& Options, struct FEOSUserToken* OutUserToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTCAdmin.EOSRTCAdminCopyUserTokenByUserId");
		
		UCoreRTCAdmin_EOSRTCAdminCopyUserTokenByUserId_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutUserToken != nullptr)
			*OutUserToken = params.OutUserToken;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTCAdmin.EOSRTCAdminCopyUserTokenByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSCopyUserTokenByIndexOptions             Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSUserToken                               OutUserToken                                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreRTCAdmin::EOSRTCAdminCopyUserTokenByIndex(class UObject* WorldContextObject, const struct FEOSCopyUserTokenByIndexOptions& Options, struct FEOSUserToken* OutUserToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTCAdmin.EOSRTCAdminCopyUserTokenByIndex");
		
		UCoreRTCAdmin_EOSRTCAdminCopyUserTokenByIndex_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutUserToken != nullptr)
			*OutUserToken = params.OutUserToken;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreRTCAdmin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreRTCAdmin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.CoreRTCAdmin");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTCAudio.GetRTCAudio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreRTCAudio* UCoreRTCAudio::GetRTCAudio(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTCAudio.GetRTCAudio");
		
		UCoreRTCAudio_GetRTCAudio_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTCAudio.EOSRTCAudioUpdateSendingVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSHRTCAudio                               Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSRTCAudioUpdateSendingVolumeOptions      Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreRTCAudio::EOSRTCAudioUpdateSendingVolume(const struct FEOSHRTCAudio& Handle, const struct FEOSRTCAudioUpdateSendingVolumeOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTCAudio.EOSRTCAudioUpdateSendingVolume");
		
		UCoreRTCAudio_EOSRTCAudioUpdateSendingVolume_Params params {};
		params.Handle = Handle;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTCAudio.EOSRTCAudioUpdateSending
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSHRTCAudio                               Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSUpdateSendingOptions                    Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreRTCAudio::EOSRTCAudioUpdateSending(const struct FEOSHRTCAudio& Handle, const struct FEOSUpdateSendingOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTCAudio.EOSRTCAudioUpdateSending");
		
		UCoreRTCAudio_EOSRTCAudioUpdateSending_Params params {};
		params.Handle = Handle;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTCAudio.EOSRTCAudioUpdateReceivingVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSHRTCAudio                               Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSRTCAudioUpdateReceivingVolumeOptions    Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreRTCAudio::EOSRTCAudioUpdateReceivingVolume(const struct FEOSHRTCAudio& Handle, const struct FEOSRTCAudioUpdateReceivingVolumeOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTCAudio.EOSRTCAudioUpdateReceivingVolume");
		
		UCoreRTCAudio_EOSRTCAudioUpdateReceivingVolume_Params params {};
		params.Handle = Handle;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTCAudio.EOSRTCAudioUpdateReceiving
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSHRTCAudio                               Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSUpdateReceivingOptions                  Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreRTCAudio::EOSRTCAudioUpdateReceiving(const struct FEOSHRTCAudio& Handle, const struct FEOSUpdateReceivingOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTCAudio.EOSRTCAudioUpdateReceiving");
		
		UCoreRTCAudio_EOSRTCAudioUpdateReceiving_Params params {};
		params.Handle = Handle;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTCAudio.EOSRTCAudioUpdateParticipantVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSHRTCAudio                               Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSRTCAudioUpdateParticipantVolumeOptions  Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreRTCAudio::EOSRTCAudioUpdateParticipantVolume(const struct FEOSHRTCAudio& Handle, const struct FEOSRTCAudioUpdateParticipantVolumeOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTCAudio.EOSRTCAudioUpdateParticipantVolume");
		
		UCoreRTCAudio_EOSRTCAudioUpdateParticipantVolume_Params params {};
		params.Handle = Handle;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTCAudio.EOSRTCAudioUnregisterPlatformAudioUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSHRTCAudio                               Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSUnregisterPlatformAudioUserOptions      Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreRTCAudio::EOSRTCAudioUnregisterPlatformAudioUser(const struct FEOSHRTCAudio& Handle, const struct FEOSUnregisterPlatformAudioUserOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTCAudio.EOSRTCAudioUnregisterPlatformAudioUser");
		
		UCoreRTCAudio_EOSRTCAudioUnregisterPlatformAudioUser_Params params {};
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTCAudio.EOSRTCAudioSetAudioOutputSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSHRTCAudio                               Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSetAudioOutputSettingsOptions           Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreRTCAudio::EOSRTCAudioSetAudioOutputSettings(const struct FEOSHRTCAudio& Handle, const struct FEOSSetAudioOutputSettingsOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTCAudio.EOSRTCAudioSetAudioOutputSettings");
		
		UCoreRTCAudio_EOSRTCAudioSetAudioOutputSettings_Params params {};
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTCAudio.EOSRTCAudioSetAudioInputSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSHRTCAudio                               Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSetAudioInputSettingsOptions            Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreRTCAudio::EOSRTCAudioSetAudioInputSettings(const struct FEOSHRTCAudio& Handle, const struct FEOSSetAudioInputSettingsOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTCAudio.EOSRTCAudioSetAudioInputSettings");
		
		UCoreRTCAudio_EOSRTCAudioSetAudioInputSettings_Params params {};
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTCAudio.EOSRTCAudioSendAudio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSHRTCAudio                               Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSendAudioOptions                        Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreRTCAudio::EOSRTCAudioSendAudio(const struct FEOSHRTCAudio& Handle, const struct FEOSSendAudioOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTCAudio.EOSRTCAudioSendAudio");
		
		UCoreRTCAudio_EOSRTCAudioSendAudio_Params params {};
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTCAudio.EOSRTCAudioRemoveNotifyParticipantUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHRTCAudio                               Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          NotificationID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreRTCAudio::EOSRTCAudioRemoveNotifyParticipantUpdated(class UObject* WorldContextObject, const struct FEOSHRTCAudio& Handle, const struct FEOSNotificationId& NotificationID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTCAudio.EOSRTCAudioRemoveNotifyParticipantUpdated");
		
		UCoreRTCAudio_EOSRTCAudioRemoveNotifyParticipantUpdated_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.NotificationID = NotificationID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTCAudio.EOSRTCAudioRemoveNotifyAudioOutputState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHRTCAudio                               Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          NotificationID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreRTCAudio::EOSRTCAudioRemoveNotifyAudioOutputState(class UObject* WorldContextObject, const struct FEOSHRTCAudio& Handle, const struct FEOSNotificationId& NotificationID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTCAudio.EOSRTCAudioRemoveNotifyAudioOutputState");
		
		UCoreRTCAudio_EOSRTCAudioRemoveNotifyAudioOutputState_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.NotificationID = NotificationID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTCAudio.EOSRTCAudioRemoveNotifyAudioInputState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHRTCAudio                               Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          NotificationID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreRTCAudio::EOSRTCAudioRemoveNotifyAudioInputState(class UObject* WorldContextObject, const struct FEOSHRTCAudio& Handle, const struct FEOSNotificationId& NotificationID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTCAudio.EOSRTCAudioRemoveNotifyAudioInputState");
		
		UCoreRTCAudio_EOSRTCAudioRemoveNotifyAudioInputState_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.NotificationID = NotificationID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTCAudio.EOSRTCAudioRemoveNotifyAudioDevicesChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHRTCAudio                               Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          NotificationID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreRTCAudio::EOSRTCAudioRemoveNotifyAudioDevicesChanged(class UObject* WorldContextObject, const struct FEOSHRTCAudio& Handle, const struct FEOSNotificationId& NotificationID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTCAudio.EOSRTCAudioRemoveNotifyAudioDevicesChanged");
		
		UCoreRTCAudio_EOSRTCAudioRemoveNotifyAudioDevicesChanged_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.NotificationID = NotificationID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTCAudio.EOSRTCAudioRemoveNotifyAudioBeforeSend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHRTCAudio                               Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          NotificationID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreRTCAudio::EOSRTCAudioRemoveNotifyAudioBeforeSend(class UObject* WorldContextObject, const struct FEOSHRTCAudio& Handle, const struct FEOSNotificationId& NotificationID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTCAudio.EOSRTCAudioRemoveNotifyAudioBeforeSend");
		
		UCoreRTCAudio_EOSRTCAudioRemoveNotifyAudioBeforeSend_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.NotificationID = NotificationID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTCAudio.EOSRTCAudioRemoveNotifyAudioBeforeRender
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHRTCAudio                               Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          NotificationID                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreRTCAudio::EOSRTCAudioRemoveNotifyAudioBeforeRender(class UObject* WorldContextObject, const struct FEOSHRTCAudio& Handle, const struct FEOSNotificationId& NotificationID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTCAudio.EOSRTCAudioRemoveNotifyAudioBeforeRender");
		
		UCoreRTCAudio_EOSRTCAudioRemoveNotifyAudioBeforeRender_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.NotificationID = NotificationID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTCAudio.EOSRTCAudioRegisterPlatformAudioUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSHRTCAudio                               Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSRegisterPlatformAudioUserOptions        Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreRTCAudio::EOSRTCAudioRegisterPlatformAudioUser(const struct FEOSHRTCAudio& Handle, const struct FEOSRegisterPlatformAudioUserOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTCAudio.EOSRTCAudioRegisterPlatformAudioUser");
		
		UCoreRTCAudio_EOSRTCAudioRegisterPlatformAudioUser_Params params {};
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTCAudio.EOSRTCAudioGetAudioOutputDevicesCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSHRTCAudio                               Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSGetAudioOutputDevicesCountOptions       Options                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UCoreRTCAudio::EOSRTCAudioGetAudioOutputDevicesCount(const struct FEOSHRTCAudio& Handle, const struct FEOSGetAudioOutputDevicesCountOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTCAudio.EOSRTCAudioGetAudioOutputDevicesCount");
		
		UCoreRTCAudio_EOSRTCAudioGetAudioOutputDevicesCount_Params params {};
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTCAudio.EOSRTCAudioGetAudioOutputDeviceByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSHRTCAudio                               Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSGetAudioOutputDeviceByIndexOptions      Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSAudioOutputDeviceInfo UCoreRTCAudio::EOSRTCAudioGetAudioOutputDeviceByIndex(const struct FEOSHRTCAudio& Handle, const struct FEOSGetAudioOutputDeviceByIndexOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTCAudio.EOSRTCAudioGetAudioOutputDeviceByIndex");
		
		UCoreRTCAudio_EOSRTCAudioGetAudioOutputDeviceByIndex_Params params {};
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTCAudio.EOSRTCAudioGetAudioInputDevicesCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSHRTCAudio                               Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSGetAudioInputDevicesCountOptions        Options                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UCoreRTCAudio::EOSRTCAudioGetAudioInputDevicesCount(const struct FEOSHRTCAudio& Handle, const struct FEOSGetAudioInputDevicesCountOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTCAudio.EOSRTCAudioGetAudioInputDevicesCount");
		
		UCoreRTCAudio_EOSRTCAudioGetAudioInputDevicesCount_Params params {};
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTCAudio.EOSRTCAudioGetAudioInputDeviceByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSHRTCAudio                               Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSGetAudioOutputDeviceByIndexOptions      Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSAudioInputDeviceInfo UCoreRTCAudio::EOSRTCAudioGetAudioInputDeviceByIndex(const struct FEOSHRTCAudio& Handle, const struct FEOSGetAudioOutputDeviceByIndexOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTCAudio.EOSRTCAudioGetAudioInputDeviceByIndex");
		
		UCoreRTCAudio_EOSRTCAudioGetAudioInputDeviceByIndex_Params params {};
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTCAudio.EOSRTCAudioAddNotifyParticipantUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHRTCAudio                               Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAddNotifyParticipantUpdatedOptions      Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreRTCAudio::EOSRTCAudioAddNotifyParticipantUpdated(class UObject* WorldContextObject, const struct FEOSHRTCAudio& Handle, const struct FEOSAddNotifyParticipantUpdatedOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTCAudio.EOSRTCAudioAddNotifyParticipantUpdated");
		
		UCoreRTCAudio_EOSRTCAudioAddNotifyParticipantUpdated_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTCAudio.EOSRTCAudioAddNotifyAudioOutputState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHRTCAudio                               Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAddNotifyAudioOutputStateOptions        Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreRTCAudio::EOSRTCAudioAddNotifyAudioOutputState(class UObject* WorldContextObject, const struct FEOSHRTCAudio& Handle, const struct FEOSAddNotifyAudioOutputStateOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTCAudio.EOSRTCAudioAddNotifyAudioOutputState");
		
		UCoreRTCAudio_EOSRTCAudioAddNotifyAudioOutputState_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTCAudio.EOSRTCAudioAddNotifyAudioInputState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHRTCAudio                               Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAddNotifyAudioInputStateOptions         Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreRTCAudio::EOSRTCAudioAddNotifyAudioInputState(class UObject* WorldContextObject, const struct FEOSHRTCAudio& Handle, const struct FEOSAddNotifyAudioInputStateOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTCAudio.EOSRTCAudioAddNotifyAudioInputState");
		
		UCoreRTCAudio_EOSRTCAudioAddNotifyAudioInputState_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTCAudio.EOSRTCAudioAddNotifyAudioDevicesChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHRTCAudio                               Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAddNotifyAudioDevicesChangedOptions     Options                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreRTCAudio::EOSRTCAudioAddNotifyAudioDevicesChanged(class UObject* WorldContextObject, const struct FEOSHRTCAudio& Handle, const struct FEOSAddNotifyAudioDevicesChangedOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTCAudio.EOSRTCAudioAddNotifyAudioDevicesChanged");
		
		UCoreRTCAudio_EOSRTCAudioAddNotifyAudioDevicesChanged_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTCAudio.EOSRTCAudioAddNotifyAudioBeforeSend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHRTCAudio                               Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAddNotifyAudioBeforeSendOptions         Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreRTCAudio::EOSRTCAudioAddNotifyAudioBeforeSend(class UObject* WorldContextObject, const struct FEOSHRTCAudio& Handle, const struct FEOSAddNotifyAudioBeforeSendOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTCAudio.EOSRTCAudioAddNotifyAudioBeforeSend");
		
		UCoreRTCAudio_EOSRTCAudioAddNotifyAudioBeforeSend_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreRTCAudio.EOSRTCAudioAddNotifyAudioBeforeRender
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHRTCAudio                               Handle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSAddNotifyAudioBeforeRenderOptions       Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreRTCAudio::EOSRTCAudioAddNotifyAudioBeforeRender(class UObject* WorldContextObject, const struct FEOSHRTCAudio& Handle, const struct FEOSAddNotifyAudioBeforeRenderOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreRTCAudio.EOSRTCAudioAddNotifyAudioBeforeRender");
		
		UCoreRTCAudio_EOSRTCAudioAddNotifyAudioBeforeRender_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreRTCAudio.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreRTCAudio::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.CoreRTCAudio");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSanctions.GetSanctions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreSanctions* UCoreSanctions::GetSanctions(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSanctions.GetSanctions");
		
		UCoreSanctions_GetSanctions_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSanctions.EOSSanctionsQueryActivePlayerSanctions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSanctionsQueryActivePlayerSanctionsOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreSanctions::EOSSanctionsQueryActivePlayerSanctions(class UObject* WorldContextObject, const struct FEOSSanctionsQueryActivePlayerSanctionsOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSanctions.EOSSanctionsQueryActivePlayerSanctions");
		
		UCoreSanctions_EOSSanctionsQueryActivePlayerSanctions_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSanctions.EOSSanctionsGetPlayerSanctionCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSanctionsGetPlayerSanctionCountOptions  Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UCoreSanctions::EOSSanctionsGetPlayerSanctionCount(class UObject* WorldContextObject, const struct FEOSSanctionsGetPlayerSanctionCountOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSanctions.EOSSanctionsGetPlayerSanctionCount");
		
		UCoreSanctions_EOSSanctionsGetPlayerSanctionCount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSanctions.EOSSanctionsCopyPlayerSanctionByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSanctionsCopyPlayerSanctionByIndexOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSSanctionsPlayerSanction                 OutSanction                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreSanctions::EOSSanctionsCopyPlayerSanctionByIndex(class UObject* WorldContextObject, const struct FEOSSanctionsCopyPlayerSanctionByIndexOptions& Options, struct FEOSSanctionsPlayerSanction* OutSanction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSanctions.EOSSanctionsCopyPlayerSanctionByIndex");
		
		UCoreSanctions_EOSSanctionsCopyPlayerSanctionByIndex_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSanction != nullptr)
			*OutSanction = params.OutSanction;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreSanctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreSanctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.CoreSanctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSSanctionsQueryActivePlayerSanctions.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSSanctionsQueryActivePlayerSanctionsCallbackInfo Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSSanctionsQueryActivePlayerSanctions::HandleCallback(const struct FEOSSanctionsQueryActivePlayerSanctionsCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSSanctionsQueryActivePlayerSanctions.HandleCallback");
		
		UEOSSanctionsQueryActivePlayerSanctions_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSSanctionsQueryActivePlayerSanctions.EOSSanctionsQueryActivePlayerSanctionsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSanctionsQueryActivePlayerSanctionsOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UEOSSanctionsQueryActivePlayerSanctions* UEOSSanctionsQueryActivePlayerSanctions::EOSSanctionsQueryActivePlayerSanctionsAsync(class UObject* WorldContextObject, const struct FEOSSanctionsQueryActivePlayerSanctionsOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSSanctionsQueryActivePlayerSanctions.EOSSanctionsQueryActivePlayerSanctionsAsync");
		
		UEOSSanctionsQueryActivePlayerSanctions_EOSSanctionsQueryActivePlayerSanctionsAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSSanctionsQueryActivePlayerSanctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSSanctionsQueryActivePlayerSanctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSSanctionsQueryActivePlayerSanctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.GetSessions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreSessions* UCoreSessions::GetSessions(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.GetSessions");
		
		UCoreSessions_GetSessions_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionsUpdateSessionModification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionsUpdateSessionModificationOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FEOSHSessionModification                    OutSessionModificationHandle                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreSessions::EOSSessionsUpdateSessionModification(class UObject* WorldContextObject, const struct FEOSSessionsUpdateSessionModificationOptions& Options, struct FEOSHSessionModification* OutSessionModificationHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionsUpdateSessionModification");
		
		UCoreSessions_EOSSessionsUpdateSessionModification_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSessionModificationHandle != nullptr)
			*OutSessionModificationHandle = params.OutSessionModificationHandle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionsUpdateSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionsUpdateSessionOptions            Options                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreSessions::EOSSessionsUpdateSession(class UObject* WorldContextObject, const struct FEOSSessionsUpdateSessionOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionsUpdateSession");
		
		UCoreSessions_EOSSessionsUpdateSession_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionsUnregisterPlayers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionsUnregisterPlayersOptions        Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreSessions::EOSSessionsUnregisterPlayers(class UObject* WorldContextObject, const struct FEOSSessionsUnregisterPlayersOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionsUnregisterPlayers");
		
		UCoreSessions_EOSSessionsUnregisterPlayers_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionsStartSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionsStartSessionOptions             Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreSessions::EOSSessionsStartSession(class UObject* WorldContextObject, const struct FEOSSessionsStartSessionOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionsStartSession");
		
		UCoreSessions_EOSSessionsStartSession_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionsSendInvite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionsSendInviteOptions               Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreSessions::EOSSessionsSendInvite(class UObject* WorldContextObject, const struct FEOSSessionsSendInviteOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionsSendInvite");
		
		UCoreSessions_EOSSessionsSendInvite_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionsRemoveNotifySessionInviteReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          ID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreSessions::EOSSessionsRemoveNotifySessionInviteReceived(class UObject* WorldContextObject, const struct FEOSNotificationId& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionsRemoveNotifySessionInviteReceived");
		
		UCoreSessions_EOSSessionsRemoveNotifySessionInviteReceived_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionsRemoveNotifySessionInviteAccepted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          ID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreSessions::EOSSessionsRemoveNotifySessionInviteAccepted(class UObject* WorldContextObject, const struct FEOSNotificationId& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionsRemoveNotifySessionInviteAccepted");
		
		UCoreSessions_EOSSessionsRemoveNotifySessionInviteAccepted_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionsRemoveNotifyJoinSessionAccepted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          ID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreSessions::EOSSessionsRemoveNotifyJoinSessionAccepted(class UObject* WorldContextObject, const struct FEOSNotificationId& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionsRemoveNotifyJoinSessionAccepted");
		
		UCoreSessions_EOSSessionsRemoveNotifyJoinSessionAccepted_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionsRejectInvite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionsRejectInviteOptions             Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreSessions::EOSSessionsRejectInvite(class UObject* WorldContextObject, const struct FEOSSessionsRejectInviteOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionsRejectInvite");
		
		UCoreSessions_EOSSessionsRejectInvite_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionsRegisterPlayers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionsRegisterPlayersOptions          Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreSessions::EOSSessionsRegisterPlayers(class UObject* WorldContextObject, const struct FEOSSessionsRegisterPlayersOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionsRegisterPlayers");
		
		UCoreSessions_EOSSessionsRegisterPlayers_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionsQueryInvites
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionsQueryInvitesOptions             Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreSessions::EOSSessionsQueryInvites(class UObject* WorldContextObject, const struct FEOSSessionsQueryInvitesOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionsQueryInvites");
		
		UCoreSessions_EOSSessionsQueryInvites_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionsJoinSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionsJoinSessionOptions              Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreSessions::EOSSessionsJoinSession(class UObject* WorldContextObject, const struct FEOSSessionsJoinSessionOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionsJoinSession");
		
		UCoreSessions_EOSSessionsJoinSession_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionsIsUserInSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionsIsUserInSessionOptions          Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreSessions::EOSSessionsIsUserInSession(class UObject* WorldContextObject, const struct FEOSSessionsIsUserInSessionOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionsIsUserInSession");
		
		UCoreSessions_EOSSessionsIsUserInSession_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionsGetInviteIdByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionsGetInviteIdByIndexOptions       Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutBuffer                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreSessions::EOSSessionsGetInviteIdByIndex(class UObject* WorldContextObject, const struct FEOSSessionsGetInviteIdByIndexOptions& Options, class FString* OutBuffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionsGetInviteIdByIndex");
		
		UCoreSessions_EOSSessionsGetInviteIdByIndex_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutBuffer != nullptr)
			*OutBuffer = params.OutBuffer;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionsGetInviteCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionsGetInviteCountOptions           Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UCoreSessions::EOSSessionsGetInviteCount(class UObject* WorldContextObject, const struct FEOSSessionsGetInviteCountOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionsGetInviteCount");
		
		UCoreSessions_EOSSessionsGetInviteCount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionsEndSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionsEndSessionOptions               Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreSessions::EOSSessionsEndSession(class UObject* WorldContextObject, const struct FEOSSessionsEndSessionOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionsEndSession");
		
		UCoreSessions_EOSSessionsEndSession_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionSearchSetTargetUserId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHSessionSearch                          Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionSearchSetTargetUserIdOptions     Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreSessions::EOSSessionSearchSetTargetUserId(class UObject* WorldContextObject, const struct FEOSHSessionSearch& Handle, const struct FEOSSessionSearchSetTargetUserIdOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionSearchSetTargetUserId");
		
		UCoreSessions_EOSSessionSearchSetTargetUserId_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionSearchSetSessionId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHSessionSearch                          Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionSearchSetSessionIdOptions        Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreSessions::EOSSessionSearchSetSessionId(class UObject* WorldContextObject, const struct FEOSHSessionSearch& Handle, const struct FEOSSessionSearchSetSessionIdOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionSearchSetSessionId");
		
		UCoreSessions_EOSSessionSearchSetSessionId_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionSearchSetParameterString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHSessionSearch                          Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEOSEComparisonOp                                  ComparisonOp                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreSessions::EOSSessionSearchSetParameterString(class UObject* WorldContextObject, const struct FEOSHSessionSearch& Handle, const class FString& Key, const class FString& Value, EEOSEComparisonOp ComparisonOp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionSearchSetParameterString");
		
		UCoreSessions_EOSSessionSearchSetParameterString_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Key = Key;
		params.Value = Value;
		params.ComparisonOp = ComparisonOp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionSearchSetParameterInt64
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHSessionSearch                          Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEOSEComparisonOp                                  ComparisonOp                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreSessions::EOSSessionSearchSetParameterInt64(class UObject* WorldContextObject, const struct FEOSHSessionSearch& Handle, const class FString& Key, const class FString& Value, EEOSEComparisonOp ComparisonOp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionSearchSetParameterInt64");
		
		UCoreSessions_EOSSessionSearchSetParameterInt64_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Key = Key;
		params.Value = Value;
		params.ComparisonOp = ComparisonOp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionSearchSetParameterDouble
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHSessionSearch                          Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEOSEComparisonOp                                  ComparisonOp                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreSessions::EOSSessionSearchSetParameterDouble(class UObject* WorldContextObject, const struct FEOSHSessionSearch& Handle, const class FString& Key, const class FString& Value, EEOSEComparisonOp ComparisonOp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionSearchSetParameterDouble");
		
		UCoreSessions_EOSSessionSearchSetParameterDouble_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Key = Key;
		params.Value = Value;
		params.ComparisonOp = ComparisonOp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionSearchSetParameterBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHSessionSearch                          Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEOSEComparisonOp                                  ComparisonOp                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreSessions::EOSSessionSearchSetParameterBool(class UObject* WorldContextObject, const struct FEOSHSessionSearch& Handle, const class FString& Key, bool bValue, EEOSEComparisonOp ComparisonOp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionSearchSetParameterBool");
		
		UCoreSessions_EOSSessionSearchSetParameterBool_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Key = Key;
		params.bValue = bValue;
		params.ComparisonOp = ComparisonOp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionSearchSetMaxResults
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHSessionSearch                          Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionSearchSetMaxResultsOptions       Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreSessions::EOSSessionSearchSetMaxResults(class UObject* WorldContextObject, const struct FEOSHSessionSearch& Handle, const struct FEOSSessionSearchSetMaxResultsOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionSearchSetMaxResults");
		
		UCoreSessions_EOSSessionSearchSetMaxResults_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionSearchRemoveParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHSessionSearch                          Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionSearchRemoveParameterOptions     Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreSessions::EOSSessionSearchRemoveParameter(class UObject* WorldContextObject, const struct FEOSHSessionSearch& Handle, const struct FEOSSessionSearchRemoveParameterOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionSearchRemoveParameter");
		
		UCoreSessions_EOSSessionSearchRemoveParameter_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionSearchRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHSessionSearch                          SessionSearchHandle                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreSessions::EOSSessionSearchRelease(class UObject* WorldContextObject, const struct FEOSHSessionSearch& SessionSearchHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionSearchRelease");
		
		UCoreSessions_EOSSessionSearchRelease_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SessionSearchHandle = SessionSearchHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionSearchGetSearchResultCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHSessionSearch                          Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionSearchGetSearchResultCountOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UCoreSessions::EOSSessionSearchGetSearchResultCount(class UObject* WorldContextObject, const struct FEOSHSessionSearch& Handle, const struct FEOSSessionSearchGetSearchResultCountOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionSearchGetSearchResultCount");
		
		UCoreSessions_EOSSessionSearchGetSearchResultCount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionSearchFind
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHSessionSearch                          Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionSearchFindOptions                Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreSessions::EOSSessionSearchFind(class UObject* WorldContextObject, const struct FEOSHSessionSearch& Handle, const struct FEOSSessionSearchFindOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionSearchFind");
		
		UCoreSessions_EOSSessionSearchFind_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionSearchCopySearchResultByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHSessionSearch                          Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionSearchCopySearchResultByIndexOptions Options                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSHSessionDetails                         OutSessionHandle                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreSessions::EOSSessionSearchCopySearchResultByIndex(class UObject* WorldContextObject, const struct FEOSHSessionSearch& Handle, const struct FEOSSessionSearchCopySearchResultByIndexOptions& Options, struct FEOSHSessionDetails* OutSessionHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionSearchCopySearchResultByIndex");
		
		UCoreSessions_EOSSessionSearchCopySearchResultByIndex_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSessionHandle != nullptr)
			*OutSessionHandle = params.OutSessionHandle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionsDumpSessionState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionsDumpSessionStateOptions         Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreSessions::EOSSessionsDumpSessionState(class UObject* WorldContextObject, const struct FEOSSessionsDumpSessionStateOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionsDumpSessionState");
		
		UCoreSessions_EOSSessionsDumpSessionState_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionsDestroySession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionsDestroySessionOptions           Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreSessions::EOSSessionsDestroySession(class UObject* WorldContextObject, const struct FEOSSessionsDestroySessionOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionsDestroySession");
		
		UCoreSessions_EOSSessionsDestroySession_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionsCreateSessionSearch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionsCreateSessionSearchOptions      Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSHSessionSearch                          OutSessionSearchHandle                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreSessions::EOSSessionsCreateSessionSearch(class UObject* WorldContextObject, const struct FEOSSessionsCreateSessionSearchOptions& Options, struct FEOSHSessionSearch* OutSessionSearchHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionsCreateSessionSearch");
		
		UCoreSessions_EOSSessionsCreateSessionSearch_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSessionSearchHandle != nullptr)
			*OutSessionSearchHandle = params.OutSessionSearchHandle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionsCreateSessionModification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionsCreateSessionModificationOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FEOSHSessionModification                    OutSessionModificationHandle                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreSessions::EOSSessionsCreateSessionModification(class UObject* WorldContextObject, const struct FEOSSessionsCreateSessionModificationOptions& Options, struct FEOSHSessionModification* OutSessionModificationHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionsCreateSessionModification");
		
		UCoreSessions_EOSSessionsCreateSessionModification_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSessionModificationHandle != nullptr)
			*OutSessionModificationHandle = params.OutSessionModificationHandle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionsCopySessionHandleForPresence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionsCopySessionHandleForPresenceOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSHSessionDetails                         OutSessionHandle                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreSessions::EOSSessionsCopySessionHandleForPresence(class UObject* WorldContextObject, const struct FEOSSessionsCopySessionHandleForPresenceOptions& Options, struct FEOSHSessionDetails* OutSessionHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionsCopySessionHandleForPresence");
		
		UCoreSessions_EOSSessionsCopySessionHandleForPresence_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSessionHandle != nullptr)
			*OutSessionHandle = params.OutSessionHandle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionsCopySessionHandleByUiEventId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionsCopySessionHandleByUiEventIdOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSHSessionDetails                         OutSessionHandle                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreSessions::EOSSessionsCopySessionHandleByUiEventId(class UObject* WorldContextObject, const struct FEOSSessionsCopySessionHandleByUiEventIdOptions& Options, struct FEOSHSessionDetails* OutSessionHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionsCopySessionHandleByUiEventId");
		
		UCoreSessions_EOSSessionsCopySessionHandleByUiEventId_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSessionHandle != nullptr)
			*OutSessionHandle = params.OutSessionHandle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionsCopySessionHandleByInviteId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionsCopySessionHandleByInviteIdOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FEOSHSessionDetails                         OutSessionHandle                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreSessions::EOSSessionsCopySessionHandleByInviteId(class UObject* WorldContextObject, const struct FEOSSessionsCopySessionHandleByInviteIdOptions& Options, struct FEOSHSessionDetails* OutSessionHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionsCopySessionHandleByInviteId");
		
		UCoreSessions_EOSSessionsCopySessionHandleByInviteId_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSessionHandle != nullptr)
			*OutSessionHandle = params.OutSessionHandle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionsCopyActiveSessionHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionsCopyActiveSessionHandleOptions  Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FEOSHActiveSession                          OutSessionHandle                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreSessions::EOSSessionsCopyActiveSessionHandle(class UObject* WorldContextObject, const struct FEOSSessionsCopyActiveSessionHandleOptions& Options, struct FEOSHActiveSession* OutSessionHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionsCopyActiveSessionHandle");
		
		UCoreSessions_EOSSessionsCopyActiveSessionHandle_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSessionHandle != nullptr)
			*OutSessionHandle = params.OutSessionHandle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionsAddNotifySessionInviteReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreSessions::EOSSessionsAddNotifySessionInviteReceived(class UObject* WorldContextObject, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionsAddNotifySessionInviteReceived");
		
		UCoreSessions_EOSSessionsAddNotifySessionInviteReceived_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionsAddNotifySessionInviteAccepted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreSessions::EOSSessionsAddNotifySessionInviteAccepted(class UObject* WorldContextObject, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionsAddNotifySessionInviteAccepted");
		
		UCoreSessions_EOSSessionsAddNotifySessionInviteAccepted_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionsAddNotifyJoinSessionAccepted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreSessions::EOSSessionsAddNotifyJoinSessionAccepted(class UObject* WorldContextObject, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionsAddNotifyJoinSessionAccepted");
		
		UCoreSessions_EOSSessionsAddNotifyJoinSessionAccepted_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionModificationSetPermissionLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHSessionModification                    Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionModificationSetPermissionLevelOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreSessions::EOSSessionModificationSetPermissionLevel(class UObject* WorldContextObject, const struct FEOSHSessionModification& Handle, const struct FEOSSessionModificationSetPermissionLevelOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionModificationSetPermissionLevel");
		
		UCoreSessions_EOSSessionModificationSetPermissionLevel_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionModificationSetMaxPlayers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHSessionModification                    Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionModificationSetMaxPlayersOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreSessions::EOSSessionModificationSetMaxPlayers(class UObject* WorldContextObject, const struct FEOSHSessionModification& Handle, const struct FEOSSessionModificationSetMaxPlayersOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionModificationSetMaxPlayers");
		
		UCoreSessions_EOSSessionModificationSetMaxPlayers_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionModificationSetJoinInProgressAllowed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHSessionModification                    Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionModificationSetJoinInProgressAllowedOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreSessions::EOSSessionModificationSetJoinInProgressAllowed(class UObject* WorldContextObject, const struct FEOSHSessionModification& Handle, const struct FEOSSessionModificationSetJoinInProgressAllowedOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionModificationSetJoinInProgressAllowed");
		
		UCoreSessions_EOSSessionModificationSetJoinInProgressAllowed_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionModificationSetInvitesAllowed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHSessionModification                    Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionModificationSetInvitesAllowedOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreSessions::EOSSessionModificationSetInvitesAllowed(class UObject* WorldContextObject, const struct FEOSHSessionModification& Handle, const struct FEOSSessionModificationSetInvitesAllowedOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionModificationSetInvitesAllowed");
		
		UCoreSessions_EOSSessionModificationSetInvitesAllowed_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionModificationSetHostAddress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHSessionModification                    Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionModificationSetHostAddressOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreSessions::EOSSessionModificationSetHostAddress(class UObject* WorldContextObject, const struct FEOSHSessionModification& Handle, const struct FEOSSessionModificationSetHostAddressOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionModificationSetHostAddress");
		
		UCoreSessions_EOSSessionModificationSetHostAddress_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionModificationSetBucketId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHSessionModification                    Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionModificationSetBucketIdOptions   Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreSessions::EOSSessionModificationSetBucketId(class UObject* WorldContextObject, const struct FEOSHSessionModification& Handle, const struct FEOSSessionModificationSetBucketIdOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionModificationSetBucketId");
		
		UCoreSessions_EOSSessionModificationSetBucketId_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionModificationRemoveAttribute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHSessionModification                    Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionModificationRemoveAttributeOptions Options                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreSessions::EOSSessionModificationRemoveAttribute(class UObject* WorldContextObject, const struct FEOSHSessionModification& Handle, const struct FEOSSessionModificationRemoveAttributeOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionModificationRemoveAttribute");
		
		UCoreSessions_EOSSessionModificationRemoveAttribute_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionModificationRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHSessionModification                    SessionModificationHandle                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreSessions::EOSSessionModificationRelease(class UObject* WorldContextObject, const struct FEOSHSessionModification& SessionModificationHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionModificationRelease");
		
		UCoreSessions_EOSSessionModificationRelease_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SessionModificationHandle = SessionModificationHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionModificationAddAttributeString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHSessionModification                    Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEOSESessionAttributeAdvertisementType             AdvertisementType                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreSessions::EOSSessionModificationAddAttributeString(class UObject* WorldContextObject, const struct FEOSHSessionModification& Handle, EEOSESessionAttributeAdvertisementType AdvertisementType, const class FString& Key, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionModificationAddAttributeString");
		
		UCoreSessions_EOSSessionModificationAddAttributeString_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.AdvertisementType = AdvertisementType;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionModificationAddAttributeInt64
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHSessionModification                    Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEOSESessionAttributeAdvertisementType             AdvertisementType                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreSessions::EOSSessionModificationAddAttributeInt64(class UObject* WorldContextObject, const struct FEOSHSessionModification& Handle, EEOSESessionAttributeAdvertisementType AdvertisementType, const class FString& Key, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionModificationAddAttributeInt64");
		
		UCoreSessions_EOSSessionModificationAddAttributeInt64_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.AdvertisementType = AdvertisementType;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionModificationAddAttributeDouble
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHSessionModification                    Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEOSESessionAttributeAdvertisementType             AdvertisementType                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreSessions::EOSSessionModificationAddAttributeDouble(class UObject* WorldContextObject, const struct FEOSHSessionModification& Handle, EEOSESessionAttributeAdvertisementType AdvertisementType, const class FString& Key, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionModificationAddAttributeDouble");
		
		UCoreSessions_EOSSessionModificationAddAttributeDouble_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.AdvertisementType = AdvertisementType;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionModificationAddAttributeBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHSessionModification                    Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEOSESessionAttributeAdvertisementType             AdvertisementType                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreSessions::EOSSessionModificationAddAttributeBool(class UObject* WorldContextObject, const struct FEOSHSessionModification& Handle, EEOSESessionAttributeAdvertisementType AdvertisementType, const class FString& Key, bool bValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionModificationAddAttributeBool");
		
		UCoreSessions_EOSSessionModificationAddAttributeBool_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.AdvertisementType = AdvertisementType;
		params.Key = Key;
		params.bValue = bValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionDetailsRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHSessionDetails                         SessionHandle                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreSessions::EOSSessionDetailsRelease(class UObject* WorldContextObject, const struct FEOSHSessionDetails& SessionHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionDetailsRelease");
		
		UCoreSessions_EOSSessionDetailsRelease_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SessionHandle = SessionHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionDetailsGetSessionAttributeCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHSessionDetails                         Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionDetailsGetSessionAttributeCountOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UCoreSessions::EOSSessionDetailsGetSessionAttributeCount(class UObject* WorldContextObject, const struct FEOSHSessionDetails& Handle, const struct FEOSSessionDetailsGetSessionAttributeCountOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionDetailsGetSessionAttributeCount");
		
		UCoreSessions_EOSSessionDetailsGetSessionAttributeCount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionDetailsCopySessionAttributeByKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHSessionDetails                         Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionDetailsCopySessionAttributeByKeyOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionDetailsAttribute                 OutSessionAttribute                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreSessions::EOSSessionDetailsCopySessionAttributeByKey(class UObject* WorldContextObject, const struct FEOSHSessionDetails& Handle, const struct FEOSSessionDetailsCopySessionAttributeByKeyOptions& Options, struct FEOSSessionDetailsAttribute* OutSessionAttribute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionDetailsCopySessionAttributeByKey");
		
		UCoreSessions_EOSSessionDetailsCopySessionAttributeByKey_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSessionAttribute != nullptr)
			*OutSessionAttribute = params.OutSessionAttribute;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionDetailsCopySessionAttributeByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHSessionDetails                         Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionDetailsCopySessionAttributeByIndexOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionDetailsAttribute                 OutSessionAttribute                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreSessions::EOSSessionDetailsCopySessionAttributeByIndex(class UObject* WorldContextObject, const struct FEOSHSessionDetails& Handle, const struct FEOSSessionDetailsCopySessionAttributeByIndexOptions& Options, struct FEOSSessionDetailsAttribute* OutSessionAttribute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionDetailsCopySessionAttributeByIndex");
		
		UCoreSessions_EOSSessionDetailsCopySessionAttributeByIndex_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSessionAttribute != nullptr)
			*OutSessionAttribute = params.OutSessionAttribute;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSSessionDetailsCopyInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHSessionDetails                         Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionDetailsCopyInfoOptions           Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionDetailsInfo                      outSessionInfo                                             (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreSessions::EOSSessionDetailsCopyInfo(class UObject* WorldContextObject, const struct FEOSHSessionDetails& Handle, const struct FEOSSessionDetailsCopyInfoOptions& Options, struct FEOSSessionDetailsInfo* outSessionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSSessionDetailsCopyInfo");
		
		UCoreSessions_EOSSessionDetailsCopyInfo_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outSessionInfo != nullptr)
			*outSessionInfo = params.outSessionInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSActiveSessionRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHActiveSession                          ActiveSessionHandle                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreSessions::EOSActiveSessionRelease(class UObject* WorldContextObject, const struct FEOSHActiveSession& ActiveSessionHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSActiveSessionRelease");
		
		UCoreSessions_EOSActiveSessionRelease_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ActiveSessionHandle = ActiveSessionHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSActiveSessionGetRegisteredPlayerCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHActiveSession                          Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSActiveSessionGetRegisteredPlayerCountOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UCoreSessions::EOSActiveSessionGetRegisteredPlayerCount(class UObject* WorldContextObject, const struct FEOSHActiveSession& Handle, const struct FEOSActiveSessionGetRegisteredPlayerCountOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSActiveSessionGetRegisteredPlayerCount");
		
		UCoreSessions_EOSActiveSessionGetRegisteredPlayerCount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSActiveSessionGetRegisteredPlayerByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHActiveSession                          Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSActiveSessionGetRegisteredPlayerByIndexOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSProductUserId UCoreSessions::EOSActiveSessionGetRegisteredPlayerByIndex(class UObject* WorldContextObject, const struct FEOSHActiveSession& Handle, const struct FEOSActiveSessionGetRegisteredPlayerByIndexOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSActiveSessionGetRegisteredPlayerByIndex");
		
		UCoreSessions_EOSActiveSessionGetRegisteredPlayerByIndex_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreSessions.EOSActiveSessionCopyInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHActiveSession                          Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSActiveSessionCopyInfoOptions            Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSActiveSessionInfo                       OutActiveSessionInfo                                       (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreSessions::EOSActiveSessionCopyInfo(class UObject* WorldContextObject, const struct FEOSHActiveSession& Handle, const struct FEOSActiveSessionCopyInfoOptions& Options, struct FEOSActiveSessionInfo* OutActiveSessionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreSessions.EOSActiveSessionCopyInfo");
		
		UCoreSessions_EOSActiveSessionCopyInfo_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutActiveSessionInfo != nullptr)
			*OutActiveSessionInfo = params.OutActiveSessionInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreSessions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreSessions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.CoreSessions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreSessionsUpdateSession.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSSessionsUpdateSessionCallbackInfo       Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreSessionsUpdateSession::HandleCallback(const struct FEOSSessionsUpdateSessionCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreSessionsUpdateSession.HandleCallback");
		
		UEOSCoreSessionsUpdateSession_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreSessionsUpdateSession.EOSSessionsUpdateSessionAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionsUpdateSessionOptions            Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreSessionsUpdateSession* UEOSCoreSessionsUpdateSession::EOSSessionsUpdateSessionAsync(class UObject* WorldContextObject, const struct FEOSSessionsUpdateSessionOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreSessionsUpdateSession.EOSSessionsUpdateSessionAsync");
		
		UEOSCoreSessionsUpdateSession_EOSSessionsUpdateSessionAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreSessionsUpdateSession.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreSessionsUpdateSession::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreSessionsUpdateSession");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreSessionsDestroySession.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSSessionsDestroySessionCallbackInfo      Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreSessionsDestroySession::HandleCallback(const struct FEOSSessionsDestroySessionCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreSessionsDestroySession.HandleCallback");
		
		UEOSCoreSessionsDestroySession_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreSessionsDestroySession.EOSSessionsDestroySessionAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionsDestroySessionOptions           Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreSessionsDestroySession* UEOSCoreSessionsDestroySession::EOSSessionsDestroySessionAsync(class UObject* WorldContextObject, const struct FEOSSessionsDestroySessionOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreSessionsDestroySession.EOSSessionsDestroySessionAsync");
		
		UEOSCoreSessionsDestroySession_EOSSessionsDestroySessionAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreSessionsDestroySession.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreSessionsDestroySession::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreSessionsDestroySession");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreSessionsJoinSession.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSSessionsJoinSessionCallbackInfo         Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreSessionsJoinSession::HandleCallback(const struct FEOSSessionsJoinSessionCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreSessionsJoinSession.HandleCallback");
		
		UEOSCoreSessionsJoinSession_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreSessionsJoinSession.EOSSessionsJoinSessionAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionsJoinSessionOptions              Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreSessionsJoinSession* UEOSCoreSessionsJoinSession::EOSSessionsJoinSessionAsync(class UObject* WorldContextObject, const struct FEOSSessionsJoinSessionOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreSessionsJoinSession.EOSSessionsJoinSessionAsync");
		
		UEOSCoreSessionsJoinSession_EOSSessionsJoinSessionAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreSessionsJoinSession.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreSessionsJoinSession::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreSessionsJoinSession");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreSessionsStartSession.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSSessionsStartSessionCallbackInfo        Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreSessionsStartSession::HandleCallback(const struct FEOSSessionsStartSessionCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreSessionsStartSession.HandleCallback");
		
		UEOSCoreSessionsStartSession_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreSessionsStartSession.EOSSessionsStartSessionAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionsStartSessionOptions             Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreSessionsStartSession* UEOSCoreSessionsStartSession::EOSSessionsStartSessionAsync(class UObject* WorldContextObject, const struct FEOSSessionsStartSessionOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreSessionsStartSession.EOSSessionsStartSessionAsync");
		
		UEOSCoreSessionsStartSession_EOSSessionsStartSessionAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreSessionsStartSession.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreSessionsStartSession::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreSessionsStartSession");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreSessionsEndSession.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSSessionsEndSessionCallbackInfo          Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreSessionsEndSession::HandleCallback(const struct FEOSSessionsEndSessionCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreSessionsEndSession.HandleCallback");
		
		UEOSCoreSessionsEndSession_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreSessionsEndSession.EOSSessionsEndSessionAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionsEndSessionOptions               Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreSessionsEndSession* UEOSCoreSessionsEndSession::EOSSessionsEndSessionAsync(class UObject* WorldContextObject, const struct FEOSSessionsEndSessionOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreSessionsEndSession.EOSSessionsEndSessionAsync");
		
		UEOSCoreSessionsEndSession_EOSSessionsEndSessionAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreSessionsEndSession.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreSessionsEndSession::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreSessionsEndSession");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreSessionsRegisterPlayers.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSSessionsRegisterPlayersCallbackInfo     Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreSessionsRegisterPlayers::HandleCallback(const struct FEOSSessionsRegisterPlayersCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreSessionsRegisterPlayers.HandleCallback");
		
		UEOSCoreSessionsRegisterPlayers_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreSessionsRegisterPlayers.EOSSessionsRegisterPlayersAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionsRegisterPlayersOptions          Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreSessionsRegisterPlayers* UEOSCoreSessionsRegisterPlayers::EOSSessionsRegisterPlayersAsync(class UObject* WorldContextObject, const struct FEOSSessionsRegisterPlayersOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreSessionsRegisterPlayers.EOSSessionsRegisterPlayersAsync");
		
		UEOSCoreSessionsRegisterPlayers_EOSSessionsRegisterPlayersAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreSessionsRegisterPlayers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreSessionsRegisterPlayers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreSessionsRegisterPlayers");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreSessionsUnregisterPlayers.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSSessionsUnregisterPlayersCallbackInfo   Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreSessionsUnregisterPlayers::HandleCallback(const struct FEOSSessionsUnregisterPlayersCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreSessionsUnregisterPlayers.HandleCallback");
		
		UEOSCoreSessionsUnregisterPlayers_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreSessionsUnregisterPlayers.EOSSessionsUnregisterPlayersAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionsUnregisterPlayersOptions        Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreSessionsUnregisterPlayers* UEOSCoreSessionsUnregisterPlayers::EOSSessionsUnregisterPlayersAsync(class UObject* WorldContextObject, const struct FEOSSessionsUnregisterPlayersOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreSessionsUnregisterPlayers.EOSSessionsUnregisterPlayersAsync");
		
		UEOSCoreSessionsUnregisterPlayers_EOSSessionsUnregisterPlayersAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreSessionsUnregisterPlayers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreSessionsUnregisterPlayers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreSessionsUnregisterPlayers");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreSessionsSendInvite.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSSessionsSendInviteCallbackInfo          Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreSessionsSendInvite::HandleCallback(const struct FEOSSessionsSendInviteCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreSessionsSendInvite.HandleCallback");
		
		UEOSCoreSessionsSendInvite_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreSessionsSendInvite.EOSSessionsSendInviteAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionsSendInviteOptions               Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreSessionsSendInvite* UEOSCoreSessionsSendInvite::EOSSessionsSendInviteAsync(class UObject* WorldContextObject, const struct FEOSSessionsSendInviteOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreSessionsSendInvite.EOSSessionsSendInviteAsync");
		
		UEOSCoreSessionsSendInvite_EOSSessionsSendInviteAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreSessionsSendInvite.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreSessionsSendInvite::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreSessionsSendInvite");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreSessionsRejectInvite.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSSessionsRejectInviteCallbackInfo        Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreSessionsRejectInvite::HandleCallback(const struct FEOSSessionsRejectInviteCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreSessionsRejectInvite.HandleCallback");
		
		UEOSCoreSessionsRejectInvite_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreSessionsRejectInvite.EOSSessionsRejectInviteAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionsRejectInviteOptions             Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreSessionsRejectInvite* UEOSCoreSessionsRejectInvite::EOSSessionsRejectInviteAsync(class UObject* WorldContextObject, const struct FEOSSessionsRejectInviteOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreSessionsRejectInvite.EOSSessionsRejectInviteAsync");
		
		UEOSCoreSessionsRejectInvite_EOSSessionsRejectInviteAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreSessionsRejectInvite.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreSessionsRejectInvite::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreSessionsRejectInvite");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreSessionsQueryInvites.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSSessionsQueryInvitesCallbackInfo        Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreSessionsQueryInvites::HandleCallback(const struct FEOSSessionsQueryInvitesCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreSessionsQueryInvites.HandleCallback");
		
		UEOSCoreSessionsQueryInvites_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreSessionsQueryInvites.EOSSessionsQueryInvitesAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionsQueryInvitesOptions             Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreSessionsQueryInvites* UEOSCoreSessionsQueryInvites::EOSSessionsQueryInvitesAsync(class UObject* WorldContextObject, const struct FEOSSessionsQueryInvitesOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreSessionsQueryInvites.EOSSessionsQueryInvitesAsync");
		
		UEOSCoreSessionsQueryInvites_EOSSessionsQueryInvitesAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreSessionsQueryInvites.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreSessionsQueryInvites::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreSessionsQueryInvites");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreSessionsSearchFind.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSSessionSearchFindCallbackInfo           Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreSessionsSearchFind::HandleCallback(const struct FEOSSessionSearchFindCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreSessionsSearchFind.HandleCallback");
		
		UEOSCoreSessionsSearchFind_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreSessionsSearchFind.EOSSessionSearchFindAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSHSessionSearch                          SearchHandle                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSSessionSearchFindOptions                Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreSessionsSearchFind* UEOSCoreSessionsSearchFind::EOSSessionSearchFindAsync(class UObject* WorldContextObject, const struct FEOSHSessionSearch& SearchHandle, const struct FEOSSessionSearchFindOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreSessionsSearchFind.EOSSessionSearchFindAsync");
		
		UEOSCoreSessionsSearchFind_EOSSessionSearchFindAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SearchHandle = SearchHandle;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreSessionsSearchFind.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreSessionsSearchFind::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreSessionsSearchFind");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreStats.GetStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreStats* UCoreStats::GetStats(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreStats.GetStats");
		
		UCoreStats_GetStats_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreStats.EOSStatsQueryStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSStatsQueryStatsOptions                  Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreStats::EOSStatsQueryStats(class UObject* WorldContextObject, const struct FEOSStatsQueryStatsOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreStats.EOSStatsQueryStats");
		
		UCoreStats_EOSStatsQueryStats_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreStats.EOSStatsIngestStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSStatsIngestStatOptions                  Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreStats::EOSStatsIngestStat(class UObject* WorldContextObject, const struct FEOSStatsIngestStatOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreStats.EOSStatsIngestStat");
		
		UCoreStats_EOSStatsIngestStat_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreStats.EOSStatsGetStatsCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSStatsGetStatCountOptions                Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UCoreStats::EOSStatsGetStatsCount(class UObject* WorldContextObject, const struct FEOSStatsGetStatCountOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreStats.EOSStatsGetStatsCount");
		
		UCoreStats_EOSStatsGetStatsCount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreStats.EOSStatsCopyStatByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSStatsCopyStatByNameOptions              Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FEOSStatsStat                               OutStat                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreStats::EOSStatsCopyStatByName(class UObject* WorldContextObject, const struct FEOSStatsCopyStatByNameOptions& Options, struct FEOSStatsStat* OutStat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreStats.EOSStatsCopyStatByName");
		
		UCoreStats_EOSStatsCopyStatByName_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutStat != nullptr)
			*OutStat = params.OutStat;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreStats.EOSStatsCopyStatByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSStatsCopyStatByIndexOptions             Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSStatsStat                               OutStat                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreStats::EOSStatsCopyStatByIndex(class UObject* WorldContextObject, const struct FEOSStatsCopyStatByIndexOptions& Options, struct FEOSStatsStat* OutStat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreStats.EOSStatsCopyStatByIndex");
		
		UCoreStats_EOSStatsCopyStatByIndex_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutStat != nullptr)
			*OutStat = params.OutStat;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreStats.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreStats::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.CoreStats");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreStatsIngestStat.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSStatsIngestStatCompleteCallbackInfo     Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreStatsIngestStat::HandleCallback(const struct FEOSStatsIngestStatCompleteCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreStatsIngestStat.HandleCallback");
		
		UEOSCoreStatsIngestStat_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreStatsIngestStat.EOSStatsIngestStatAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSStatsIngestStatOptions                  Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreStatsIngestStat* UEOSCoreStatsIngestStat::EOSStatsIngestStatAsync(class UObject* WorldContextObject, const struct FEOSStatsIngestStatOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreStatsIngestStat.EOSStatsIngestStatAsync");
		
		UEOSCoreStatsIngestStat_EOSStatsIngestStatAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreStatsIngestStat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreStatsIngestStat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreStatsIngestStat");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreStatsQueryStats.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSStatsOnQueryStatsCompleteCallbackInfo   Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreStatsQueryStats::HandleCallback(const struct FEOSStatsOnQueryStatsCompleteCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreStatsQueryStats.HandleCallback");
		
		UEOSCoreStatsQueryStats_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreStatsQueryStats.EOSStatsQueryStatsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSStatsQueryStatsOptions                  Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreStatsQueryStats* UEOSCoreStatsQueryStats::EOSStatsQueryStatsAsync(class UObject* WorldContextObject, const struct FEOSStatsQueryStatsOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreStatsQueryStats.EOSStatsQueryStatsAsync");
		
		UEOSCoreStatsQueryStats_EOSStatsQueryStatsAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreStatsQueryStats.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreStatsQueryStats::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreStatsQueryStats");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreTitleStorage.GetTitleStorage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreTitleStorage* UCoreTitleStorage::GetTitleStorage(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreTitleStorage.GetTitleStorage");
		
		UCoreTitleStorage_GetTitleStorage_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreTitleStorage.EOSTitleStorageReadFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSTitleStorageReadFileOptions             Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSTitleStorageFileTransferRequestHandle UCoreTitleStorage::EOSTitleStorageReadFile(class UObject* WorldContextObject, const struct FEOSTitleStorageReadFileOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreTitleStorage.EOSTitleStorageReadFile");
		
		UCoreTitleStorage_EOSTitleStorageReadFile_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreTitleStorage.EOSTitleStorageQueryFileList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSTitleStorageQueryFileListOptions        Options                                                    (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreTitleStorage::EOSTitleStorageQueryFileList(class UObject* WorldContextObject, const struct FEOSTitleStorageQueryFileListOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreTitleStorage.EOSTitleStorageQueryFileList");
		
		UCoreTitleStorage_EOSTitleStorageQueryFileList_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreTitleStorage.EOSTitleStorageQueryFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSTitleStorageQueryFileOptions            Options                                                    (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreTitleStorage::EOSTitleStorageQueryFile(class UObject* WorldContextObject, const struct FEOSTitleStorageQueryFileOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreTitleStorage.EOSTitleStorageQueryFile");
		
		UCoreTitleStorage_EOSTitleStorageQueryFile_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreTitleStorage.EOSTitleStorageGetFileMetadataCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSTitleStorageGetFileMetadataCountOptions Options                                                    (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UCoreTitleStorage::EOSTitleStorageGetFileMetadataCount(class UObject* WorldContextObject, const struct FEOSTitleStorageGetFileMetadataCountOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreTitleStorage.EOSTitleStorageGetFileMetadataCount");
		
		UCoreTitleStorage_EOSTitleStorageGetFileMetadataCount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreTitleStorage.EOSTitleStorageFileTransferRequestGetFileRequestState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSTitleStorageFileTransferRequestHandle   Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreTitleStorage::EOSTitleStorageFileTransferRequestGetFileRequestState(class UObject* WorldContextObject, const struct FEOSTitleStorageFileTransferRequestHandle& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreTitleStorage.EOSTitleStorageFileTransferRequestGetFileRequestState");
		
		UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFileRequestState_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreTitleStorage.EOSTitleStorageFileTransferRequestGetFilename
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSTitleStorageFileTransferRequestHandle   Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FilenameStringBufferSizeBytes                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutStringBuffer                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreTitleStorage::EOSTitleStorageFileTransferRequestGetFilename(class UObject* WorldContextObject, const struct FEOSTitleStorageFileTransferRequestHandle& Handle, int32_t FilenameStringBufferSizeBytes, class FString* OutStringBuffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreTitleStorage.EOSTitleStorageFileTransferRequestGetFilename");
		
		UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFilename_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		params.FilenameStringBufferSizeBytes = FilenameStringBufferSizeBytes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutStringBuffer != nullptr)
			*OutStringBuffer = params.OutStringBuffer;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreTitleStorage.EOSTitleStorageFileTransferRequestCancelRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSTitleStorageFileTransferRequestHandle   Handle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreTitleStorage::EOSTitleStorageFileTransferRequestCancelRequest(class UObject* WorldContextObject, const struct FEOSTitleStorageFileTransferRequestHandle& Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreTitleStorage.EOSTitleStorageFileTransferRequestCancelRequest");
		
		UCoreTitleStorage_EOSTitleStorageFileTransferRequestCancelRequest_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreTitleStorage.EOSTitleStorageDeleteCache
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSTitleStorageDeleteCacheOptions          Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreTitleStorage::EOSTitleStorageDeleteCache(class UObject* WorldContextObject, const struct FEOSTitleStorageDeleteCacheOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreTitleStorage.EOSTitleStorageDeleteCache");
		
		UCoreTitleStorage_EOSTitleStorageDeleteCache_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreTitleStorage.EOSTitleStorageCopyFileMetadataByFilename
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSTitleStorageCopyFileMetadataByFilenameOptions Options                                                    (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		struct FEOSTitleStorageFileMetadata                OutMetadata                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreTitleStorage::EOSTitleStorageCopyFileMetadataByFilename(class UObject* WorldContextObject, const struct FEOSTitleStorageCopyFileMetadataByFilenameOptions& Options, struct FEOSTitleStorageFileMetadata* OutMetadata)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreTitleStorage.EOSTitleStorageCopyFileMetadataByFilename");
		
		UCoreTitleStorage_EOSTitleStorageCopyFileMetadataByFilename_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMetadata != nullptr)
			*OutMetadata = params.OutMetadata;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreTitleStorage.EOSTitleStorageCopyFileMetadataAtIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSTitleStorageCopyFileMetadataAtIndexOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSTitleStorageFileMetadata                OutMetadata                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreTitleStorage::EOSTitleStorageCopyFileMetadataAtIndex(class UObject* WorldContextObject, const struct FEOSTitleStorageCopyFileMetadataAtIndexOptions& Options, struct FEOSTitleStorageFileMetadata* OutMetadata)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreTitleStorage.EOSTitleStorageCopyFileMetadataAtIndex");
		
		UCoreTitleStorage_EOSTitleStorageCopyFileMetadataAtIndex_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMetadata != nullptr)
			*OutMetadata = params.OutMetadata;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreTitleStorage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreTitleStorage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.CoreTitleStorage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreTitleStorageQueryFile.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSTitleStorageQueryFileCallbackInfo       Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreTitleStorageQueryFile::HandleCallback(const struct FEOSTitleStorageQueryFileCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreTitleStorageQueryFile.HandleCallback");
		
		UEOSCoreTitleStorageQueryFile_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreTitleStorageQueryFile.EOSTitleStorageQueryFileAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSTitleStorageQueryFileOptions            Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreTitleStorageQueryFile* UEOSCoreTitleStorageQueryFile::EOSTitleStorageQueryFileAsync(class UObject* WorldContextObject, const struct FEOSTitleStorageQueryFileOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreTitleStorageQueryFile.EOSTitleStorageQueryFileAsync");
		
		UEOSCoreTitleStorageQueryFile_EOSTitleStorageQueryFileAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreTitleStorageQueryFile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreTitleStorageQueryFile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreTitleStorageQueryFile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreTitleStorageQueryFileList.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSTitleStorageQueryFileListCallbackInfo   Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreTitleStorageQueryFileList::HandleCallback(const struct FEOSTitleStorageQueryFileListCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreTitleStorageQueryFileList.HandleCallback");
		
		UEOSCoreTitleStorageQueryFileList_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreTitleStorageQueryFileList.EOSTitleStorageQueryFileListAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSTitleStorageQueryFileListOptions        Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreTitleStorageQueryFileList* UEOSCoreTitleStorageQueryFileList::EOSTitleStorageQueryFileListAsync(class UObject* WorldContextObject, const struct FEOSTitleStorageQueryFileListOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreTitleStorageQueryFileList.EOSTitleStorageQueryFileListAsync");
		
		UEOSCoreTitleStorageQueryFileList_EOSTitleStorageQueryFileListAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreTitleStorageQueryFileList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreTitleStorageQueryFileList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreTitleStorageQueryFileList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreTitleStorageReadFile.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSTitleStorageReadFileCallbackInfo        Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreTitleStorageReadFile::HandleCallback(const struct FEOSTitleStorageReadFileCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreTitleStorageReadFile.HandleCallback");
		
		UEOSCoreTitleStorageReadFile_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreTitleStorageReadFile.EOSTitleStorageReadFileAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSTitleStorageReadFileOptions             Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreTitleStorageReadFile* UEOSCoreTitleStorageReadFile::EOSTitleStorageReadFileAsync(class UObject* WorldContextObject, const struct FEOSTitleStorageReadFileOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreTitleStorageReadFile.EOSTitleStorageReadFileAsync");
		
		UEOSCoreTitleStorageReadFile_EOSTitleStorageReadFileAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreTitleStorageReadFile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreTitleStorageReadFile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreTitleStorageReadFile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreTitleStorageDeleteCache.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSTitleStorageDeleteCacheCallbackInfo     Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreTitleStorageDeleteCache::HandleCallback(const struct FEOSTitleStorageDeleteCacheCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreTitleStorageDeleteCache.HandleCallback");
		
		UEOSCoreTitleStorageDeleteCache_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreTitleStorageDeleteCache.EOSTitleStorageDeleteCacheAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSTitleStorageDeleteCacheOptions          Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreTitleStorageDeleteCache* UEOSCoreTitleStorageDeleteCache::EOSTitleStorageDeleteCacheAsync(class UObject* WorldContextObject, const struct FEOSTitleStorageDeleteCacheOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreTitleStorageDeleteCache.EOSTitleStorageDeleteCacheAsync");
		
		UEOSCoreTitleStorageDeleteCache_EOSTitleStorageDeleteCacheAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreTitleStorageDeleteCache.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreTitleStorageDeleteCache::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreTitleStorageDeleteCache");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreUI.GetUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreUI* UCoreUI::GetUI(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreUI.GetUI");
		
		UCoreUI_GetUI_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreUI.EOSUIShowReportPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSUIShowReportPlayerOptions               Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreUI::EOSUIShowReportPlayer(class UObject* WorldContextObject, const struct FEOSUIShowReportPlayerOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreUI.EOSUIShowReportPlayer");
		
		UCoreUI_EOSUIShowReportPlayer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreUI.EOSUIShowFriends
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSUIShowFriendsOptions                    Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreUI::EOSUIShowFriends(class UObject* WorldContextObject, const struct FEOSUIShowFriendsOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreUI.EOSUIShowFriends");
		
		UCoreUI_EOSUIShowFriends_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreUI.EOSUIShowBlockPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSUIShowBlockPlayerOptions                Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreUI::EOSUIShowBlockPlayer(class UObject* WorldContextObject, const struct FEOSUIShowBlockPlayerOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreUI.EOSUIShowBlockPlayer");
		
		UCoreUI_EOSUIShowBlockPlayer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreUI.EOSUISetToggleFriendsKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSUISetToggleFriendsKeyOptions            Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreUI::EOSUISetToggleFriendsKey(class UObject* WorldContextObject, const struct FEOSUISetToggleFriendsKeyOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreUI.EOSUISetToggleFriendsKey");
		
		UCoreUI_EOSUISetToggleFriendsKey_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreUI.EOSUISetDisplayPreference
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSUISetDisplayPreferenceOptions           Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreUI::EOSUISetDisplayPreference(class UObject* WorldContextObject, const struct FEOSUISetDisplayPreferenceOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreUI.EOSUISetDisplayPreference");
		
		UCoreUI_EOSUISetDisplayPreference_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreUI.EOSUIRemoveNotifyDisplaySettingsUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSNotificationId                          ID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreUI::EOSUIRemoveNotifyDisplaySettingsUpdated(class UObject* WorldContextObject, const struct FEOSNotificationId& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreUI.EOSUIRemoveNotifyDisplaySettingsUpdated");
		
		UCoreUI_EOSUIRemoveNotifyDisplaySettingsUpdated_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreUI.EOSUIPauseSocialOverlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSUIPauseSocialOverlayOptions             Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreUI::EOSUIPauseSocialOverlay(class UObject* WorldContextObject, const struct FEOSUIPauseSocialOverlayOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreUI.EOSUIPauseSocialOverlay");
		
		UCoreUI_EOSUIPauseSocialOverlay_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreUI.EOSUIIsValidKeyCombination
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            keyCombination                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCoreUI::EOSUIIsValidKeyCombination(class UObject* WorldContextObject, int32_t keyCombination)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreUI.EOSUIIsValidKeyCombination");
		
		UCoreUI_EOSUIIsValidKeyCombination_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.keyCombination = keyCombination;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreUI.EOSUIIsSocialOverlayPaused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSUIIsSocialOverlayPausedOptions          Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UCoreUI::EOSUIIsSocialOverlayPaused(class UObject* WorldContextObject, const struct FEOSUIIsSocialOverlayPausedOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreUI.EOSUIIsSocialOverlayPaused");
		
		UCoreUI_EOSUIIsSocialOverlayPaused_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreUI.EOSUIHideFriends
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSUIHideFriendsOptions                    Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreUI::EOSUIHideFriends(class UObject* WorldContextObject, const struct FEOSUIHideFriendsOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreUI.EOSUIHideFriends");
		
		UCoreUI_EOSUIHideFriends_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreUI.EOSUIGetToggleFriendsKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSUIGetToggleFriendsKeyOptions            Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UCoreUI::EOSUIGetToggleFriendsKey(class UObject* WorldContextObject, const struct FEOSUIGetToggleFriendsKeyOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreUI.EOSUIGetToggleFriendsKey");
		
		UCoreUI_EOSUIGetToggleFriendsKey_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreUI.EOSUIGetNotificationLocationPreference
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EEOSUIENotificationLocation UCoreUI::EOSUIGetNotificationLocationPreference(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreUI.EOSUIGetNotificationLocationPreference");
		
		UCoreUI_EOSUIGetNotificationLocationPreference_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreUI.EOSUIGetFriendsVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSUIGetFriendsVisibleOptions              Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UCoreUI::EOSUIGetFriendsVisible(class UObject* WorldContextObject, const struct FEOSUIGetFriendsVisibleOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreUI.EOSUIGetFriendsVisible");
		
		UCoreUI_EOSUIGetFriendsVisible_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreUI.EOSUIGetFriendsExclusiveInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSUIGetFriendsExclusiveInputOptions       Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UCoreUI::EOSUIGetFriendsExclusiveInput(class UObject* WorldContextObject, const struct FEOSUIGetFriendsExclusiveInputOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreUI.EOSUIGetFriendsExclusiveInput");
		
		UCoreUI_EOSUIGetFriendsExclusiveInput_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreUI.EOSUIAddNotifyDisplaySettingsUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSUIAddNotifyDisplaySettingsUpdatedOptions Options                                                    (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FEOSNotificationId UCoreUI::EOSUIAddNotifyDisplaySettingsUpdated(class UObject* WorldContextObject, const struct FEOSUIAddNotifyDisplaySettingsUpdatedOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreUI.EOSUIAddNotifyDisplaySettingsUpdated");
		
		UCoreUI_EOSUIAddNotifyDisplaySettingsUpdated_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreUI.EOSUIAcknowledgeEventId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSUIAcknowledgeEventIdOptions             Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreUI::EOSUIAcknowledgeEventId(class UObject* WorldContextObject, const struct FEOSUIAcknowledgeEventIdOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreUI.EOSUIAcknowledgeEventId");
		
		UCoreUI_EOSUIAcknowledgeEventId_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreUI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreUI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.CoreUI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreUIShowFriends.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSUIShowFriendsCallbackInfo               Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreUIShowFriends::HandleCallback(const struct FEOSUIShowFriendsCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreUIShowFriends.HandleCallback");
		
		UEOSCoreUIShowFriends_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreUIShowFriends.EOSUIShowFriendsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSUIShowFriendsOptions                    Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreUIShowFriends* UEOSCoreUIShowFriends::EOSUIShowFriendsAsync(class UObject* WorldContextObject, const struct FEOSUIShowFriendsOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreUIShowFriends.EOSUIShowFriendsAsync");
		
		UEOSCoreUIShowFriends_EOSUIShowFriendsAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreUIShowFriends.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreUIShowFriends::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreUIShowFriends");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreUIHideFriends.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSUIHideFriendsCallbackInfo               Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreUIHideFriends::HandleCallback(const struct FEOSUIHideFriendsCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreUIHideFriends.HandleCallback");
		
		UEOSCoreUIHideFriends_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreUIHideFriends.EOSUIHideFriendsAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSUIHideFriendsOptions                    Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreUIHideFriends* UEOSCoreUIHideFriends::EOSUIHideFriendsAsync(class UObject* WorldContextObject, const struct FEOSUIHideFriendsOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreUIHideFriends.EOSUIHideFriendsAsync");
		
		UEOSCoreUIHideFriends_EOSUIHideFriendsAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreUIHideFriends.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreUIHideFriends::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreUIHideFriends");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreUserInfo.GetUserInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCoreUserInfo* UCoreUserInfo::GetUserInfo(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreUserInfo.GetUserInfo");
		
		UCoreUserInfo_GetUserInfo_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreUserInfo.EOSUserInfoQueryUserInfoByExternalAccount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSUserInfoQueryUserInfoByExternalAccountOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreUserInfo::EOSUserInfoQueryUserInfoByExternalAccount(class UObject* WorldContextObject, const struct FEOSUserInfoQueryUserInfoByExternalAccountOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreUserInfo.EOSUserInfoQueryUserInfoByExternalAccount");
		
		UCoreUserInfo_EOSUserInfoQueryUserInfoByExternalAccount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreUserInfo.EOSUserInfoQueryUserInfoByDisplayName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSUserInfoQueryUserInfoByDisplayNameOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreUserInfo::EOSUserInfoQueryUserInfoByDisplayName(class UObject* WorldContextObject, const struct FEOSUserInfoQueryUserInfoByDisplayNameOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreUserInfo.EOSUserInfoQueryUserInfoByDisplayName");
		
		UCoreUserInfo_EOSUserInfoQueryUserInfoByDisplayName_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreUserInfo.EOSUserInfoQueryUserInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSUserInfoQueryUserInfoOptions            Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCoreUserInfo::EOSUserInfoQueryUserInfo(class UObject* WorldContextObject, const struct FEOSUserInfoQueryUserInfoOptions& Options, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreUserInfo.EOSUserInfoQueryUserInfo");
		
		UCoreUserInfo_EOSUserInfoQueryUserInfo_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreUserInfo.EOSUserInfoGetExternalUserInfoCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSUserInfoGetExternalUserInfoCountOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UCoreUserInfo::EOSUserInfoGetExternalUserInfoCount(class UObject* WorldContextObject, const struct FEOSUserInfoGetExternalUserInfoCountOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreUserInfo.EOSUserInfoGetExternalUserInfoCount");
		
		UCoreUserInfo_EOSUserInfoGetExternalUserInfoCount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreUserInfo.EOSUserInfoCopyUserInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSUserInfoCopyUserInfoOptions             Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSUserInfo                                OutUserInfo                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreUserInfo::EOSUserInfoCopyUserInfo(class UObject* WorldContextObject, const struct FEOSUserInfoCopyUserInfoOptions& Options, struct FEOSUserInfo* OutUserInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreUserInfo.EOSUserInfoCopyUserInfo");
		
		UCoreUserInfo_EOSUserInfoCopyUserInfo_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutUserInfo != nullptr)
			*OutUserInfo = params.OutUserInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreUserInfo.EOSUserInfoCopyExternalUserInfoByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSUserInfoCopyExternalUserInfoByIndexOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSUserInfoExternalUserInfo                OutExternalUserInfo                                        (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreUserInfo::EOSUserInfoCopyExternalUserInfoByIndex(class UObject* WorldContextObject, const struct FEOSUserInfoCopyExternalUserInfoByIndexOptions& Options, struct FEOSUserInfoExternalUserInfo* OutExternalUserInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreUserInfo.EOSUserInfoCopyExternalUserInfoByIndex");
		
		UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByIndex_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutExternalUserInfo != nullptr)
			*OutExternalUserInfo = params.OutExternalUserInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreUserInfo.EOSUserInfoCopyExternalUserInfoByAccountType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSUserInfoCopyExternalUserInfoByAccountTypeOptions Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FEOSUserInfoExternalUserInfo                OutExternalUserInfo                                        (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreUserInfo::EOSUserInfoCopyExternalUserInfoByAccountType(class UObject* WorldContextObject, const struct FEOSUserInfoCopyExternalUserInfoByAccountTypeOptions& Options, struct FEOSUserInfoExternalUserInfo* OutExternalUserInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreUserInfo.EOSUserInfoCopyExternalUserInfoByAccountType");
		
		UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountType_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutExternalUserInfo != nullptr)
			*OutExternalUserInfo = params.OutExternalUserInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.CoreUserInfo.EOSUserInfoCopyExternalUserInfoByAccountId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSUserInfoCopyExternalUserInfoByAccountIdOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FEOSUserInfoExternalUserInfo                OutExternalUserInfo                                        (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	EOSResult UCoreUserInfo::EOSUserInfoCopyExternalUserInfoByAccountId(class UObject* WorldContextObject, const struct FEOSUserInfoCopyExternalUserInfoByAccountIdOptions& Options, struct FEOSUserInfoExternalUserInfo* OutExternalUserInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.CoreUserInfo.EOSUserInfoCopyExternalUserInfoByAccountId");
		
		UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountId_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutExternalUserInfo != nullptr)
			*OutExternalUserInfo = params.OutExternalUserInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreUserInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreUserInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.CoreUserInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreUserInfoQueryUserInfo.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSUserInfoQueryUserInfoCallbackInfo       Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreUserInfoQueryUserInfo::HandleCallback(const struct FEOSUserInfoQueryUserInfoCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreUserInfoQueryUserInfo.HandleCallback");
		
		UEOSCoreUserInfoQueryUserInfo_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreUserInfoQueryUserInfo.EOSUserInfoQueryUserInfoAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSUserInfoQueryUserInfoOptions            Options                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreUserInfoQueryUserInfo* UEOSCoreUserInfoQueryUserInfo::EOSUserInfoQueryUserInfoAsync(class UObject* WorldContextObject, const struct FEOSUserInfoQueryUserInfoOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreUserInfoQueryUserInfo.EOSUserInfoQueryUserInfoAsync");
		
		UEOSCoreUserInfoQueryUserInfo_EOSUserInfoQueryUserInfoAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreUserInfoQueryUserInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreUserInfoQueryUserInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreUserInfoQueryUserInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreUserInfoQueryUserInfoByDisplayName.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSUserInfoQueryUserInfoByDisplayNameCallbackInfo Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreUserInfoQueryUserInfoByDisplayName::HandleCallback(const struct FEOSUserInfoQueryUserInfoByDisplayNameCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreUserInfoQueryUserInfoByDisplayName.HandleCallback");
		
		UEOSCoreUserInfoQueryUserInfoByDisplayName_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreUserInfoQueryUserInfoByDisplayName.EOSUserInfoQueryUserInfoByDisplayNameAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSUserInfoQueryUserInfoByDisplayNameOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreUserInfoQueryUserInfoByDisplayName* UEOSCoreUserInfoQueryUserInfoByDisplayName::EOSUserInfoQueryUserInfoByDisplayNameAsync(class UObject* WorldContextObject, const struct FEOSUserInfoQueryUserInfoByDisplayNameOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreUserInfoQueryUserInfoByDisplayName.EOSUserInfoQueryUserInfoByDisplayNameAsync");
		
		UEOSCoreUserInfoQueryUserInfoByDisplayName_EOSUserInfoQueryUserInfoByDisplayNameAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreUserInfoQueryUserInfoByDisplayName.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreUserInfoQueryUserInfoByDisplayName::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreUserInfoQueryUserInfoByDisplayName");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreUserInfoByExternalAccount.HandleCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSUserInfoQueryUserInfoByExternalAccountCallbackInfo Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSCoreUserInfoByExternalAccount::HandleCallback(const struct FEOSUserInfoQueryUserInfoByExternalAccountCallbackInfo& Data, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreUserInfoByExternalAccount.HandleCallback");
		
		UEOSCoreUserInfoByExternalAccount_HandleCallback_Params params {};
		params.Data = Data;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EOSCore.EOSCoreUserInfoByExternalAccount.EOSUserInfoQueryUserInfoByExternalAccountAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSUserInfoQueryUserInfoByExternalAccountOptions Options                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	class UEOSCoreUserInfoByExternalAccount* UEOSCoreUserInfoByExternalAccount::EOSUserInfoQueryUserInfoByExternalAccountAsync(class UObject* WorldContextObject, const struct FEOSUserInfoQueryUserInfoByExternalAccountOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EOSCore.EOSCoreUserInfoByExternalAccount.EOSUserInfoQueryUserInfoByExternalAccountAsync");
		
		UEOSCoreUserInfoByExternalAccount_EOSUserInfoQueryUserInfoByExternalAccountAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreUserInfoByExternalAccount.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreUserInfoByExternalAccount::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EOSCore.EOSCoreUserInfoByExternalAccount");
		return ptr;
	}

}


