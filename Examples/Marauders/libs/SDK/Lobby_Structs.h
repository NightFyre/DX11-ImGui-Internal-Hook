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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum Lobby.ELobbyBeaconJoinState
	 */
	enum class ELobbyBeaconJoinState : uint8_t
	{
		None                    = 0,
		SentJoinRequest         = 1,
		JoinRequestAcknowledged = 2,
		MAX                     = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Lobby.LobbyPlayerStateActorInfo
	 * Size -> 0x000C (FullSize[0x0018] - InheritedSize[0x000C])
	 */
	struct FLobbyPlayerStateActorInfo : public FFastArraySerializerItem
	{
	public:
		unsigned char                                              UnknownData_YEN6[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ALobbyBeaconPlayerState*                             LobbyPlayerState;                                        // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Lobby.LobbyPlayerStateInfoArray
	 * Size -> 0x0018 (FullSize[0x0120] - InheritedSize[0x0108])
	 */
	struct FLobbyPlayerStateInfoArray : public FFastArraySerializer
	{
	public:
		TArray<struct FLobbyPlayerStateActorInfo>                  players;                                                 // 0x0108(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class ALobbyBeaconState*                                   ParentState;                                             // 0x0118(0x0008) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
