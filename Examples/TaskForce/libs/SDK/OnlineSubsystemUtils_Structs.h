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
	 * Enum OnlineSubsystemUtils.EBeaconConnectionState
	 */
	enum class EBeaconConnectionState : uint8_t
	{
		Invalid = 0,
		Closed  = 1,
		Pending = 2,
		Open    = 3,
		MAX     = 4
	};

	/**
	 * Enum OnlineSubsystemUtils.EClientRequestType
	 */
	enum class EClientRequestType : uint8_t
	{
		NonePending                = 0,
		ExistingSessionReservation = 1,
		ReservationUpdate          = 2,
		EmptyServerReservation     = 3,
		Reconnect                  = 4,
		Abandon                    = 5,
		MAX                        = 6
	};

	/**
	 * Enum OnlineSubsystemUtils.EPartyReservationResult
	 */
	enum class EPartyReservationResult : uint8_t
	{
		NoResult                                  = 0,
		RequestPending                            = 1,
		GeneralError                              = 2,
		PartyLimitReached                         = 3,
		IncorrectPlayerCount                      = 4,
		RequestTimedOut                           = 5,
		ReservationDuplicate                      = 6,
		ReservationNotFound                       = 7,
		ReservationAccepted                       = 8,
		ReservationDenied                         = 9,
		ReservationDenied_CrossPlayRestriction    = 10,
		ReservationDenied_Banned                  = 11,
		ReservationRequestCanceled                = 12,
		ReservationInvalid                        = 13,
		BadSessionId                              = 14,
		ReservationDenied_ContainsExistingPlayers = 15,
		MAX                                       = 16
	};

	/**
	 * Enum OnlineSubsystemUtils.ESpectatorClientRequestType
	 */
	enum class ESpectatorClientRequestType : uint8_t
	{
		NonePending                = 0,
		ExistingSessionReservation = 1,
		ReservationUpdate          = 2,
		EmptyServerReservation     = 3,
		Reconnect                  = 4,
		Abandon                    = 5,
		MAX                        = 6
	};

	/**
	 * Enum OnlineSubsystemUtils.ESpectatorReservationResult
	 */
	enum class ESpectatorReservationResult : uint8_t
	{
		NoResult                                  = 0,
		RequestPending                            = 1,
		GeneralError                              = 2,
		SpectatorLimitReached                     = 3,
		IncorrectPlayerCount                      = 4,
		RequestTimedOut                           = 5,
		ReservationDuplicate                      = 6,
		ReservationNotFound                       = 7,
		ReservationAccepted                       = 8,
		ReservationDenied                         = 9,
		ReservationDenied_CrossPlayRestriction    = 10,
		ReservationDenied_Banned                  = 11,
		ReservationRequestCanceled                = 12,
		ReservationInvalid                        = 13,
		BadSessionId                              = 14,
		ReservationDenied_ContainsExistingPlayers = 15,
		MAX                                       = 16
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
	 * Size -> 0x00B8
	 */
	struct FBlueprintSessionResult
	{
	public:
		unsigned char                                              UnknownData_H1X0[0xB8];                                  // 0x0000(0x00B8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal
	 * Size -> 0x0040
	 */
	struct FPIELoginSettingsInternal
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Token;                                                   // 0x0010(0x0010) Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Type;                                                    // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      TokenBytes;                                              // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OnlineSubsystemUtils.PlayerReservation
	 * Size -> 0x0050
	 */
	struct FPlayerReservation
	{
	public:
		struct FUniqueNetIdRepl                                    UniqueId;                                                // 0x0000(0x0028) Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ValidationStr;                                           // 0x0028(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Platform;                                                // 0x0038(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowCrossplay;                                         // 0x0048(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3EMZ[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ElapsedTime;                                             // 0x004C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OnlineSubsystemUtils.PartyReservation
	 * Size -> 0x0050
	 */
	struct FPartyReservation
	{
	public:
		int32_t                                                    TeamNum;                                                 // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0FP0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUniqueNetIdRepl                                    PartyLeader;                                             // 0x0008(0x0028) Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPlayerReservation>                          PartyMembers;                                            // 0x0030(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FPlayerReservation>                          RemovedPartyMembers;                                     // 0x0040(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OnlineSubsystemUtils.SpectatorReservation
	 * Size -> 0x0078
	 */
	struct FSpectatorReservation
	{
	public:
		struct FUniqueNetIdRepl                                    SpectatorId;                                             // 0x0000(0x0028) Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPlayerReservation                                  Spectator;                                               // 0x0028(0x0050) Transient, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
