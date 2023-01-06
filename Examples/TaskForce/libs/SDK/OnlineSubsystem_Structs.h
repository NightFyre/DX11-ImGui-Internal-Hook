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
	 * Enum OnlineSubsystem.EInAppPurchaseState
	 */
	enum class EInAppPurchaseState : uint8_t
	{
		Unknown      = 0,
		Success      = 1,
		Failed       = 2,
		Cancelled    = 3,
		Invalid      = 4,
		NotAllowed   = 5,
		Restored     = 6,
		AlreadyOwned = 7,
		MAX          = 8
	};

	/**
	 * Enum OnlineSubsystem.EMPMatchOutcome
	 */
	enum class EMPMatchOutcome : uint8_t
	{
		None        = 0,
		Quit        = 1,
		Won         = 2,
		Lost        = 3,
		Tied        = 4,
		TimeExpired = 5,
		First       = 6,
		Second      = 7,
		Third       = 8,
		Fourth      = 9,
		MAX         = 10
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct OnlineSubsystem.NamedInterface
	 * Size -> 0x0010
	 */
	struct FNamedInterface
	{
	public:
		class FName                                                InterfaceName;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             InterfaceObject;                                         // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OnlineSubsystem.NamedInterfaceDef
	 * Size -> 0x0018
	 */
	struct FNamedInterfaceDef
	{
	public:
		class FName                                                InterfaceName;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InterfaceClassName;                                      // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OnlineSubsystem.InAppPurchaseProductInfo
	 * Size -> 0x00A8
	 */
	struct FInAppPurchaseProductInfo
	{
	public:
		class FString                                              Identifier;                                              // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TransactionIdentifier;                                   // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisplayName;                                             // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisplayDescription;                                      // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisplayPrice;                                            // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RawPrice;                                                // 0x0050(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YN8D[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurrencyCode;                                            // 0x0058(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CurrencySymbol;                                          // 0x0068(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DecimalSeparator;                                        // 0x0078(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GroupingSeparator;                                       // 0x0088(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ReceiptData;                                             // 0x0098(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OnlineSubsystem.InAppPurchaseRestoreInfo
	 * Size -> 0x0030
	 */
	struct FInAppPurchaseRestoreInfo
	{
	public:
		class FString                                              Identifier;                                              // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ReceiptData;                                             // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TransactionIdentifier;                                   // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OnlineSubsystem.InAppPurchaseProductRequest
	 * Size -> 0x0018
	 */
	struct FInAppPurchaseProductRequest
	{
	public:
		class FString                                              ProductIdentifier;                                       // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsConsumable;                                           // 0x0010(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0NB0[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
