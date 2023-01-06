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
	 * Enum NetworkPredictionExtras.ENetworkPredictionExtrasMockAbilityInputPreset
	 */
	enum class ENetworkPredictionExtrasMockAbilityInputPreset : uint8_t
	{
		None   = 0,
		Sprint = 1,
		Dash   = 2,
		Blink  = 3,
		MAX    = 4
	};

	/**
	 * Enum NetworkPredictionExtras.ENetworkPredictionExtrasFlyingInputPreset
	 */
	enum class ENetworkPredictionExtrasFlyingInputPreset : uint8_t
	{
		None    = 0,
		Forward = 1,
		MAX     = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct NetworkPredictionExtras.MockPhysicsInputCmd
	 * Size -> 0x0010
	 */
	struct FMockPhysicsInputCmd
	{
	public:
		struct FVector                                             MovementInput;                                           // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bJumpedPressed;                                          // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bChargePressed;                                          // 0x000D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TNAT[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct NetworkPredictionExtras.RootMotionSourceCache
	 * Size -> 0x0010
	 */
	struct FRootMotionSourceCache
	{
	public:
		class UMockRootMotionSource*                               Instance;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GK4C[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct NetworkPredictionExtras.SimpleParametricMotion
	 * Size -> 0x0050
	 */
	struct FSimpleParametricMotion
	{
	public:
		struct FVector                                             ParametricDelta;                                         // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinTime;                                                 // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxTime;                                                 // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9C3S[0x3C];                                  // 0x0014(0x003C) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
