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
	 * Enum EOSCore.EOSResult
	 */
	enum class EOSResult : uint8_t
	{
		EOS_Success                                                      = 0,
		EOS_NoConnection                                                 = 1,
		EOS_InvalidCredentials                                           = 2,
		EOS_InvalidUser                                                  = 3,
		EOS_InvalidAuth                                                  = 4,
		EOS_AccessDenied                                                 = 5,
		EOS_MissingPermissions                                           = 6,
		EOS_Token_Not_Account                                            = 7,
		EOS_TooManyRequests                                              = 8,
		EOS_AlreadyPending                                               = 9,
		EOS_InvalidParameters                                            = 10,
		EOS_InvalidRequest                                               = 11,
		EOS_UnrecognizedResponse                                         = 12,
		EOS_IncompatibleVersion                                          = 13,
		EOS_NotConfigured                                                = 14,
		EOS_AlreadyConfigured                                            = 15,
		EOS_NotImplemented                                               = 16,
		EOS_Canceled                                                     = 17,
		EOS_NotFound                                                     = 18,
		EOS_OperationWillRetry                                           = 19,
		EOS_NoChange                                                     = 20,
		EOS_VersionMismatch                                              = 21,
		EOS_LimitExceeded                                                = 22,
		EOS_Disabled                                                     = 23,
		EOS_DuplicateNotAllowed                                          = 24,
		EOS_MissingParameters_DEPRECATED                                 = 25,
		EOS_InvalidSandboxId                                             = 26,
		EOS_TimedOut                                                     = 27,
		EOS_PartialResult                                                = 28,
		EOS_Missing_Role                                                 = 29,
		EOS_Missing_Feature                                              = 30,
		EOS_Invalid_Sandbox                                              = 31,
		EOS_Invalid_Deployment                                           = 32,
		EOS_Invalid_Product                                              = 33,
		EOS_Invalid_ProductUserID                                        = 34,
		EOS_ServiceFailure                                               = 35,
		EOS_CacheDirectoryMissing                                        = 36,
		EOS_CacheDirectoryInvalid                                        = 37,
		EOS_InvalidState                                                 = 38,
		EOS_RequestInProgress                                            = 39,
		EOS_ApplicationSuspended                                         = 40,
		EOS_NetworkDisconnected                                          = 41,
		EOS_Auth_AccountLocked                                           = 42,
		EOS_Auth_AccountLockedForUpdate                                  = 43,
		EOS_Auth_InvalidRefreshToken                                     = 44,
		EOS_Auth_InvalidToken                                            = 45,
		EOS_Auth_AuthenticationFailure                                   = 46,
		EOS_Auth_InvalidPlatformToken                                    = 47,
		EOS_Auth_WrongAccount                                            = 48,
		EOS_Auth_WrongClient                                             = 49,
		EOS_Auth_FullAccountRequired                                     = 50,
		EOS_Auth_HeadlessAccountRequired                                 = 51,
		EOS_Auth_PasswordResetRequired                                   = 52,
		EOS_Auth_PasswordCannotBeReused                                  = 53,
		EOS_Auth_Expired                                                 = 54,
		EOS_Auth_ScopeConsentRequired                                    = 55,
		EOS_Auth_ApplicationNotFound                                     = 56,
		EOS_Auth_ScopeNotFound                                           = 57,
		EOS_Auth_AccountFeatureRestricted                                = 58,
		EOS_Auth_AccountPortalLoadError                                  = 59,
		EOS_Auth_CorrectiveActionRequired                                = 60,
		EOS_Auth_PinGrantCode                                            = 61,
		EOS_Auth_PinGrantExpired                                         = 62,
		EOS_Auth_PinGrantPending                                         = 63,
		EOS_Auth_ExternalAuthNotLinked                                   = 64,
		EOS_Auth_ExternalAuthRevoked                                     = 65,
		EOS_Auth_ExternalAuthInvalid                                     = 66,
		EOS_Auth_ExternalAuthRestricted                                  = 67,
		EOS_Auth_ExternalAuthCannotLogin                                 = 68,
		EOS_Auth_ExternalAuthExpired                                     = 69,
		EOS_Auth_ExternalAuthIsLastLoginType                             = 70,
		EOS_Auth_ExchangeCodeNotFound                                    = 71,
		EOS_Auth_OriginatingExchangeCodeSessionExpired                   = 72,
		EOS_Auth_AccountNotActive                                        = 73,
		EOS_Auth_MFARequired                                             = 74,
		EOS_Auth_ParentalControls                                        = 75,
		EOS_Auth_NoRealId                                                = 76,
		EOS_Friends_InviteAwaitingAcceptance                             = 77,
		EOS_Friends_NoInvitation                                         = 78,
		EOS_Friends_AlreadyFriends                                       = 79,
		EOS_Friends_NotFriends                                           = 80,
		EOS_Friends_TargetUserTooManyInvites                             = 81,
		EOS_Friends_LocalUserTooManyInvites                              = 82,
		EOS_Friends_TargetUserFriendLimitExceeded                        = 83,
		EOS_Friends_LocalUserFriendLimitExceeded                         = 84,
		EOS_Presence_DataInvalid                                         = 85,
		EOS_Presence_DataLengthInvalid                                   = 86,
		EOS_Presence_DataKeyInvalid                                      = 87,
		EOS_Presence_DataKeyLengthInvalid                                = 88,
		EOS_Presence_DataValueInvalid                                    = 89,
		EOS_Presence_DataValueLengthInvalid                              = 90,
		EOS_Presence_RichTextInvalid                                     = 91,
		EOS_Presence_RichTextLengthInvalid                               = 92,
		EOS_Presence_StatusInvalid                                       = 93,
		EOS_Ecom_EntitlementStale                                        = 94,
		EOS_Ecom_CatalogOfferStale                                       = 95,
		EOS_Ecom_CatalogItemStale                                        = 96,
		EOS_Ecom_CatalogOfferPriceInvalid                                = 97,
		EOS_Ecom_CheckoutLoadError                                       = 98,
		EOS_Sessions_SessionInProgress                                   = 99,
		EOS_Sessions_TooManyPlayers                                      = 100,
		EOS_Sessions_NoPermission                                        = 101,
		EOS_Sessions_SessionAlreadyExists                                = 102,
		EOS_Sessions_InvalidLock                                         = 103,
		EOS_Sessions_InvalidSession                                      = 104,
		EOS_Sessions_SandboxNotAllowed                                   = 105,
		EOS_Sessions_InviteFailed                                        = 106,
		EOS_Sessions_InviteNotFound                                      = 107,
		EOS_Sessions_UpsertNotAllowed                                    = 108,
		EOS_Sessions_AggregationFailed                                   = 109,
		EOS_Sessions_HostAtCapacity                                      = 110,
		EOS_Sessions_SandboxAtCapacity                                   = 111,
		EOS_Sessions_SessionNotAnonymous                                 = 112,
		EOS_Sessions_OutOfSync                                           = 113,
		EOS_Sessions_TooManyInvites                                      = 114,
		EOS_Sessions_PresenceSessionExists                               = 115,
		EOS_Sessions_DeploymentAtCapacity                                = 116,
		EOS_Sessions_NotAllowed                                          = 117,
		EOS_Sessions_PlayerSanctioned                                    = 118,
		EOS_PlayerDataStorage_FilenameInvalid                            = 119,
		EOS_PlayerDataStorage_FilenameLengthInvalid                      = 120,
		EOS_PlayerDataStorage_FilenameInvalidChars                       = 121,
		EOS_PlayerDataStorage_FileSizeTooLarge                           = 122,
		EOS_PlayerDataStorage_FileSizeInvalid                            = 123,
		EOS_PlayerDataStorage_FileHandleInvalid                          = 124,
		EOS_PlayerDataStorage_DataInvalid                                = 125,
		EOS_PlayerDataStorage_DataLengthInvalid                          = 126,
		EOS_PlayerDataStorage_StartIndexInvalid                          = 127,
		EOS_PlayerDataStorage_RequestInProgress                          = 128,
		EOS_PlayerDataStorage_UserThrottled                              = 129,
		EOS_PlayerDataStorage_EncryptionKeyNotSet                        = 130,
		EOS_PlayerDataStorage_UserErrorFromDataCallback                  = 131,
		EOS_PlayerDataStorage_FileHeaderHasNewerVersion                  = 132,
		EOS_PlayerDataStorage_FileCorrupted                              = 133,
		EOS_Connect_ExternalTokenValidationFailed                        = 134,
		EOS_Connect_UserAlreadyExists                                    = 135,
		EOS_Connect_AuthExpired                                          = 136,
		EOS_Connect_InvalidToken                                         = 137,
		EOS_Connect_UnsupportedTokenType                                 = 138,
		EOS_Connect_LinkAccountFailed                                    = 139,
		EOS_Connect_ExternalServiceUnavailable                           = 140,
		EOS_Connect_ExternalServiceConfigurationFailure                  = 141,
		EOS_Connect_LinkAccountFailedMissingNintendoIdAccount_DEPRECATED = 142,
		EOS_UI_SocialOverlayLoadError                                    = 143,
		EOS_Lobby_NotOwner                                               = 144,
		EOS_Lobby_InvalidLock                                            = 145,
		EOS_Lobby_LobbyAlreadyExists                                     = 146,
		EOS_Lobby_SessionInProgress                                      = 147,
		EOS_Lobby_TooManyPlayers                                         = 148,
		EOS_Lobby_NoPermission                                           = 149,
		EOS_Lobby_InvalidSession                                         = 150,
		EOS_Lobby_SandboxNotAllowed                                      = 151,
		EOS_Lobby_InviteFailed                                           = 152,
		EOS_Lobby_InviteNotFound                                         = 153,
		EOS_Lobby_UpsertNotAllowed                                       = 154,
		EOS_Lobby_AggregationFailed                                      = 155,
		EOS_Lobby_HostAtCapacity                                         = 156,
		EOS_Lobby_SandboxAtCapacity                                      = 157,
		EOS_Lobby_TooManyInvites                                         = 158,
		EOS_Lobby_DeploymentAtCapacity                                   = 159,
		EOS_Lobby_NotAllowed                                             = 160,
		EOS_Lobby_MemberUpdateOnly                                       = 161,
		EOS_Lobby_PresenceLobbyExists                                    = 162,
		EOS_Lobby_VoiceNotEnabled                                        = 163,
		EOS_TitleStorage_UserErrorFromDataCallback                       = 164,
		EOS_TitleStorage_EncryptionKeyNotSet                             = 165,
		EOS_TitleStorage_FileCorrupted                                   = 166,
		EOS_TitleStorage_FileHeaderHasNewerVersion                       = 167,
		EOS_Mods_ModSdkProcessIsAlreadyRunning                           = 168,
		EOS_Mods_ModSdkCommandIsEmpty                                    = 169,
		EOS_Mods_ModSdkProcessCreationFailed                             = 170,
		EOS_Mods_CriticalError                                           = 171,
		EOS_Mods_ToolInternalError                                       = 172,
		EOS_Mods_IPCFailure                                              = 173,
		EOS_Mods_InvalidIPCResponse                                      = 174,
		EOS_Mods_URILaunchFailure                                        = 175,
		EOS_Mods_ModIsNotInstalled                                       = 176,
		EOS_Mods_UserDoesNotOwnTheGame                                   = 177,
		EOS_Mods_OfferRequestByIdInvalidResult                           = 178,
		EOS_Mods_CouldNotFindOffer                                       = 179,
		EOS_Mods_OfferRequestByIdFailure                                 = 180,
		EOS_Mods_PurchaseFailure                                         = 181,
		EOS_Mods_InvalidGameInstallInfo                                  = 182,
		EOS_Mods_CannotGetManifestLocation                               = 183,
		EOS_Mods_UnsupportedOS                                           = 184,
		EOS_AntiCheat_ClientProtectionNotAvailable                       = 185,
		EOS_AntiCheat_InvalidMode                                        = 186,
		EOS_AntiCheat_ClientProductIdMismatch                            = 187,
		EOS_AntiCheat_ClientSandboxIdMismatch                            = 188,
		EOS_AntiCheat_ProtectMessageSessionKeyRequired                   = 189,
		EOS_AntiCheat_ProtectMessageValidationFailed                     = 190,
		EOS_AntiCheat_ProtectMessageInitializationFailed                 = 191,
		EOS_AntiCheat_PeerAlreadyRegistered                              = 192,
		EOS_AntiCheat_PeerNotFound                                       = 193,
		EOS_AntiCheat_PeerNotProtected                                   = 194,
		EOS_AntiCheat_ClientDeploymentIdMismatch                         = 195,
		EOS_AntiCheat_DeviceIdAuthIsNotSupported                         = 196,
		EOS_RTC_TooManyParticipants                                      = 197,
		EOS_RTC_RoomAlreadyExists                                        = 198,
		EOS_RTC_UserKicked                                               = 199,
		EOS_RTC_UserBanned                                               = 200,
		EOS_RTC_RoomWasLeft                                              = 201,
		EOS_RTC_ReconnectionTimegateExpired                              = 202,
		EOS_RTC_ShutdownInvoked                                          = 203,
		EOS_RTC_UserIsInBlocklist                                        = 204,
		EOS_ProgressionSnapshot_SnapshotIdUnavailable                    = 205,
		EOS_KWS_ParentEmailMissing                                       = 206,
		EOS_KWS_UserGraduated                                            = 207,
		EOS_Android_JavaVMNotStored                                      = 208,
		EOS_Permission_RequiredPatchAvailable                            = 209,
		EOS_Permission_RequiredSystemUpdate                              = 210,
		EOS_Permission_AgeRestrictionFailure                             = 211,
		EOS_Permission_AccountTypeFailure                                = 212,
		EOS_Permission_ChatRestriction                                   = 213,
		EOS_Permission_UGCRestriction                                    = 214,
		EOS_Permission_OnlinePlayRestricted                              = 215,
		EOS_DesktopCrossplay_ApplicationNotBootstrapped                  = 216,
		EOS_DesktopCrossplay_ServiceNotInstalled                         = 217,
		EOS_DesktopCrossplay_ServiceStartFailed                          = 218,
		EOS_DesktopCrossplay_ServiceNotRunning                           = 219,
		EOS_UnexpectedError                                              = 220,
		MAX                                                              = 221
	};

	/**
	 * Enum EOSCore.EEOSEAntiCheatCommonClientActionReason
	 */
	enum class EEOSEAntiCheatCommonClientActionReason : uint8_t
	{
		EOS_ACCCAR_Invalid              = 0,
		EOS_ACCCAR_InternalError        = 1,
		EOS_ACCCAR_InvalidMessage       = 2,
		EOS_ACCCAR_AuthenticationFailed = 3,
		EOS_ACCCAR_NullClient           = 4,
		EOS_ACCCAR_HeartbeatTimeout     = 5,
		EOS_ACCCAR_ClientViolation      = 6,
		EOS_ACCCAR_BackendViolation     = 7,
		EOS_ACCCAR_TemporaryCooldown    = 8,
		EOS_ACCCAR_TemporaryBanned      = 9,
		EOS_ACCCAR_PermanentBanned      = 10,
		EOS_ACCCAR_MAX                  = 11
	};

	/**
	 * Enum EOSCore.EEOSEAntiCheatCommonClientAction
	 */
	enum class EEOSEAntiCheatCommonClientAction : uint8_t
	{
		EOS_ACCCA_Invalid      = 0,
		EOS_ACCCA_RemovePlayer = 1,
		EOS_ACCCA_MAX          = 2
	};

	/**
	 * Enum EOSCore.EEOSEAntiCheatCommonClientAuthStatus
	 */
	enum class EEOSEAntiCheatCommonClientAuthStatus : uint8_t
	{
		EOS_ACCCAS_Invalid            = 0,
		EOS_ACCCAS_LocalAuthComplete  = 1,
		EOS_ACCCAS_RemoteAuthComplete = 2,
		EOS_ACCCAS_MAX                = 3
	};

	/**
	 * Enum EOSCore.EEOSEAntiCheatClientViolationType
	 */
	enum class EEOSEAntiCheatClientViolationType : uint8_t
	{
		EOS_ACCVT_Invalid                               = 0,
		EOS_ACCVT_IntegrityCatalogNotFound              = 1,
		EOS_ACCVT_IntegrityCatalogError                 = 2,
		EOS_ACCVT_IntegrityCatalogCertificateRevoked    = 3,
		EOS_ACCVT_IntegrityCatalogMissingMainExecutable = 4,
		EOS_ACCVT_GameFileMismatch                      = 5,
		EOS_ACCVT_RequiredGameFileNotFound              = 6,
		EOS_ACCVT_UnknownGameFileForbidden              = 7,
		EOS_ACCVT_SystemFileUntrusted                   = 8,
		EOS_ACCVT_ForbiddenModuleLoaded                 = 9,
		EOS_ACCVT_CorruptedMemory                       = 10,
		EOS_ACCVT_ForbiddenToolDetected                 = 11,
		EOS_ACCVT_InternalAntiCheatViolation            = 12,
		EOS_ACCVT_CorruptedNetworkMessageFlow           = 13,
		EOS_ACCVT_VirtualMachineNotAllowed              = 14,
		EOS_ACCVT_ForbiddenSystemConfiguration          = 15,
		EOS_ACCVT_MAX                                   = 16
	};

	/**
	 * Enum EOSCore.EEOSELoginStatus
	 */
	enum class EEOSELoginStatus : uint8_t
	{
		EOS_LS_NotLoggedIn       = 0,
		EOS_LS_UsingLocalProfile = 1,
		EOS_LS_LoggedIn          = 2,
		EOS_LS_MAX               = 3
	};

	/**
	 * Enum EOSCore.EEOSEExternalAccountType
	 */
	enum class EEOSEExternalAccountType : uint8_t
	{
		EOS_EAT_EPIC     = 0,
		EOS_EAT_STEAM    = 1,
		EOS_EAT_PSN      = 2,
		EOS_EAT_XBL      = 3,
		EOS_EAT_DISCORD  = 4,
		EOS_EAT_GOG      = 5,
		EOS_EAT_NINTENDO = 6,
		EOS_EAT_UPLAY    = 7,
		EOS_EAT_OPENID   = 8,
		EOS_EAT_APPLE    = 9,
		EOS_EAT_GOOGLE   = 10,
		EOS_EAT_OCULUS   = 11,
		EOS_EAT_ITCHIO   = 12,
		EOS_EAT_AMAZON   = 13,
		EOS_EAT_MAX      = 14
	};

	/**
	 * Enum EOSCore.EOSELoginStatus
	 */
	enum class EOSELoginStatus : uint8_t
	{
		EOS_LS_NotLoggedIn       = 0,
		EOS_LS_UsingLocalProfile = 1,
		EOS_LS_LoggedIn          = 2,
		EOS_LS_MAX               = 3
	};

	/**
	 * Enum EOSCore.EEOSEConnectionClosedReason
	 */
	enum class EEOSEConnectionClosedReason : uint8_t
	{
		EOS_CCR_Unknown            = 0,
		EOS_CCR_ClosedByLocalUser  = 1,
		EOS_CCR_ClosedByPeer       = 2,
		EOS_CCR_TimedOut           = 3,
		EOS_CCR_TooManyConnections = 4,
		EOS_CCR_InvalidMessage     = 5,
		EOS_CCR_InvalidData        = 6,
		EOS_CCR_ConnectionFailed   = 7,
		EOS_CCR_ConnectionClosed   = 8,
		EOS_CCR_NegotiationFailed  = 9,
		EOS_CCR_UnexpectedError    = 10,
		EOS_CCR_MAX                = 11
	};

	/**
	 * Enum EOSCore.EEOSENATType
	 */
	enum class EEOSENATType : uint8_t
	{
		EOS_NAT_Unknown  = 0,
		EOS_NAT_Open     = 1,
		EOS_NAT_Moderate = 2,
		EOS_NAT_Strict   = 3,
		EOS_NAT_MAX      = 4
	};

	/**
	 * Enum EOSCore.EEOSELobbyMemberStatus
	 */
	enum class EEOSELobbyMemberStatus : uint8_t
	{
		EOS_LMS_JOINED       = 0,
		EOS_LMS_LEFT         = 1,
		EOS_LMS_DISCONNECTED = 2,
		EOS_LMS_KICKED       = 3,
		EOS_LMS_PROMOTED     = 4,
		EOS_LMS_CLOSED       = 5,
		EOS_LMS_MAX          = 6
	};

	/**
	 * Enum EOSCore.EEOSEOwnershipStatus
	 */
	enum class EEOSEOwnershipStatus : uint8_t
	{
		EOS_OS_NotOwned = 0,
		EOS_OS_Owned    = 1,
		EOS_OS_MAX      = 2
	};

	/**
	 * Enum EOSCore.EEOSLogLevel
	 */
	enum class EEOSLogLevel : uint8_t
	{
		Off         = 0,
		Fatal       = 1,
		Error       = 2,
		Warning     = 3,
		Info        = 4,
		Verbose     = 5,
		VeryVerbose = 6,
		MAX         = 7
	};

	/**
	 * Enum EOSCore.EEOSEFriendsStatus
	 */
	enum class EEOSEFriendsStatus : uint8_t
	{
		EOS_FS_NotFriends     = 0,
		EOS_FS_InviteSent     = 1,
		EOS_FS_InviteReceived = 2,
		EOS_FS_Friends        = 3,
		EOS_FS_MAX            = 4
	};

	/**
	 * Enum EOSCore.EEOSEModEnumerationType
	 */
	enum class EEOSEModEnumerationType : uint8_t
	{
		EOS_MET_INSTALLED     = 0,
		EOS_MET_ALL_AVAILABLE = 1,
		EOS_MET_MAX           = 2
	};

	/**
	 * Enum EOSCore.EEOSERTCParticipantStatus
	 */
	enum class EEOSERTCParticipantStatus : uint8_t
	{
		EOS_RTCPS_Joined = 0,
		EOS_RTCPS_Left   = 1,
		EOS_RTCPS_MAX    = 2
	};

	/**
	 * Enum EOSCore.EEOSERTCAudioStatus
	 */
	enum class EEOSERTCAudioStatus : uint8_t
	{
		EOS_RTCAS_Unsupported          = 0,
		EOS_RTCAS_Enabled              = 1,
		EOS_RTCAS_Disabled             = 2,
		EOS_RTCAS_AdminDisabled        = 3,
		EOS_RTCAS_NotListeningDisabled = 4,
		EOS_RTCAS_MAX                  = 5
	};

	/**
	 * Enum EOSCore.EEOSERTCAudioInputStatus
	 */
	enum class EEOSERTCAudioInputStatus : uint8_t
	{
		EOS_RTCAIS_Idle                  = 0,
		EOS_RTCAIS_Recording             = 1,
		EOS_RTCAIS_RecordingSilent       = 2,
		EOS_RTCAIS_RecordingDisconnected = 3,
		EOS_RTCAIS_Failed                = 4,
		EOS_RTCAIS_MAX                   = 5
	};

	/**
	 * Enum EOSCore.EEOSERTCAudioOutputStatus
	 */
	enum class EEOSERTCAudioOutputStatus : uint8_t
	{
		EOS_RTCAOS_Idle    = 0,
		EOS_RTCAOS_Playing = 1,
		EOS_RTCAOS_Failed  = 2,
		EOS_RTCAOS_MAX     = 3
	};

	/**
	 * Enum EOSCore.EEOSEAntiCheatClientMode
	 */
	enum class EEOSEAntiCheatClientMode : uint8_t
	{
		EOS_ACCM_Invalid      = 0,
		EOS_ACCM_ClientServer = 1,
		EOS_ACCM_PeerToPeer   = 2,
		EOS_ACCM_MAX          = 3
	};

	/**
	 * Enum EOSCore.EOSEAuthScopeFlags
	 */
	enum class EOSEAuthScopeFlags : uint8_t
	{
		EOS_AS_NoFlags           = 0,
		EOS_AS_BasicProfile      = 1,
		EOS_AS_FriendsList       = 2,
		EOS_AS_Presence          = 3,
		EOS_AS_FriendsManagement = 4,
		EOS_AS_Email             = 5,
		EOS_AS_Country           = 6,
		EOS_AS_MAX               = 7
	};

	/**
	 * Enum EOSCore.EOSEAuthTokenType
	 */
	enum class EOSEAuthTokenType : uint8_t
	{
		EOS_ATT_Client = 0,
		EOS_ATT_User   = 1,
		EOS_ATT_MAX    = 2
	};

	/**
	 * Enum EOSCore.EEOSLoginCredentialType
	 */
	enum class EEOSLoginCredentialType : uint8_t
	{
		EOS_LCT_Password       = 0,
		EOS_LCT_ExchangeCode   = 1,
		EOS_LCT_PersistentAuth = 2,
		EOS_LCT_DeviceCode     = 3,
		EOS_LCT_Developer      = 4,
		EOS_LCT_RefreshToken   = 5,
		EOS_LCT_AccountPortal  = 6,
		EOS_LCT_ExternalAuth   = 7,
		EOS_LCT_MAX            = 8
	};

	/**
	 * Enum EOSCore.EEOSELinkAccountFlags
	 */
	enum class EEOSELinkAccountFlags : uint8_t
	{
		EOS_LA_NoFlags       = 0,
		EOS_LA_NintendoNsaId = 1,
		EOS_LA_MAX           = 2
	};

	/**
	 * Enum EOSCore.EEOSEExternalCredentialType
	 */
	enum class EEOSEExternalCredentialType : uint8_t
	{
		EOS_ECT_EPIC                  = 0,
		EOS_ECT_STEAM_APP_TICKET      = 1,
		EOS_ECT_PSN_ID_TOKEN          = 2,
		EOS_ECT_XBL_XSTS_TOKEN        = 3,
		EOS_ECT_DISCORD_ACCESS_TOKEN  = 4,
		EOS_ECT_GOG_SESSION_TICKET    = 5,
		EOS_ECT_NINTENDO_ID_TOKEN     = 6,
		EOS_ECT_NINTENDO_NSA_ID_TOKEN = 7,
		EOS_ECT_UPLAY_ACCESS_TOKEN    = 8,
		EOS_ECT_OPENID_ACCESS_TOKEN   = 9,
		EOS_ECT_DEVICEID_ACCESS_TOKEN = 10,
		EOS_ECT_APPLE_ID_TOKEN        = 11,
		EOS_ECT_GOOGLE_ID_TOKEN       = 12,
		EOS_ECT_OCULUS_USERID_NONCE   = 13,
		EOS_ECT_ITCHIO_JWT            = 14,
		EOS_ECT_ITCHIO_KEY            = 15,
		EOS_ECT_EPIC_ID_TOKEN         = 16,
		EOS_ECT_AMAZON_ACCESS_TOKEN   = 17,
		EOS_ECT_STEAM_SESSION_TICKET  = 18,
		EOS_ECT_MAX                   = 19
	};

	/**
	 * Enum EOSCore.EEOSEAntiCheatCommonPlayerTakeDamageResult
	 */
	enum class EEOSEAntiCheatCommonPlayerTakeDamageResult : uint8_t
	{
		EOS_ACCPTDR_None       = 0,
		EOS_ACCPTDR_Downed     = 1,
		EOS_ACCPTDR_Eliminated = 2,
		EOS_ACCPTDR_MAX        = 3
	};

	/**
	 * Enum EOSCore.EEOSEAntiCheatCommonPlayerTakeDamageType
	 */
	enum class EEOSEAntiCheatCommonPlayerTakeDamageType : uint8_t
	{
		EOS_ACCPTDT_None           = 0,
		EOS_ACCPTDT_PointDamage    = 1,
		EOS_ACCPTDT_RadialDamage   = 2,
		EOS_ACCPTDT_DamageOverTime = 3,
		EOS_ACCPTDT_MAX            = 4
	};

	/**
	 * Enum EOSCore.EEOSEAntiCheatCommonPlayerTakeDamageSource
	 */
	enum class EEOSEAntiCheatCommonPlayerTakeDamageSource : uint8_t
	{
		EOS_ACCPTDS_None               = 0,
		EOS_ACCPTDS_Player             = 1,
		EOS_ACCPTDS_NonPlayerCharacter = 2,
		EOS_ACCPTDS_World              = 3,
		EOS_ACCPTDS_MAX                = 4
	};

	/**
	 * Enum EOSCore.EEOSEAntiCheatCommonPlayerMovementState
	 */
	enum class EEOSEAntiCheatCommonPlayerMovementState : uint8_t
	{
		EOS_ACCPMS_None      = 0,
		EOS_ACCPMS_Crouching = 1,
		EOS_ACCPMS_Prone     = 2,
		EOS_ACCPMS_Mounted   = 3,
		EOS_ACCPMS_Swimming  = 4,
		EOS_ACCPMS_Falling   = 5,
		EOS_ACCPMS_Flying    = 6,
		EOS_ACCPMS_OnLadder  = 7,
		EOS_ACCPMS_MAX       = 8
	};

	/**
	 * Enum EOSCore.EEOSEAntiCheatCommonEventParamType
	 */
	enum class EEOSEAntiCheatCommonEventParamType : uint8_t
	{
		EOS_ACCEPT_Invalid      = 0,
		EOS_ACCEPT_ClientHandle = 1,
		EOS_ACCEPT_String       = 2,
		EOS_ACCEPT_UInt32       = 3,
		EOS_ACCEPT_Int32        = 4,
		EOS_ACCEPT_UInt64       = 5,
		EOS_ACCEPT_Int64        = 6,
		EOS_ACCEPT_Vector3f     = 7,
		EOS_ACCEPT_Quat         = 8,
		EOS_ACCEPT_MAX          = 9
	};

	/**
	 * Enum EOSCore.EEOSEAntiCheatCommonEventType
	 */
	enum class EEOSEAntiCheatCommonEventType : uint8_t
	{
		EOS_ACCET_Invalid     = 0,
		EOS_ACCET_GameEvent   = 1,
		EOS_ACCET_PlayerEvent = 2,
		EOS_ACCET_MAX         = 3
	};

	/**
	 * Enum EOSCore.EEOSEAntiCheatCommonClientInput
	 */
	enum class EEOSEAntiCheatCommonClientInput : uint8_t
	{
		EOS_ACCCI_Unknown       = 0,
		EOS_ACCCI_MouseKeyboard = 1,
		EOS_ACCCI_Gamepad       = 2,
		EOS_ACCCI_TouchInput    = 3,
		EOS_ACCCI_MAX           = 4
	};

	/**
	 * Enum EOSCore.EEOSEAntiCheatCommonClientFlags
	 */
	enum class EEOSEAntiCheatCommonClientFlags : uint8_t
	{
		EOS_ACCCF_None  = 0,
		EOS_ACCCF_Admin = 1,
		EOS_ACCCF_MAX   = 2
	};

	/**
	 * Enum EOSCore.EEOSEAntiCheatCommonClientPlatform
	 */
	enum class EEOSEAntiCheatCommonClientPlatform : uint8_t
	{
		EOS_ACCCP_Unknown     = 0,
		EOS_ACCCP_Windows     = 1,
		EOS_ACCCP_Mac         = 2,
		EOS_ACCCP_Linux       = 3,
		EOS_ACCCP_Xbox        = 4,
		EOS_ACCCP_PlayStation = 5,
		EOS_ACCCP_Nintendo    = 6,
		EOS_ACCCP_iOS         = 7,
		EOS_ACCCP_Android     = 8,
		EOS_ACCCP_MAX         = 9
	};

	/**
	 * Enum EOSCore.EEOSEAntiCheatCommonClientType
	 */
	enum class EEOSEAntiCheatCommonClientType : uint8_t
	{
		EOS_ACCCT_ProtectedClient   = 0,
		EOS_ACCCT_UnprotectedClient = 1,
		EOS_ACCCT_AIBot             = 2,
		EOS_ACCCT_MAX               = 3
	};

	/**
	 * Enum EOSCore.EEOSEEcomItemType
	 */
	enum class EEOSEEcomItemType : uint8_t
	{
		EOS_EIT_Durable    = 0,
		EOS_EIT_Consumable = 1,
		EOS_EIT_Other      = 2,
		EOS_EIT_MAX        = 3
	};

	/**
	 * Enum EOSCore.EEOSELeaderboardAggregation
	 */
	enum class EEOSELeaderboardAggregation : uint8_t
	{
		EOS_LA_Min    = 0,
		EOS_LA_Max    = 1,
		EOS_LA_Sum    = 2,
		EOS_LA_Latest = 3
	};

	/**
	 * Enum EOSCore.EEOSELobbyAttributeVisibility
	 */
	enum class EEOSELobbyAttributeVisibility : uint8_t
	{
		EOS_LAT_PUBLIC  = 0,
		EOS_LAT_PRIVATE = 1,
		EOS_LAT_MAX     = 2
	};

	/**
	 * Enum EOSCore.EEOSELobbyPermissionLevel
	 */
	enum class EEOSELobbyPermissionLevel : uint8_t
	{
		EOS_LPL_PUBLICADVERTISED = 0,
		EOS_LPL_JOINVIAPRESENCE  = 1,
		EOS_LPL_INVITEONLY       = 2,
		EOS_LPL_MAX              = 3
	};

	/**
	 * Enum EOSCore.EEOSEMetricsAccountIdType
	 */
	enum class EEOSEMetricsAccountIdType : uint8_t
	{
		EOS_MAIT_Epic     = 0,
		EOS_MAIT_External = 1,
		EOS_MAIT_MAX      = 2
	};

	/**
	 * Enum EOSCore.EEOSEUserControllerType
	 */
	enum class EEOSEUserControllerType : uint8_t
	{
		EOS_UCT_Unknown        = 0,
		EOS_UCT_MouseKeyboard  = 1,
		EOS_UCT_GamepadControl = 2,
		EOS_UCT_TouchControl   = 3,
		EOS_UCT_MAX            = 4
	};

	/**
	 * Enum EOSCore.EEOSEPacketReliability
	 */
	enum class EEOSEPacketReliability : uint8_t
	{
		EOS_PR_UnreliableUnordered = 0,
		EOS_PR_ReliableUnordered   = 1,
		EOS_PR_ReliableOrdered     = 2,
		EOS_PR_MAX                 = 3
	};

	/**
	 * Enum EOSCore.EEOSERelayControl
	 */
	enum class EEOSERelayControl : uint8_t
	{
		EOS_RC_NoRelays    = 0,
		EOS_RC_AllowRelays = 1,
		EOS_RC_ForceRelays = 2,
		EOS_RC_MAX         = 3
	};

	/**
	 * Enum EOSCore.EEOSPlayerDataStorageEWriteResult
	 */
	enum class EEOSPlayerDataStorageEWriteResult : uint8_t
	{
		None                   = 0,
		EOS_WR_ContinueWriting = 1,
		EOS_WR_CompleteRequest = 2,
		EOS_WR_FailRequest     = 3,
		EOS_WR_CancelRequest   = 4,
		MAX                    = 5
	};

	/**
	 * Enum EOSCore.EEOSPlayerDataStorag_EReadResult
	 */
	enum class EEOSPlayerDataStorag_EReadResult : uint8_t
	{
		None                     = 0,
		EOS_RR_ContinueReading   = 1,
		EOS_RR_FailRequest       = 2,
		EOS_RR_CancelRequest     = 3,
		EEOSPlayerDataStorag_MAX = 4
	};

	/**
	 * Enum EOSCore.EEOSPresenceEStatus
	 */
	enum class EEOSPresenceEStatus : uint8_t
	{
		EOS_PS_Offline      = 0,
		EOS_PS_Online       = 1,
		EOS_PS_Away         = 2,
		EOS_PS_ExtendedAway = 3,
		EOS_PS_DoNotDisturb = 4,
		EOS_PS_MAX          = 5
	};

	/**
	 * Enum EOSCore.EEOSEPlayerReportsCategory
	 */
	enum class EEOSEPlayerReportsCategory : uint8_t
	{
		EOS_PRC_Invalid          = 0,
		EOS_PRC_Cheating         = 1,
		EOS_PRC_Exploiting       = 2,
		EOS_PRC_OffensiveProfile = 3,
		EOS_PRC_VerbalAbuse      = 4,
		EOS_PRC_Scamming         = 5,
		EOS_PRC_Spamming         = 6,
		EOS_PRC_Other            = 7,
		EOS_PRC_MAX              = 8
	};

	/**
	 * Enum EOSCore.EEOSEOnlineSessionPermissionLevel
	 */
	enum class EEOSEOnlineSessionPermissionLevel : uint8_t
	{
		EOS_OSPF_PublicAdvertised = 0,
		EOS_OSPF_JoinViaPresence  = 1,
		EOS_OSPF_InviteOnly       = 2,
		EOS_OSPF_MAX              = 3
	};

	/**
	 * Enum EOSCore.EEOSESessionAttributeAdvertisementType
	 */
	enum class EEOSESessionAttributeAdvertisementType : uint8_t
	{
		EOS_SAAT_DontAdvertise = 0,
		EOS_SAAT_Advertise     = 1,
		EOS_SAAT_MAX           = 2
	};

	/**
	 * Enum EOSCore.EEOSEOnlineSessionState
	 */
	enum class EEOSEOnlineSessionState : uint8_t
	{
		EOS_OSS_NoSession  = 0,
		EOS_OSS_Creating   = 1,
		EOS_OSS_Pending    = 2,
		EOS_OSS_Starting   = 3,
		EOS_OSS_InProgress = 4,
		EOS_OSS_Ending     = 5,
		EOS_OSS_Ended      = 6,
		EOS_OSS_Destroying = 7,
		EOS_OSS_MAX        = 8
	};

	/**
	 * Enum EOSCore.EEOSTitleStorageEReadResult
	 */
	enum class EEOSTitleStorageEReadResult : uint8_t
	{
		NONE                      = 0,
		EOS_TS_RR_ContinueReading = 1,
		EOS_TS_RR_FailRequest     = 2,
		EOS_TS_RR_CancelRequest   = 3,
		MAX                       = 4
	};

	/**
	 * Enum EOSCore.ESuccessFail
	 */
	enum class ESuccessFail : uint8_t
	{
		Success = 0,
		Fail    = 1,
		MAX     = 2
	};

	/**
	 * Enum EOSCore.EEOSEDesktopCrossplayStatus
	 */
	enum class EEOSEDesktopCrossplayStatus : uint8_t
	{
		EOS_DCS_OK                         = 0,
		EOS_DCS_ApplicationNotBootstrapped = 1,
		EOS_DCS_ServiceNotInstalled        = 2,
		EOS_DCS_ServiceStartFailed         = 3,
		EOS_DCS_ServiceNotRunning          = 4,
		EOS_DCS_OverlayDisabled            = 5,
		EOS_DCS_OverlayNotInstalled        = 6,
		EOS_DCS_OverlayTrustCheckFailed    = 7,
		EOS_DCS_OverlayLoadFailed          = 8,
		EOS_DCS_MAX                        = 9
	};

	/**
	 * Enum EOSCore.EOSENetworkStatus
	 */
	enum class EOSENetworkStatus : uint8_t
	{
		EOS_NS_Disabled = 0,
		EOS_NS_Offline  = 1,
		EOS_NS_Online   = 2,
		EOS_NS_MAX      = 3
	};

	/**
	 * Enum EOSCore.EOSEApplicationStatus
	 */
	enum class EOSEApplicationStatus : uint8_t
	{
		EOS_AS_BackgroundConstrained   = 0,
		EOS_AS_BackgroundUnconstrained = 1,
		EOS_AS_BackgroundSuspended     = 2,
		EOS_AS_Foreground              = 3,
		EOS_AS_MAX                     = 4
	};

	/**
	 * Enum EOSCore.EEOSEComparisonOp
	 */
	enum class EEOSEComparisonOp : uint8_t
	{
		EOS_CO_EQUAL              = 0,
		EOS_CO_NOTEQUAL           = 1,
		EOS_CO_GREATERTHAN        = 2,
		EOS_CO_GREATERTHANOREQUAL = 3,
		EOS_CO_LESSTHAN           = 4,
		EOS_CO_LESSTHANOREQUAL    = 5,
		EOS_CO_DISTANCE           = 6,
		EOS_CO_ANYOF              = 7,
		EOS_CO_NOTANYOF           = 8,
		EOS_CO_MAX                = 9
	};

	/**
	 * Enum EOSCore.EEOSEAttributeType
	 */
	enum class EEOSEAttributeType : uint8_t
	{
		EOS_AT_BOOLEAN = 0,
		EOS_AT_INT64   = 1,
		EOS_AT_DOUBLE  = 2,
		EOS_AT_STRING  = 3,
		EOS_AT_MAX     = 4
	};

	/**
	 * Enum EOSCore.EEOSChannelType
	 */
	enum class EEOSChannelType : uint8_t
	{
		DEFAULT        = 0,
		DATA_REQUEST   = 1,
		DATA_HANDSHAKE = 2,
		DATA_SUBSYSTEM = 3,
		DATA_CHAT      = 4,
		MAX            = 5
	};

	/**
	 * Enum EOSCore.EEOSUIENotificationLocation
	 */
	enum class EEOSUIENotificationLocation : uint8_t
	{
		EOS_UNL_TopLeft     = 0,
		EOS_UNL_TopRight    = 1,
		EOS_UNL_BottomLeft  = 2,
		EOS_UNL_BottomRight = 3,
		EOS_UNL_MAX         = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct EOSCore.EOSAchievementsOnQueryDefinitionsCompleteCallbackInfo
	 * Size -> 0x0010
	 */
	struct FEOSAchievementsOnQueryDefinitionsCompleteCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7N5K[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSProductUserId
	 * Size -> 0x0021
	 */
	struct FEOSProductUserId
	{
	public:
		unsigned char                                              UnknownData_TGVJ[0x21];                                  // 0x0000(0x0021) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAchievementsOnQueryPlayerAchievementsCompleteCallbackInfo
	 * Size -> 0x0038
	 */
	struct FEOSAchievementsOnQueryPlayerAchievementsCompleteCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_280J[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   userId;                                                  // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QCHJ[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAchievementsOnUnlockAchievementsCompleteCallbackInfo
	 * Size -> 0x0038
	 */
	struct FEOSAchievementsOnUnlockAchievementsCompleteCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OIGA[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   userId;                                                  // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G131[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AchievementsCount;                                       // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSNotificationId
	 * Size -> 0x0008
	 */
	struct FEOSNotificationId
	{
	public:
		unsigned char                                              UnknownData_I648[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAchievementsOnAchievementsUnlockedCallbackV2Info
	 * Size -> 0x0058
	 */
	struct FEOSAchievementsOnAchievementsUnlockedCallbackV2Info
	{
	public:
		unsigned char                                              UnknownData_1AF1[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   userId;                                                  // 0x0008(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W3Q0[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AchievementId;                                           // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UnlockTime;                                              // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSNotificationId                                  NotificationID;                                          // 0x0050(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatClientOnMessageToServerCallbackInfo
	 * Size -> 0x0020
	 */
	struct FEOSAntiCheatClientOnMessageToServerCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_WMDE[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MessageData;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ED2A[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatCommonClientHandle
	 * Size -> 0x0008
	 */
	struct FEOSAntiCheatCommonClientHandle
	{
	public:
		unsigned char                                              UnknownData_KC3X[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatCommonOnMessageToClientCallbackInfo
	 * Size -> 0x0028
	 */
	struct FEOSAntiCheatCommonOnMessageToClientCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_7HZA[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSAntiCheatCommonClientHandle                     ClientHandle;                                            // 0x0008(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class FString                                              MessageData;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6VFG[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatCommonOnClientActionRequiredCallbackInfo
	 * Size -> 0x0028
	 */
	struct FEOSAntiCheatCommonOnClientActionRequiredCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_LAAC[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSAntiCheatCommonClientHandle                     ClientHandle;                                            // 0x0008(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		EEOSEAntiCheatCommonClientAction                           ClientAction;                                            // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSEAntiCheatCommonClientActionReason                     ActionReasonCode;                                        // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U97X[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ActionReasonDetailsString;                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatCommonOnClientAuthStatusChangedCallbackInfo
	 * Size -> 0x0018
	 */
	struct FEOSAntiCheatCommonOnClientAuthStatusChangedCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_XRGA[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSAntiCheatCommonClientHandle                     ClientHandle;                                            // 0x0008(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		EEOSEAntiCheatCommonClientAuthStatus                       ClientAuthStatus;                                        // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1X6I[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatClientOnClientIntegrityViolatedCallbackInfo
	 * Size -> 0x0020
	 */
	struct FEOSAntiCheatClientOnClientIntegrityViolatedCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_I94D[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EEOSEAntiCheatClientViolationType                          ViolationType;                                           // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5992[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ViolationMessage;                                        // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.ContinuanceToken
	 * Size -> 0x0008
	 */
	struct FContinuanceToken
	{
	public:
		unsigned char                                              UnknownData_DVEI[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSConnectLoginCallbackInfo
	 * Size -> 0x0040
	 */
	struct FEOSConnectLoginCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UML3[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NAD4[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FContinuanceToken                                   ContinuanceToken;                                        // 0x0038(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSConnectCreateUserCallbackInfo
	 * Size -> 0x0038
	 */
	struct FEOSConnectCreateUserCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OTP8[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5S9E[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSConnectLinkAccountCallbackInfo
	 * Size -> 0x0038
	 */
	struct FEOSConnectLinkAccountCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7WPH[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TJ46[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSConnectUnlinkAccountCallbackInfo
	 * Size -> 0x0038
	 */
	struct FEOSConnectUnlinkAccountCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XG6E[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HU84[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSConnectCreateDeviceIdCallbackInfo
	 * Size -> 0x0010
	 */
	struct FEOSConnectCreateDeviceIdCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8MNN[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSConnectDeleteDeviceIdCallbackInfo
	 * Size -> 0x0010
	 */
	struct FEOSConnectDeleteDeviceIdCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_46SJ[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSConnectTransferDeviceIdAccountCallbackInfo
	 * Size -> 0x0038
	 */
	struct FEOSConnectTransferDeviceIdAccountCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9UJI[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9AP3[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSConnectQueryExternalAccountMappingsCallbackInfo
	 * Size -> 0x0038
	 */
	struct FEOSConnectQueryExternalAccountMappingsCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3Z9T[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5QW4[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSConnectQueryProductUserIdMappingsCallbackInfo
	 * Size -> 0x0038
	 */
	struct FEOSConnectQueryProductUserIdMappingsCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4SX6[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MQ8Y[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSConnectLoginStatusChangedCallbackInfo
	 * Size -> 0x0030
	 */
	struct FEOSConnectLoginStatusChangedCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_ZX71[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0008(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSELoginStatus                                           PreviousStatus;                                          // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSELoginStatus                                           CurrentStatus;                                           // 0x002A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_877Y[0x5];                                   // 0x002B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSConnectAuthExpirationCallbackInfo
	 * Size -> 0x0030
	 */
	struct FEOSConnectAuthExpirationCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_G97D[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0008(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KCJZ[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSConnectOnVerifyIdTokenCallback
	 * Size -> 0x00A8
	 */
	struct FEOSConnectOnVerifyIdTokenCallback
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CXT3[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   ProductUserId;                                           // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAccountInfoPresent;                                   // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSEExternalAccountType                                   AccountIdType;                                           // 0x0032(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XAD0[0x5];                                   // 0x0033(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AccountId;                                               // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Platform;                                                // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DeviceType;                                              // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ClientId;                                                // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ProductId;                                               // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SandboxId;                                               // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DeploymentId;                                            // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSEpicAccountId
	 * Size -> 0x0021
	 */
	struct FEOSEpicAccountId
	{
	public:
		unsigned char                                              UnknownData_H5CE[0x21];                                  // 0x0000(0x0021) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAuthPinGrantInfo
	 * Size -> 0x0040
	 */
	struct FEOSAuthPinGrantInfo
	{
	public:
		unsigned char                                              UnknownData_2PV6[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UserCode;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VerificationURI;                                         // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExpiresIn;                                               // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D5Z5[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              VerificationURIComplete;                                 // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAuthAccountFeatureRestrictedInfo
	 * Size -> 0x0018
	 */
	struct FEOSAuthAccountFeatureRestrictedInfo
	{
	public:
		unsigned char                                              UnknownData_ADCR[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              VerificationURI;                                         // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAuthLoginCallbackInfo
	 * Size -> 0x0090
	 */
	struct FEOSAuthLoginCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_254K[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ETE1[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSAuthPinGrantInfo                                PinGrantInfo;                                            // 0x0038(0x0040) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FEOSAuthAccountFeatureRestrictedInfo                AccountFeatureRestrictedInfo;                            // 0x0078(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAuthLogoutCallbackInfo
	 * Size -> 0x0038
	 */
	struct FEOSAuthLogoutCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_950A[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GGOG[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAuthLinkAccountCallbackInfo
	 * Size -> 0x00A0
	 */
	struct FEOSAuthLinkAccountCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2Y8E[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ANGE[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSAuthPinGrantInfo                                PinGrantInfo;                                            // 0x0038(0x0040) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   SelectedAccountId;                                       // 0x0078(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L47L[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAuthVerifyUserAuthCallbackInfo
	 * Size -> 0x0010
	 */
	struct FEOSAuthVerifyUserAuthCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XW51[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAuthDeletePersistentAuthCallbackInfo
	 * Size -> 0x0010
	 */
	struct FEOSAuthDeletePersistentAuthCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S6FP[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAuthLoginStatusChangedCallbackInfo
	 * Size -> 0x0038
	 */
	struct FEOSAuthLoginStatusChangedCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_OGC9[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0008(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOSELoginStatus                                            PrevStatus;                                              // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOSELoginStatus                                            CurrentStatus;                                           // 0x002A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JOVU[0x5];                                   // 0x002B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSNotificationId                                  NotificationID;                                          // 0x0030(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAuthQueryIdTokenCallbackInfo
	 * Size -> 0x0058
	 */
	struct FEOSAuthQueryIdTokenCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1LQP[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   TargetAccountId;                                         // 0x0031(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X6EI[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAuthVerifyIdTokenCallbackInfo
	 * Size -> 0x00A8
	 */
	struct FEOSAuthVerifyIdTokenCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_COUX[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ApplicationId;                                           // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ClientId;                                                // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ProductId;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SandboxId;                                               // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DeploymentId;                                            // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisplayName;                                             // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsExternalAccountInfoPresent;                           // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSEExternalAccountType                                   ExternalAccountIdType;                                   // 0x0071(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_519M[0x6];                                   // 0x0072(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ExternalAccountId;                                       // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ExternalAccountDisplayName;                              // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Platform;                                                // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSP2PSocketId
	 * Size -> 0x0018
	 */
	struct FEOSP2PSocketId
	{
	public:
		unsigned char                                              UnknownData_VZ50[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SocketName;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSP2POnIncomingConnectionRequestInfo
	 * Size -> 0x0068
	 */
	struct FEOSP2POnIncomingConnectionRequestInfo
	{
	public:
		unsigned char                                              UnknownData_4CGF[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0008(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   RemoteUserId;                                            // 0x0029(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VD06[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSP2PSocketId                                     SocketId;                                                // 0x0050(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSP2POnRemoteConnectionClosedInfo
	 * Size -> 0x0070
	 */
	struct FEOSP2POnRemoteConnectionClosedInfo
	{
	public:
		unsigned char                                              UnknownData_JI0U[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0008(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   RemoteUserId;                                            // 0x0029(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UCIU[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSP2PSocketId                                     SocketId;                                                // 0x0050(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EEOSEConnectionClosedReason                                Reason;                                                  // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BME8[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSP2POnQueryNATTypeCompleteInfo
	 * Size -> 0x0018
	 */
	struct FEOSP2POnQueryNATTypeCompleteInfo
	{
	public:
		unsigned char                                              UnknownData_4CTI[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EOSResult                                                  ResultCode;                                              // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6UP1[0xB];                                   // 0x0005(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EEOSENATType                                               NATType;                                                 // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N8O9[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSP2POnIncomingPacketQueueFullInfo
	 * Size -> 0x0058
	 */
	struct FEOSP2POnIncomingPacketQueueFullInfo
	{
	public:
		unsigned char                                              UnknownData_ZETW[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PacketQueueMaxSizeBytes;                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PacketQueueCurrentSizeBytes;                             // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   OverflowPacketLocalUserId;                               // 0x0028(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y433[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    OverflowPacketChannel;                                   // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OverflowPacketSizeBytes;                                 // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_POF4[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionsSendInviteCallbackInfo
	 * Size -> 0x0010
	 */
	struct FEOSSessionsSendInviteCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EFQQ[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionsRejectInviteCallbackInfo
	 * Size -> 0x0010
	 */
	struct FEOSSessionsRejectInviteCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9NO4[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionsQueryInvitesCallbackInfo
	 * Size -> 0x0038
	 */
	struct FEOSSessionsQueryInvitesCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W21C[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VCZL[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionsUpdateSessionCallbackInfo
	 * Size -> 0x0030
	 */
	struct FEOSSessionsUpdateSessionCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9SLS[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SessionName;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SessionId;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionsDestroySessionCallbackInfo
	 * Size -> 0x0010
	 */
	struct FEOSSessionsDestroySessionCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CIF4[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionsJoinSessionCallbackInfo
	 * Size -> 0x0010
	 */
	struct FEOSSessionsJoinSessionCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IK7G[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionsStartSessionCallbackInfo
	 * Size -> 0x0010
	 */
	struct FEOSSessionsStartSessionCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ED0D[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionsEndSessionCallbackInfo
	 * Size -> 0x0010
	 */
	struct FEOSSessionsEndSessionCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EUMM[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionsRegisterPlayersCallbackInfo
	 * Size -> 0x0030
	 */
	struct FEOSSessionsRegisterPlayersCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J52C[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FEOSProductUserId>                           RegisteredPlayers;                                       // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FEOSProductUserId>                           SanctionedPlayers;                                       // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionsUnregisterPlayersCallbackInfo
	 * Size -> 0x0020
	 */
	struct FEOSSessionsUnregisterPlayersCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y37K[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FEOSProductUserId>                           UnregisteredPlayers;                                     // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionSearchFindCallbackInfo
	 * Size -> 0x0010
	 */
	struct FEOSSessionSearchFindCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z02F[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionsSessionInviteReceivedCallbackInfo
	 * Size -> 0x0060
	 */
	struct FEOSSessionsSessionInviteReceivedCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_BJJR[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0008(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0029(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LZ27[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              InviteId;                                                // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionsSessionInviteAcceptedCallbackInfo
	 * Size -> 0x0070
	 */
	struct FEOSSessionsSessionInviteAcceptedCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_N9T9[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SessionId;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0018(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0039(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6EEB[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              InviteId;                                                // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSUIEventId
	 * Size -> 0x0008
	 */
	struct FEOSUIEventId
	{
	public:
		unsigned char                                              UnknownData_E1Q7[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionsJoinSessionAcceptedCallbackInfo
	 * Size -> 0x0038
	 */
	struct FEOSSessionsJoinSessionAcceptedCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_Q2JA[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0008(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PLY6[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSUIEventId                                       UiEventId;                                               // 0x0030(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyCreateLobbyCallbackInfo
	 * Size -> 0x0020
	 */
	struct FEOSLobbyCreateLobbyCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UTGX[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LobbyId;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyDestroyLobbyCallbackInfo
	 * Size -> 0x0020
	 */
	struct FEOSLobbyDestroyLobbyCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8P8D[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LobbyId;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyJoinLobbyCallbackInfo
	 * Size -> 0x0020
	 */
	struct FEOSLobbyJoinLobbyCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E2RA[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LobbyId;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyJoinLobbyByIdCallbackInfo
	 * Size -> 0x0020
	 */
	struct FEOSLobbyJoinLobbyByIdCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_84DT[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LobbyId;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyLeaveLobbyCallbackInfo
	 * Size -> 0x0020
	 */
	struct FEOSLobbyLeaveLobbyCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z864[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LobbyId;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyUpdateLobbyCallbackInfo
	 * Size -> 0x0020
	 */
	struct FEOSLobbyUpdateLobbyCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CGMI[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LobbyId;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyPromoteMemberCallbackInfo
	 * Size -> 0x0020
	 */
	struct FEOSLobbyPromoteMemberCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0X1U[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LobbyId;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyKickMemberCallbackInfo
	 * Size -> 0x0020
	 */
	struct FEOSLobbyKickMemberCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_580V[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LobbyId;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyUpdateReceivedCallbackInfo
	 * Size -> 0x0018
	 */
	struct FEOSLobbyUpdateReceivedCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_4VJL[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LobbyId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyMemberUpdateReceivedCallbackInfo
	 * Size -> 0x0040
	 */
	struct FEOSLobbyMemberUpdateReceivedCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_8ZP2[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LobbyId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0018(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MGVE[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyMemberStatusReceivedCallbackInfo
	 * Size -> 0x0040
	 */
	struct FEOSLobbyMemberStatusReceivedCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_5S68[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LobbyId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0018(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSELobbyMemberStatus                                     CurrentStatus;                                           // 0x0039(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_727S[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyInviteReceivedCallbackInfo
	 * Size -> 0x0060
	 */
	struct FEOSLobbyInviteReceivedCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_4VNX[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              InviteId;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0018(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0039(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IRLM[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbySendInviteCallbackInfo
	 * Size -> 0x0020
	 */
	struct FEOSLobbySendInviteCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IWGD[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LobbyId;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyRejectInviteCallbackInfo
	 * Size -> 0x0020
	 */
	struct FEOSLobbyRejectInviteCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q6F1[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              InviteId;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyQueryInvitesCallbackInfo
	 * Size -> 0x0038
	 */
	struct FEOSLobbyQueryInvitesCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D7TP[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JN4H[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbySearchFindCallbackInfo
	 * Size -> 0x0010
	 */
	struct FEOSLobbySearchFindCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DIJW[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyInviteAcceptedCallbackInfo
	 * Size -> 0x0070
	 */
	struct FEOSLobbyInviteAcceptedCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_0V64[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              InviteId;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0018(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0039(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FHLT[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LobbyId;                                                 // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyJoinLobbyAcceptedCallbackInfo
	 * Size -> 0x0038
	 */
	struct FEOSLobbyJoinLobbyAcceptedCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_B7YE[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0008(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0H9M[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSUIEventId                                       UiEventId;                                               // 0x0030(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyRTCRoomConnectionChangedCallbackInfo
	 * Size -> 0x0040
	 */
	struct FEOSLobbyRTCRoomConnectionChangedCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_4PI1[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LobbyId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0018(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsConnected;                                            // 0x0039(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOSResult                                                  DisconnectReason;                                        // 0x003A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K2L0[0x5];                                   // 0x003B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyHardMuteMemberCallbackInfo
	 * Size -> 0x0048
	 */
	struct FEOSLobbyHardMuteMemberCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VUYS[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LobbyId;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0020(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J681[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyLobbyInviteRejectedCallbackInfo
	 * Size -> 0x0070
	 */
	struct FEOSLobbyLobbyInviteRejectedCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_Z5NV[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              InviteId;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0018(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0039(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K5Z1[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LobbyId;                                                 // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbySendLobbyNativeInviteRequestedCallbackInfo
	 * Size -> 0x0060
	 */
	struct FEOSLobbySendLobbyNativeInviteRequestedCallbackInfo
	{
	public:
		struct FEOSUIEventId                                       UiEventId;                                               // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0008(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZEYK[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TargetNativeAccountType;                                 // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TargetUserNativeAccountId;                               // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LobbyId;                                                 // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomItemOwnership
	 * Size -> 0x0020
	 */
	struct FEOSEcomItemOwnership
	{
	public:
		unsigned char                                              UnknownData_4NOO[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ID;                                                      // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSEOwnershipStatus                                       OwnershipStatus;                                         // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PISD[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomQueryOwnershipCallbackInfo
	 * Size -> 0x0050
	 */
	struct FEOSEcomQueryOwnershipCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KA2K[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4LD4[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FEOSEcomItemOwnership>                       ItemOwnership;                                           // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7V93[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomQueryOwnershipTokenCallbackInfo
	 * Size -> 0x0048
	 */
	struct FEOSEcomQueryOwnershipTokenCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2SF9[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GLWS[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OwnershipToken;                                          // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomQueryEntitlementsCallbackInfo
	 * Size -> 0x0038
	 */
	struct FEOSEcomQueryEntitlementsCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T17O[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I05Q[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomQueryOffersCallbackInfo
	 * Size -> 0x0038
	 */
	struct FEOSEcomQueryOffersCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KVR9[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OIEO[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomCheckoutCallbackInfo
	 * Size -> 0x0048
	 */
	struct FEOSEcomCheckoutCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZL2A[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6KDN[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TransactionId;                                           // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomRedeemEntitlementsCallbackInfo
	 * Size -> 0x0038
	 */
	struct FEOSEcomRedeemEntitlementsCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OQS8[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_726R[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSCustomInvitesOnSendCustomInviteCallbackInfo
	 * Size -> 0x0048
	 */
	struct FEOSCustomInvitesOnSendCustomInviteCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1MM3[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0613[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FEOSProductUserId>                           TargetUserIds;                                           // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSCustomInvitesOnCustomInviteReceivedCallbackInfo
	 * Size -> 0x0070
	 */
	struct FEOSCustomInvitesOnCustomInviteReceivedCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_ABSV[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0008(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0029(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V36W[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CustomInviteId;                                          // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Payload;                                                 // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSCustomInvitesOnCustomInviteAcceptedCallbackInfo
	 * Size -> 0x0070
	 */
	struct FEOSCustomInvitesOnCustomInviteAcceptedCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_21X7[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0008(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0029(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I1XU[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CustomInviteId;                                          // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Payload;                                                 // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSCustomInvitesCustomInviteRejectedCallbackInfo
	 * Size -> 0x0070
	 */
	struct FEOSCustomInvitesCustomInviteRejectedCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_KCRI[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0008(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0029(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YCV1[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CustomInviteId;                                          // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Payload;                                                 // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSFriendsQueryFriendsCallbackInfo
	 * Size -> 0x0038
	 */
	struct FEOSFriendsQueryFriendsCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M0X6[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0BF4[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSFriendsSendInviteCallbackInfo
	 * Size -> 0x0058
	 */
	struct FEOSFriendsSendInviteCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5VIW[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   TargetUserId;                                            // 0x0031(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FWB8[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSFriendsAcceptInviteCallbackInfo
	 * Size -> 0x0058
	 */
	struct FEOSFriendsAcceptInviteCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3L8J[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   TargetUserId;                                            // 0x0031(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ASLC[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSFriendsRejectInviteCallbackInfo
	 * Size -> 0x0058
	 */
	struct FEOSFriendsRejectInviteCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XU44[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   TargetUserId;                                            // 0x0031(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZSA7[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSFriendsDeleteFriendCallbackInfo
	 * Size -> 0x0058
	 */
	struct FEOSFriendsDeleteFriendCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NPAU[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   TargetUserId;                                            // 0x0031(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O27Q[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSFriendsOnFriendsUpdateInfo
	 * Size -> 0x0050
	 */
	struct FEOSFriendsOnFriendsUpdateInfo
	{
	public:
		unsigned char                                              UnknownData_53CO[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0008(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   TargetUserId;                                            // 0x0029(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSEFriendsStatus                                         PreviousStatus;                                          // 0x004A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSEFriendsStatus                                         CurrentStatus;                                           // 0x004B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B11F[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLeaderboardsOnQueryLeaderboardDefinitionsCompleteCallbackInfo
	 * Size -> 0x0010
	 */
	struct FEOSLeaderboardsOnQueryLeaderboardDefinitionsCompleteCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PGWM[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLeaderboardsOnQueryLeaderboardUserScoresCompleteCallbackInfo
	 * Size -> 0x0010
	 */
	struct FEOSLeaderboardsOnQueryLeaderboardUserScoresCompleteCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1MHX[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLeaderboardsOnQueryLeaderboardRanksCompleteCallbackInfo
	 * Size -> 0x0010
	 */
	struct FEOSLeaderboardsOnQueryLeaderboardRanksCompleteCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E6M6[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSModIdentifier
	 * Size -> 0x0058
	 */
	struct FEOSModIdentifier
	{
	public:
		unsigned char                                              UnknownData_WQ22[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              NamespaceId;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemId;                                                  // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ArtifactId;                                              // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Title;                                                   // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Version;                                                 // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSModsInstallModCallbackInfo
	 * Size -> 0x0088
	 */
	struct FEOSModsInstallModCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0001(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1L0F[0xE];                                   // 0x0022(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSModIdentifier                                   Mod;                                                     // 0x0030(0x0058) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSModsUninstallModCallbackInfo
	 * Size -> 0x0088
	 */
	struct FEOSModsUninstallModCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0001(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W51J[0xE];                                   // 0x0022(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSModIdentifier                                   Mod;                                                     // 0x0030(0x0058) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSModsEnumerateModsCallbackInfo
	 * Size -> 0x0038
	 */
	struct FEOSModsEnumerateModsCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0001(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YU79[0xE];                                   // 0x0022(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EEOSEModEnumerationType                                    Type;                                                    // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M6T9[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSModsUpdateModCallbackInfo
	 * Size -> 0x0088
	 */
	struct FEOSModsUpdateModCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0001(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TQ33[0xE];                                   // 0x0022(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSModIdentifier                                   Mod;                                                     // 0x0030(0x0058) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSPlayerDataStorageQueryFileCallbackInfo
	 * Size -> 0x0038
	 */
	struct FEOSPlayerDataStorageQueryFileCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YE55[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S0IV[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSPlayerDataStorageQueryFileListCallbackInfo
	 * Size -> 0x0038
	 */
	struct FEOSPlayerDataStorageQueryFileListCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UKOF[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_82A7[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FileCount;                                               // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSPlayerDataStorageDuplicateFileCallbackInfo
	 * Size -> 0x0038
	 */
	struct FEOSPlayerDataStorageDuplicateFileCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZOHX[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SX5R[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSPlayerDataStorageDeleteFileCallbackInfo
	 * Size -> 0x0038
	 */
	struct FEOSPlayerDataStorageDeleteFileCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_26L5[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L33A[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSPlayerDataStorageFileTransferProgressCallbackInfo
	 * Size -> 0x0048
	 */
	struct FEOSPlayerDataStorageFileTransferProgressCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_OEQB[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0008(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K1F6[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Filename;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BytesTransferred;                                        // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalFileSizeBytes;                                      // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSHPlayerDataStorageFileTransferRequest
	 * Size -> 0x0008
	 */
	struct FEOSHPlayerDataStorageFileTransferRequest
	{
	public:
		unsigned char                                              UnknownData_UJS8[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSPlayerDataStorageReadFileCallbackInfo
	 * Size -> 0x0050
	 */
	struct FEOSPlayerDataStorageReadFileCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BWY8[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RGL6[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Filename;                                                // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSHPlayerDataStorageFileTransferRequest           Handle;                                                  // 0x0048(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSPlayerDataStorageWriteFileCallbackInfo
	 * Size -> 0x0050
	 */
	struct FEOSPlayerDataStorageWriteFileCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NP1O[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YTT1[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Filename;                                                // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSHPlayerDataStorageFileTransferRequest           Handle;                                                  // 0x0048(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSOnFileTransferProgressUpdated
	 * Size -> 0x0050
	 */
	struct FEOSOnFileTransferProgressUpdated
	{
	public:
		unsigned char                                              UnknownData_OZK5[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0008(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C9Q2[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Filename;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BytesTransferred;                                        // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalFileSizeBytes;                                      // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSHPlayerDataStorageFileTransferRequest           Handle;                                                  // 0x0048(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSPlayerDataStorageDeleteCacheCallbackInfo
	 * Size -> 0x0038
	 */
	struct FEOSPlayerDataStorageDeleteCacheCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZOGM[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PSUF[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSPresenceQueryPresenceCallbackInfo
	 * Size -> 0x0058
	 */
	struct FEOSPresenceQueryPresenceCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IHOE[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   TargetUserId;                                            // 0x0031(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R1S6[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSPresenceSetPresenceCallbackInfo
	 * Size -> 0x0038
	 */
	struct FEOSPresenceSetPresenceCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZM45[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YJ1A[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSPresenceJoinGameAcceptedCallbackInfo
	 * Size -> 0x0068
	 */
	struct FEOSPresenceJoinGameAcceptedCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_MOTM[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              JoinInfo;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0018(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   TargetUserId;                                            // 0x0039(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D0QT[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSUIEventId                                       UiEventId;                                               // 0x0060(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSPresencePresenceChangedCallbackInfo
	 * Size -> 0x0050
	 */
	struct FEOSPresencePresenceChangedCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_AJ0Z[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0008(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   PresenceUserId;                                          // 0x0029(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K9EV[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSProgressionSnapshotSubmitSnapshotCallbackInfo
	 * Size -> 0x0010
	 */
	struct FEOSProgressionSnapshotSubmitSnapshotCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TEWC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SnapshotId;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PPF2[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSProgressionSnapshotDeleteSnapshotCallbackInfo
	 * Size -> 0x0030
	 */
	struct FEOSProgressionSnapshotDeleteSnapshotCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0001(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BWER[0xE];                                   // 0x0022(0x000E) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSReportsSendPlayerBehaviorReportCompleteCallbackInfo
	 * Size -> 0x0010
	 */
	struct FEOSReportsSendPlayerBehaviorReportCompleteCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z9IW[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSRTCJoinRoomCallbackInfo
	 * Size -> 0x0048
	 */
	struct FEOSRTCJoinRoomCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0F3O[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BO17[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              roomName;                                                // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSRTCLeaveRoomCallbackInfo
	 * Size -> 0x0048
	 */
	struct FEOSRTCLeaveRoomCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PLL4[0x47];                                  // 0x0001(0x0047) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSRTCBlockParticipantCallbackInfo
	 * Size -> 0x0070
	 */
	struct FEOSRTCBlockParticipantCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4B61[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZNFM[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              roomName;                                                // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   ParticipantId;                                           // 0x0048(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlocked;                                                // 0x0069(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X9Z5[0x6];                                   // 0x006A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSRTCDisconnectedCallbackInfo
	 * Size -> 0x0048
	 */
	struct FEOSRTCDisconnectedCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6YGH[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OFME[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              roomName;                                                // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSRTCParticipantMetadata
	 * Size -> 0x0020
	 */
	struct FEOSRTCParticipantMetadata
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Value;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSRTCParticipantStatusChangedCallbackInfo
	 * Size -> 0x0080
	 */
	struct FEOSRTCParticipantStatusChangedCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_KN3J[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0008(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AEWV[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              roomName;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   ParticipantId;                                           // 0x0040(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSERTCParticipantStatus                                  ParticipantStatus;                                       // 0x0061(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D90F[0x6];                                   // 0x0062(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FEOSRTCParticipantMetadata>                  ParticipantMetadata;                                     // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bParticipantInBlocklist;                                 // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_00R6[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSQueryJoinRoomTokenCompleteCallbackInfo
	 * Size -> 0x0038
	 */
	struct FEOSQueryJoinRoomTokenCompleteCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L557[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              roomName;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ClientBaseUrl;                                           // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    QueryId;                                                 // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TokenCount;                                              // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSKickCompleteCallbackInfo
	 * Size -> 0x0010
	 */
	struct FEOSKickCompleteCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9EW5[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSSetParticipantHardMuteCompleteCallbackInfo
	 * Size -> 0x0010
	 */
	struct FEOSSetParticipantHardMuteCompleteCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0VC1[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSJoinRoomCallbackInfo
	 * Size -> 0x0068
	 */
	struct FEOSJoinRoomCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_E217[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0008(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RUQV[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              roomName;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   ParticipantId;                                           // 0x0040(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpeaking;                                               // 0x0061(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSERTCAudioStatus                                        AudioStatus;                                             // 0x0062(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B4E6[0x5];                                   // 0x0063(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAudioInputStateCallbackInfo
	 * Size -> 0x0048
	 */
	struct FEOSAudioInputStateCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_19NM[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0008(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WSST[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              roomName;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSERTCAudioInputStatus                                   status;                                                  // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PBK6[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSOutputStateCallbackInfo
	 * Size -> 0x0048
	 */
	struct FEOSOutputStateCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_UCSD[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0008(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6VU2[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              roomName;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSERTCAudioOutputStatus                                  status;                                                  // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3RFO[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSRTCAudioAudioBuffer
	 * Size -> 0x0010
	 */
	struct FEOSRTCAudioAudioBuffer
	{
	public:
		int32_t                                                    SampleRate;                                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Channels;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XF11[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSBeforeSendCallbackInfo
	 * Size -> 0x0050
	 */
	struct FEOSBeforeSendCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_LQUB[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0008(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XEWQ[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              roomName;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSRTCAudioAudioBuffer                             Buffer;                                                  // 0x0040(0x0010) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSBeforeRenderCallbackInfo
	 * Size -> 0x0078
	 */
	struct FEOSBeforeRenderCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_IRBD[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0008(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HAYM[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              roomName;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSRTCAudioAudioBuffer                             Buffer;                                                  // 0x0040(0x0010) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   ParticipantId;                                           // 0x0050(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SVZ2[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSUpdateSendingCallbackInfo
	 * Size -> 0x0050
	 */
	struct FEOSUpdateSendingCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N81F[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GW1K[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              roomName;                                                // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSERTCAudioStatus                                        AudioStatus;                                             // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JMIJ[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSUpdateReceivingCallbackInfo
	 * Size -> 0x0070
	 */
	struct FEOSUpdateReceivingCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EU1M[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CMY2[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              roomName;                                                // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   ParticipantId;                                           // 0x0048(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAudioEnabled;                                           // 0x0069(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IIWD[0x6];                                   // 0x006A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAudioDevicesChangedCallbackInfo
	 * Size -> 0x0008
	 */
	struct FEOSAudioDevicesChangedCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_OVJ9[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSRTCAudioUpdateSendingVolumeCallbackInfo
	 * Size -> 0x0050
	 */
	struct FEOSRTCAudioUpdateSendingVolumeCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LIMI[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CW4F[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              roomName;                                                // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Volume;                                                  // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_48R3[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSRTCAudioUpdateReceivingVolumeCallbackInfo
	 * Size -> 0x0050
	 */
	struct FEOSRTCAudioUpdateReceivingVolumeCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DJVN[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LD13[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              roomName;                                                // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Volume;                                                  // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IMZT[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSRTCAudioUpdateParticipantVolumeCallbackInfo
	 * Size -> 0x0070
	 */
	struct FEOSRTCAudioUpdateParticipantVolumeCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VFXJ[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5H6J[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              roomName;                                                // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   ParticipantId;                                           // 0x0048(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LVPL[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Volume;                                                  // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSanctionsQueryActivePlayerSanctionsCallbackInfo
	 * Size -> 0x0058
	 */
	struct FEOSSanctionsQueryActivePlayerSanctionsCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4N8R[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0031(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9PYB[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSStatsIngestStatCompleteCallbackInfo
	 * Size -> 0x0058
	 */
	struct FEOSStatsIngestStatCompleteCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FO43[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0031(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AEYI[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSStatsOnQueryStatsCompleteCallbackInfo
	 * Size -> 0x0058
	 */
	struct FEOSStatsOnQueryStatsCompleteCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_DDW2[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EOSResult                                                  ResultCode;                                              // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SUXL[0xB];                                   // 0x0005(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0031(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VOJ9[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSTitleStorageQueryFileCallbackInfo
	 * Size -> 0x0038
	 */
	struct FEOSTitleStorageQueryFileCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NXJ2[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O4F3[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSTitleStorageQueryFileListCallbackInfo
	 * Size -> 0x0038
	 */
	struct FEOSTitleStorageQueryFileListCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JHL9[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KLRP[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FileCount;                                               // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSTitleStorageFileTransferProgressCallbackInfo
	 * Size -> 0x0048
	 */
	struct FEOSTitleStorageFileTransferProgressCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_T5DY[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0008(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XGDW[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Filename;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BytesTransferred;                                        // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalFileSizeBytes;                                      // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSTitleStorageReadFileCallbackInfo
	 * Size -> 0x0048
	 */
	struct FEOSTitleStorageReadFileCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XUH8[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y59H[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Filename;                                                // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSTitleStorageDeleteCacheCallbackInfo
	 * Size -> 0x0038
	 */
	struct FEOSTitleStorageDeleteCacheCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WGTA[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W20P[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSUIShowFriendsCallbackInfo
	 * Size -> 0x0038
	 */
	struct FEOSUIShowFriendsCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D0TZ[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SBB7[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSUIHideFriendsCallbackInfo
	 * Size -> 0x0038
	 */
	struct FEOSUIHideFriendsCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FXVX[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DB11[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSUIOnDisplaySettingsUpdatedCallbackInfo
	 * Size -> 0x0010
	 */
	struct FEOSUIOnDisplaySettingsUpdatedCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_CGXJ[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsVisible;                                              // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsExclusiveInput;                                       // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AI25[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSUIOnShowBlockPlayerCallbackInfo
	 * Size -> 0x0058
	 */
	struct FEOSUIOnShowBlockPlayerCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YH85[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   TargetUserId;                                            // 0x0031(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8PSO[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSUIOnShowReportPlayerCallbackInfo
	 * Size -> 0x0058
	 */
	struct FEOSUIOnShowReportPlayerCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0V7O[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   TargetUserId;                                            // 0x0031(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9M95[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSUserInfoQueryUserInfoCallbackInfo
	 * Size -> 0x0058
	 */
	struct FEOSUserInfoQueryUserInfoCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_Y9DO[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EOSResult                                                  ResultCode;                                              // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G2DP[0xB];                                   // 0x0005(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   TargetUserId;                                            // 0x0031(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WS2Q[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSUserInfoQueryUserInfoByDisplayNameCallbackInfo
	 * Size -> 0x0068
	 */
	struct FEOSUserInfoQueryUserInfoByDisplayNameCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_HHS8[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EOSResult                                                  ResultCode;                                              // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I3C2[0xB];                                   // 0x0005(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   TargetUserId;                                            // 0x0031(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5WB0[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DisplayName;                                             // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSUserInfoQueryUserInfoByExternalAccountCallbackInfo
	 * Size -> 0x0070
	 */
	struct FEOSUserInfoQueryUserInfoByExternalAccountCallbackInfo
	{
	public:
		EOSResult                                                  ResultCode;                                              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D8TI[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V9Q3[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ExternalAccountId;                                       // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSEExternalAccountType                                   AccountType;                                             // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   TargetUserId;                                            // 0x0049(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O674[0x6];                                   // 0x006A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSHLobbyDetails
	 * Size -> 0x0008
	 */
	struct FEOSHLobbyDetails
	{
	public:
		unsigned char                                              UnknownData_1VQO[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAchievementsAddNotifyAchievementsUnlockedV2Options
	 * Size -> 0x0004
	 */
	struct FEOSAchievementsAddNotifyAchievementsUnlockedV2Options
	{
	public:
		unsigned char                                              UnknownData_9GXD[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAchievementsUnlockAchievementsOptions
	 * Size -> 0x0038
	 */
	struct FEOSAchievementsUnlockAchievementsOptions
	{
	public:
		unsigned char                                              UnknownData_HBXA[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   userId;                                                  // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7VEF[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      AchievementIds;                                          // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAchievementsCopyPlayerAchievementByAchievementIdOptions
	 * Size -> 0x0060
	 */
	struct FEOSAchievementsCopyPlayerAchievementByAchievementIdOptions
	{
	public:
		unsigned char                                              UnknownData_ACU1[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_74CU[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AchievementId;                                           // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0038(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RUQ1[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAchievementsCopyPlayerAchievementByIndexOptions
	 * Size -> 0x0050
	 */
	struct FEOSAchievementsCopyPlayerAchievementByIndexOptions
	{
	public:
		unsigned char                                              UnknownData_YK4B[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C66B[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AchievementIndex;                                        // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x002C(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3QBM[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAchievementsGetPlayerAchievementCountOptions
	 * Size -> 0x0028
	 */
	struct FEOSAchievementsGetPlayerAchievementCountOptions
	{
	public:
		unsigned char                                              UnknownData_5N52[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   userId;                                                  // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RBIQ[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAchievementsPlayerStatInfo
	 * Size -> 0x0020
	 */
	struct FEOSAchievementsPlayerStatInfo
	{
	public:
		unsigned char                                              UnknownData_JX6R[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentValue;                                            // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ThresholdValue;                                          // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAchievementsPlayerAchievement
	 * Size -> 0x0088
	 */
	struct FEOSAchievementsPlayerAchievement
	{
	public:
		unsigned char                                              UnknownData_EFV3[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AchievementId;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Progress;                                                // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RSC8[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UnlockTime;                                              // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StatInfoCount;                                           // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LPHO[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FEOSAchievementsPlayerStatInfo>              StatInfo;                                                // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              DisplayName;                                             // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IconURL;                                                 // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FlavorText;                                              // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAchievementsQueryPlayerAchievementsOptions
	 * Size -> 0x0048
	 */
	struct FEOSAchievementsQueryPlayerAchievementsOptions
	{
	public:
		unsigned char                                              UnknownData_SD2O[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0025(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YI7S[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAchievementsCopyAchievementDefinitionV2ByAchievementIdOptions
	 * Size -> 0x0010
	 */
	struct FEOSAchievementsCopyAchievementDefinitionV2ByAchievementIdOptions
	{
	public:
		class FString                                              AchievementId;                                           // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAchievementsCopyAchievementDefinitionV2ByIndexOptions
	 * Size -> 0x0004
	 */
	struct FEOSAchievementsCopyAchievementDefinitionV2ByIndexOptions
	{
	public:
		int32_t                                                    AchievementIndex;                                        // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAchievementsGetAchievementDefinitionCountOptions
	 * Size -> 0x0004
	 */
	struct FEOSAchievementsGetAchievementDefinitionCountOptions
	{
	public:
		unsigned char                                              UnknownData_AHO2[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAchievementsStatThresholds
	 * Size -> 0x0020
	 */
	struct FEOSAchievementsStatThresholds
	{
	public:
		unsigned char                                              UnknownData_PEEG[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    threshold;                                               // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CQ4J[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAchievementsDefinitionV2
	 * Size -> 0x00A0
	 */
	struct FEOSAchievementsDefinitionV2
	{
	public:
		unsigned char                                              UnknownData_FHKP[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AchievementId;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UnlockedDisplayName;                                     // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UnlockedDescription;                                     // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LockedDisplayName;                                       // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LockedDescription;                                       // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FlavorText;                                              // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UnlockedIconURL;                                         // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LockedIconURL;                                           // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsHidden;                                               // 0x0088(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EJRS[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    StatThresholdsCount;                                     // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FEOSAchievementsStatThresholds>              StatThresholds;                                          // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAchievementsQueryDefinitionsOptions
	 * Size -> 0x0021
	 */
	struct FEOSAchievementsQueryDefinitionsOptions
	{
	public:
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatClientReceiveMessageFromPeerOptions
	 * Size -> 0x0018
	 */
	struct FEOSAntiCheatClientReceiveMessageFromPeerOptions
	{
	public:
		struct FEOSAntiCheatCommonClientHandle                     PeerHandle;                                              // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      Data;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatClientUnregisterPeerOptions
	 * Size -> 0x0008
	 */
	struct FEOSAntiCheatClientUnregisterPeerOptions
	{
	public:
		struct FEOSAntiCheatCommonClientHandle                     PeerHandle;                                              // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatClientRegisterPeerOptions
	 * Size -> 0x0058
	 */
	struct FEOSAntiCheatClientRegisterPeerOptions
	{
	public:
		struct FEOSAntiCheatCommonClientHandle                     PeerHandle;                                              // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		EEOSEAntiCheatCommonClientType                             ClientType;                                              // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSEAntiCheatCommonClientPlatform                         ClientPlatform;                                          // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M168[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AuthenticationTimeout;                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KST5[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              IPAddress;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   PeerProductUserId;                                       // 0x0030(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5447[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatClientUnprotectMessageOptions
	 * Size -> 0x0018
	 */
	struct FEOSAntiCheatClientUnprotectMessageOptions
	{
	public:
		TArray<unsigned char>                                      Data;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    OutBufferSizeBytes;                                      // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3K2B[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatClientProtectMessageOptions
	 * Size -> 0x0018
	 */
	struct FEOSAntiCheatClientProtectMessageOptions
	{
	public:
		TArray<unsigned char>                                      Data;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    OutBufferSizeBytes;                                      // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T8P9[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatClientGetProtectMessageOutputLengthOptions
	 * Size -> 0x0004
	 */
	struct FEOSAntiCheatClientGetProtectMessageOutputLengthOptions
	{
	public:
		int32_t                                                    DataLengthBytes;                                         // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatClientReceiveMessageFromServerOptions
	 * Size -> 0x0010
	 */
	struct FEOSAntiCheatClientReceiveMessageFromServerOptions
	{
	public:
		TArray<unsigned char>                                      Data;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatClientAddExternalIntegrityCatalogOptions
	 * Size -> 0x0010
	 */
	struct FEOSAntiCheatClientAddExternalIntegrityCatalogOptions
	{
	public:
		class FString                                              PathToBinFile;                                           // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatClientPollStatusOptions
	 * Size -> 0x0004
	 */
	struct FEOSAntiCheatClientPollStatusOptions
	{
	public:
		int32_t                                                    OutMessageLength;                                        // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatClientEndSessionOptions
	 * Size -> 0x0001
	 */
	struct FEOSAntiCheatClientEndSessionOptions
	{
	public:
		unsigned char                                              UnknownData_M9TO[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatClientBeginSessionOptions
	 * Size -> 0x0022
	 */
	struct FEOSAntiCheatClientBeginSessionOptions
	{
	public:
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSEAntiCheatClientMode                                   Mode;                                                    // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatClientAddNotifyPeerAuthStatusChangedOptions
	 * Size -> 0x0001
	 */
	struct FEOSAntiCheatClientAddNotifyPeerAuthStatusChangedOptions
	{
	public:
		unsigned char                                              UnknownData_DO0J[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatClientAddNotifyPeerActionRequiredOptions
	 * Size -> 0x0001
	 */
	struct FEOSAntiCheatClientAddNotifyPeerActionRequiredOptions
	{
	public:
		unsigned char                                              UnknownData_R2MM[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatClientAddNotifyMessageToPeerOptions
	 * Size -> 0x0001
	 */
	struct FEOSAntiCheatClientAddNotifyMessageToPeerOptions
	{
	public:
		unsigned char                                              UnknownData_LLGO[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatClientAddNotifyMessageToServerOptions
	 * Size -> 0x0001
	 */
	struct FEOSAntiCheatClientAddNotifyMessageToServerOptions
	{
	public:
		unsigned char                                              UnknownData_3RD2[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatClientAddNotifyClientIntegrityViolatedOptions
	 * Size -> 0x0001
	 */
	struct FEOSAntiCheatClientAddNotifyClientIntegrityViolatedOptions
	{
	public:
		unsigned char                                              UnknownData_0LBP[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatServerUnprotectMessageOptions
	 * Size -> 0x0028
	 */
	struct FEOSAntiCheatServerUnprotectMessageOptions
	{
	public:
		struct FEOSAntiCheatCommonClientHandle                     ClientHandle;                                            // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    DataLengthBytes;                                         // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P0D0[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      Data;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    OutBufferSizeBytes;                                      // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3BQ2[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatServerProtectMessageOptions
	 * Size -> 0x0028
	 */
	struct FEOSAntiCheatServerProtectMessageOptions
	{
	public:
		struct FEOSAntiCheatCommonClientHandle                     ClientHandle;                                            // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    DataLengthBytes;                                         // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GLB0[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      Data;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    OutBufferSizeBytes;                                      // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K4DQ[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatServerGetProtectMessageOutputLengthOptions
	 * Size -> 0x0004
	 */
	struct FEOSAntiCheatServerGetProtectMessageOutputLengthOptions
	{
	public:
		int32_t                                                    DataLengthBytes;                                         // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatServerSetClientNetworkStateOptions
	 * Size -> 0x0010
	 */
	struct FEOSAntiCheatServerSetClientNetworkStateOptions
	{
	public:
		struct FEOSAntiCheatCommonClientHandle                     ClientHandle;                                            // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsNetworkActive;                                        // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NU1A[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatServerReceiveMessageFromClientOptions
	 * Size -> 0x0018
	 */
	struct FEOSAntiCheatServerReceiveMessageFromClientOptions
	{
	public:
		struct FEOSAntiCheatCommonClientHandle                     ClientHandle;                                            // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      Data;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatServerUnregisterClientOptions
	 * Size -> 0x0008
	 */
	struct FEOSAntiCheatServerUnregisterClientOptions
	{
	public:
		struct FEOSAntiCheatCommonClientHandle                     ClientHandle;                                            // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatServerRegisterClientOptions
	 * Size -> 0x0030
	 */
	struct FEOSAntiCheatServerRegisterClientOptions
	{
	public:
		struct FEOSAntiCheatCommonClientHandle                     ClientHandle;                                            // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		EEOSEAntiCheatCommonClientType                             ClientType;                                              // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSEAntiCheatCommonClientPlatform                         ClientPlatform;                                          // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XDR8[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AccountId;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IPAddress;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatServerEndSessionOptions
	 * Size -> 0x0001
	 */
	struct FEOSAntiCheatServerEndSessionOptions
	{
	public:
		unsigned char                                              UnknownData_BK6I[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatServerBeginSessionOptions
	 * Size -> 0x0040
	 */
	struct FEOSAntiCheatServerBeginSessionOptions
	{
	public:
		int32_t                                                    RegisterTimeoutSeconds;                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JORD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ServerName;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableGameplayData;                                     // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0019(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EWCX[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatServerAddNotifyClientAuthStatusChangedOptions
	 * Size -> 0x0001
	 */
	struct FEOSAntiCheatServerAddNotifyClientAuthStatusChangedOptions
	{
	public:
		unsigned char                                              UnknownData_X031[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatServerAddNotifyClientActionRequiredOptions
	 * Size -> 0x0001
	 */
	struct FEOSAntiCheatServerAddNotifyClientActionRequiredOptions
	{
	public:
		unsigned char                                              UnknownData_DD1B[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatServerAddNotifyMessageToClientOptions
	 * Size -> 0x0001
	 */
	struct FEOSAntiCheatServerAddNotifyMessageToClientOptions
	{
	public:
		unsigned char                                              UnknownData_A7I2[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAuthCopyIdTokenOptions
	 * Size -> 0x0021
	 */
	struct FEOSAuthCopyIdTokenOptions
	{
	public:
		struct FEOSEpicAccountId                                   AccountId;                                               // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAuthIdToken
	 * Size -> 0x0038
	 */
	struct FEOSAuthIdToken
	{
	public:
		struct FEOSEpicAccountId                                   AccountId;                                               // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MQKK[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              JsonWebToken;                                            // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAuthVerifyIdTokenOptions
	 * Size -> 0x0038
	 */
	struct FEOSAuthVerifyIdTokenOptions
	{
	public:
		struct FEOSAuthIdToken                                     IdToken;                                                 // 0x0000(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAuthQueryIdTokenOptions
	 * Size -> 0x0042
	 */
	struct FEOSAuthQueryIdTokenOptions
	{
	public:
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   TargetAccountId;                                         // 0x0021(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSHAuth
	 * Size -> 0x0008
	 */
	struct FEOSHAuth
	{
	public:
		unsigned char                                              UnknownData_6935[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAuthDeletePersistentAuthOptions
	 * Size -> 0x0010
	 */
	struct FEOSAuthDeletePersistentAuthOptions
	{
	public:
		class FString                                              RefreshToken;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAuthAddNotifyLoginStatusChangedOptions
	 * Size -> 0x0004
	 */
	struct FEOSAuthAddNotifyLoginStatusChangedOptions
	{
	public:
		unsigned char                                              UnknownData_4V00[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAuthCopyUserAuthTokenOptions
	 * Size -> 0x0004
	 */
	struct FEOSAuthCopyUserAuthTokenOptions
	{
	public:
		unsigned char                                              UnknownData_WEJZ[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAuthToken
	 * Size -> 0x00B0
	 */
	struct FEOSAuthToken
	{
	public:
		class FString                                              App;                                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ClientId;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   AccountId;                                               // 0x0020(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GGA6[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AccessToken;                                             // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ExpiresIn;                                               // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ExpiresAt;                                               // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOSEAuthTokenType                                          AuthType;                                                // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MIJR[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              RefreshToken;                                            // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RefreshExpiresIn;                                        // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RefreshExpiresAt;                                        // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAuthVerifyUserAuthOptions
	 * Size -> 0x00B0
	 */
	struct FEOSAuthVerifyUserAuthOptions
	{
	public:
		struct FEOSAuthToken                                       AuthToken;                                               // 0x0000(0x00B0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAuthLinkAccountOptions
	 * Size -> 0x0038
	 */
	struct FEOSAuthLinkAccountOptions
	{
	public:
		unsigned char                                              UnknownData_FWOG[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EEOSELinkAccountFlags                                      LinkAccountFlags;                                        // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7XBG[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FContinuanceToken                                   ContinuanceToken;                                        // 0x0008(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K2LE[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAuthLogoutOptions
	 * Size -> 0x0028
	 */
	struct FEOSAuthLogoutOptions
	{
	public:
		unsigned char                                              UnknownData_4FQ6[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JAXY[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAuthCredentials
	 * Size -> 0x0030
	 */
	struct FEOSAuthCredentials
	{
	public:
		unsigned char                                              UnknownData_JCOH[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ID;                                                      // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Token;                                                   // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSLoginCredentialType                                    Type;                                                    // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSEExternalCredentialType                                ExternalType;                                            // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KSUV[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAuthLoginOptions
	 * Size -> 0x0040
	 */
	struct FEOSAuthLoginOptions
	{
	public:
		unsigned char                                              UnknownData_VMED[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSAuthCredentials                                 credentials;                                             // 0x0008(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    ScopeFlags;                                              // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D7HH[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSConnectIdToken
	 * Size -> 0x0038
	 */
	struct FEOSConnectIdToken
	{
	public:
		struct FEOSProductUserId                                   ProductUserId;                                           // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZHDH[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              JsonWebToken;                                            // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSConnectVerifyIdTokenOptions
	 * Size -> 0x0038
	 */
	struct FEOSConnectVerifyIdTokenOptions
	{
	public:
		struct FEOSConnectIdToken                                  IdToken;                                                 // 0x0000(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSConnectCopyIdTokenOptions
	 * Size -> 0x0021
	 */
	struct FEOSConnectCopyIdTokenOptions
	{
	public:
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSConnectAddNotifyLoginStatusChangedOptions
	 * Size -> 0x0004
	 */
	struct FEOSConnectAddNotifyLoginStatusChangedOptions
	{
	public:
		unsigned char                                              UnknownData_KCVZ[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSConnectAddNotifyAuthExpirationOptions
	 * Size -> 0x0004
	 */
	struct FEOSConnectAddNotifyAuthExpirationOptions
	{
	public:
		unsigned char                                              UnknownData_UMLH[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSConnectExternalAccountInfo
	 * Size -> 0x0060
	 */
	struct FEOSConnectExternalAccountInfo
	{
	public:
		unsigned char                                              UnknownData_GUEU[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   ProductUserId;                                           // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UR75[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DisplayName;                                             // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AccountId;                                               // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSEExternalAccountType                                   AccountIdType;                                           // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KQ8A[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LastLoginTime;                                           // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSConnectCopyProductUserInfoOptions
	 * Size -> 0x0028
	 */
	struct FEOSConnectCopyProductUserInfoOptions
	{
	public:
		unsigned char                                              UnknownData_ZA97[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TI53[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSConnectCopyProductUserExternalAccountByAccountIdOptions
	 * Size -> 0x0038
	 */
	struct FEOSConnectCopyProductUserExternalAccountByAccountIdOptions
	{
	public:
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8JIP[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AccountId;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSConnectCopyProductUserExternalAccountByAccountTypeOptions
	 * Size -> 0x0028
	 */
	struct FEOSConnectCopyProductUserExternalAccountByAccountTypeOptions
	{
	public:
		unsigned char                                              UnknownData_Y53L[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSEExternalAccountType                                   AccountIdType;                                           // 0x0025(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N3QZ[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSConnectCopyProductUserExternalAccountByIndexOptions
	 * Size -> 0x002C
	 */
	struct FEOSConnectCopyProductUserExternalAccountByIndexOptions
	{
	public:
		unsigned char                                              UnknownData_AT6X[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X2CE[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ExternalAccountInfoIndex;                                // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSConnectGetProductUserExternalAccountCountOptions
	 * Size -> 0x0028
	 */
	struct FEOSConnectGetProductUserExternalAccountCountOptions
	{
	public:
		unsigned char                                              UnknownData_FU9R[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KRRT[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSConnectGetProductUserIdMappingOptions
	 * Size -> 0x0048
	 */
	struct FEOSConnectGetProductUserIdMappingOptions
	{
	public:
		unsigned char                                              UnknownData_N5D6[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSEExternalAccountType                                   AccountIdType;                                           // 0x0025(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   TargetProductUserId;                                     // 0x0026(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MCKT[0x1];                                   // 0x0047(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSConnectQueryProductUserIdMappingsOptions
	 * Size -> 0x0038
	 */
	struct FEOSConnectQueryProductUserIdMappingsOptions
	{
	public:
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JRWS[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FEOSProductUserId>                           ProductUserIds;                                          // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSConnectGetExternalAccountMappingsOptions
	 * Size -> 0x0038
	 */
	struct FEOSConnectGetExternalAccountMappingsOptions
	{
	public:
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSEExternalAccountType                                   AccountIdType;                                           // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A48Q[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TargetExternalUserId;                                    // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSConnectQueryExternalAccountMappingsOptions
	 * Size -> 0x0038
	 */
	struct FEOSConnectQueryExternalAccountMappingsOptions
	{
	public:
		unsigned char                                              UnknownData_PDVP[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSEExternalAccountType                                   AccountIdType;                                           // 0x0025(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HR35[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      ExternalAccountIds;                                      // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSConnectTransferDeviceIdAccountOptions
	 * Size -> 0x0063
	 */
	struct FEOSConnectTransferDeviceIdAccountOptions
	{
	public:
		struct FEOSProductUserId                                   PrimaryLocalUserId;                                      // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   LocalDeviceUserId;                                       // 0x0021(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   ProductUserIdToPreserve;                                 // 0x0042(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSConnectDeleteDeviceIdOptions
	 * Size -> 0x0004
	 */
	struct FEOSConnectDeleteDeviceIdOptions
	{
	public:
		unsigned char                                              UnknownData_8HI5[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSConnectCreateDeviceIdOptions
	 * Size -> 0x0010
	 */
	struct FEOSConnectCreateDeviceIdOptions
	{
	public:
		class FString                                              DeviceModel;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSConnectUnlinkAccountOptions
	 * Size -> 0x0028
	 */
	struct FEOSConnectUnlinkAccountOptions
	{
	public:
		unsigned char                                              UnknownData_V6AK[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CBGC[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSConnectLinkAccountOptions
	 * Size -> 0x0030
	 */
	struct FEOSConnectLinkAccountOptions
	{
	public:
		unsigned char                                              UnknownData_6AXV[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4N16[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FContinuanceToken                                   ContinuanceToken;                                        // 0x0028(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSConnectCreateUserOptions
	 * Size -> 0x0008
	 */
	struct FEOSConnectCreateUserOptions
	{
	public:
		struct FContinuanceToken                                   ContinuanceToken;                                        // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSConnectCredentials
	 * Size -> 0x0018
	 */
	struct FEOSConnectCredentials
	{
	public:
		class FString                                              AccessToken;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSEExternalCredentialType                                Type;                                                    // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YPCV[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSConnectUserLoginInfo
	 * Size -> 0x0010
	 */
	struct FEOSConnectUserLoginInfo
	{
	public:
		class FString                                              DisplayName;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSConnectLoginOptions
	 * Size -> 0x0030
	 */
	struct FEOSConnectLoginOptions
	{
	public:
		unsigned char                                              UnknownData_VLQN[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSConnectCredentials                              credentials;                                             // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FEOSConnectUserLoginInfo                            UserLoginInfo;                                           // 0x0020(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatCommonVec3f
	 * Size -> 0x000C
	 */
	struct FEOSAntiCheatCommonVec3f
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Y;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Z;                                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatCommonQuat
	 * Size -> 0x0010
	 */
	struct FEOSAntiCheatCommonQuat
	{
	public:
		float                                                      W;                                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      X;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Y;                                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Z;                                                       // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatCommonLogPlayerUseWeaponData
	 * Size -> 0x0040
	 */
	struct FEOSAntiCheatCommonLogPlayerUseWeaponData
	{
	public:
		unsigned char                                              UnknownData_L0TZ[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSAntiCheatCommonClientHandle                     PlayerHandle;                                            // 0x0008(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FEOSAntiCheatCommonVec3f                            PlayerPosition;                                          // 0x0010(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FEOSAntiCheatCommonQuat                             PlayerViewRotation;                                      // 0x001C(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsPlayerViewZoomed;                                     // 0x002C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsMeleeAttack;                                          // 0x002D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LGHU[0x2];                                   // 0x002E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              WeaponName;                                              // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatCommonLogPlayerTakeDamageOptions
	 * Size -> 0x00B0
	 */
	struct FEOSAntiCheatCommonLogPlayerTakeDamageOptions
	{
	public:
		unsigned char                                              UnknownData_WGJZ[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSAntiCheatCommonClientHandle                     VictimPlayerHandle;                                      // 0x0008(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FEOSAntiCheatCommonVec3f                            VictimPlayerPosition;                                    // 0x0010(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FEOSAntiCheatCommonQuat                             VictimPlayerViewRotation;                                // 0x001C(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H66X[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSAntiCheatCommonClientHandle                     AttackerPlayerHandle;                                    // 0x0030(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FEOSAntiCheatCommonVec3f                            AttackerPlayerPosition;                                  // 0x0038(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FEOSAntiCheatCommonQuat                             AttackerPlayerViewRotation;                              // 0x0044(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsHitscanAttack;                                        // 0x0054(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasLineOfSight;                                         // 0x0055(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsCriticalHit;                                          // 0x0056(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5X0O[0x1];                                   // 0x0057(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DamageTaken;                                             // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HealthRemaining;                                         // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSEAntiCheatCommonPlayerTakeDamageSource                 DamageSource;                                            // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSEAntiCheatCommonPlayerTakeDamageType                   DamageType;                                              // 0x0061(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSEAntiCheatCommonPlayerTakeDamageResult                 DamageResult;                                            // 0x0062(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OFTY[0x5];                                   // 0x0063(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSAntiCheatCommonLogPlayerUseWeaponData           PlayerUseWeaponData;                                     // 0x0068(0x0040) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    TimeSincePlayerUseWeaponMs;                              // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SGWP[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatCommonLogPlayerUseAbilityOptions
	 * Size -> 0x0020
	 */
	struct FEOSAntiCheatCommonLogPlayerUseAbilityOptions
	{
	public:
		unsigned char                                              UnknownData_RXO2[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSAntiCheatCommonClientHandle                     PlayerHandle;                                            // 0x0008(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    AbilityId;                                               // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AbilityDurationMs;                                       // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AbilityCooldownMs;                                       // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8ST8[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatCommonLogPlayerUseWeaponOptions
	 * Size -> 0x0048
	 */
	struct FEOSAntiCheatCommonLogPlayerUseWeaponOptions
	{
	public:
		unsigned char                                              UnknownData_GO8A[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSAntiCheatCommonLogPlayerUseWeaponData           UseWeaponData;                                           // 0x0008(0x0040) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatCommonLogPlayerTickOptions
	 * Size -> 0x0038
	 */
	struct FEOSAntiCheatCommonLogPlayerTickOptions
	{
	public:
		unsigned char                                              UnknownData_OT8P[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSAntiCheatCommonClientHandle                     PlayerHandle;                                            // 0x0008(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FEOSAntiCheatCommonVec3f                            PlayerPosition;                                          // 0x0010(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FEOSAntiCheatCommonQuat                             PlayerViewRotation;                                      // 0x001C(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsPlayerViewZoomed;                                     // 0x002C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3RGW[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlayerHealth;                                            // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSEAntiCheatCommonPlayerMovementState                    PlayerMovementState;                                     // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VOCY[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatCommonLogPlayerReviveOptions
	 * Size -> 0x0018
	 */
	struct FEOSAntiCheatCommonLogPlayerReviveOptions
	{
	public:
		unsigned char                                              UnknownData_YC4L[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSAntiCheatCommonClientHandle                     RevivedPlayerHandle;                                     // 0x0008(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FEOSAntiCheatCommonClientHandle                     ReviverPlayerHandle;                                     // 0x0010(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatCommonLogPlayerDespawnOptions
	 * Size -> 0x0010
	 */
	struct FEOSAntiCheatCommonLogPlayerDespawnOptions
	{
	public:
		unsigned char                                              UnknownData_BN0S[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSAntiCheatCommonClientHandle                     DespawnedPlayerHandle;                                   // 0x0008(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatCommonLogPlayerSpawnOptions
	 * Size -> 0x0018
	 */
	struct FEOSAntiCheatCommonLogPlayerSpawnOptions
	{
	public:
		unsigned char                                              UnknownData_Q2UY[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSAntiCheatCommonClientHandle                     SpawnedPlayerHandle;                                     // 0x0008(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    TeamId;                                                  // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CharacterId;                                             // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatCommonLogGameRoundEndOptions
	 * Size -> 0x0008
	 */
	struct FEOSAntiCheatCommonLogGameRoundEndOptions
	{
	public:
		unsigned char                                              UnknownData_7XHD[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    WinningTeamId;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatCommonLogGameRoundStartOptions
	 * Size -> 0x0040
	 */
	struct FEOSAntiCheatCommonLogGameRoundStartOptions
	{
	public:
		unsigned char                                              UnknownData_SUOX[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SessionIdentifier;                                       // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LevelName;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ModeName;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RoundTimeSeconds;                                        // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IEZE[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatCommonLogEventParamPair
	 * Size -> 0x0018
	 */
	struct FEOSAntiCheatCommonLogEventParamPair
	{
	public:
		unsigned char                                              UnknownData_AAYM[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatCommonLogEventOptions
	 * Size -> 0x0028
	 */
	struct FEOSAntiCheatCommonLogEventOptions
	{
	public:
		unsigned char                                              UnknownData_4XOL[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSAntiCheatCommonClientHandle                     ClientHandle;                                            // 0x0008(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    eventId;                                                 // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_607W[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FEOSAntiCheatCommonLogEventParamPair>        Params;                                                  // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatCommonRegisterEventParamDef
	 * Size -> 0x0018
	 */
	struct FEOSAntiCheatCommonRegisterEventParamDef
	{
	public:
		class FString                                              ParamName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSEAntiCheatCommonEventParamType                         ParamType;                                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1IRE[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatCommonRegisterEventOptions
	 * Size -> 0x0030
	 */
	struct FEOSAntiCheatCommonRegisterEventOptions
	{
	public:
		unsigned char                                              UnknownData_U9O8[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    eventId;                                                 // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EventName;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSEAntiCheatCommonEventType                              EventType;                                               // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YIUG[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FEOSAntiCheatCommonRegisterEventParamDef>    ParamDefs;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatCommonSetGameSessionIdOptions
	 * Size -> 0x0018
	 */
	struct FEOSAntiCheatCommonSetGameSessionIdOptions
	{
	public:
		unsigned char                                              UnknownData_DH0Y[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              GameSessionId;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAntiCheatCommonSetClientDetailsOptions
	 * Size -> 0x0018
	 */
	struct FEOSAntiCheatCommonSetClientDetailsOptions
	{
	public:
		unsigned char                                              UnknownData_2BVC[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSAntiCheatCommonClientHandle                     ClientHandle;                                            // 0x0008(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		EEOSEAntiCheatCommonClientFlags                            ClientFlags;                                             // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSEAntiCheatCommonClientInput                            ClientInputMethod;                                       // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BXRP[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSCustomInvitesFinalizeInviteOptions
	 * Size -> 0x0060
	 */
	struct FEOSCustomInvitesFinalizeInviteOptions
	{
	public:
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0021(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HMQ2[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CustomInviteId;                                          // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOSResult                                                  ProcessingResult;                                        // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3GQ3[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSCustomInvitesAddNotifyCustomInviteRejectedOptions
	 * Size -> 0x0001
	 */
	struct FEOSCustomInvitesAddNotifyCustomInviteRejectedOptions
	{
	public:
		unsigned char                                              UnknownData_OLKM[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSCustomInvitesAddNotifyCustomInviteAcceptedOptions
	 * Size -> 0x0001
	 */
	struct FEOSCustomInvitesAddNotifyCustomInviteAcceptedOptions
	{
	public:
		unsigned char                                              UnknownData_0L7V[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSCustomInvitesAddNotifyCustomInviteReceivedOptions
	 * Size -> 0x0001
	 */
	struct FEOSCustomInvitesAddNotifyCustomInviteReceivedOptions
	{
	public:
		unsigned char                                              UnknownData_AN93[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSCustomInvitesSendCustomInviteOptions
	 * Size -> 0x0038
	 */
	struct FEOSCustomInvitesSendCustomInviteOptions
	{
	public:
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9PWJ[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FEOSProductUserId>                           TargetUserIds;                                           // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSCustomInvitesSetCustomInviteOptions
	 * Size -> 0x0038
	 */
	struct FEOSCustomInvitesSetCustomInviteOptions
	{
	public:
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OT16[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Payload;                                                 // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomTransactionCopyEntitlementByIndexOptions
	 * Size -> 0x0008
	 */
	struct FEOSEcomTransactionCopyEntitlementByIndexOptions
	{
	public:
		unsigned char                                              UnknownData_OPRM[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    EntitlementIndex;                                        // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomTransactionGetEntitlementsCountOptions
	 * Size -> 0x0028
	 */
	struct FEOSEcomTransactionGetEntitlementsCountOptions
	{
	public:
		unsigned char                                              UnknownData_CQ51[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6HKI[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomCopyTransactionByIdOptions
	 * Size -> 0x0038
	 */
	struct FEOSEcomCopyTransactionByIdOptions
	{
	public:
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1MTY[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TransactionId;                                           // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomCopyTransactionByIndexOptions
	 * Size -> 0x002C
	 */
	struct FEOSEcomCopyTransactionByIndexOptions
	{
	public:
		unsigned char                                              UnknownData_U4PX[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YJ8S[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TransactionIndex;                                        // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomGetTransactionCountOptions
	 * Size -> 0x0028
	 */
	struct FEOSEcomGetTransactionCountOptions
	{
	public:
		unsigned char                                              UnknownData_XQFL[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AB3H[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomCopyItemReleaseByIndexOptions
	 * Size -> 0x0040
	 */
	struct FEOSEcomCopyItemReleaseByIndexOptions
	{
	public:
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AQJJ[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ItemId;                                                  // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ReleaseIndex;                                            // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M96K[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomGetItemReleaseCountOptions
	 * Size -> 0x0038
	 */
	struct FEOSEcomGetItemReleaseCountOptions
	{
	public:
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_THP4[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ItemId;                                                  // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomCopyItemImageInfoByIndexOptions
	 * Size -> 0x0040
	 */
	struct FEOSEcomCopyItemImageInfoByIndexOptions
	{
	public:
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LQA4[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ItemId;                                                  // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ImageInfoIndex;                                          // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_51OB[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomGetItemImageInfoCountOptions
	 * Size -> 0x0038
	 */
	struct FEOSEcomGetItemImageInfoCountOptions
	{
	public:
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0K09[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ItemId;                                                  // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomCopyOfferImageInfoByIndexOptions
	 * Size -> 0x0040
	 */
	struct FEOSEcomCopyOfferImageInfoByIndexOptions
	{
	public:
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3HNG[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OfferId;                                                 // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ImageInfoIndex;                                          // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2OS0[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomGetOfferImageInfoCountOptions
	 * Size -> 0x0038
	 */
	struct FEOSEcomGetOfferImageInfoCountOptions
	{
	public:
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OBNB[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OfferId;                                                 // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomCopyItemByIdOptions
	 * Size -> 0x0038
	 */
	struct FEOSEcomCopyItemByIdOptions
	{
	public:
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1L0Q[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ItemId;                                                  // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomCopyOfferItemByIndexOptions
	 * Size -> 0x0040
	 */
	struct FEOSEcomCopyOfferItemByIndexOptions
	{
	public:
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LB5F[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OfferId;                                                 // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemIndex;                                               // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O9TG[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomGetOfferItemCountOptions
	 * Size -> 0x0038
	 */
	struct FEOSEcomGetOfferItemCountOptions
	{
	public:
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z3XT[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OfferId;                                                 // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomCopyOfferByIdOptions
	 * Size -> 0x0038
	 */
	struct FEOSEcomCopyOfferByIdOptions
	{
	public:
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TRUS[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OfferId;                                                 // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomCopyOfferByIndexOptions
	 * Size -> 0x002C
	 */
	struct FEOSEcomCopyOfferByIndexOptions
	{
	public:
		unsigned char                                              UnknownData_ZHSV[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SBIB[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    OfferIndex;                                              // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomGetOfferCountOptions
	 * Size -> 0x0028
	 */
	struct FEOSEcomGetOfferCountOptions
	{
	public:
		unsigned char                                              UnknownData_1MV7[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6WDC[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomEntitlementId
	 * Size -> 0x0010
	 */
	struct FEOSEcomEntitlementId
	{
	public:
		class FString                                              EntitlementId;                                           // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomCopyEntitlementByIdOptions
	 * Size -> 0x0038
	 */
	struct FEOSEcomCopyEntitlementByIdOptions
	{
	public:
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZG6U[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEcomEntitlementId                               EntitlementId;                                           // 0x0028(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomEntitlementName
	 * Size -> 0x0010
	 */
	struct FEOSEcomEntitlementName
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomCopyEntitlementByNameAndIndexOptions
	 * Size -> 0x0040
	 */
	struct FEOSEcomCopyEntitlementByNameAndIndexOptions
	{
	public:
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EHLH[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEcomEntitlementName                             EntitlementName;                                         // 0x0028(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    Index;                                                   // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G4JQ[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomCopyEntitlementByIndexOptions
	 * Size -> 0x002C
	 */
	struct FEOSEcomCopyEntitlementByIndexOptions
	{
	public:
		unsigned char                                              UnknownData_JP6W[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SYW7[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    EntitlementIndex;                                        // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomGetEntitlementsByNameCountOptions
	 * Size -> 0x0038
	 */
	struct FEOSEcomGetEntitlementsByNameCountOptions
	{
	public:
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QK2Y[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEcomEntitlementName                             EntitlementName;                                         // 0x0028(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomGetEntitlementsCountOptions
	 * Size -> 0x0028
	 */
	struct FEOSEcomGetEntitlementsCountOptions
	{
	public:
		unsigned char                                              UnknownData_0V1Z[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_48CV[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomRedeemEntitlementsOptions
	 * Size -> 0x0038
	 */
	struct FEOSEcomRedeemEntitlementsOptions
	{
	public:
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_17EU[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FEOSEcomEntitlementId>                       EntitlementIds;                                          // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomCheckoutEntry
	 * Size -> 0x0018
	 */
	struct FEOSEcomCheckoutEntry
	{
	public:
		unsigned char                                              UnknownData_ZDV0[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OfferId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomCheckoutOptions
	 * Size -> 0x0048
	 */
	struct FEOSEcomCheckoutOptions
	{
	public:
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4CQN[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OverrideCatalogNamespace;                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FEOSEcomCheckoutEntry>                       Entries;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomQueryOffersOptions
	 * Size -> 0x0038
	 */
	struct FEOSEcomQueryOffersOptions
	{
	public:
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FYJI[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OverrideCatalogNamespace;                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomQueryEntitlementsOptions
	 * Size -> 0x0040
	 */
	struct FEOSEcomQueryEntitlementsOptions
	{
	public:
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A6UL[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FEOSEcomEntitlementName>                     EntitlementNames;                                        // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIncludeRedeemed;                                        // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H0WU[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomQueryOwnershipTokenOptions
	 * Size -> 0x0050
	 */
	struct FEOSEcomQueryOwnershipTokenOptions
	{
	public:
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_773J[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      CatalogItemIds;                                          // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ARJ1[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CatalogNamespace;                                        // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomQueryOwnershipOptions
	 * Size -> 0x0048
	 */
	struct FEOSEcomQueryOwnershipOptions
	{
	public:
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YTYB[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      CatalogItemIds;                                          // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              CatalogNamespace;                                        // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomCatalogRelease
	 * Size -> 0x0040
	 */
	struct FEOSEcomCatalogRelease
	{
	public:
		unsigned char                                              UnknownData_Q19G[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      CompatibleAppIds;                                        // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E54B[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      CompatiblePlatforms;                                     // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              ReleaseNote;                                             // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomKeyImageInfo
	 * Size -> 0x0030
	 */
	struct FEOSEcomKeyImageInfo
	{
	public:
		unsigned char                                              UnknownData_Q82Y[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Type;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              URL;                                                     // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Width;                                                   // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Height;                                                  // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomCatalogOffer
	 * Size -> 0x00B8
	 */
	struct FEOSEcomCatalogOffer
	{
	public:
		unsigned char                                              UnknownData_5MMT[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ServerIndex;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CatalogNamespace;                                        // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ID;                                                      // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TitleText;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DescriptionText;                                         // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LongDescriptionText;                                     // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TechnicalDetailsText;                                    // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CurrencyCode;                                            // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOSResult                                                  PriceResult;                                             // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HCKW[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    OriginalPrice;                                           // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    CurrentPrice;                                            // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DiscountPercentage;                                      // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UD3Z[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ExpirationTimestamp;                                     // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PurchasedCount;                                          // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PurchaseLimit;                                           // 0x00AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAvailableForPurchase;                                   // 0x00B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JZF2[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomCatalogItem
	 * Size -> 0x00A0
	 */
	struct FEOSEcomCatalogItem
	{
	public:
		unsigned char                                              UnknownData_8I5A[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CatalogNamespace;                                        // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ID;                                                      // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEcomEntitlementName                             EntitlementName;                                         // 0x0028(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              TitleText;                                               // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DescriptionText;                                         // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LongDescriptionText;                                     // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TechnicalDetailsText;                                    // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DeveloperText;                                           // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSEEcomItemType                                          ItemType;                                                // 0x0088(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WB14[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              EntitlementEndTimestamp;                                 // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomEntitlement
	 * Size -> 0x0050
	 */
	struct FEOSEcomEntitlement
	{
	public:
		unsigned char                                              UnknownData_CDEI[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEcomEntitlementName                             EntitlementName;                                         // 0x0008(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FEOSEcomEntitlementId                               EntitlementId;                                           // 0x0018(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              CatalogItemId;                                           // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ServerIndex;                                             // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRedeemed;                                               // 0x003C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J3DV[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              EndTimestamp;                                            // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSEcomHTransaction
	 * Size -> 0x0008
	 */
	struct FEOSEcomHTransaction
	{
	public:
		unsigned char                                              UnknownData_O5IH[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSFriendsAddNotifyFriendsUpdateOptions
	 * Size -> 0x0004
	 */
	struct FEOSFriendsAddNotifyFriendsUpdateOptions
	{
	public:
		unsigned char                                              UnknownData_SV4Y[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSFriendsGetStatusOptions
	 * Size -> 0x0048
	 */
	struct FEOSFriendsGetStatusOptions
	{
	public:
		unsigned char                                              UnknownData_ZWBR[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   TargetUserId;                                            // 0x0025(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8GSY[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSFriendsGetFriendAtIndexOptions
	 * Size -> 0x002C
	 */
	struct FEOSFriendsGetFriendAtIndexOptions
	{
	public:
		unsigned char                                              UnknownData_KH62[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WZJ1[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Index;                                                   // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSFriendsGetFriendsCountOptions
	 * Size -> 0x0028
	 */
	struct FEOSFriendsGetFriendsCountOptions
	{
	public:
		unsigned char                                              UnknownData_CMV5[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PRCG[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSFriendsDeleteFriendOptions
	 * Size -> 0x0048
	 */
	struct FEOSFriendsDeleteFriendOptions
	{
	public:
		unsigned char                                              UnknownData_CNB6[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   TargetUserId;                                            // 0x0025(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5IMO[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSFriendsRejectInviteOptions
	 * Size -> 0x0048
	 */
	struct FEOSFriendsRejectInviteOptions
	{
	public:
		unsigned char                                              UnknownData_3XY7[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   TargetUserId;                                            // 0x0025(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RK60[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSFriendsAcceptInviteOptions
	 * Size -> 0x0048
	 */
	struct FEOSFriendsAcceptInviteOptions
	{
	public:
		unsigned char                                              UnknownData_KFKP[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   TargetUserId;                                            // 0x0025(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U8K4[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSFriendsSendInviteOptions
	 * Size -> 0x0048
	 */
	struct FEOSFriendsSendInviteOptions
	{
	public:
		unsigned char                                              UnknownData_8X1R[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   TargetUserId;                                            // 0x0025(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0IVR[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSFriendsQueryFriendsOptions
	 * Size -> 0x0028
	 */
	struct FEOSFriendsQueryFriendsOptions
	{
	public:
		unsigned char                                              UnknownData_ZOCS[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UWVP[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLeaderboardsCopyLeaderboardRecordByUserIdOptions
	 * Size -> 0x0028
	 */
	struct FEOSLeaderboardsCopyLeaderboardRecordByUserIdOptions
	{
	public:
		unsigned char                                              UnknownData_YXS5[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   userId;                                                  // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NFR4[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLeaderboardsCopyLeaderboardRecordByIndexOptions
	 * Size -> 0x0008
	 */
	struct FEOSLeaderboardsCopyLeaderboardRecordByIndexOptions
	{
	public:
		unsigned char                                              UnknownData_9GM8[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LeaderboardRecordIndex;                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLeaderboardsGetLeaderboardRecordCountOptions
	 * Size -> 0x0004
	 */
	struct FEOSLeaderboardsGetLeaderboardRecordCountOptions
	{
	public:
		unsigned char                                              UnknownData_K7HT[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLeaderboardsLeaderboardRecord
	 * Size -> 0x0040
	 */
	struct FEOSLeaderboardsLeaderboardRecord
	{
	public:
		unsigned char                                              UnknownData_AQZF[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   userId;                                                  // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LLV2[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    rank;                                                    // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    score;                                                   // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UserDisplayName;                                         // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLeaderboardsQueryLeaderboardRanksOptions
	 * Size -> 0x0040
	 */
	struct FEOSLeaderboardsQueryLeaderboardRanksOptions
	{
	public:
		unsigned char                                              UnknownData_J87V[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LeaderboardId;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0018(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5QON[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLeaderboardsCopyLeaderboardUserScoreByUserIdOptions
	 * Size -> 0x0038
	 */
	struct FEOSLeaderboardsCopyLeaderboardUserScoreByUserIdOptions
	{
	public:
		unsigned char                                              UnknownData_DBUG[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   userId;                                                  // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VELS[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StatName;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLeaderboardsCopyLeaderboardUserScoreByIndexOptions
	 * Size -> 0x0018
	 */
	struct FEOSLeaderboardsCopyLeaderboardUserScoreByIndexOptions
	{
	public:
		unsigned char                                              UnknownData_OYFI[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LeaderboardUserScoreIndex;                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StatName;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLeaderboardsGetLeaderboardUserScoreCountOptions
	 * Size -> 0x0018
	 */
	struct FEOSLeaderboardsGetLeaderboardUserScoreCountOptions
	{
	public:
		unsigned char                                              UnknownData_0L6Q[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StatName;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLeaderboardsLeaderboardUserScore
	 * Size -> 0x002C
	 */
	struct FEOSLeaderboardsLeaderboardUserScore
	{
	public:
		unsigned char                                              UnknownData_BT8J[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   userId;                                                  // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WNUL[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    score;                                                   // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLeaderboardsUserScoresQueryStatInfo
	 * Size -> 0x0020
	 */
	struct FEOSLeaderboardsUserScoresQueryStatInfo
	{
	public:
		unsigned char                                              UnknownData_7AYT[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StatName;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSELeaderboardAggregation                                Aggregation;                                             // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9MAC[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLeaderboardsQueryLeaderboardUserScoresOptions
	 * Size -> 0x0070
	 */
	struct FEOSLeaderboardsQueryLeaderboardUserScoresOptions
	{
	public:
		unsigned char                                              UnknownData_Q0IQ[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FEOSProductUserId>                           UserIds;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FEOSLeaderboardsUserScoresQueryStatInfo>     StatInfo;                                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              startTime;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              endTime;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0048(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JG0O[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardIdOptions
	 * Size -> 0x0018
	 */
	struct FEOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardIdOptions
	{
	public:
		unsigned char                                              UnknownData_4FJI[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LeaderboardId;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLeaderboardsCopyLeaderboardDefinitionByIndexOptions
	 * Size -> 0x0008
	 */
	struct FEOSLeaderboardsCopyLeaderboardDefinitionByIndexOptions
	{
	public:
		unsigned char                                              UnknownData_73OC[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LeaderboardIndex;                                        // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLeaderboardsGetLeaderboardDefinitionCountOptions
	 * Size -> 0x0004
	 */
	struct FEOSLeaderboardsGetLeaderboardDefinitionCountOptions
	{
	public:
		unsigned char                                              UnknownData_39RN[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLeaderboardsDefinition
	 * Size -> 0x0050
	 */
	struct FEOSLeaderboardsDefinition
	{
	public:
		unsigned char                                              UnknownData_S6GI[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LeaderboardId;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StatName;                                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSELeaderboardAggregation                                Aggregation;                                             // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L5G0[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              startTime;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              endTime;                                                 // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLeaderboardsQueryLeaderboardDefinitionsOptions
	 * Size -> 0x0050
	 */
	struct FEOSLeaderboardsQueryLeaderboardDefinitionsOptions
	{
	public:
		unsigned char                                              UnknownData_SVSU[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              startTime;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              endTime;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0028(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HE8Z[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSHLobbySearch
	 * Size -> 0x0008
	 */
	struct FEOSHLobbySearch
	{
	public:
		unsigned char                                              UnknownData_VQY5[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbySearchCopySearchResultByIndexOptions
	 * Size -> 0x0008
	 */
	struct FEOSLobbySearchCopySearchResultByIndexOptions
	{
	public:
		unsigned char                                              UnknownData_3AHX[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LobbyIndex;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbySearchGetSearchResultCountOptions
	 * Size -> 0x0004
	 */
	struct FEOSLobbySearchGetSearchResultCountOptions
	{
	public:
		unsigned char                                              UnknownData_06CD[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbySearchSetMaxResultsOptions
	 * Size -> 0x0008
	 */
	struct FEOSLobbySearchSetMaxResultsOptions
	{
	public:
		unsigned char                                              UnknownData_FC8U[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    maxResults;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbySearchRemoveParameterOptions
	 * Size -> 0x0020
	 */
	struct FEOSLobbySearchRemoveParameterOptions
	{
	public:
		unsigned char                                              UnknownData_V8G4[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Key;                                                     // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSEComparisonOp                                          ComparisonOp;                                            // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0G3G[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyAttributeData
	 * Size -> 0x0028
	 */
	struct FEOSLobbyAttributeData
	{
	public:
		unsigned char                                              UnknownData_OAKS[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbySearchSetParameterOptions
	 * Size -> 0x0038
	 */
	struct FEOSLobbySearchSetParameterOptions
	{
	public:
		unsigned char                                              UnknownData_6WM8[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSLobbyAttributeData                              Parameter;                                               // 0x0008(0x0028) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		EEOSEComparisonOp                                          ComparisonOp;                                            // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SRI0[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbySearchSetTargetUserIdOptions
	 * Size -> 0x0028
	 */
	struct FEOSLobbySearchSetTargetUserIdOptions
	{
	public:
		unsigned char                                              UnknownData_I0TT[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8DU8[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbySearchSetLobbyIdOptions
	 * Size -> 0x0010
	 */
	struct FEOSLobbySearchSetLobbyIdOptions
	{
	public:
		class FString                                              LobbyId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbySearchFindOptions
	 * Size -> 0x0028
	 */
	struct FEOSLobbySearchFindOptions
	{
	public:
		unsigned char                                              UnknownData_1MC1[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LRCZ[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyDetailsGetMemberByIndexOptions
	 * Size -> 0x0008
	 */
	struct FEOSLobbyDetailsGetMemberByIndexOptions
	{
	public:
		unsigned char                                              UnknownData_1ZSH[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MemberIndex;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyDetailsGetMemberCountOptions
	 * Size -> 0x0004
	 */
	struct FEOSLobbyDetailsGetMemberCountOptions
	{
	public:
		unsigned char                                              UnknownData_8CCJ[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyDetailsCopyMemberAttributeByKeyOptions
	 * Size -> 0x0038
	 */
	struct FEOSLobbyDetailsCopyMemberAttributeByKeyOptions
	{
	public:
		unsigned char                                              UnknownData_W99U[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FZ1Q[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AttrKey;                                                 // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyDetailsCopyMemberAttributeByIndexOptions
	 * Size -> 0x002C
	 */
	struct FEOSLobbyDetailsCopyMemberAttributeByIndexOptions
	{
	public:
		unsigned char                                              UnknownData_AKOJ[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GKLU[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AttrIndex;                                               // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyDetailsGetMemberAttributeCountOptions
	 * Size -> 0x0028
	 */
	struct FEOSLobbyDetailsGetMemberAttributeCountOptions
	{
	public:
		unsigned char                                              UnknownData_LTBB[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4BKA[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyDetailsCopyAttributeByKeyOptions
	 * Size -> 0x0018
	 */
	struct FEOSLobbyDetailsCopyAttributeByKeyOptions
	{
	public:
		unsigned char                                              UnknownData_80G9[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AttrKey;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyDetailsCopyAttributeByIndexOptions
	 * Size -> 0x0008
	 */
	struct FEOSLobbyDetailsCopyAttributeByIndexOptions
	{
	public:
		unsigned char                                              UnknownData_6VJ2[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AttrIndex;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyDetailsGetAttributeCountOptions
	 * Size -> 0x0004
	 */
	struct FEOSLobbyDetailsGetAttributeCountOptions
	{
	public:
		unsigned char                                              UnknownData_TMLQ[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyDetailsCopyInfoOptions
	 * Size -> 0x0004
	 */
	struct FEOSLobbyDetailsCopyInfoOptions
	{
	public:
		unsigned char                                              UnknownData_F32V[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyDetailsGetLobbyOwnerOptions
	 * Size -> 0x0004
	 */
	struct FEOSLobbyDetailsGetLobbyOwnerOptions
	{
	public:
		unsigned char                                              UnknownData_WRRD[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyModificationRemoveMemberAttributeOptions
	 * Size -> 0x0018
	 */
	struct FEOSLobbyModificationRemoveMemberAttributeOptions
	{
	public:
		unsigned char                                              UnknownData_I2EZ[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Key;                                                     // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyModificationAddMemberAttributeOptions
	 * Size -> 0x0038
	 */
	struct FEOSLobbyModificationAddMemberAttributeOptions
	{
	public:
		unsigned char                                              UnknownData_O2M5[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSLobbyAttributeData                              Attribute;                                               // 0x0008(0x0028) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		EEOSELobbyAttributeVisibility                              Visibility;                                              // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FH06[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyModificationRemoveAttributeOptions
	 * Size -> 0x0018
	 */
	struct FEOSLobbyModificationRemoveAttributeOptions
	{
	public:
		unsigned char                                              UnknownData_ED7R[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Key;                                                     // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyModificationAddAttributeOptions
	 * Size -> 0x0038
	 */
	struct FEOSLobbyModificationAddAttributeOptions
	{
	public:
		unsigned char                                              UnknownData_5HCY[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSLobbyAttributeData                              Attribute;                                               // 0x0008(0x0028) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		EEOSELobbyAttributeVisibility                              Visibility;                                              // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LF2Z[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyModificationSetInvitesAllowedOptions
	 * Size -> 0x0008
	 */
	struct FEOSLobbyModificationSetInvitesAllowedOptions
	{
	public:
		unsigned char                                              UnknownData_4O5P[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bInvitesAllowed;                                         // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6BSU[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyModificationSetMaxMembersOptions
	 * Size -> 0x0008
	 */
	struct FEOSLobbyModificationSetMaxMembersOptions
	{
	public:
		unsigned char                                              UnknownData_IB6A[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxMembers;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyModificationSetPermissionLevelOptions
	 * Size -> 0x0008
	 */
	struct FEOSLobbyModificationSetPermissionLevelOptions
	{
	public:
		unsigned char                                              UnknownData_8HWC[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EEOSELobbyPermissionLevel                                  PermissionLevel;                                         // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JHGG[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyAttribute
	 * Size -> 0x0038
	 */
	struct FEOSLobbyAttribute
	{
	public:
		unsigned char                                              UnknownData_07ZV[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSLobbyAttributeData                              Data;                                                    // 0x0008(0x0028) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		EEOSELobbyAttributeVisibility                              Visbility;                                               // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DSYC[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyModificationSetBucketIdOptions
	 * Size -> 0x0018
	 */
	struct FEOSLobbyModificationSetBucketIdOptions
	{
	public:
		unsigned char                                              UnknownData_L984[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BucketId;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyCopyLobbyDetailsHandleOptions
	 * Size -> 0x0038
	 */
	struct FEOSLobbyCopyLobbyDetailsHandleOptions
	{
	public:
		class FString                                              LobbyId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O8RL[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyGetInviteIdByIndexOptions
	 * Size -> 0x002C
	 */
	struct FEOSLobbyGetInviteIdByIndexOptions
	{
	public:
		unsigned char                                              UnknownData_2BVC[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UMAA[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Index;                                                   // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyGetInviteCountOptions
	 * Size -> 0x0028
	 */
	struct FEOSLobbyGetInviteCountOptions
	{
	public:
		unsigned char                                              UnknownData_80JM[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AAHC[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyQueryInvitesOptions
	 * Size -> 0x0028
	 */
	struct FEOSLobbyQueryInvitesOptions
	{
	public:
		unsigned char                                              UnknownData_7F1A[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9EWJ[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyRejectInviteOptions
	 * Size -> 0x0040
	 */
	struct FEOSLobbyRejectInviteOptions
	{
	public:
		unsigned char                                              UnknownData_BH65[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              InviteId;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0018(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VFRV[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbySendInviteOptions
	 * Size -> 0x0058
	 */
	struct FEOSLobbySendInviteOptions
	{
	public:
		class FString                                              LobbyId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0031(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AV00[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyCreateLobbySearchOptions
	 * Size -> 0x0008
	 */
	struct FEOSLobbyCreateLobbySearchOptions
	{
	public:
		unsigned char                                              UnknownData_MUGS[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    maxResults;                                              // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyAddNotifyRTCRoomConnectionChangedOptions
	 * Size -> 0x0038
	 */
	struct FEOSLobbyAddNotifyRTCRoomConnectionChangedOptions
	{
	public:
		unsigned char                                              UnknownData_VKHL[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyAddNotifySendLobbyNativeInviteRequestedOptions
	 * Size -> 0x0001
	 */
	struct FEOSLobbyAddNotifySendLobbyNativeInviteRequestedOptions
	{
	public:
		unsigned char                                              UnknownData_7R0T[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyIsRTCRoomConnectedOptions
	 * Size -> 0x0038
	 */
	struct FEOSLobbyIsRTCRoomConnectedOptions
	{
	public:
		class FString                                              LobbyId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P0XH[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyGetRTCRoomNameOptions
	 * Size -> 0x0038
	 */
	struct FEOSLobbyGetRTCRoomNameOptions
	{
	public:
		class FString                                              LobbyId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q8PK[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyCopyLobbyDetailsHandleByUiEventIdOptions
	 * Size -> 0x0008
	 */
	struct FEOSLobbyCopyLobbyDetailsHandleByUiEventIdOptions
	{
	public:
		struct FEOSUIEventId                                       UiEventId;                                               // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyCopyLobbyDetailsHandleByInviteIdOptions
	 * Size -> 0x0018
	 */
	struct FEOSLobbyCopyLobbyDetailsHandleByInviteIdOptions
	{
	public:
		unsigned char                                              UnknownData_U1ZX[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              InviteId;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyAddNotifyJoinLobbyAcceptedOptions
	 * Size -> 0x0004
	 */
	struct FEOSLobbyAddNotifyJoinLobbyAcceptedOptions
	{
	public:
		unsigned char                                              UnknownData_ADJA[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyAddNotifyLobbyInviteRejectedOptions
	 * Size -> 0x0001
	 */
	struct FEOSLobbyAddNotifyLobbyInviteRejectedOptions
	{
	public:
		unsigned char                                              UnknownData_VNY8[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyAddNotifyLobbyInviteAcceptedOptions
	 * Size -> 0x0001
	 */
	struct FEOSLobbyAddNotifyLobbyInviteAcceptedOptions
	{
	public:
		unsigned char                                              UnknownData_YGEZ[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyHardMuteMemberOptions
	 * Size -> 0x0058
	 */
	struct FEOSLobbyHardMuteMemberOptions
	{
	public:
		class FString                                              LobbyId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0031(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHardMute;                                               // 0x0052(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FAR1[0x5];                                   // 0x0053(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyAddNotifyLobbyInviteReceivedOptions
	 * Size -> 0x0010
	 */
	struct FEOSLobbyAddNotifyLobbyInviteReceivedOptions
	{
	public:
		unsigned char                                              UnknownData_TY5A[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyAddNotifyLobbyMemberStatusReceivedOptions
	 * Size -> 0x0010
	 */
	struct FEOSLobbyAddNotifyLobbyMemberStatusReceivedOptions
	{
	public:
		unsigned char                                              UnknownData_G5KQ[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyAddNotifyLobbyMemberUpdateReceivedOptions
	 * Size -> 0x0010
	 */
	struct FEOSLobbyAddNotifyLobbyMemberUpdateReceivedOptions
	{
	public:
		unsigned char                                              UnknownData_U1IT[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyAddNotifyLobbyUpdateReceivedOptions
	 * Size -> 0x0010
	 */
	struct FEOSLobbyAddNotifyLobbyUpdateReceivedOptions
	{
	public:
		unsigned char                                              UnknownData_ACEB[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyKickMemberOptions
	 * Size -> 0x0058
	 */
	struct FEOSLobbyKickMemberOptions
	{
	public:
		class FString                                              LobbyId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0031(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VY50[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyPromoteMemberOptions
	 * Size -> 0x0058
	 */
	struct FEOSLobbyPromoteMemberOptions
	{
	public:
		class FString                                              LobbyId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0031(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PHOW[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSHLobbyModification
	 * Size -> 0x0008
	 */
	struct FEOSHLobbyModification
	{
	public:
		unsigned char                                              UnknownData_XDR0[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyUpdateLobbyOptions
	 * Size -> 0x0010
	 */
	struct FEOSLobbyUpdateLobbyOptions
	{
	public:
		unsigned char                                              UnknownData_7YPT[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSHLobbyModification                              LobbyModificationHandle;                                 // 0x0008(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyUpdateLobbyModificationOptions
	 * Size -> 0x0038
	 */
	struct FEOSLobbyUpdateLobbyModificationOptions
	{
	public:
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3TDD[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LobbyId;                                                 // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyLeaveLobbyOptions
	 * Size -> 0x0038
	 */
	struct FEOSLobbyLeaveLobbyOptions
	{
	public:
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S0G7[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LobbyId;                                                 // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyLocalRTCOptions
	 * Size -> 0x0008
	 */
	struct FEOSLobbyLocalRTCOptions
	{
	public:
		int32_t                                                    Flags;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseManualAudioInput;                                    // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseManualAudioOutput;                                   // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLocalAudioDeviceInputStartsMuted;                       // 0x0006(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YZUM[0x1];                                   // 0x0007(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyJoinLobbyByIdOptions
	 * Size -> 0x0040
	 */
	struct FEOSLobbyJoinLobbyByIdOptions
	{
	public:
		class FString                                              LobbyId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPresenceEnabled;                                        // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U7NC[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSLobbyLocalRTCOptions                            LocalRTCOptions;                                         // 0x0034(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2HC6[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyJoinLobbyOptions
	 * Size -> 0x0038
	 */
	struct FEOSLobbyJoinLobbyOptions
	{
	public:
		struct FEOSHLobbyDetails                                   LobbyDetailsHandle;                                      // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0008(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPresenceEnabled;                                        // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HSEF[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSLobbyLocalRTCOptions                            LocalRTCOptions;                                         // 0x002C(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YPHC[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyDestroyLobbyOptions
	 * Size -> 0x0038
	 */
	struct FEOSLobbyDestroyLobbyOptions
	{
	public:
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9VYV[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LobbyId;                                                 // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyCreateLobbyOptions
	 * Size -> 0x0068
	 */
	struct FEOSLobbyCreateLobbyOptions
	{
	public:
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_64HP[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxLobbyMembers;                                         // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSELobbyPermissionLevel                                  PermissionLevel;                                         // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPresenceEnabled;                                        // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowInvites;                                           // 0x002A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H70F[0x5];                                   // 0x002B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BucketId;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableHostMigration;                                   // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableRTCRoom;                                          // 0x0041(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W6BT[0x2];                                   // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSLobbyLocalRTCOptions                            LocalRTCOptions;                                         // 0x0044(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XFX6[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LobbyId;                                                 // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableJoinById;                                         // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRejoinAfterKickRequiresInvite;                          // 0x0061(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1ZSZ[0x6];                                   // 0x0062(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSLobbyDetailsInfo
	 * Size -> 0x0058
	 */
	struct FEOSLobbyDetailsInfo
	{
	public:
		class FString                                              LobbyId;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   LobbyOwnerUserId;                                        // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSELobbyPermissionLevel                                  PermissionLevel;                                         // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2QTR[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AvailableSlots;                                          // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxMembers;                                              // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowInvites;                                           // 0x003C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WKC5[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BucketId;                                                // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowHostMigration;                                     // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRTCRoomEnabled;                                         // 0x0051(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowJoinById;                                          // 0x0052(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRejoinAfterKickRequiresInvite;                          // 0x0053(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UHYH[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSMetricsEndPlayerSessionOptions
	 * Size -> 0x0038
	 */
	struct FEOSMetricsEndPlayerSessionOptions
	{
	public:
		unsigned char                                              UnknownData_KN5O[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EEOSEMetricsAccountIdType                                  AccountIdType;                                           // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   Epic;                                                    // 0x0005(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D52Y[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              External;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSMetricsBeginPlayerSessionOptions
	 * Size -> 0x0070
	 */
	struct FEOSMetricsBeginPlayerSessionOptions
	{
	public:
		unsigned char                                              UnknownData_ICF6[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EEOSEMetricsAccountIdType                                  AccountIdType;                                           // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   Epic;                                                    // 0x0005(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G52W[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              External;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisplayName;                                             // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSEUserControllerType                                    ControllerType;                                          // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_COVI[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ServerIp;                                                // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameSessionId;                                           // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSModsUpdateModOptions
	 * Size -> 0x0080
	 */
	struct FEOSModsUpdateModOptions
	{
	public:
		unsigned char                                              UnknownData_1F9U[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KENA[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSModIdentifier                                   Mod;                                                     // 0x0028(0x0058) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSModsModInfo
	 * Size -> 0x0020
	 */
	struct FEOSModsModInfo
	{
	public:
		unsigned char                                              UnknownData_0BUH[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FEOSModIdentifier>                           Mods;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EEOSEModEnumerationType                                    Type;                                                    // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GCKV[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSModsCopyModInfoOptions
	 * Size -> 0x0028
	 */
	struct FEOSModsCopyModInfoOptions
	{
	public:
		unsigned char                                              UnknownData_O1SZ[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSEModEnumerationType                                    Type;                                                    // 0x0025(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1NHS[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSModsEnumerateModsOptions
	 * Size -> 0x0028
	 */
	struct FEOSModsEnumerateModsOptions
	{
	public:
		unsigned char                                              UnknownData_39F7[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSEModEnumerationType                                    Type;                                                    // 0x0025(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A1PM[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSModsUninstallModOptions
	 * Size -> 0x0080
	 */
	struct FEOSModsUninstallModOptions
	{
	public:
		unsigned char                                              UnknownData_SBZ1[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C1HX[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSModIdentifier                                   Mod;                                                     // 0x0028(0x0058) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSModsInstallModOptions
	 * Size -> 0x0088
	 */
	struct FEOSModsInstallModOptions
	{
	public:
		unsigned char                                              UnknownData_JVHT[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_923L[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSModIdentifier                                   Mod;                                                     // 0x0028(0x0058) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bRemoveAfterExit;                                        // 0x0080(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TJ37[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSP2PAddNotifyIncomingPacketQueueFullOptions
	 * Size -> 0x0004
	 */
	struct FEOSP2PAddNotifyIncomingPacketQueueFullOptions
	{
	public:
		unsigned char                                              UnknownData_9Q4A[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSP2PPacketQueueInfo
	 * Size -> 0x0060
	 */
	struct FEOSP2PPacketQueueInfo
	{
	public:
		class FString                                              IncomingPacketQueueMaxSizeBytes;                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IncomingPacketQueueCurrentSizeBytes;                     // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IncomingPacketQueueCurrentPacketCount;                   // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OutgoingPacketQueueMaxSizeBytes;                         // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OutgoingPacketQueueCurrentSizeBytes;                     // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OutgoingPacketQueueCurrentPacketCount;                   // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSP2PGetPacketQueueInfoOptions
	 * Size -> 0x0004
	 */
	struct FEOSP2PGetPacketQueueInfoOptions
	{
	public:
		unsigned char                                              UnknownData_QC7J[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSP2PSetPacketQueueSizeOptions
	 * Size -> 0x0028
	 */
	struct FEOSP2PSetPacketQueueSizeOptions
	{
	public:
		unsigned char                                              UnknownData_ITMZ[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              IncomingPacketQueueMaxSizeBytes;                         // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OutgoingPacketQueueMaxSizeBytes;                         // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSP2PGetPortRangeOptions
	 * Size -> 0x0004
	 */
	struct FEOSP2PGetPortRangeOptions
	{
	public:
		unsigned char                                              UnknownData_H4ER[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSP2PSetPortRangeOptions
	 * Size -> 0x000C
	 */
	struct FEOSP2PSetPortRangeOptions
	{
	public:
		unsigned char                                              UnknownData_MLMB[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Port;                                                    // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxAdditionalPortsToTry;                                 // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSP2PGetRelayControlOptions
	 * Size -> 0x0004
	 */
	struct FEOSP2PGetRelayControlOptions
	{
	public:
		unsigned char                                              UnknownData_SL50[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSP2PSetRelayControlOptions
	 * Size -> 0x0008
	 */
	struct FEOSP2PSetRelayControlOptions
	{
	public:
		unsigned char                                              UnknownData_9ZY9[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EEOSERelayControl                                          RelayControl;                                            // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MTBT[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSP2PGetNATTypeOptions
	 * Size -> 0x0004
	 */
	struct FEOSP2PGetNATTypeOptions
	{
	public:
		unsigned char                                              UnknownData_FHKO[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSP2PQueryNATTypeOptions
	 * Size -> 0x0004
	 */
	struct FEOSP2PQueryNATTypeOptions
	{
	public:
		unsigned char                                              UnknownData_QV9A[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSP2PCloseConnectionsOptions
	 * Size -> 0x0040
	 */
	struct FEOSP2PCloseConnectionsOptions
	{
	public:
		unsigned char                                              UnknownData_0JGD[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GVH5[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSP2PSocketId                                     SocketId;                                                // 0x0028(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSP2PCloseConnectionOptions
	 * Size -> 0x0060
	 */
	struct FEOSP2PCloseConnectionOptions
	{
	public:
		unsigned char                                              UnknownData_AI36[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   RemoteUserId;                                            // 0x0025(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WXY9[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSP2PSocketId                                     SocketId;                                                // 0x0048(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSP2PAcceptConnectionOptions
	 * Size -> 0x0060
	 */
	struct FEOSP2PAcceptConnectionOptions
	{
	public:
		unsigned char                                              UnknownData_UXO9[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   RemoteUserId;                                            // 0x0025(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RBA7[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSP2PSocketId                                     SocketId;                                                // 0x0048(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSP2PAddNotifyPeerConnectionClosedOptions
	 * Size -> 0x0040
	 */
	struct FEOSP2PAddNotifyPeerConnectionClosedOptions
	{
	public:
		unsigned char                                              UnknownData_0ZBY[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JXQB[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSP2PSocketId                                     SocketId;                                                // 0x0028(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSP2PAddNotifyPeerConnectionRequestOptions
	 * Size -> 0x0040
	 */
	struct FEOSP2PAddNotifyPeerConnectionRequestOptions
	{
	public:
		unsigned char                                              UnknownData_PQR8[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WASH[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSP2PSocketId                                     SocketId;                                                // 0x0028(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSP2PReceivePacketOptions
	 * Size -> 0x0030
	 */
	struct FEOSP2PReceivePacketOptions
	{
	public:
		unsigned char                                              UnknownData_92IU[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_38IP[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxDataSizeBytes;                                        // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RequestedChannel;                                        // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSP2PGetNextReceivedPacketSizeOptions
	 * Size -> 0x002C
	 */
	struct FEOSP2PGetNextReceivedPacketSizeOptions
	{
	public:
		unsigned char                                              UnknownData_LVMG[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2XFA[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RequestedChannel;                                        // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSP2PSendPacketOptions
	 * Size -> 0x0080
	 */
	struct FEOSP2PSendPacketOptions
	{
	public:
		unsigned char                                              UnknownData_17YW[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   RemoteUserId;                                            // 0x0025(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QBAK[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSP2PSocketId                                     SocketId;                                                // 0x0048(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    Channel;                                                 // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O4H4[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      Data;                                                    // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bAllowDelayedDelivery;                                   // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSEPacketReliability                                     Reliability;                                             // 0x0079(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PPDM[0x6];                                   // 0x007A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSPlayerDataStorageDeleteCacheOptions
	 * Size -> 0x0028
	 */
	struct FEOSPlayerDataStorageDeleteCacheOptions
	{
	public:
		unsigned char                                              UnknownData_F7N7[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LC3W[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSPlayerDataStorageWriteFileOptions
	 * Size -> 0x0060
	 */
	struct FEOSPlayerDataStorageWriteFileOptions
	{
	public:
		unsigned char                                              UnknownData_4K5F[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_99PI[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LocalFile;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RemoteFile;                                              // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ChunkLengthBytes;                                        // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z1NK[0x14];                                  // 0x004C(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSPlayerDataStorageWriteFileDataCallbackInfo
	 * Size -> 0x0048
	 */
	struct FEOSPlayerDataStorageWriteFileDataCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_WHCT[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0008(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8KYQ[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Filename;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DataBufferLengthBytes;                                   // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RLR4[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSPlayerDataStorageReadFileOptions
	 * Size -> 0x0060
	 */
	struct FEOSPlayerDataStorageReadFileOptions
	{
	public:
		unsigned char                                              UnknownData_MOU0[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HUY2[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LocalFile;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RemoteFile;                                              // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ReadChunkLengthBytes;                                    // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K1JT[0x14];                                  // 0x004C(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSPlayerDataStorageReadFileDataCallbackInfo
	 * Size -> 0x0058
	 */
	struct FEOSPlayerDataStorageReadFileDataCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_8BJV[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0008(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WF7G[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Filename;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalFileSizeBytes;                                      // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLastChunk;                                            // 0x0044(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XJA7[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DataChunkLengthBytes;                                    // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KYUL[0xC];                                   // 0x004C(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSPlayerDataStorageDeleteFileOptions
	 * Size -> 0x0038
	 */
	struct FEOSPlayerDataStorageDeleteFileOptions
	{
	public:
		unsigned char                                              UnknownData_SFE1[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3IZU[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Filename;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSPlayerDataStorageDuplicateFileOptions
	 * Size -> 0x0048
	 */
	struct FEOSPlayerDataStorageDuplicateFileOptions
	{
	public:
		unsigned char                                              UnknownData_F4CX[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z7SL[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SourceFilename;                                          // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DestinationFilename;                                     // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSPlayerDataStorageCopyFileMetadataByFilenameOptions
	 * Size -> 0x0038
	 */
	struct FEOSPlayerDataStorageCopyFileMetadataByFilenameOptions
	{
	public:
		unsigned char                                              UnknownData_KNON[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F2AF[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Filename;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSPlayerDataStorageCopyFileMetadataAtIndexOptions
	 * Size -> 0x002C
	 */
	struct FEOSPlayerDataStorageCopyFileMetadataAtIndexOptions
	{
	public:
		unsigned char                                              UnknownData_DT5B[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W7DZ[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Index;                                                   // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSPlayerDataStorageGetFileMetadataCountOptions
	 * Size -> 0x0028
	 */
	struct FEOSPlayerDataStorageGetFileMetadataCountOptions
	{
	public:
		unsigned char                                              UnknownData_ILMR[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T63C[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSPlayerDataStorageQueryFileListOptions
	 * Size -> 0x0028
	 */
	struct FEOSPlayerDataStorageQueryFileListOptions
	{
	public:
		unsigned char                                              UnknownData_JP65[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YOTW[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSPlayerDataStorageQueryFileOptions
	 * Size -> 0x0038
	 */
	struct FEOSPlayerDataStorageQueryFileOptions
	{
	public:
		unsigned char                                              UnknownData_W5QL[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CFK2[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Filename;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSPlayerDataStorageFileMetadata
	 * Size -> 0x0038
	 */
	struct FEOSPlayerDataStorageFileMetadata
	{
	public:
		unsigned char                                              UnknownData_LVJT[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FileSizeBytes;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MD5Hash;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Filename;                                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           LastModifiedTime;                                        // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UnencryptedDataSizeBytes;                                // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DYP1[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSPresenceModificationDataRecordId
	 * Size -> 0x0018
	 */
	struct FEOSPresenceModificationDataRecordId
	{
	public:
		unsigned char                                              UnknownData_YK5C[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Key;                                                     // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSPresenceModificationDeleteDataOptions
	 * Size -> 0x0018
	 */
	struct FEOSPresenceModificationDeleteDataOptions
	{
	public:
		unsigned char                                              UnknownData_ZUUG[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FEOSPresenceModificationDataRecordId>        Records;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSPresenceDataRecord
	 * Size -> 0x0028
	 */
	struct FEOSPresenceDataRecord
	{
	public:
		unsigned char                                              UnknownData_62H7[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Key;                                                     // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Value;                                                   // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSPresenceModificationSetDataOptions
	 * Size -> 0x0018
	 */
	struct FEOSPresenceModificationSetDataOptions
	{
	public:
		unsigned char                                              UnknownData_KESG[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FEOSPresenceDataRecord>                      Records;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSPresenceModificationSetRawRichTextOptions
	 * Size -> 0x0018
	 */
	struct FEOSPresenceModificationSetRawRichTextOptions
	{
	public:
		unsigned char                                              UnknownData_M83B[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              RichText;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSPresenceModificationSetStatusOptions
	 * Size -> 0x0008
	 */
	struct FEOSPresenceModificationSetStatusOptions
	{
	public:
		unsigned char                                              UnknownData_O539[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EEOSPresenceEStatus                                        status;                                                  // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OPPY[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSPresenceModificationSetJoinInfoOptions
	 * Size -> 0x0018
	 */
	struct FEOSPresenceModificationSetJoinInfoOptions
	{
	public:
		unsigned char                                              UnknownData_7CKN[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              JoinInfo;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSPresenceGetJoinInfoOptions
	 * Size -> 0x0048
	 */
	struct FEOSPresenceGetJoinInfoOptions
	{
	public:
		unsigned char                                              UnknownData_LT9Z[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   TargetUserId;                                            // 0x0025(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VZJ6[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSPresenceAddNotifyJoinGameAcceptedOptions
	 * Size -> 0x0004
	 */
	struct FEOSPresenceAddNotifyJoinGameAcceptedOptions
	{
	public:
		unsigned char                                              UnknownData_KSKA[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSPresenceAddNotifyOnPresenceChangedOptions
	 * Size -> 0x0004
	 */
	struct FEOSPresenceAddNotifyOnPresenceChangedOptions
	{
	public:
		unsigned char                                              UnknownData_GC1N[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSHPresenceModification
	 * Size -> 0x0008
	 */
	struct FEOSHPresenceModification
	{
	public:
		unsigned char                                              UnknownData_XQ8Q[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSPresenceSetPresenceOptions
	 * Size -> 0x0030
	 */
	struct FEOSPresenceSetPresenceOptions
	{
	public:
		unsigned char                                              UnknownData_9VO4[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JA42[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSHPresenceModification                           PresenceModificationHandle;                              // 0x0028(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSPresenceCreatePresenceModificationOptions
	 * Size -> 0x0028
	 */
	struct FEOSPresenceCreatePresenceModificationOptions
	{
	public:
		unsigned char                                              UnknownData_J6WP[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A2S7[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSPresenceCopyPresenceOptions
	 * Size -> 0x0048
	 */
	struct FEOSPresenceCopyPresenceOptions
	{
	public:
		unsigned char                                              UnknownData_I5XZ[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   TargetUserId;                                            // 0x0025(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4I0P[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSPresenceHasPresenceOptions
	 * Size -> 0x0048
	 */
	struct FEOSPresenceHasPresenceOptions
	{
	public:
		unsigned char                                              UnknownData_2QSC[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   TargetUserId;                                            // 0x0025(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UFGY[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSPresenceQueryPresenceOptions
	 * Size -> 0x0048
	 */
	struct FEOSPresenceQueryPresenceOptions
	{
	public:
		unsigned char                                              UnknownData_6QQ4[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   TargetUserId;                                            // 0x0025(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4FTT[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSPresenceInfo
	 * Size -> 0x0090
	 */
	struct FEOSPresenceInfo
	{
	public:
		unsigned char                                              UnknownData_QKHS[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EEOSPresenceEStatus                                        status;                                                  // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   userId;                                                  // 0x0005(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0UGA[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ProductId;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ProductVersion;                                          // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Platform;                                                // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RichText;                                                // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YZM0[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FEOSPresenceDataRecord>                      Records;                                                 // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              ProductName;                                             // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSHPresence
	 * Size -> 0x0008
	 */
	struct FEOSHPresence
	{
	public:
		unsigned char                                              UnknownData_Y524[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSProgressionSnapshotDeleteSnapshotOptions
	 * Size -> 0x0021
	 */
	struct FEOSProgressionSnapshotDeleteSnapshotOptions
	{
	public:
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSProgressionSnapshotEndSnapshotOptions
	 * Size -> 0x0004
	 */
	struct FEOSProgressionSnapshotEndSnapshotOptions
	{
	public:
		int32_t                                                    SnapshotId;                                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSProgressionSnapshotSubmitSnapshotOptions
	 * Size -> 0x0004
	 */
	struct FEOSProgressionSnapshotSubmitSnapshotOptions
	{
	public:
		int32_t                                                    SnapshotId;                                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSProgressionSnapshotAddProgressionOptions
	 * Size -> 0x0028
	 */
	struct FEOSProgressionSnapshotAddProgressionOptions
	{
	public:
		int32_t                                                    SnapshotId;                                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZH4Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Key;                                                     // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Value;                                                   // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSProgressionSnapshotBeginSnapshotOptions
	 * Size -> 0x0021
	 */
	struct FEOSProgressionSnapshotBeginSnapshotOptions
	{
	public:
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSReportsSendPlayerBehaviorReportOptions
	 * Size -> 0x0068
	 */
	struct FEOSReportsSendPlayerBehaviorReportOptions
	{
	public:
		unsigned char                                              UnknownData_26LI[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   ReporterUserId;                                          // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   ReportedUserId;                                          // 0x0025(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSEPlayerReportsCategory                                 ReportCategory;                                          // 0x0046(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7FBV[0x1];                                   // 0x0047(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Message;                                                 // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Context;                                                 // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSetParticipantHardMuteOptions
	 * Size -> 0x0038
	 */
	struct FEOSSetParticipantHardMuteOptions
	{
	public:
		class FString                                              roomName;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMute;                                                   // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GQ5F[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSKickOptions
	 * Size -> 0x0038
	 */
	struct FEOSKickOptions
	{
	public:
		class FString                                              roomName;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M89B[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSCopyUserTokenByUserIdOptions
	 * Size -> 0x0028
	 */
	struct FEOSCopyUserTokenByUserIdOptions
	{
	public:
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GZF9[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    QueryId;                                                 // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSCopyUserTokenByIndexOptions
	 * Size -> 0x0008
	 */
	struct FEOSCopyUserTokenByIndexOptions
	{
	public:
		int32_t                                                    UserTokenIndex;                                          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    QueryId;                                                 // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSUserToken
	 * Size -> 0x0038
	 */
	struct FEOSUserToken
	{
	public:
		struct FEOSProductUserId                                   ProductUserId;                                           // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DNMM[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Token;                                                   // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSQueryJoinRoomTokenOptions
	 * Size -> 0x0058
	 */
	struct FEOSQueryJoinRoomTokenOptions
	{
	public:
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JAQ2[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              roomName;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FEOSProductUserId>                           TargetUserIds;                                           // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      TargetUserIpAddresses;                                   // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSRTCAudioUpdateParticipantVolumeOptions
	 * Size -> 0x0060
	 */
	struct FEOSRTCAudioUpdateParticipantVolumeOptions
	{
	public:
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PFZ2[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              roomName;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   ParticipantId;                                           // 0x0038(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A0T2[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Volume;                                                  // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSRTCAudioUpdateReceivingVolumeOptions
	 * Size -> 0x0040
	 */
	struct FEOSRTCAudioUpdateReceivingVolumeOptions
	{
	public:
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MW95[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              roomName;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Volume;                                                  // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S6BU[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSRTCAudioUpdateSendingVolumeOptions
	 * Size -> 0x0040
	 */
	struct FEOSRTCAudioUpdateSendingVolumeOptions
	{
	public:
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H44Y[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              roomName;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Volume;                                                  // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6242[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSUpdateReceivingOptions
	 * Size -> 0x0060
	 */
	struct FEOSUpdateReceivingOptions
	{
	public:
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2778[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              roomName;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   ParticipantId;                                           // 0x0038(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAudioEnabled;                                           // 0x0059(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7ZJL[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSUpdateSendingOptions
	 * Size -> 0x0040
	 */
	struct FEOSUpdateSendingOptions
	{
	public:
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DUGJ[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              roomName;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSERTCAudioStatus                                        AudioStatus;                                             // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YMUQ[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSSendAudioOptions
	 * Size -> 0x0048
	 */
	struct FEOSSendAudioOptions
	{
	public:
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SMEN[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              roomName;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSRTCAudioAudioBuffer                             Buffer;                                                  // 0x0038(0x0010) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAddNotifyAudioBeforeRenderOptions
	 * Size -> 0x0040
	 */
	struct FEOSAddNotifyAudioBeforeRenderOptions
	{
	public:
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9VNN[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              roomName;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUnmixedAudio;                                           // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UMVN[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAddNotifyAudioBeforeSendOptions
	 * Size -> 0x0038
	 */
	struct FEOSAddNotifyAudioBeforeSendOptions
	{
	public:
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1WNV[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              roomName;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAddNotifyAudioOutputStateOptions
	 * Size -> 0x0038
	 */
	struct FEOSAddNotifyAudioOutputStateOptions
	{
	public:
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MS8C[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              roomName;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSAddNotifyAudioInputStateOptions
	 * Size -> 0x0038
	 */
	struct FEOSAddNotifyAudioInputStateOptions
	{
	public:
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VOZL[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              roomName;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSetAudioOutputSettingsOptions
	 * Size -> 0x0040
	 */
	struct FEOSSetAudioOutputSettingsOptions
	{
	public:
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U17E[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DeviceID;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Volume;                                                  // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0MTY[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSSetAudioInputSettingsOptions
	 * Size -> 0x0040
	 */
	struct FEOSSetAudioInputSettingsOptions
	{
	public:
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_05M9[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DeviceID;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Volume;                                                  // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlatformAEC;                                            // 0x003C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GN6T[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAudioOutputDeviceInfo
	 * Size -> 0x0028
	 */
	struct FEOSAudioOutputDeviceInfo
	{
	public:
		bool                                                       bDefaultDevice;                                          // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YNY6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DeviceID;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DeviceName;                                              // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSGetAudioOutputDeviceByIndexOptions
	 * Size -> 0x0004
	 */
	struct FEOSGetAudioOutputDeviceByIndexOptions
	{
	public:
		int32_t                                                    DeviceInfoIndex;                                         // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSGetAudioOutputDevicesCountOptions
	 * Size -> 0x0001
	 */
	struct FEOSGetAudioOutputDevicesCountOptions
	{
	public:
		unsigned char                                              UnknownData_FXWS[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAudioInputDeviceInfo
	 * Size -> 0x0028
	 */
	struct FEOSAudioInputDeviceInfo
	{
	public:
		bool                                                       bDefaultDevice;                                          // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MG60[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DeviceID;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DeviceName;                                              // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSGetAudioInputDeviceByIndexOptions
	 * Size -> 0x0004
	 */
	struct FEOSGetAudioInputDeviceByIndexOptions
	{
	public:
		int32_t                                                    DeviceInfoIndex;                                         // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSGetAudioInputDevicesCountOptions
	 * Size -> 0x0001
	 */
	struct FEOSGetAudioInputDevicesCountOptions
	{
	public:
		unsigned char                                              UnknownData_F2PZ[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAddNotifyAudioDevicesChangedOptions
	 * Size -> 0x0001
	 */
	struct FEOSAddNotifyAudioDevicesChangedOptions
	{
	public:
		unsigned char                                              UnknownData_342W[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSAddNotifyParticipantUpdatedOptions
	 * Size -> 0x0038
	 */
	struct FEOSAddNotifyParticipantUpdatedOptions
	{
	public:
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UH7W[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              roomName;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSUnregisterPlatformAudioUserOptions
	 * Size -> 0x0010
	 */
	struct FEOSUnregisterPlatformAudioUserOptions
	{
	public:
		class FString                                              userId;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSRegisterPlatformAudioUserOptions
	 * Size -> 0x0010
	 */
	struct FEOSRegisterPlatformAudioUserOptions
	{
	public:
		class FString                                              userId;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.AddNotifyParticipantStatusChangedOptions
	 * Size -> 0x0038
	 */
	struct FAddNotifyParticipantStatusChangedOptions
	{
	public:
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UONP[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              roomName;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.AddNotifyDisconnectedOptions
	 * Size -> 0x0038
	 */
	struct FAddNotifyDisconnectedOptions
	{
	public:
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MKXC[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              roomName;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.BlockParticipantOptions
	 * Size -> 0x0060
	 */
	struct FBlockParticipantOptions
	{
	public:
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PYUW[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              roomName;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   ParticipantId;                                           // 0x0038(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlocked;                                                // 0x0059(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G3I8[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.LeaveRoomOptions
	 * Size -> 0x0038
	 */
	struct FLeaveRoomOptions
	{
	public:
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4F0A[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              roomName;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.JoinRoomOptions
	 * Size -> 0x0088
	 */
	struct FJoinRoomOptions
	{
	public:
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7WWK[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              roomName;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ClientBaseUrl;                                           // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ParticipantToken;                                        // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   ParticipantId;                                           // 0x0058(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S9EA[0x3];                                   // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Flags;                                                   // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bManualAudioInputEnabled;                                // 0x0080(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bManualAudioOutputEnabled;                               // 0x0081(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z87F[0x6];                                   // 0x0082(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSSanctionsCopyPlayerSanctionByIndexOptions
	 * Size -> 0x002C
	 */
	struct FEOSSanctionsCopyPlayerSanctionByIndexOptions
	{
	public:
		unsigned char                                              UnknownData_WJ7D[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BR09[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SanctionIndex;                                           // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSanctionsGetPlayerSanctionCountOptions
	 * Size -> 0x0028
	 */
	struct FEOSSanctionsGetPlayerSanctionCountOptions
	{
	public:
		unsigned char                                              UnknownData_F728[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N07H[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSSanctionsQueryActivePlayerSanctionsOptions
	 * Size -> 0x0048
	 */
	struct FEOSSanctionsQueryActivePlayerSanctionsOptions
	{
	public:
		unsigned char                                              UnknownData_AHPY[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0025(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P50N[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSSanctionsPlayerSanction
	 * Size -> 0x0020
	 */
	struct FEOSSanctionsPlayerSanction
	{
	public:
		unsigned char                                              UnknownData_XLCO[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           TimePlaced;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Action;                                                  // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionsDumpSessionStateOptions
	 * Size -> 0x0010
	 */
	struct FEOSSessionsDumpSessionStateOptions
	{
	public:
		class FString                                              SessionName;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionsIsUserInSessionOptions
	 * Size -> 0x0038
	 */
	struct FEOSSessionsIsUserInSessionOptions
	{
	public:
		class FString                                              SessionName;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N2K2[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionsCopySessionHandleForPresenceOptions
	 * Size -> 0x0021
	 */
	struct FEOSSessionsCopySessionHandleForPresenceOptions
	{
	public:
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionsCopySessionHandleByUiEventIdOptions
	 * Size -> 0x0008
	 */
	struct FEOSSessionsCopySessionHandleByUiEventIdOptions
	{
	public:
		struct FEOSUIEventId                                       UiEventId;                                               // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionsCopySessionHandleByInviteIdOptions
	 * Size -> 0x0010
	 */
	struct FEOSSessionsCopySessionHandleByInviteIdOptions
	{
	public:
		class FString                                              InviteId;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionsAddNotifySessionInviteAcceptedOptions
	 * Size -> 0x0001
	 */
	struct FEOSSessionsAddNotifySessionInviteAcceptedOptions
	{
	public:
		unsigned char                                              UnknownData_XG9U[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionsAddNotifySessionInviteReceivedOptions
	 * Size -> 0x0001
	 */
	struct FEOSSessionsAddNotifySessionInviteReceivedOptions
	{
	public:
		unsigned char                                              UnknownData_PVEX[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionsCopyActiveSessionHandleOptions
	 * Size -> 0x0010
	 */
	struct FEOSSessionsCopyActiveSessionHandleOptions
	{
	public:
		class FString                                              SessionName;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionDetailsSettings
	 * Size -> 0x0018
	 */
	struct FEOSSessionDetailsSettings
	{
	public:
		class FString                                              BucketId;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumPublicConnections;                                    // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowJoinInProgress;                                    // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSEOnlineSessionPermissionLevel                          PermissionLevel;                                         // 0x0015(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvitesAllowed;                                         // 0x0016(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSanctionsEnabled;                                       // 0x0017(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionDetailsInfo
	 * Size -> 0x0040
	 */
	struct FEOSSessionDetailsInfo
	{
	public:
		class FString                                              SessionId;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HostAddress;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumOpenPublicConnections;                                // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2LVR[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSSessionDetailsSettings                          Settings;                                                // 0x0028(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSActiveSessionInfo
	 * Size -> 0x0078
	 */
	struct FEOSActiveSessionInfo
	{
	public:
		class FString                                              SessionName;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSEOnlineSessionState                                    State;                                                   // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EZWV[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSSessionDetailsInfo                              SessionDetails;                                          // 0x0038(0x0040) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionDetailsCopySessionAttributeByKeyOptions
	 * Size -> 0x0010
	 */
	struct FEOSSessionDetailsCopySessionAttributeByKeyOptions
	{
	public:
		class FString                                              AttrKey;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionDetailsCopySessionAttributeByIndexOptions
	 * Size -> 0x0004
	 */
	struct FEOSSessionDetailsCopySessionAttributeByIndexOptions
	{
	public:
		int32_t                                                    AttrIndex;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionDetailsGetSessionAttributeCountOptions
	 * Size -> 0x0001
	 */
	struct FEOSSessionDetailsGetSessionAttributeCountOptions
	{
	public:
		unsigned char                                              UnknownData_AXWJ[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionDetailsCopyInfoOptions
	 * Size -> 0x0001
	 */
	struct FEOSSessionDetailsCopyInfoOptions
	{
	public:
		unsigned char                                              UnknownData_34WN[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionSearchRemoveParameterOptions
	 * Size -> 0x0018
	 */
	struct FEOSSessionSearchRemoveParameterOptions
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSEComparisonOp                                          ComparisonOp;                                            // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_63W1[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionsAttributeData
	 * Size -> 0x0020
	 */
	struct FEOSSessionsAttributeData
	{
	public:
		unsigned char                                              UnknownData_I7F9[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionSearchSetParameterOptions
	 * Size -> 0x0028
	 */
	struct FEOSSessionSearchSetParameterOptions
	{
	public:
		struct FEOSSessionsAttributeData                           Parameter;                                               // 0x0000(0x0020) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		EEOSEComparisonOp                                          ComparisonOp;                                            // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4OVN[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionSearchSetTargetUserIdOptions
	 * Size -> 0x0021
	 */
	struct FEOSSessionSearchSetTargetUserIdOptions
	{
	public:
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionSearchSetSessionIdOptions
	 * Size -> 0x0010
	 */
	struct FEOSSessionSearchSetSessionIdOptions
	{
	public:
		class FString                                              SessionId;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionSearchCopySearchResultByIndexOptions
	 * Size -> 0x0004
	 */
	struct FEOSSessionSearchCopySearchResultByIndexOptions
	{
	public:
		int32_t                                                    SessionIndex;                                            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionSearchGetSearchResultCountOptions
	 * Size -> 0x0001
	 */
	struct FEOSSessionSearchGetSearchResultCountOptions
	{
	public:
		unsigned char                                              UnknownData_6WAU[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionSearchFindOptions
	 * Size -> 0x0021
	 */
	struct FEOSSessionSearchFindOptions
	{
	public:
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionSearchSetMaxResultsOptions
	 * Size -> 0x0004
	 */
	struct FEOSSessionSearchSetMaxResultsOptions
	{
	public:
		int32_t                                                    MaxSearchResults;                                        // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionModificationRemoveAttributeOptions
	 * Size -> 0x0010
	 */
	struct FEOSSessionModificationRemoveAttributeOptions
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionModificationAddAttributeOptions
	 * Size -> 0x0028
	 */
	struct FEOSSessionModificationAddAttributeOptions
	{
	public:
		struct FEOSSessionsAttributeData                           Data;                                                    // 0x0000(0x0020) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		EEOSESessionAttributeAdvertisementType                     AdvertisementType;                                       // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M5N7[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionDetailsAttribute
	 * Size -> 0x0028
	 */
	struct FEOSSessionDetailsAttribute
	{
	public:
		struct FEOSSessionsAttributeData                           Data;                                                    // 0x0000(0x0020) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		EEOSESessionAttributeAdvertisementType                     AdvertisementType;                                       // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VAF0[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSActiveSessionGetRegisteredPlayerByIndexOptions
	 * Size -> 0x0004
	 */
	struct FEOSActiveSessionGetRegisteredPlayerByIndexOptions
	{
	public:
		int32_t                                                    PlayerIndex;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSActiveSessionGetRegisteredPlayerCountOptions
	 * Size -> 0x0001
	 */
	struct FEOSActiveSessionGetRegisteredPlayerCountOptions
	{
	public:
		unsigned char                                              UnknownData_ZF1R[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSActiveSessionCopyInfoOptions
	 * Size -> 0x0001
	 */
	struct FEOSActiveSessionCopyInfoOptions
	{
	public:
		unsigned char                                              UnknownData_CFCB[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionModificationSetInvitesAllowedOptions
	 * Size -> 0x0001
	 */
	struct FEOSSessionModificationSetInvitesAllowedOptions
	{
	public:
		bool                                                       bInvitesAllowed;                                         // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionModificationSetMaxPlayersOptions
	 * Size -> 0x0004
	 */
	struct FEOSSessionModificationSetMaxPlayersOptions
	{
	public:
		int32_t                                                    MaxPlayers;                                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionModificationSetJoinInProgressAllowedOptions
	 * Size -> 0x0001
	 */
	struct FEOSSessionModificationSetJoinInProgressAllowedOptions
	{
	public:
		bool                                                       bAllowJoinInProgress;                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionModificationSetPermissionLevelOptions
	 * Size -> 0x0001
	 */
	struct FEOSSessionModificationSetPermissionLevelOptions
	{
	public:
		EEOSEOnlineSessionPermissionLevel                          PermissionLevel;                                         // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionModificationSetHostAddressOptions
	 * Size -> 0x0010
	 */
	struct FEOSSessionModificationSetHostAddressOptions
	{
	public:
		class FString                                              HostAddress;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionModificationSetBucketIdOptions
	 * Size -> 0x0010
	 */
	struct FEOSSessionModificationSetBucketIdOptions
	{
	public:
		class FString                                              BucketId;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionsUnregisterPlayersOptions
	 * Size -> 0x0020
	 */
	struct FEOSSessionsUnregisterPlayersOptions
	{
	public:
		class FString                                              SessionName;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FEOSProductUserId>                           PlayersToUnregister;                                     // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionsRegisterPlayersOptions
	 * Size -> 0x0020
	 */
	struct FEOSSessionsRegisterPlayersOptions
	{
	public:
		class FString                                              SessionName;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FEOSProductUserId>                           PlayersToRegister;                                       // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionsEndSessionOptions
	 * Size -> 0x0010
	 */
	struct FEOSSessionsEndSessionOptions
	{
	public:
		class FString                                              SessionName;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionsStartSessionOptions
	 * Size -> 0x0010
	 */
	struct FEOSSessionsStartSessionOptions
	{
	public:
		class FString                                              SessionName;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSHSessionDetails
	 * Size -> 0x0008
	 */
	struct FEOSHSessionDetails
	{
	public:
		unsigned char                                              UnknownData_12GN[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionsJoinSessionOptions
	 * Size -> 0x0040
	 */
	struct FEOSSessionsJoinSessionOptions
	{
	public:
		class FString                                              SessionName;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSHSessionDetails                                 SessionHandle;                                           // 0x0010(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0018(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPresenceEnabled;                                        // 0x0039(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IHDK[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionsDestroySessionOptions
	 * Size -> 0x0010
	 */
	struct FEOSSessionsDestroySessionOptions
	{
	public:
		class FString                                              SessionName;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSHSessionModification
	 * Size -> 0x0008
	 */
	struct FEOSHSessionModification
	{
	public:
		unsigned char                                              UnknownData_XUL9[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionsUpdateSessionOptions
	 * Size -> 0x0008
	 */
	struct FEOSSessionsUpdateSessionOptions
	{
	public:
		struct FEOSHSessionModification                            SessionModificationHandle;                               // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionsCreateSessionSearchOptions
	 * Size -> 0x0004
	 */
	struct FEOSSessionsCreateSessionSearchOptions
	{
	public:
		int32_t                                                    MaxSearchResults;                                        // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionsGetInviteIdByIndexOptions
	 * Size -> 0x0028
	 */
	struct FEOSSessionsGetInviteIdByIndexOptions
	{
	public:
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HUOI[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Index;                                                   // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionsGetInviteCountOptions
	 * Size -> 0x0021
	 */
	struct FEOSSessionsGetInviteCountOptions
	{
	public:
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionsQueryInvitesOptions
	 * Size -> 0x0021
	 */
	struct FEOSSessionsQueryInvitesOptions
	{
	public:
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionsRejectInviteOptions
	 * Size -> 0x0038
	 */
	struct FEOSSessionsRejectInviteOptions
	{
	public:
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XFN0[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              InviteId;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionsSendInviteOptions
	 * Size -> 0x0058
	 */
	struct FEOSSessionsSendInviteOptions
	{
	public:
		class FString                                              SessionName;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0010(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0031(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V0V4[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionsUpdateSessionModificationOptions
	 * Size -> 0x0010
	 */
	struct FEOSSessionsUpdateSessionModificationOptions
	{
	public:
		class FString                                              SessionName;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSSessionsCreateSessionModificationOptions
	 * Size -> 0x0048
	 */
	struct FEOSSessionsCreateSessionModificationOptions
	{
	public:
		class FString                                              SessionName;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BucketId;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxPlayers;                                              // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0024(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPresenceEnabled;                                        // 0x0045(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P5Q3[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSHSessionSearch
	 * Size -> 0x0008
	 */
	struct FEOSHSessionSearch
	{
	public:
		unsigned char                                              UnknownData_VXDN[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSHActiveSession
	 * Size -> 0x0008
	 */
	struct FEOSHActiveSession
	{
	public:
		unsigned char                                              UnknownData_YLDW[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSHSessions
	 * Size -> 0x0008
	 */
	struct FEOSHSessions
	{
	public:
		unsigned char                                              UnknownData_S2L2[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSStatsCopyStatByNameOptions
	 * Size -> 0x0038
	 */
	struct FEOSStatsCopyStatByNameOptions
	{
	public:
		unsigned char                                              UnknownData_R08E[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_203O[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSStatsCopyStatByIndexOptions
	 * Size -> 0x002C
	 */
	struct FEOSStatsCopyStatByIndexOptions
	{
	public:
		unsigned char                                              UnknownData_70LT[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_870F[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    StatIndex;                                               // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSStatsGetStatCountOptions
	 * Size -> 0x0028
	 */
	struct FEOSStatsGetStatCountOptions
	{
	public:
		unsigned char                                              UnknownData_BDB9[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FC5F[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSStatsStat
	 * Size -> 0x0040
	 */
	struct FEOSStatsStat
	{
	public:
		unsigned char                                              UnknownData_NG9P[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              startTime;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              endTime;                                                 // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Value;                                                   // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9N5X[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSStatsQueryStatsOptions
	 * Size -> 0x0080
	 */
	struct FEOSStatsQueryStatsOptions
	{
	public:
		unsigned char                                              UnknownData_PEJX[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_87XN[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              startTime;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              endTime;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      StatNames;                                               // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EODR[0x4];                                   // 0x0058(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x005C(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P7R0[0x3];                                   // 0x007D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSStatsIngestData
	 * Size -> 0x0020
	 */
	struct FEOSStatsIngestData
	{
	public:
		unsigned char                                              UnknownData_K5UW[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StatName;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IngestAmount;                                            // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GU90[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSStatsIngestStatOptions
	 * Size -> 0x0060
	 */
	struct FEOSStatsIngestStatOptions
	{
	public:
		unsigned char                                              UnknownData_VY6X[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CFQ1[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FEOSStatsIngestData>                         Stats;                                                   // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_07DR[0x4];                                   // 0x0038(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x003C(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PRKI[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSTitleStorageDeleteCacheOptions
	 * Size -> 0x0028
	 */
	struct FEOSTitleStorageDeleteCacheOptions
	{
	public:
		unsigned char                                              UnknownData_R6F2[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_86I6[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSTitleStorageReadFileOptions
	 * Size -> 0x0058
	 */
	struct FEOSTitleStorageReadFileOptions
	{
	public:
		unsigned char                                              UnknownData_FQTF[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0ZO4[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Filename;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SaveFileName;                                            // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KNM8[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSTitleStorageReadFileDataCallbackInfo
	 * Size -> 0x0058
	 */
	struct FEOSTitleStorageReadFileDataCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_YTED[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0008(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IHLP[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Filename;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalFileSizeBytes;                                      // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLastChunk;                                            // 0x0044(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XKJA[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DataChunkLengthBytes;                                    // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_76QX[0xC];                                   // 0x004C(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSTitleStorageCopyFileMetadataByFilenameOptions
	 * Size -> 0x0038
	 */
	struct FEOSTitleStorageCopyFileMetadataByFilenameOptions
	{
	public:
		unsigned char                                              UnknownData_26MC[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OG8N[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Filename;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSTitleStorageCopyFileMetadataAtIndexOptions
	 * Size -> 0x002C
	 */
	struct FEOSTitleStorageCopyFileMetadataAtIndexOptions
	{
	public:
		unsigned char                                              UnknownData_DEDF[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VOIK[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Index;                                                   // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSTitleStorageGetFileMetadataCountOptions
	 * Size -> 0x0028
	 */
	struct FEOSTitleStorageGetFileMetadataCountOptions
	{
	public:
		unsigned char                                              UnknownData_KJ5O[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZJYB[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSTitleStorageQueryFileListOptions
	 * Size -> 0x0038
	 */
	struct FEOSTitleStorageQueryFileListOptions
	{
	public:
		unsigned char                                              UnknownData_RWCD[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4OPH[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      ListOfTags;                                              // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSTitleStorageQueryFileOptions
	 * Size -> 0x0038
	 */
	struct FEOSTitleStorageQueryFileOptions
	{
	public:
		unsigned char                                              UnknownData_MVLY[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSProductUserId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z0RC[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Filename;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSTitleStorageFileMetadata
	 * Size -> 0x0028
	 */
	struct FEOSTitleStorageFileMetadata
	{
	public:
		unsigned char                                              UnknownData_P34G[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FileSizeBytes;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MD5Hash;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Filename;                                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSPlatformGetDesktopCrossplayStatusInfo
	 * Size -> 0x0008
	 */
	struct FEOSPlatformGetDesktopCrossplayStatusInfo
	{
	public:
		EEOSEDesktopCrossplayStatus                                status;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OONH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ServiceInitResult;                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSPlatformGetDesktopCrossplayStatusOptions
	 * Size -> 0x0021
	 */
	struct FEOSPlatformGetDesktopCrossplayStatusOptions
	{
	public:
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSPageQuery
	 * Size -> 0x0008
	 */
	struct FEOSPageQuery
	{
	public:
		int32_t                                                    StartIndex;                                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxCount;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSHRTCAudio
	 * Size -> 0x0008
	 */
	struct FEOSHRTCAudio
	{
	public:
		unsigned char                                              UnknownData_TYU1[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSTitleStorageFileTransferRequestHandle
	 * Size -> 0x0008
	 */
	struct FEOSTitleStorageFileTransferRequestHandle
	{
	public:
		unsigned char                                              UnknownData_R3V3[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSUIIsSocialOverlayPausedOptions
	 * Size -> 0x0001
	 */
	struct FEOSUIIsSocialOverlayPausedOptions
	{
	public:
		unsigned char                                              UnknownData_VKEG[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSUIPauseSocialOverlayOptions
	 * Size -> 0x0001
	 */
	struct FEOSUIPauseSocialOverlayOptions
	{
	public:
		bool                                                       bIsPaused;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSUIShowReportPlayerOptions
	 * Size -> 0x0042
	 */
	struct FEOSUIShowReportPlayerOptions
	{
	public:
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   TargetUserId;                                            // 0x0021(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSUIShowBlockPlayerOptions
	 * Size -> 0x0042
	 */
	struct FEOSUIShowBlockPlayerOptions
	{
	public:
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   TargetUserId;                                            // 0x0021(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSUIAddNotifyDisplaySettingsUpdatedOptions
	 * Size -> 0x0004
	 */
	struct FEOSUIAddNotifyDisplaySettingsUpdatedOptions
	{
	public:
		unsigned char                                              UnknownData_WHTW[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSUIAcknowledgeEventIdOptions
	 * Size -> 0x0018
	 */
	struct FEOSUIAcknowledgeEventIdOptions
	{
	public:
		unsigned char                                              UnknownData_M0LA[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSUIEventId                                       UiEventId;                                               // 0x0008(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOSResult                                                  Result;                                                  // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WOPS[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSUISetDisplayPreferenceOptions
	 * Size -> 0x0008
	 */
	struct FEOSUISetDisplayPreferenceOptions
	{
	public:
		unsigned char                                              UnknownData_9P0R[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EEOSUIENotificationLocation                                NotificationLocation;                                    // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K9OM[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSUIGetToggleFriendsKeyOptions
	 * Size -> 0x0004
	 */
	struct FEOSUIGetToggleFriendsKeyOptions
	{
	public:
		unsigned char                                              UnknownData_Y6V3[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSUISetToggleFriendsKeyOptions
	 * Size -> 0x0008
	 */
	struct FEOSUISetToggleFriendsKeyOptions
	{
	public:
		unsigned char                                              UnknownData_0Z9A[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    keyCombination;                                          // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSUIGetFriendsExclusiveInputOptions
	 * Size -> 0x0021
	 */
	struct FEOSUIGetFriendsExclusiveInputOptions
	{
	public:
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSUIGetFriendsVisibleOptions
	 * Size -> 0x0028
	 */
	struct FEOSUIGetFriendsVisibleOptions
	{
	public:
		unsigned char                                              UnknownData_ZG1A[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NYGP[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSUIHideFriendsOptions
	 * Size -> 0x0028
	 */
	struct FEOSUIHideFriendsOptions
	{
	public:
		unsigned char                                              UnknownData_599E[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TYVJ[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSUIShowFriendsOptions
	 * Size -> 0x0021
	 */
	struct FEOSUIShowFriendsOptions
	{
	public:
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSUserInfoCopyExternalUserInfoByAccountIdOptions
	 * Size -> 0x0058
	 */
	struct FEOSUserInfoCopyExternalUserInfoByAccountIdOptions
	{
	public:
		unsigned char                                              UnknownData_64V9[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   TargetUserId;                                            // 0x0025(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QR2K[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AccountId;                                               // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSUserInfoCopyExternalUserInfoByAccountTypeOptions
	 * Size -> 0x0048
	 */
	struct FEOSUserInfoCopyExternalUserInfoByAccountTypeOptions
	{
	public:
		unsigned char                                              UnknownData_C553[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   TargetUserId;                                            // 0x0025(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSEExternalAccountType                                   AccountType;                                             // 0x0046(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W5WB[0x1];                                   // 0x0047(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSUserInfoCopyExternalUserInfoByIndexOptions
	 * Size -> 0x004C
	 */
	struct FEOSUserInfoCopyExternalUserInfoByIndexOptions
	{
	public:
		unsigned char                                              UnknownData_OOW3[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   TargetUserId;                                            // 0x0025(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TJVP[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Index;                                                   // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSUserInfoGetExternalUserInfoCountOptions
	 * Size -> 0x0048
	 */
	struct FEOSUserInfoGetExternalUserInfoCountOptions
	{
	public:
		unsigned char                                              UnknownData_I43P[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   TargetUserId;                                            // 0x0025(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RP15[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSUserInfoExternalUserInfo
	 * Size -> 0x0028
	 */
	struct FEOSUserInfoExternalUserInfo
	{
	public:
		unsigned char                                              UnknownData_GVGD[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EEOSEExternalAccountType                                   AccountType;                                             // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FG2L[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AccountId;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisplayName;                                             // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSUserInfoCopyUserInfoOptions
	 * Size -> 0x0048
	 */
	struct FEOSUserInfoCopyUserInfoOptions
	{
	public:
		unsigned char                                              UnknownData_L83H[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   TargetUserId;                                            // 0x0025(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2LC7[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSUserInfo
	 * Size -> 0x0078
	 */
	struct FEOSUserInfo
	{
	public:
		struct FEOSEpicAccountId                                   userId;                                                  // 0x0000(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WG9Z[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Country;                                                 // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisplayName;                                             // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PreferredLanguage;                                       // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Nickname;                                                // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisplayNameSanitized;                                    // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSUserInfoQueryUserInfoByExternalAccountOptions
	 * Size -> 0x0040
	 */
	struct FEOSUserInfoQueryUserInfoByExternalAccountOptions
	{
	public:
		unsigned char                                              UnknownData_91LR[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DDG8[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ExternalAccountId;                                       // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEOSEExternalAccountType                                   AccountType;                                             // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ADZP[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct EOSCore.EOSUserInfoQueryUserInfoByDisplayNameOptions
	 * Size -> 0x0038
	 */
	struct FEOSUserInfoQueryUserInfoByDisplayNameOptions
	{
	public:
		unsigned char                                              UnknownData_VARK[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CAM9[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DisplayName;                                             // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct EOSCore.EOSUserInfoQueryUserInfoOptions
	 * Size -> 0x0048
	 */
	struct FEOSUserInfoQueryUserInfoOptions
	{
	public:
		unsigned char                                              UnknownData_21Q8[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEOSEpicAccountId                                   LocalUserId;                                             // 0x0004(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSEpicAccountId                                   TargetUserId;                                            // 0x0025(0x0021) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VNV7[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
