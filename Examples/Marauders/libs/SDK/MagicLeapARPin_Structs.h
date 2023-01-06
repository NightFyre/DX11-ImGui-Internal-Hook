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
	 * Enum MagicLeapARPin.EMagicLeapARPinType
	 */
	enum class EMagicLeapARPinType : uint8_t
	{
		SingleUserSingleSession = 0,
		SingleUserMultiSession  = 1,
		MultiUserMultiSession   = 2,
		MAX                     = 3
	};

	/**
	 * Enum MagicLeapARPin.EMagicLeapAutoPinType
	 */
	enum class EMagicLeapAutoPinType : uint8_t
	{
		OnlyOnDataRestoration = 0,
		Always                = 1,
		Never                 = 2,
		MAX                   = 3
	};

	/**
	 * Enum MagicLeapARPin.EMagicLeapPassableWorldError
	 */
	enum class EMagicLeapPassableWorldError : uint8_t
	{
		None                    = 0,
		LowMapQuality           = 1,
		UnableToLocalize        = 2,
		Unavailable             = 3,
		PrivilegeDenied         = 4,
		InvalidParam            = 5,
		UnspecifiedFailure      = 6,
		PrivilegeRequestPending = 7,
		StartupPending          = 8,
		SharedWorldNotEnabled   = 9,
		NotImplemented          = 10,
		PinNotFound             = 11,
		MAX                     = 12
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MagicLeapARPin.MagicLeapARPinState
	 * Size -> 0x0014
	 */
	struct FMagicLeapARPinState
	{
	public:
		float                                                      Confidence;                                              // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ValidRadius;                                             // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationError;                                           // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TranslationError;                                        // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMagicLeapARPinType                                        PinType;                                                 // 0x0010(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RYAY[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MagicLeapARPin.MagicLeapARPinObjectIdList
	 * Size -> 0x0050
	 */
	struct FMagicLeapARPinObjectIdList
	{
	public:
		unsigned char                                              ObjectIdList[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty
	};

	/**
	 * ScriptStruct MagicLeapARPin.MagicLeapARPinQuery
	 * Size -> 0x0068
	 */
	struct FMagicLeapARPinQuery
	{
	public:
		unsigned char                                              Types[0x50];                                             // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty
		int32_t                                                    maxResults;                                              // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TargetPoint;                                             // 0x0054(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSorted;                                                 // 0x0064(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YO95[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
