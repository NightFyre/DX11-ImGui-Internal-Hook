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
	 * Enum Party.EApprovalAction
	 */
	enum class EApprovalAction : uint8_t
	{
		Approve               = 0,
		Enqueue               = 1,
		EnqueueAndStartBeacon = 2,
		Deny                  = 3,
		MAX                   = 4
	};

	/**
	 * Enum Party.EPartyJoinDenialReason
	 */
	enum class EPartyJoinDenialReason : uint8_t
	{
		NoReason                         = 0,
		JoinAttemptAborted               = 1,
		Busy                             = 2,
		OssUnavailable                   = 3,
		PartyFull                        = 4,
		GameFull                         = 5,
		NotPartyLeader                   = 6,
		PartyPrivate                     = 7,
		JoinerCrossplayRestricted        = 8,
		MemberCrossplayRestricted        = 9,
		GameModeRestricted               = 10,
		Banned                           = 11,
		NotLoggedIn                      = 12,
		CheckingForRejoin                = 13,
		TargetUserMissingPresence        = 14,
		TargetUserUnjoinable             = 15,
		TargetUserAway                   = 16,
		AlreadyLeaderInPlatformSession   = 17,
		TargetUserPlayingDifferentGame   = 18,
		TargetUserMissingPlatformSession = 19,
		PlatformSessionMissingJoinInfo   = 20,
		FailedToStartFindConsoleSession  = 21,
		MissingPartyClassForTypeId       = 22,
		TargetUserBlocked                = 23,
		CustomReason0                    = 24,
		CustomReason1                    = 25,
		CustomReason2                    = 26,
		CustomReason3                    = 27,
		CustomReason4                    = 28,
		CustomReason5                    = 29,
		CustomReason6                    = 30,
		CustomReason7                    = 31,
		CustomReason8                    = 32,
		CustomReason9                    = 33,
		CustomReason10                   = 34,
		CustomReason11                   = 35,
		CustomReason12                   = 36,
		CustomReason13                   = 37,
		CustomReason14                   = 38,
		CustomReason15                   = 39,
		CustomReason16                   = 40,
		CustomReason17                   = 41,
		CustomReason18                   = 42,
		CustomReason19                   = 43,
		CustomReason20                   = 44,
		CustomReason21                   = 45,
		CustomReason22                   = 46,
		CustomReason23                   = 47,
		CustomReason24                   = 48,
		CustomReason25                   = 49,
		CustomReason26                   = 50,
		CustomReason27                   = 51,
		CustomReason28                   = 52,
		CustomReason29                   = 53,
		CustomReason30                   = 54,
		CustomReason31                   = 55,
		CustomReason32                   = 56,
		CustomReason33                   = 57,
		CustomReason34                   = 58,
		CustomReason35                   = 59,
		CustomReason36                   = 60,
		CustomReason37                   = 61,
		CustomReason38                   = 62,
		CustomReason39                   = 63,
		MAX                              = 64
	};

	/**
	 * Enum Party.EPartyInviteRestriction
	 */
	enum class EPartyInviteRestriction : uint8_t
	{
		AnyMember  = 0,
		LeaderOnly = 1,
		NoInvites  = 2,
		MAX        = 3
	};

	/**
	 * Enum Party.EPartyType
	 */
	enum class EPartyType : uint8_t
	{
		Public      = 0,
		FriendsOnly = 1,
		Private     = 2,
		MAX         = 3
	};

	/**
	 * Enum Party.ESocialChannelType
	 */
	enum class ESocialChannelType : uint8_t
	{
		General = 0,
		Founder = 1,
		Party   = 2,
		Team    = 3,
		System  = 4,
		Private = 5,
		MAX     = 6
	};

	/**
	 * Enum Party.EPlatformIconDisplayRule
	 */
	enum class EPlatformIconDisplayRule : uint8_t
	{
		Always                                = 0,
		AlwaysIfDifferent                     = 1,
		AlwaysWhenInCrossplayParty            = 2,
		AlwaysIfDifferentWhenInCrossplayParty = 3,
		Never                                 = 4,
		MAX                                   = 5
	};

	/**
	 * Enum Party.ECrossplayPreference
	 */
	enum class ECrossplayPreference : uint8_t
	{
		NoSelection        = 0,
		OptedIn            = 1,
		OptedOut           = 2,
		OptedOutRestricted = 3,
		MAX                = 4
	};

	/**
	 * Enum Party.ESocialRelationship
	 */
	enum class ESocialRelationship : uint8_t
	{
		Any                  = 0,
		FriendInviteReceived = 1,
		FriendInviteSent     = 2,
		PartyInvite          = 3,
		Friend               = 4,
		BlockedPlayer        = 5,
		SuggestedFriend      = 6,
		RecentPlayer         = 7,
		MAX                  = 8
	};

	/**
	 * Enum Party.ESocialSubsystem
	 */
	enum class ESocialSubsystem : uint8_t
	{
		Primary  = 0,
		Platform = 1,
		MAX      = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Party.SocialPlatformDescription
	 * Size -> 0x0020
	 */
	struct FSocialPlatformDescription
	{
	public:
		class FString                                              SocialPlatformTypeName;                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SocialPlatformName;                                      // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Party.OnlinePartyRepDataBase
	 * Size -> 0x0018
	 */
	struct FOnlinePartyRepDataBase
	{
	public:
		unsigned char                                              UnknownData_A1EL[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Party.UserPlatform
	 * Size -> 0x0020
	 */
	struct FUserPlatform
	{
	public:
		struct FSocialPlatformDescription                          PlatformDescription;                                     // 0x0000(0x0020) NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Party.PartyMemberRepData
	 * Size -> 0x0128 (FullSize[0x0140] - InheritedSize[0x0018])
	 */
	struct FPartyMemberRepData : public FOnlinePartyRepDataBase
	{
	public:
		unsigned char                                              UnknownData_6QT0[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUserPlatform                                       Platform;                                                // 0x0020(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZAZS[0x30];                                  // 0x0040(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUniqueNetIdRepl                                    PlatformUniqueId;                                        // 0x0070(0x0028) HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XXQK[0x30];                                  // 0x0098(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlatformSessionId;                                       // 0x00C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_97G7[0x30];                                  // 0x00D8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ECrossplayPreference                                       CrossplayPreference;                                     // 0x0108(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9MKG[0x37];                                  // 0x0109(0x0037) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Party.PartyPrivacySettings
	 * Size -> 0x0003
	 */
	struct FPartyPrivacySettings
	{
	public:
		EPartyType                                                 PartyType;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPartyInviteRestriction                                    PartyInviteRestriction;                                  // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyLeaderFriendsCanJoin;                               // 0x0002(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Party.PartyPlatformSessionInfo
	 * Size -> 0x0040
	 */
	struct FPartyPlatformSessionInfo
	{
	public:
		class FName                                                OssName;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SessionId;                                               // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FUniqueNetIdRepl                                    OwnerPrimaryId;                                          // 0x0018(0x0028) HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Party.SocialChatChannelConfig
	 * Size -> 0x0040
	 */
	struct FSocialChatChannelConfig
	{
	public:
		class USocialUser*                                         SocialUser;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LSR1[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USocialChatChannel*>                          ListenChannels;                                          // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YGYF[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Party.PartyRepData
	 * Size -> 0x0068 (FullSize[0x0080] - InheritedSize[0x0018])
	 */
	struct FPartyRepData : public FOnlinePartyRepDataBase
	{
	public:
		unsigned char                                              UnknownData_5MNR[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPartyPrivacySettings                               PrivacySettings;                                         // 0x0020(0x0003) NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F67I[0x35];                                  // 0x0023(0x0035) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPartyPlatformSessionInfo>                   PlatformSessions;                                        // 0x0058(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DR94[0x18];                                  // 0x0068(0x0018) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
