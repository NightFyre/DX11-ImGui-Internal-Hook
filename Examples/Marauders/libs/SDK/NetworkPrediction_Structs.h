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
	 * Enum NetworkPrediction.ENetworkLOD
	 */
	enum class ENetworkLOD : uint8_t
	{
		Interpolated   = 0,
		SimExtrapolate = 1,
		ForwardPredict = 2,
		All            = 3,
		MAX            = 4
	};

	/**
	 * Enum NetworkPrediction.ENetworkPredictionTickingPolicy
	 */
	enum class ENetworkPredictionTickingPolicy : uint8_t
	{
		Independent = 0,
		Fixed       = 1,
		All         = 2,
		MAX         = 3
	};

	/**
	 * Enum NetworkPrediction.ENetworkPredictionStateRead
	 */
	enum class ENetworkPredictionStateRead : uint8_t
	{
		Simulation   = 0,
		Presentation = 1,
		MAX          = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct NetworkPrediction.NetworkPredictionProxy
	 * Size -> 0x00A0
	 */
	struct FNetworkPredictionProxy
	{
	public:
		unsigned char                                              UnknownData_VQ22[0x90];                                  // 0x0000(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNetworkPredictionWorldManager*                      WorldManager;                                            // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6535[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct NetworkPrediction.ReplicationProxy
	 * Size -> 0x0050
	 */
	struct FReplicationProxy
	{
	public:
		unsigned char                                              UnknownData_FOTV[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct NetworkPrediction.SharedPackageMapItem
	 * Size -> 0x0028
	 */
	struct FSharedPackageMapItem
	{
	public:
		unsigned char                                              SoftPtr[0x28];                                           // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct NetworkPrediction.SharedPackageMap
	 * Size -> 0x0010
	 */
	struct FSharedPackageMap
	{
	public:
		TArray<struct FSharedPackageMapItem>                       Items;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct NetworkPrediction.NetworkPredictionSettings
	 * Size -> 0x0028
	 */
	struct FNetworkPredictionSettings
	{
	public:
		ENetworkPredictionTickingPolicy                            PreferredTickingPolicy;                                  // 0x0000(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UXX4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ReplicatedManagerClassOverride;                          // 0x0008(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FixedTickFrameRate;                                      // 0x0010(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceEngineFixTickForcePhysics;                         // 0x0014(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENetworkLOD                                                SimulatedProxyNetworkLOD;                                // 0x0015(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TDN7[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FixedTickInterpolationBufferedMS;                        // 0x0018(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IndependentTickInterpolationBufferedMS;                  // 0x001C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IndependentTickInterpolationMaxBufferedMS;               // 0x0020(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RBL9[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct NetworkPrediction.ServerReplicationRPCParameter
	 * Size -> 0x0018
	 */
	struct FServerReplicationRPCParameter
	{
	public:
		unsigned char                                              UnknownData_YM84[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
