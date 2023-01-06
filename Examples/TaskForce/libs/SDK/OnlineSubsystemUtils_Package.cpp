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
	 * 		RVA    -> 0x0034EBD0
	 * 		Name   -> Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AchievementID                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFoundID                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Progress                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAchievementBlueprintLibrary::STATIC_GetCachedAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FName& AchievementID, bool* bFoundID, float* Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress");
		
		UAchievementBlueprintLibrary_GetCachedAchievementProgress_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.AchievementID = AchievementID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bFoundID != nullptr)
			*bFoundID = params.bFoundID;
		if (Progress != nullptr)
			*Progress = params.Progress;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034E880
	 * 		Name   -> Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AchievementID                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFoundID                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        Title                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        LockedDescription                                          (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        UnlockedDescription                                        (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bHidden                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAchievementBlueprintLibrary::STATIC_GetCachedAchievementDescription(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FName& AchievementID, bool* bFoundID, class FText* Title, class FText* LockedDescription, class FText* UnlockedDescription, bool* bHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription");
		
		UAchievementBlueprintLibrary_GetCachedAchievementDescription_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.AchievementID = AchievementID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bFoundID != nullptr)
			*bFoundID = params.bFoundID;
		if (Title != nullptr)
			*Title = params.Title;
		if (LockedDescription != nullptr)
			*LockedDescription = params.LockedDescription;
		if (UnlockedDescription != nullptr)
			*UnlockedDescription = params.UnlockedDescription;
		if (bHidden != nullptr)
			*bHidden = params.bHidden;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAchievementBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAchievementBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.AchievementBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034D5D0
	 * 		Name   -> Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAchievementQueryCallbackProxy* UAchievementQueryCallbackProxy::STATIC_CacheAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements");
		
		UAchievementQueryCallbackProxy_CacheAchievements_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034D510
	 * 		Name   -> Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAchievementQueryCallbackProxy* UAchievementQueryCallbackProxy::STATIC_CacheAchievementDescriptions(class UObject* WorldContextObject, class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions");
		
		UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAchievementQueryCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAchievementQueryCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.AchievementQueryCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00350300
	 * 		Name   -> Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AchievementName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Progress                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UserTag                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAchievementWriteCallbackProxy* UAchievementWriteCallbackProxy::STATIC_WriteAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FName& AchievementName, float Progress, int32_t UserTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress");
		
		UAchievementWriteCallbackProxy_WriteAchievementProgress_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.AchievementName = AchievementName;
		params.Progress = Progress;
		params.UserTag = UserTag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAchievementWriteCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAchievementWriteCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.AchievementWriteCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034DA30
	 * 		Name   -> Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UConnectionCallbackProxy* UConnectionCallbackProxy::STATIC_ConnectToService(class UObject* WorldContextObject, class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService");
		
		UConnectionCallbackProxy_ConnectToService_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConnectionCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConnectionCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.ConnectionCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034DF90
	 * 		Name   -> Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PublicConnections                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseLAN                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCreateSessionCallbackProxy* UCreateSessionCallbackProxy::STATIC_CreateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession");
		
		UCreateSessionCallbackProxy_CreateSession_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.PublicConnections = PublicConnections;
		params.bUseLAN = bUseLAN;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCreateSessionCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCreateSessionCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.CreateSessionCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034E0C0
	 * 		Name   -> Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDestroySessionCallbackProxy* UDestroySessionCallbackProxy::STATIC_DestroySession(class UObject* WorldContextObject, class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession");
		
		UDestroySessionCallbackProxy_DestroySession_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDestroySessionCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDestroySessionCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.DestroySessionCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034E180
	 * 		Name   -> Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MatchID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMPMatchOutcome                                    LocalPlayerOutcome                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMPMatchOutcome                                    OtherPlayersOutcome                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UEndMatchCallbackProxy* UEndMatchCallbackProxy::STATIC_EndMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, EMPMatchOutcome LocalPlayerOutcome, EMPMatchOutcome OtherPlayersOutcome)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch");
		
		UEndMatchCallbackProxy_EndMatch_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.MatchID = MatchID;
		params.LocalPlayerOutcome = LocalPlayerOutcome;
		params.OtherPlayersOutcome = OtherPlayersOutcome;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEndMatchCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEndMatchCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.EndMatchCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034E390
	 * 		Name   -> Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MatchID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UEndTurnCallbackProxy* UEndTurnCallbackProxy::STATIC_EndTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn");
		
		UEndTurnCallbackProxy_EndTurn_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.MatchID = MatchID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEndTurnCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEndTurnCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.EndTurnCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034F600
	 * 		Name   -> Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString UFindSessionsCallbackProxy::STATIC_GetServerName(const struct FBlueprintSessionResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName");
		
		UFindSessionsCallbackProxy_GetServerName_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034F2F0
	 * 		Name   -> Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UFindSessionsCallbackProxy::STATIC_GetPingInMs(const struct FBlueprintSessionResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs");
		
		UFindSessionsCallbackProxy_GetPingInMs_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034F030
	 * 		Name   -> Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UFindSessionsCallbackProxy::STATIC_GetMaxPlayers(const struct FBlueprintSessionResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers");
		
		UFindSessionsCallbackProxy_GetMaxPlayers_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034ED70
	 * 		Name   -> Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UFindSessionsCallbackProxy::STATIC_GetCurrentPlayers(const struct FBlueprintSessionResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers");
		
		UFindSessionsCallbackProxy_GetCurrentPlayers_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034E540
	 * 		Name   -> Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxResults                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseLAN                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFindSessionsCallbackProxy* UFindSessionsCallbackProxy::STATIC_FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions");
		
		UFindSessionsCallbackProxy_FindSessions_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.MaxResults = MaxResults;
		params.bUseLAN = bUseLAN;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFindSessionsCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFindSessionsCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.FindSessionsCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034E670
	 * 		Name   -> Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MinPlayers                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxPlayers                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayerGroup                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ShowExistingMatches                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFindTurnBasedMatchCallbackProxy* UFindTurnBasedMatchCallbackProxy::STATIC_FindTurnBasedMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch");
		
		UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.MinPlayers = MinPlayers;
		params.MaxPlayers = MaxPlayers;
		params.PlayerGroup = PlayerGroup;
		params.ShowExistingMatches = ShowExistingMatches;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFindTurnBasedMatchCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFindTurnBasedMatchCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034DBB0
	 * 		Name   -> Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInAppPurchaseProductRequest                ProductRequest                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UInAppPurchaseCallbackProxy* UInAppPurchaseCallbackProxy::STATIC_CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, const struct FInAppPurchaseProductRequest& ProductRequest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase");
		
		UInAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase_Params params {};
		params.PlayerController = PlayerController;
		params.ProductRequest = ProductRequest;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInAppPurchaseCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInAppPurchaseCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034DCA0
	 * 		Name   -> Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              ProductIdentifiers                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UInAppPurchaseQueryCallbackProxy* UInAppPurchaseQueryCallbackProxy::STATIC_CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<class FString> ProductIdentifiers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery");
		
		UInAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Params params {};
		params.PlayerController = PlayerController;
		params.ProductIdentifiers = ProductIdentifiers;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInAppPurchaseQueryCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInAppPurchaseQueryCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034DDB0
	 * 		Name   -> Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FInAppPurchaseProductRequest>        ConsumableProductFlags                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UInAppPurchaseRestoreCallbackProxy* UInAppPurchaseRestoreCallbackProxy::STATIC_CreateProxyObjectForInAppPurchaseRestore(TArray<struct FInAppPurchaseProductRequest> ConsumableProductFlags, class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore");
		
		UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Params params {};
		params.ConsumableProductFlags = ConsumableProductFlags;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInAppPurchaseRestoreCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInAppPurchaseRestoreCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIpConnection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIpConnection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.IpConnection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIpNetDriver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIpNetDriver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.IpNetDriver");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034F7A0
	 * 		Name   -> Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBlueprintSessionResult                     SearchResult                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UJoinSessionCallbackProxy* UJoinSessionCallbackProxy::STATIC_JoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession");
		
		UJoinSessionCallbackProxy_JoinSession_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.SearchResult = SearchResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UJoinSessionCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJoinSessionCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.JoinSessionCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00350480
	 * 		Name   -> Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        StatName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StatValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULeaderboardBlueprintLibrary::STATIC_WriteLeaderboardInteger(class APlayerController* PlayerController, const class FName& StatName, int32_t StatValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger");
		
		ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Params params {};
		params.PlayerController = PlayerController;
		params.StatName = StatName;
		params.StatValue = StatValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULeaderboardBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULeaderboardBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034DAF0
	 * 		Name   -> Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SessionName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULeaderboardFlushCallbackProxy* ULeaderboardFlushCallbackProxy::STATIC_CreateProxyObjectForFlush(class APlayerController* PlayerController, const class FName& SessionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush");
		
		ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Params params {};
		params.PlayerController = PlayerController;
		params.SessionName = SessionName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULeaderboardFlushCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULeaderboardFlushCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034DED0
	 * 		Name   -> Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        StatName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULeaderboardQueryCallbackProxy* ULeaderboardQueryCallbackProxy::STATIC_CreateProxyObjectForIntQuery(class APlayerController* PlayerController, const class FName& StatName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery");
		
		ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Params params {};
		params.PlayerController = PlayerController;
		params.StatName = StatName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULeaderboardQueryCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULeaderboardQueryCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034F940
	 * 		Name   -> Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULogoutCallbackProxy* ULogoutCallbackProxy::STATIC_Logout(class UObject* WorldContextObject, class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout");
		
		ULogoutCallbackProxy_Logout_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULogoutCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULogoutCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.LogoutCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOnlineBeacon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOnlineBeacon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeacon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034D790
	 * 		Name   -> Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetClient)
	 */
	void AOnlineBeaconClient::ClientOnConnected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected");
		
		AOnlineBeaconClient_ClientOnConnected_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOnlineBeaconClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOnlineBeaconClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconClient");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOnlineBeaconHost.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOnlineBeaconHost::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconHost");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOnlineBeaconHostObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOnlineBeaconHostObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconHostObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineEngineInterfaceImpl.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineEngineInterfaceImpl::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlinePIESettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlinePIESettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlinePIESettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineSessionClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineSessionClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineSessionClient");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x003500F0
	 * 		Name   -> Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		class FString                                      SessionId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPartyReservation                           ReservationUpdate                                          (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void APartyBeaconClient::ServerUpdateReservationRequest(const class FString& SessionId, const struct FPartyReservation& ReservationUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest");
		
		APartyBeaconClient_ServerUpdateReservationRequest_Params params {};
		params.SessionId = SessionId;
		params.ReservationUpdate = ReservationUpdate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034FE20
	 * 		Name   -> Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		class FString                                      SessionId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPartyReservation                           Reservation                                                (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void APartyBeaconClient::ServerReservationRequest(const class FString& SessionId, const struct FPartyReservation& Reservation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest");
		
		APartyBeaconClient_ServerReservationRequest_Params params {};
		params.SessionId = SessionId;
		params.Reservation = Reservation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034FCB0
	 * 		Name   -> Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FUniqueNetIdRepl                            PartyLeader                                                (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APartyBeaconClient::ServerCancelReservationRequest(const struct FUniqueNetIdRepl& PartyLeader)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest");
		
		APartyBeaconClient_ServerCancelReservationRequest_Params params {};
		params.PartyLeader = PartyLeader;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034D910
	 * 		Name   -> Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		int32_t                                            NumRemainingReservations                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APartyBeaconClient::ClientSendReservationUpdates(int32_t NumRemainingReservations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates");
		
		APartyBeaconClient_ClientSendReservationUpdates_Params params {};
		params.NumRemainingReservations = NumRemainingReservations;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034D8D0
	 * 		Name   -> Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 */
	void APartyBeaconClient::ClientSendReservationFull()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull");
		
		APartyBeaconClient_ClientSendReservationFull_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034D7D0
	 * 		Name   -> Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		EPartyReservationResult                            ReservationResponse                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APartyBeaconClient::ClientReservationResponse(EPartyReservationResult ReservationResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse");
		
		APartyBeaconClient_ClientReservationResponse_Params params {};
		params.ReservationResponse = ReservationResponse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034D690
	 * 		Name   -> Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		EPartyReservationResult                            ReservationResponse                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APartyBeaconClient::ClientCancelReservationResponse(EPartyReservationResult ReservationResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse");
		
		APartyBeaconClient_ClientCancelReservationResponse_Params params {};
		params.ReservationResponse = ReservationResponse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APartyBeaconClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APartyBeaconClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconClient");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APartyBeaconHost.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APartyBeaconHost::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconHost");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPartyBeaconState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPartyBeaconState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034FA00
	 * 		Name   -> Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MatchID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMPMatchOutcome                                    Outcome                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TurnTimeoutInSeconds                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UQuitMatchCallbackProxy* UQuitMatchCallbackProxy::STATIC_QuitMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, EMPMatchOutcome Outcome, int32_t TurnTimeoutInSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch");
		
		UQuitMatchCallbackProxy_QuitMatch_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.MatchID = MatchID;
		params.Outcome = Outcome;
		params.TurnTimeoutInSeconds = TurnTimeoutInSeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuitMatchCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuitMatchCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.QuitMatchCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00350240
	 * 		Name   -> Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           InPlayerController                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UShowLoginUICallbackProxy* UShowLoginUICallbackProxy::STATIC_ShowExternalLoginUI(class UObject* WorldContextObject, class APlayerController* InPlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI");
		
		UShowLoginUICallbackProxy_ShowExternalLoginUI_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InPlayerController = InPlayerController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShowLoginUICallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShowLoginUICallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.ShowLoginUICallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034FF70
	 * 		Name   -> Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		class FString                                      SessionId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSpectatorReservation                       Reservation                                                (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ASpectatorBeaconClient::ServerReservationRequest(const class FString& SessionId, const struct FSpectatorReservation& Reservation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest");
		
		ASpectatorBeaconClient_ServerReservationRequest_Params params {};
		params.SessionId = SessionId;
		params.Reservation = Reservation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034FCB0
	 * 		Name   -> Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FUniqueNetIdRepl                            Spectator                                                  (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASpectatorBeaconClient::ServerCancelReservationRequest(const struct FUniqueNetIdRepl& Spectator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest");
		
		ASpectatorBeaconClient_ServerCancelReservationRequest_Params params {};
		params.Spectator = Spectator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034D9A0
	 * 		Name   -> Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		int32_t                                            NumRemainingReservations                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASpectatorBeaconClient::ClientSendReservationUpdates(int32_t NumRemainingReservations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates");
		
		ASpectatorBeaconClient_ClientSendReservationUpdates_Params params {};
		params.NumRemainingReservations = NumRemainingReservations;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034D8F0
	 * 		Name   -> Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 */
	void ASpectatorBeaconClient::ClientSendReservationFull()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull");
		
		ASpectatorBeaconClient_ClientSendReservationFull_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034D850
	 * 		Name   -> Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		ESpectatorReservationResult                        ReservationResponse                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASpectatorBeaconClient::ClientReservationResponse(ESpectatorReservationResult ReservationResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse");
		
		ASpectatorBeaconClient_ClientReservationResponse_Params params {};
		params.ReservationResponse = ReservationResponse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034D710
	 * 		Name   -> Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		ESpectatorReservationResult                        ReservationResponse                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASpectatorBeaconClient::ClientCancelReservationResponse(ESpectatorReservationResult ReservationResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse");
		
		ASpectatorBeaconClient_ClientCancelReservationResponse_Params params {};
		params.ReservationResponse = ReservationResponse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASpectatorBeaconClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpectatorBeaconClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.SpectatorBeaconClient");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASpectatorBeaconHost.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpectatorBeaconHost::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.SpectatorBeaconHost");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpectatorBeaconState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpectatorBeaconState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.SpectatorBeaconState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034FDD0
	 * 		Name   -> Function OnlineSubsystemUtils.TestBeaconClient.ServerPong
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 */
	void ATestBeaconClient::ServerPong()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.TestBeaconClient.ServerPong");
		
		ATestBeaconClient_ServerPong_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034D7B0
	 * 		Name   -> Function OnlineSubsystemUtils.TestBeaconClient.ClientPing
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 */
	void ATestBeaconClient::ClientPing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.TestBeaconClient.ClientPing");
		
		ATestBeaconClient_ClientPing_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATestBeaconClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATestBeaconClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.TestBeaconClient");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATestBeaconHost.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATestBeaconHost::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.TestBeaconHost");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034FBC0
	 * 		Name   -> Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTurnBasedBlueprintLibrary::STATIC_RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class APlayerController* PlayerController, class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject");
		
		UTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034F410
	 * 		Name   -> Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MatchID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PlayerDisplayName                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTurnBasedBlueprintLibrary::STATIC_GetPlayerDisplayName(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, int32_t PlayerIndex, class FString* PlayerDisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName");
		
		UTurnBasedBlueprintLibrary_GetPlayerDisplayName_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.MatchID = MatchID;
		params.PlayerIndex = PlayerIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerDisplayName != nullptr)
			*PlayerDisplayName = params.PlayerDisplayName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034F150
	 * 		Name   -> Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MatchID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayerIndex                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTurnBasedBlueprintLibrary::STATIC_GetMyPlayerIndex(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, int32_t* PlayerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex");
		
		UTurnBasedBlueprintLibrary_GetMyPlayerIndex_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.MatchID = MatchID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerIndex != nullptr)
			*PlayerIndex = params.PlayerIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034EE90
	 * 		Name   -> Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MatchID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsMyTurn                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTurnBasedBlueprintLibrary::STATIC_GetIsMyTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, bool* bIsMyTurn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn");
		
		UTurnBasedBlueprintLibrary_GetIsMyTurn_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.MatchID = MatchID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsMyTurn != nullptr)
			*bIsMyTurn = params.bIsMyTurn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTurnBasedBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTurnBasedBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034F770
	 * 		Name   -> Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UVoipListenerSynthComponent::IsIdling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling");
		
		UVoipListenerSynthComponent_IsIdling_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVoipListenerSynthComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoipListenerSynthComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.VoipListenerSynthComponent");
		return ptr;
	}

}


