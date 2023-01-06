#pragma once

/**
 * Name: RaidGame
 * Version: 1
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
	 * Function Lobby.LobbyBeaconClient.ServerSetPartyOwner
	 */
	struct ALobbyBeaconClient_ServerSetPartyOwner_Params
	{
	public:
		struct FUniqueNetIdRepl                                    InUniqueId;                                              // 0x0000(0x0028)  (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FUniqueNetIdRepl                                    InPartyOwnerId;                                          // 0x0028(0x0028)  (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer
	 */
	struct ALobbyBeaconClient_ServerNotifyJoiningServer_Params
	{	};

	/**
	 * Function Lobby.LobbyBeaconClient.ServerLoginPlayer
	 */
	struct ALobbyBeaconClient_ServerLoginPlayer_Params
	{
	public:
		class FString                                              InSessionId;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FUniqueNetIdRepl                                    InUniqueId;                                              // 0x0010(0x0028)  (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              UrlString;                                               // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lobby.LobbyBeaconClient.ServerKickPlayer
	 */
	struct ALobbyBeaconClient_ServerKickPlayer_Params
	{
	public:
		struct FUniqueNetIdRepl                                    PlayerToKick;                                            // 0x0000(0x0028)  (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                Reason;                                                  // 0x0028(0x0018)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby
	 */
	struct ALobbyBeaconClient_ServerDisconnectFromLobby_Params
	{	};

	/**
	 * Function Lobby.LobbyBeaconClient.ServerCheat
	 */
	struct ALobbyBeaconClient_ServerCheat_Params
	{
	public:
		class FString                                              Msg;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lobby.LobbyBeaconClient.ClientWasKicked
	 */
	struct ALobbyBeaconClient_ClientWasKicked_Params
	{
	public:
		class FText                                                KickReason;                                              // 0x0000(0x0018)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lobby.LobbyBeaconClient.ClientSetInviteFlags
	 */
	struct ALobbyBeaconClient_ClientSetInviteFlags_Params
	{
	public:
		struct FJoinabilitySettings                                Settings;                                                // 0x0000(0x0014)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lobby.LobbyBeaconClient.ClientPlayerLeft
	 */
	struct ALobbyBeaconClient_ClientPlayerLeft_Params
	{
	public:
		struct FUniqueNetIdRepl                                    InUniqueId;                                              // 0x0000(0x0028)  (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lobby.LobbyBeaconClient.ClientPlayerJoined
	 */
	struct ALobbyBeaconClient_ClientPlayerJoined_Params
	{
	public:
		class FText                                                NewPlayerName;                                           // 0x0000(0x0018)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FUniqueNetIdRepl                                    InUniqueId;                                              // 0x0018(0x0028)  (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lobby.LobbyBeaconClient.ClientLoginComplete
	 */
	struct ALobbyBeaconClient_ClientLoginComplete_Params
	{
	public:
		struct FUniqueNetIdRepl                                    InUniqueId;                                              // 0x0000(0x0028)  (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bWasSuccessful;                                          // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Lobby.LobbyBeaconClient.ClientJoinGame
	 */
	struct ALobbyBeaconClient_ClientJoinGame_Params
	{	};

	/**
	 * Function Lobby.LobbyBeaconClient.ClientAckJoiningServer
	 */
	struct ALobbyBeaconClient_ClientAckJoiningServer_Params
	{	};

	/**
	 * Function Lobby.LobbyBeaconPlayerState.OnRep_UniqueId
	 */
	struct ALobbyBeaconPlayerState_OnRep_UniqueId_Params
	{	};

	/**
	 * Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner
	 */
	struct ALobbyBeaconPlayerState_OnRep_PartyOwner_Params
	{	};

	/**
	 * Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby
	 */
	struct ALobbyBeaconPlayerState_OnRep_InLobby_Params
	{	};

	/**
	 * Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining
	 */
	struct ALobbyBeaconState_OnRep_WaitForPlayersTimeRemaining_Params
	{	};

	/**
	 * Function Lobby.LobbyBeaconState.OnRep_LobbyStarted
	 */
	struct ALobbyBeaconState_OnRep_LobbyStarted_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
