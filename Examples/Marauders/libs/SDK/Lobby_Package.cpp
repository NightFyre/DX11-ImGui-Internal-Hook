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
	 * 		Name   -> Function Lobby.LobbyBeaconClient.ServerSetPartyOwner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUniqueNetIdRepl                            InUniqueId                                                 (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUniqueNetIdRepl                            InPartyOwnerId                                             (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALobbyBeaconClient::ServerSetPartyOwner(const struct FUniqueNetIdRepl& InUniqueId, const struct FUniqueNetIdRepl& InPartyOwnerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ServerSetPartyOwner");
		
		ALobbyBeaconClient_ServerSetPartyOwner_Params params {};
		params.InUniqueId = InUniqueId;
		params.InPartyOwnerId = InPartyOwnerId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer
	 * 		Flags  -> ()
	 */
	void ALobbyBeaconClient::ServerNotifyJoiningServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer");
		
		ALobbyBeaconClient_ServerNotifyJoiningServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lobby.LobbyBeaconClient.ServerLoginPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InSessionId                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUniqueNetIdRepl                            InUniqueId                                                 (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      UrlString                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALobbyBeaconClient::ServerLoginPlayer(const class FString& InSessionId, const struct FUniqueNetIdRepl& InUniqueId, const class FString& UrlString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ServerLoginPlayer");
		
		ALobbyBeaconClient_ServerLoginPlayer_Params params {};
		params.InSessionId = InSessionId;
		params.InUniqueId = InUniqueId;
		params.UrlString = UrlString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lobby.LobbyBeaconClient.ServerKickPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUniqueNetIdRepl                            PlayerToKick                                               (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        Reason                                                     (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ALobbyBeaconClient::ServerKickPlayer(const struct FUniqueNetIdRepl& PlayerToKick, const class FText& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ServerKickPlayer");
		
		ALobbyBeaconClient_ServerKickPlayer_Params params {};
		params.PlayerToKick = PlayerToKick;
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby
	 * 		Flags  -> ()
	 */
	void ALobbyBeaconClient::ServerDisconnectFromLobby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby");
		
		ALobbyBeaconClient_ServerDisconnectFromLobby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lobby.LobbyBeaconClient.ServerCheat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Msg                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALobbyBeaconClient::ServerCheat(const class FString& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ServerCheat");
		
		ALobbyBeaconClient_ServerCheat_Params params {};
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lobby.LobbyBeaconClient.ClientWasKicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        KickReason                                                 (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ALobbyBeaconClient::ClientWasKicked(const class FText& KickReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientWasKicked");
		
		ALobbyBeaconClient_ClientWasKicked_Params params {};
		params.KickReason = KickReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lobby.LobbyBeaconClient.ClientSetInviteFlags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FJoinabilitySettings                        Settings                                                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALobbyBeaconClient::ClientSetInviteFlags(const struct FJoinabilitySettings& Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientSetInviteFlags");
		
		ALobbyBeaconClient_ClientSetInviteFlags_Params params {};
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lobby.LobbyBeaconClient.ClientPlayerLeft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUniqueNetIdRepl                            InUniqueId                                                 (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALobbyBeaconClient::ClientPlayerLeft(const struct FUniqueNetIdRepl& InUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientPlayerLeft");
		
		ALobbyBeaconClient_ClientPlayerLeft_Params params {};
		params.InUniqueId = InUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lobby.LobbyBeaconClient.ClientPlayerJoined
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        NewPlayerName                                              (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FUniqueNetIdRepl                            InUniqueId                                                 (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALobbyBeaconClient::ClientPlayerJoined(const class FText& NewPlayerName, const struct FUniqueNetIdRepl& InUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientPlayerJoined");
		
		ALobbyBeaconClient_ClientPlayerJoined_Params params {};
		params.NewPlayerName = NewPlayerName;
		params.InUniqueId = InUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lobby.LobbyBeaconClient.ClientLoginComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUniqueNetIdRepl                            InUniqueId                                                 (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALobbyBeaconClient::ClientLoginComplete(const struct FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientLoginComplete");
		
		ALobbyBeaconClient_ClientLoginComplete_Params params {};
		params.InUniqueId = InUniqueId;
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lobby.LobbyBeaconClient.ClientJoinGame
	 * 		Flags  -> ()
	 */
	void ALobbyBeaconClient::ClientJoinGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientJoinGame");
		
		ALobbyBeaconClient_ClientJoinGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lobby.LobbyBeaconClient.ClientAckJoiningServer
	 * 		Flags  -> ()
	 */
	void ALobbyBeaconClient::ClientAckJoiningServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconClient.ClientAckJoiningServer");
		
		ALobbyBeaconClient_ClientAckJoiningServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALobbyBeaconClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALobbyBeaconClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Lobby.LobbyBeaconClient");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALobbyBeaconHost.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALobbyBeaconHost::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Lobby.LobbyBeaconHost");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lobby.LobbyBeaconPlayerState.OnRep_UniqueId
	 * 		Flags  -> ()
	 */
	void ALobbyBeaconPlayerState::OnRep_UniqueId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconPlayerState.OnRep_UniqueId");
		
		ALobbyBeaconPlayerState_OnRep_UniqueId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner
	 * 		Flags  -> ()
	 */
	void ALobbyBeaconPlayerState::OnRep_PartyOwner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner");
		
		ALobbyBeaconPlayerState_OnRep_PartyOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby
	 * 		Flags  -> ()
	 */
	void ALobbyBeaconPlayerState::OnRep_InLobby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby");
		
		ALobbyBeaconPlayerState_OnRep_InLobby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALobbyBeaconPlayerState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALobbyBeaconPlayerState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Lobby.LobbyBeaconPlayerState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining
	 * 		Flags  -> ()
	 */
	void ALobbyBeaconState::OnRep_WaitForPlayersTimeRemaining()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining");
		
		ALobbyBeaconState_OnRep_WaitForPlayersTimeRemaining_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Lobby.LobbyBeaconState.OnRep_LobbyStarted
	 * 		Flags  -> ()
	 */
	void ALobbyBeaconState::OnRep_LobbyStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Lobby.LobbyBeaconState.OnRep_LobbyStarted");
		
		ALobbyBeaconState_OnRep_LobbyStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALobbyBeaconState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALobbyBeaconState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Lobby.LobbyBeaconState");
		return ptr;
	}

}


