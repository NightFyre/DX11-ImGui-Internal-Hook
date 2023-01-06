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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum WorkshopUploader.EWorkshopResult
	 */
	enum class EWorkshopResult : uint8_t
	{
		OK                                      = 0,
		Fail                                    = 1,
		NoConnection                            = 2,
		InvalidPassword                         = 3,
		LoggedInElsewhere                       = 4,
		InvalidProtocolVer                      = 5,
		InvalidParam                            = 6,
		FileNotFound                            = 7,
		Busy                                    = 8,
		InvalidState                            = 9,
		InvalidName                             = 10,
		InvalidEmail                            = 11,
		DuplicateName                           = 12,
		AccessDenied                            = 13,
		Timeout                                 = 14,
		Banned                                  = 15,
		AccountNotFound                         = 16,
		InvalidSteamID                          = 17,
		ServiceUnavailable                      = 18,
		NotLoggedOn                             = 19,
		Pending                                 = 20,
		EncryptionFailure                       = 21,
		InsufficientPrivilege                   = 22,
		LimitExceeded                           = 23,
		Revoked                                 = 24,
		Expired                                 = 25,
		AlreadyRedeemed                         = 26,
		DuplicateRequest                        = 27,
		AlreadyOwned                            = 28,
		IPNotFound                              = 29,
		PersistFailed                           = 30,
		LockingFailed                           = 31,
		LogonSessionReplaced                    = 32,
		ConnectFailed                           = 33,
		HandshakeFailed                         = 34,
		IOFailure                               = 35,
		RemoteDisconnect                        = 36,
		ShoppingCartNotFound                    = 37,
		Blocked                                 = 38,
		Ignored                                 = 39,
		NoMatch                                 = 40,
		AccountDisabled                         = 41,
		ServiceReadOnly                         = 42,
		AccountNotFeatured                      = 43,
		AdministratorOK                         = 44,
		ContentVersion                          = 45,
		TryAnotherCM                            = 46,
		PasswordRequiredToKickSession           = 47,
		AlreadyLoggedInElsewhere                = 48,
		Suspended                               = 49,
		Cancelled                               = 50,
		DataCorruption                          = 51,
		DiskFull                                = 52,
		RemoteCallFailed                        = 53,
		PasswordUnset                           = 54,
		ExternalAccountUnlinked                 = 55,
		PSNTicketInvalid                        = 56,
		ExternalAccountAlreadyLinked            = 57,
		RemoteFileConflict                      = 58,
		IllegalPassword                         = 59,
		SameAsPreviousValue                     = 60,
		AccountLogonDenied                      = 61,
		CannotUseOldPassword                    = 62,
		InvalidLoginAuthCode                    = 63,
		AccountLogonDeniedNoMail                = 64,
		HardwareNotCapableOfIPT                 = 65,
		IPTInitError                            = 66,
		ParentalControlRestricted               = 67,
		FacebookQueryError                      = 68,
		ExpiredLoginAuthCode                    = 69,
		IPLoginRestrictionFailed                = 70,
		AccountLockedDown                       = 71,
		AccountLogonDeniedVerifiedEmailRequired = 72,
		NoMatchingURL                           = 73,
		BadResponse                             = 74,
		RequirePasswordReEntry                  = 75,
		ValueOutOfRange                         = 76,
		UnexpectedError                         = 77,
		Disabled                                = 78,
		InvalidCEGSubmission                    = 79,
		RestrictedDevice                        = 80,
		RegionLocked                            = 81,
		RateLimitExceeded                       = 82,
		AccountLoginDeniedNeedTwoFactor         = 83,
		ItemDeleted                             = 84,
		AccountLoginDeniedThrottle              = 85,
		TwoFactorCodeMismatch                   = 86,
		TwoFactorActivationCodeMismatch         = 87,
		AccountAssociatedToMultiplePartners     = 88,
		NotModified                             = 89,
		NoMobileDevice                          = 90,
		TimeNotSynced                           = 91,
		SmsCodeFailed                           = 92,
		AccountLimitExceeded                    = 93,
		AccountActivityLimitExceeded            = 94,
		PhoneActivityLimitExceeded              = 95,
		RefundToWallet                          = 96,
		EmailSendFailure                        = 97,
		NotSettled                              = 98,
		NeedCaptcha                             = 99,
		GSLTDenied                              = 100,
		GSOwnerDenied                           = 101,
		InvalidItemType                         = 102,
		IPBanned                                = 103,
		GSLTExpired                             = 104,
		Unknown                                 = 105,
		MAX                                     = 106
	};

	/**
	 * Enum WorkshopUploader.EWorkshopVisibility
	 */
	enum class EWorkshopVisibility : uint8_t
	{
		Public      = 0,
		FriendsOnly = 1,
		Private     = 2,
		MAX         = 3
	};

	/**
	 * Enum WorkshopUploader.EWorkshopType
	 */
	enum class EWorkshopType : uint8_t
	{
		Community              = 0,
		Microtransaction       = 1,
		Collection             = 2,
		Art                    = 3,
		Video                  = 4,
		Screenshot             = 5,
		Game                   = 6,
		Software               = 7,
		Concept                = 8,
		WebGuide               = 9,
		IntegratedGuide        = 10,
		Merch                  = 11,
		ControllerBinding      = 12,
		SteamworksAccessInvite = 13,
		SteamVideo             = 14,
		GameManagedItem        = 15,
		Unknown                = 16,
		MAX                    = 17
	};

	/**
	 * Enum WorkshopUploader.EWorkshopStatus
	 */
	enum class EWorkshopStatus : uint8_t
	{
		Unknown                       = 0,
		InitializingData              = 1,
		InvalidProjectFile            = 2,
		InvalidMapFile                = 3,
		InvalidPreviewImage           = 4,
		ExceededPreviewImageLimit     = 5,
		InvalidContentDirectory       = 6,
		MapFileNotInWorkshopDirectory = 7,
		MissingEngineInstall          = 8,
		MissingEngineBinaries         = 9,
		MissingEngineConfig           = 10,
		InvalidEngineConfig           = 11,
		MissingCookOrderFile          = 12,
		WindowsCookRunning            = 13,
		WindowsCookFailed             = 14,
		WindowsPackageRunning         = 15,
		WindowsPackageFailed          = 16,
		MacCookRunning                = 17,
		MacCookFailed                 = 18,
		MacPackageRunning             = 19,
		MacPackageFailed              = 20,
		LinuxCookRunning              = 21,
		LinuxCookFailed               = 22,
		LinuxPackageRunning           = 23,
		LinuxPackageFailed            = 24,
		UpdatingItem                  = 25,
		ItemUpdateFailed              = 26,
		PreparingConfig               = 27,
		PreparingContent              = 28,
		UploadingContent              = 29,
		UploadingPreviewFile          = 30,
		CommittingChanges             = 31,
		MAX                           = 32
	};

	/**
	 * Enum WorkshopUploader.EWorkshopBuildPlatform
	 */
	enum class EWorkshopBuildPlatform : uint8_t
	{
		Win64 = 0,
		Win32 = 1,
		Mac   = 2,
		Linux = 3,
		MAX   = 4
	};

	/**
	 * Enum WorkshopUploader.EWorkshopBuildConfiguration
	 */
	enum class EWorkshopBuildConfiguration : uint8_t
	{
		Development = 0,
		Debug       = 1,
		DebugGame   = 2,
		Shipping    = 3,
		Test        = 4,
		MAX         = 5
	};

	/**
	 * Enum WorkshopUploader.EWorkshopPlatformType
	 */
	enum class EWorkshopPlatformType : uint8_t
	{
		Game   = 0,
		Editor = 1,
		Client = 2,
		Server = 3,
		MAX    = 4
	};

	/**
	 * Enum WorkshopUploader.EWorkshopPlatform
	 */
	enum class EWorkshopPlatform : uint8_t
	{
		Windows = 0,
		Mac     = 1,
		Linux   = 2,
		MAX     = 3
	};

	/**
	 * Enum WorkshopUploader.EWorkshopUserSort
	 */
	enum class EWorkshopUserSort : uint8_t
	{
		CreationOrderDesc    = 0,
		CreationOrderAsc     = 1,
		TitleAsc             = 2,
		LastUpdatedDesc      = 3,
		SubscriptionDateDesc = 4,
		VoteScoreDesc        = 5,
		ForModeration        = 6,
		MAX                  = 7
	};

	/**
	 * Enum WorkshopUploader.EWorkshopUserQuery
	 */
	enum class EWorkshopUserQuery : uint8_t
	{
		Published     = 0,
		VotedOn       = 1,
		VotedUp       = 2,
		VotedDown     = 3,
		WillVoteLater = 4,
		Favorited     = 5,
		Subscribed    = 6,
		UsedOrPlayed  = 7,
		Followed      = 8,
		MAX           = 9
	};

	/**
	 * Enum WorkshopUploader.EWorkshopFilter
	 */
	enum class EWorkshopFilter : uint8_t
	{
		All                = 0,
		Items              = 1,
		Items_Mtx          = 2,
		Items_ReadyToUse   = 3,
		Collections        = 4,
		Artwork            = 5,
		Videos             = 6,
		Screenshots        = 7,
		AllGuides          = 8,
		WebGuides          = 9,
		IntegratedGuides   = 10,
		UsableInGame       = 11,
		ControllerBindings = 12,
		GameManagedItems   = 13,
		MAX                = 14
	};

	/**
	 * Enum WorkshopUploader.EWorkshopQuery
	 */
	enum class EWorkshopQuery : uint8_t
	{
		RankedByVote                                  = 0,
		RankedByPublicationDate                       = 1,
		AcceptedForGameRankedByAcceptanceDate         = 2,
		RankedByTrend                                 = 3,
		FavoritedByFriendsRankedByPublicationDate     = 4,
		CreatedByFriendsRankedByPublicationDate       = 5,
		RankedByNumTimesReported                      = 6,
		CreatedByFollowedUsersRankedByPublicationDate = 7,
		NotYetRated                                   = 8,
		RankedByTotalVotesAsc                         = 9,
		RankedByVotesUp                               = 10,
		RankedByTextSearch                            = 11,
		RankedByTotalUniqueSubscriptions              = 12,
		RankedByPlaytimeTrend                         = 13,
		RankedByTotalPlaytime                         = 14,
		RankedByAveragePlaytimeTrend                  = 15,
		RankedByLifetimeAveragePlaytime               = 16,
		RankedByPlaytimeSessionsTrend                 = 17,
		RankedByLifetimePlaytimeSessions              = 18,
		MAX                                           = 19
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct WorkshopUploader.WorkshopFileID
	 * Size -> 0x0008
	 */
	struct FWorkshopFileID
	{
	public:
		uint64_t                                                   ID;                                                      // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct WorkshopUploader.WorkshopItem
	 * Size -> 0x00B0
	 */
	struct FWorkshopItem
	{
	public:
		struct FWorkshopFileID                                     ID;                                                      // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		EWorkshopType                                              Type;                                                    // 0x0008(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWorkshopVisibility                                        Visibility;                                              // 0x0009(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VTU0[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Title;                                                   // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              URL;                                                     // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWorkshopFileID                                     Owner;                                                   // 0x0040(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FDateTime                                           CreatedTime;                                             // 0x0048(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           UpdatedTime;                                             // 0x0050(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ContentFolder;                                           // 0x0058(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PreviewImage;                                            // 0x0068(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MetaData;                                                // 0x0078(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UpVotes;                                                 // 0x0088(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DownVotes;                                               // 0x008C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Score;                                                   // 0x0090(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1OHU[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Filename;                                                // 0x0098(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FileSize;                                                // 0x00A8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBanned;                                                 // 0x00AC(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAccepted;                                               // 0x00AD(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U770[0x2];                                   // 0x00AE(0x0002) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
