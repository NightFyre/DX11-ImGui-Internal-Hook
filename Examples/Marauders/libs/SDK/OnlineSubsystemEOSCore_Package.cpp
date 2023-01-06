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
	 * 		Name   -> Function OnlineSubsystemEOSCore.CreateEOSSessionCallbackProxy.Create_EOS_Session
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, struct FEOSSessionSetting>     SessionSettings                                            (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      SessionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PublicConnections                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsLanMatch                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCreateEOSSessionCallbackProxy* UCreateEOSSessionCallbackProxy::Create_EOS_Session(class UObject* WorldContextObject, TMap<class FString, struct FEOSSessionSetting> SessionSettings, const class FString& SessionName, int32_t PublicConnections, bool bIsLanMatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOSCore.CreateEOSSessionCallbackProxy.Create_EOS_Session");
		
		UCreateEOSSessionCallbackProxy_Create_EOS_Session_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SessionSettings = SessionSettings;
		params.SessionName = SessionName;
		params.PublicConnections = PublicConnections;
		params.bIsLanMatch = bIsLanMatch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCreateEOSSessionCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCreateEOSSessionCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemEOSCore.CreateEOSSessionCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSCoreSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSCoreSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemEOSCore.EOSCoreSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemEOSCore.FindEOSSessionsCallbackProxy.OnCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSuccessful                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFindEOSSessionsCallbackProxy::OnCompleted(bool bSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOSCore.FindEOSSessionsCallbackProxy.OnCompleted");
		
		UFindEOSSessionsCallbackProxy_OnCompleted_Params params {};
		params.bSuccessful = bSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemEOSCore.FindEOSSessionsCallbackProxy.FindEOSSessions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, struct FEOSSessionSearchSetting> SearchSettings                                             (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            maxResults                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsLanQuery                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFindEOSSessionsCallbackProxy* UFindEOSSessionsCallbackProxy::FindEOSSessions(class UObject* WorldContextObject, TMap<class FString, struct FEOSSessionSearchSetting> SearchSettings, int32_t maxResults, bool bIsLanQuery)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOSCore.FindEOSSessionsCallbackProxy.FindEOSSessions");
		
		UFindEOSSessionsCallbackProxy_FindEOSSessions_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SearchSettings = SearchSettings;
		params.maxResults = maxResults;
		params.bIsLanQuery = bIsLanQuery;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFindEOSSessionsCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFindEOSSessionsCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemEOSCore.FindEOSSessionsCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetConnectionEOSCore.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetConnectionEOSCore::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemEOSCore.NetConnectionEOSCore");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetDriverEOSCore.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetDriverEOSCore::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemEOSCore.NetDriverEOSCore");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemEOSCore.EOSSubsystemLibrary.StopListeningForSessionInvites
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEOSSubsystemLibrary::StopListeningForSessionInvites(class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOSCore.EOSSubsystemLibrary.StopListeningForSessionInvites");
		
		UEOSSubsystemLibrary_StopListeningForSessionInvites_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemEOSCore.EOSSubsystemLibrary.ListenForSessionInvites
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UEOSSubsystemLibrary::ListenForSessionInvites(class APlayerController* PlayerController, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOSCore.EOSSubsystemLibrary.ListenForSessionInvites");
		
		UEOSSubsystemLibrary_ListenForSessionInvites_Params params {};
		params.PlayerController = PlayerController;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEOSSubsystemLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSSubsystemLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemEOSCore.EOSSubsystemLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemEOSCore.UpdateEOSSessionCallbackProxy.Update_EOS_Session
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, struct FEOSSessionSearchSetting> Settings                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      SessionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PublicConnections                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUpdateEOSSessionCallbackProxy* UUpdateEOSSessionCallbackProxy::Update_EOS_Session(class UObject* WorldContextObject, TMap<class FString, struct FEOSSessionSearchSetting> Settings, const class FString& SessionName, int32_t PublicConnections)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOSCore.UpdateEOSSessionCallbackProxy.Update_EOS_Session");
		
		UUpdateEOSSessionCallbackProxy_Update_EOS_Session_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Settings = Settings;
		params.SessionName = SessionName;
		params.PublicConnections = PublicConnections;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemEOSCore.UpdateEOSSessionCallbackProxy.OnCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SessionName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUpdateEOSSessionCallbackProxy::OnCompleted(const class FName& SessionName, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineSubsystemEOSCore.UpdateEOSSessionCallbackProxy.OnCompleted");
		
		UUpdateEOSSessionCallbackProxy_OnCompleted_Params params {};
		params.SessionName = SessionName;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpdateEOSSessionCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpdateEOSSessionCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemEOSCore.UpdateEOSSessionCallbackProxy");
		return ptr;
	}

}


