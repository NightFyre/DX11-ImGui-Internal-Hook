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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class NetworkPrediction.NetworkPredictionComponent
	 * Size -> 0x01E8 (FullSize[0x0298] - InheritedSize[0x00B0])
	 */
	class UNetworkPredictionComponent : public UActorComponent
	{
	public:
		struct FNetworkPredictionProxy                             NetworkPredictionProxy;                                  // 0x00B0(0x00A0) Net, Transient, Protected, NativeAccessSpecifierProtected
		struct FReplicationProxy                                   ReplicationProxy_ServerRPC;                              // 0x0150(0x0050) Protected, NativeAccessSpecifierProtected
		struct FReplicationProxy                                   ReplicationProxy_Autonomous;                             // 0x01A0(0x0050) Net, Transient, NativeAccessSpecifierPrivate
		struct FReplicationProxy                                   ReplicationProxy_Simulated;                              // 0x01F0(0x0050) Net, Transient, NativeAccessSpecifierPrivate
		struct FReplicationProxy                                   ReplicationProxy_Replay;                                 // 0x0240(0x0050) Net, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TKOZ[0x8];                                   // 0x0290(0x0008) Fix size for supers

	public:
		void ServerReceiveClientInput(const struct FServerReplicationRPCParameter& ProxyParameter);
		static UClass* StaticClass();
	};

	/**
	 * Class NetworkPrediction.NetworkPredictionPhysicsComponent
	 * Size -> 0x0100 (FullSize[0x01B0] - InheritedSize[0x00B0])
	 */
	class UNetworkPredictionPhysicsComponent : public UActorComponent
	{
	public:
		struct FNetworkPredictionProxy                             NetworkPredictionProxy;                                  // 0x00B0(0x00A0) Net, Transient, Protected, NativeAccessSpecifierProtected
		class UPrimitiveComponent*                                 UpdatedPrimitive;                                        // 0x0150(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IZPX[0x8];                                   // 0x0158(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FReplicationProxy                                   ReplicationProxy;                                        // 0x0160(0x0050) Net, Transient, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NetworkPrediction.NetworkPredictionReplicatedManager
	 * Size -> 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
	 */
	class ANetworkPredictionReplicatedManager : public AActor
	{
	public:
		struct FSharedPackageMap                                   SharedPackageMap;                                        // 0x0220(0x0010) Net, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NetworkPrediction.NetworkPredictionSettingsObject
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UNetworkPredictionSettingsObject : public UObject
	{
	public:
		struct FNetworkPredictionSettings                          Settings;                                                // 0x0028(0x0028) Edit, Config, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NetworkPrediction.NetworkPredictionWorldManager
	 * Size -> 0x0610 (FullSize[0x0640] - InheritedSize[0x0030])
	 */
	class UNetworkPredictionWorldManager : public UWorldSubsystem
	{
	public:
		class ANetworkPredictionReplicatedManager*                 ReplicatedManager;                                       // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AECG[0x608];                                 // 0x0038(0x0608) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
