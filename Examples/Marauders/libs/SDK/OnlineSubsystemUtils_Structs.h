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
	 * Enum OnlineSubsystemUtils.EInAppPurchaseStatus
	 */
	enum class EInAppPurchaseStatus : uint8_t
	{
		Invalid   = 0,
		Failed    = 1,
		Deferred  = 2,
		Canceled  = 3,
		Purchased = 4,
		Restored  = 5,
		MAX       = 6
	};

	/**
	 * Enum OnlineSubsystemUtils.EOnlineProxyStoreOfferDiscountType
	 */
	enum class EOnlineProxyStoreOfferDiscountType : uint8_t
	{
		NotOnSale      = 0,
		Percentage     = 1,
		DiscountAmount = 2,
		PayAmount      = 3,
		MAX            = 4
	};

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
		ReservationRemoveMembers   = 6,
		MAX                        = 7
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
		unsigned char                                              UnknownData_IL1X[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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
		unsigned char                                              UnknownData_RLER[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
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

	/**
	 * ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
	 * Size -> 0x0108
	 */
	struct FBlueprintSessionResult
	{
	public:
		unsigned char                                              UnknownData_EX6K[0x108];                                 // 0x0000(0x0108) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OnlineSubsystemUtils.InAppPurchaseReceiptInfo2
	 * Size -> 0x0030
	 */
	struct FInAppPurchaseReceiptInfo2
	{
	public:
		class FString                                              ItemName;                                                // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemId;                                                  // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ValidationInfo;                                          // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OnlineSubsystemUtils.OnlineProxyStoreOffer
	 * Size -> 0x0110
	 */
	struct FOnlineProxyStoreOffer
	{
	public:
		class FString                                              OfferId;                                                 // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Title;                                                   // 0x0010(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0028(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                LongDescription;                                         // 0x0040(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                RegularPriceText;                                        // 0x0058(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                    RegularPrice;                                            // 0x0070(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C13Q[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                PriceText;                                               // 0x0078(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                    NumericPrice;                                            // 0x0090(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VYA9[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurrencyCode;                                            // 0x0098(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           ReleaseDate;                                             // 0x00A8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           ExpirationDate;                                          // 0x00B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOnlineProxyStoreOfferDiscountType                         DiscountType;                                            // 0x00B8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8UVT[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class FString>                         DynamicFields;                                           // 0x00C0(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OnlineSubsystemUtils.InAppPurchaseRestoreInfo2
	 * Size -> 0x0030
	 */
	struct FInAppPurchaseRestoreInfo2
	{
	public:
		class FString                                              ItemName;                                                // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemId;                                                  // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ValidationInfo;                                          // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OnlineSubsystemUtils.InAppPurchaseReceiptInfo
	 * Size -> 0x0030
	 */
	struct FInAppPurchaseReceiptInfo
	{
	public:
		class FString                                              ItemName;                                                // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemId;                                                  // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ValidationInfo;                                          // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductInfo2
	 * Size -> 0x00F8
	 */
	struct FInAppPurchaseProductInfo2
	{
	public:
		class FString                                              Identifier;                                              // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TransactionIdentifier;                                   // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisplayName;                                             // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisplayDescription;                                      // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisplayPrice;                                            // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RawPrice;                                                // 0x0050(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1H0I[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurrencyCode;                                            // 0x0058(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CurrencySymbol;                                          // 0x0068(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DecimalSeparator;                                        // 0x0078(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GroupingSeparator;                                       // 0x0088(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ReceiptData;                                             // 0x0098(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         DynamicFields;                                           // 0x00A8(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductRequest2
	 * Size -> 0x0018
	 */
	struct FInAppPurchaseProductRequest2
	{
	public:
		class FString                                              ProductIdentifier;                                       // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsConsumable;                                           // 0x0010(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_36AD[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
