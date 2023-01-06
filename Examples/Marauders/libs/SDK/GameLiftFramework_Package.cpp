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
	 * 		Name   -> Function GameLiftFramework.GameLiftGameInstance.SetPlayerSessionId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerSessionId                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameLiftGameInstance::SetPlayerSessionId(const class FString& PlayerSessionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftGameInstance.SetPlayerSessionId");
		
		UGameLiftGameInstance_SetPlayerSessionId_Params params {};
		params.PlayerSessionId = PlayerSessionId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftFramework.GameLiftGameInstance.ServerTravel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TravelURL                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameLiftGameInstance::ServerTravel(const class FString& TravelURL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftGameInstance.ServerTravel");
		
		UGameLiftGameInstance_ServerTravel_Params params {};
		params.TravelURL = TravelURL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftFramework.GameLiftGameInstance.QuitGame
	 * 		Flags  -> ()
	 */
	void UGameLiftGameInstance::QuitGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftGameInstance.QuitGame");
		
		UGameLiftGameInstance_QuitGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftFramework.GameLiftGameInstance.OnUpdateGameSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UpdateGameSession                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameLiftGameInstance::OnUpdateGameSession(const class FString& UpdateGameSession)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftGameInstance.OnUpdateGameSession");
		
		UGameLiftGameInstance_OnUpdateGameSession_Params params {};
		params.UpdateGameSession = UpdateGameSession;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftFramework.GameLiftGameInstance.OnStartGameSession
	 * 		Flags  -> ()
	 */
	void UGameLiftGameInstance::OnStartGameSession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftGameInstance.OnStartGameSession");
		
		UGameLiftGameInstance_OnStartGameSession_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftFramework.GameLiftGameInstance.HandleProcessTermination
	 * 		Flags  -> ()
	 */
	void UGameLiftGameInstance::HandleProcessTermination()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftGameInstance.HandleProcessTermination");
		
		UGameLiftGameInstance_HandleProcessTermination_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftFramework.GameLiftGameInstance.HandleGameSessionUpdate
	 * 		Flags  -> ()
	 */
	void UGameLiftGameInstance::HandleGameSessionUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftGameInstance.HandleGameSessionUpdate");
		
		UGameLiftGameInstance_HandleGameSessionUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftFramework.GameLiftGameInstance.GetPlayerSessionId
	 * 		Flags  -> ()
	 */
	class FString UGameLiftGameInstance::GetPlayerSessionId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftGameInstance.GetPlayerSessionId");
		
		UGameLiftGameInstance_GetPlayerSessionId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftFramework.GameLiftGameInstance.GetMaxPlayerSessionCount
	 * 		Flags  -> ()
	 */
	int32_t UGameLiftGameInstance::GetMaxPlayerSessionCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftGameInstance.GetMaxPlayerSessionCount");
		
		UGameLiftGameInstance_GetMaxPlayerSessionCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftFramework.GameLiftGameInstance.GetGameLiftClientCompenent
	 * 		Flags  -> ()
	 */
	class UGameLiftClientCompenent* UGameLiftGameInstance::GetGameLiftClientCompenent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftGameInstance.GetGameLiftClientCompenent");
		
		UGameLiftGameInstance_GetGameLiftClientCompenent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameLiftGameInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameLiftGameInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameLiftFramework.GameLiftGameInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftFramework.GameLiftPlayerController.ServerRemovePlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerSessionId                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGameLiftPlayerController::ServerRemovePlayer(const class FString& PlayerSessionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftPlayerController.ServerRemovePlayer");
		
		AGameLiftPlayerController_ServerRemovePlayer_Params params {};
		params.PlayerSessionId = PlayerSessionId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftFramework.GameLiftPlayerController.ServerAcceptPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerSessionId                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGameLiftPlayerController::ServerAcceptPlayer(const class FString& PlayerSessionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftPlayerController.ServerAcceptPlayer");
		
		AGameLiftPlayerController_ServerAcceptPlayer_Params params {};
		params.PlayerSessionId = PlayerSessionId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGameLiftPlayerController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGameLiftPlayerController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameLiftFramework.GameLiftPlayerController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGameLiftPlayerState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGameLiftPlayerState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameLiftFramework.GameLiftPlayerState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftFramework.CreateGameSessionAsyncTask.CreateGameSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      roomName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      aliasId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxCount                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FGameLiftProperty>                   Properties                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UCreateGameSessionAsyncTask* UCreateGameSessionAsyncTask::CreateGameSession(const class FString& roomName, const class FString& aliasId, int32_t MaxCount, TArray<struct FGameLiftProperty> Properties)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftFramework.CreateGameSessionAsyncTask.CreateGameSession");
		
		UCreateGameSessionAsyncTask_CreateGameSession_Params params {};
		params.roomName = roomName;
		params.aliasId = aliasId;
		params.MaxCount = MaxCount;
		params.Properties = Properties;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCreateGameSessionAsyncTask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCreateGameSessionAsyncTask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameLiftFramework.CreateGameSessionAsyncTask");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftFramework.CreatePlayerSessionAsyncTask.CreatePlayerSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SessionId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PlayerId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCreatePlayerSessionAsyncTask* UCreatePlayerSessionAsyncTask::CreatePlayerSession(const class FString& SessionId, const class FString& PlayerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftFramework.CreatePlayerSessionAsyncTask.CreatePlayerSession");
		
		UCreatePlayerSessionAsyncTask_CreatePlayerSession_Params params {};
		params.SessionId = SessionId;
		params.PlayerId = PlayerId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCreatePlayerSessionAsyncTask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCreatePlayerSessionAsyncTask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameLiftFramework.CreatePlayerSessionAsyncTask");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftFramework.GameLiftBPLibrary.GetGameProperty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameLiftGameSession                        GameSession                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UGameLiftBPLibrary::GetGameProperty(class UObject* WorldContextObject, const struct FGameLiftGameSession& GameSession, const class FName& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftBPLibrary.GetGameProperty");
		
		UGameLiftBPLibrary_GetGameProperty_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.GameSession = GameSession;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftFramework.GameLiftBPLibrary.GetConnectHost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameLiftGameSession                        GameSession                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString UGameLiftBPLibrary::GetConnectHost(class UObject* WorldContextObject, const struct FGameLiftGameSession& GameSession)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftBPLibrary.GetConnectHost");
		
		UGameLiftBPLibrary_GetConnectHost_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.GameSession = GameSession;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftFramework.GameLiftBPLibrary.GetConnectCommand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Host                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PlayerSessionId                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UGameLiftBPLibrary::GetConnectCommand(class UObject* WorldContextObject, const class FString& Host, const class FString& PlayerSessionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftBPLibrary.GetConnectCommand");
		
		UGameLiftBPLibrary_GetConnectCommand_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Host = Host;
		params.PlayerSessionId = PlayerSessionId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftFramework.GameLiftBPLibrary.Connect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Host                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PlayerSessionId                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ExtraOptions                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameLiftBPLibrary::Connect(class UObject* WorldContextObject, const class FString& Host, const class FString& PlayerSessionId, const class FString& ExtraOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftBPLibrary.Connect");
		
		UGameLiftBPLibrary_Connect_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Host = Host;
		params.PlayerSessionId = PlayerSessionId;
		params.ExtraOptions = ExtraOptions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameLiftBPLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameLiftBPLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameLiftFramework.GameLiftBPLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftFramework.GameLiftClientCompenent.StopMatchmaking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TicketID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGameLiftClientCompenent::StopMatchmaking(const class FString& TicketID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftClientCompenent.StopMatchmaking");
		
		UGameLiftClientCompenent_StopMatchmaking_Params params {};
		params.TicketID = TicketID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftFramework.GameLiftClientCompenent.StartMatchmaking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FGameLiftPlayer>                     players                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      TicketID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      configurationName                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGameLiftClientCompenent::StartMatchmaking(TArray<struct FGameLiftPlayer> players, const class FString& TicketID, const class FString& configurationName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftClientCompenent.StartMatchmaking");
		
		UGameLiftClientCompenent_StartMatchmaking_Params params {};
		params.players = players;
		params.TicketID = TicketID;
		params.configurationName = configurationName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftFramework.GameLiftClientCompenent.SetUpAwsClient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      AccessKey                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      secretKey                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Region                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      aliasId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      fleetId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGameLiftScheme                                    GameLiftScheme                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientCompenent::SetUpAwsClient(const class FString& AccessKey, const class FString& secretKey, const class FString& Region, const class FString& aliasId, const class FString& fleetId, EGameLiftScheme GameLiftScheme)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftClientCompenent.SetUpAwsClient");
		
		UGameLiftClientCompenent_SetUpAwsClient_Params params {};
		params.AccessKey = AccessKey;
		params.secretKey = secretKey;
		params.Region = Region;
		params.aliasId = aliasId;
		params.fleetId = fleetId;
		params.GameLiftScheme = GameLiftScheme;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftFramework.GameLiftClientCompenent.SetTestPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InTestEndpoint                                             (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientCompenent::SetTestPoint(const class FString& InTestEndpoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftClientCompenent.SetTestPoint");
		
		UGameLiftClientCompenent_SetTestPoint_Params params {};
		params.InTestEndpoint = InTestEndpoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftFramework.GameLiftClientCompenent.SetLocalTest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLocalTest                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameLiftClientCompenent::SetLocalTest(bool IsLocalTest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftClientCompenent.SetLocalTest");
		
		UGameLiftClientCompenent_SetLocalTest_Params params {};
		params.IsLocalTest = IsLocalTest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftFramework.GameLiftClientCompenent.SearchGameSessions
	 * 		Flags  -> ()
	 */
	bool UGameLiftClientCompenent::SearchGameSessions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftClientCompenent.SearchGameSessions");
		
		UGameLiftClientCompenent_SearchGameSessions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftFramework.GameLiftClientCompenent.GetGameSessionCount
	 * 		Flags  -> ()
	 */
	int32_t UGameLiftClientCompenent::GetGameSessionCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftClientCompenent.GetGameSessionCount");
		
		UGameLiftClientCompenent_GetGameSessionCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftFramework.GameLiftClientCompenent.GetGameSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameLiftGameSession                        GameSession                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UGameLiftClientCompenent::GetGameSession(int32_t Index, struct FGameLiftGameSession* GameSession)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftClientCompenent.GetGameSession");
		
		UGameLiftClientCompenent_GetGameSession_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameSession != nullptr)
			*GameSession = params.GameSession;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftFramework.GameLiftClientCompenent.DescribeMatchmaking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TicketID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMatchMakingTicketFrame                     MatchmakingTicket                                          (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UGameLiftClientCompenent::DescribeMatchmaking(const class FString& TicketID, struct FMatchMakingTicketFrame* MatchmakingTicket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftClientCompenent.DescribeMatchmaking");
		
		UGameLiftClientCompenent_DescribeMatchmaking_Params params {};
		params.TicketID = TicketID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MatchmakingTicket != nullptr)
			*MatchmakingTicket = params.MatchmakingTicket;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftFramework.GameLiftClientCompenent.CreatePlayerSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SessionId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PlayerId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGameLiftClientCompenent::CreatePlayerSession(const class FString& SessionId, const class FString& PlayerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftClientCompenent.CreatePlayerSession");
		
		UGameLiftClientCompenent_CreatePlayerSession_Params params {};
		params.SessionId = SessionId;
		params.PlayerId = PlayerId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftFramework.GameLiftClientCompenent.CreateGameSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      roomName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Password                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      aliasId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxCount                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FGameLiftProperty>                   Properties                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UGameLiftClientCompenent::CreateGameSession(const class FString& roomName, const class FString& Password, const class FString& aliasId, int32_t MaxCount, TArray<struct FGameLiftProperty> Properties)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftClientCompenent.CreateGameSession");
		
		UGameLiftClientCompenent_CreateGameSession_Params params {};
		params.roomName = roomName;
		params.Password = Password;
		params.aliasId = aliasId;
		params.MaxCount = MaxCount;
		params.Properties = Properties;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftFramework.GameLiftClientCompenent.AcceptMatch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TicketID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              playerIds                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EAcceptanceTypeFrame                               AppceptType                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGameLiftClientCompenent::AcceptMatch(const class FString& TicketID, TArray<class FString> playerIds, EAcceptanceTypeFrame AppceptType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftFramework.GameLiftClientCompenent.AcceptMatch");
		
		UGameLiftClientCompenent_AcceptMatch_Params params {};
		params.TicketID = TicketID;
		params.playerIds = playerIds;
		params.AppceptType = AppceptType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameLiftClientCompenent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameLiftClientCompenent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameLiftFramework.GameLiftClientCompenent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GameLiftFramework.SearchGameSessionAsyncTask.SearchGameSession
	 * 		Flags  -> ()
	 */
	class USearchGameSessionAsyncTask* USearchGameSessionAsyncTask::SearchGameSession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameLiftFramework.SearchGameSessionAsyncTask.SearchGameSession");
		
		USearchGameSessionAsyncTask_SearchGameSession_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USearchGameSessionAsyncTask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USearchGameSessionAsyncTask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameLiftFramework.SearchGameSessionAsyncTask");
		return ptr;
	}

}


