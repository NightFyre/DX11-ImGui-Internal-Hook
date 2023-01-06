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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ReplicationGraph.ConnectionAlwaysRelevantNodePair
	 * Size -> 0x0010
	 */
	struct FConnectionAlwaysRelevantNodePair
	{
	public:
		class UNetConnection*                                      NetConnection;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UReplicationGraphNode_AlwaysRelevant_ForConnection*  Node;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReplicationGraph.AlwaysRelevantActorInfo
	 * Size -> 0x0018
	 */
	struct FAlwaysRelevantActorInfo
	{
	public:
		class UNetConnection*                                      Connection;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              LastViewer;                                              // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              LastViewTarget;                                          // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReplicationGraph.TearOffActorInfo
	 * Size -> 0x0018
	 */
	struct FTearOffActorInfo
	{
	public:
		unsigned char                                              UnknownData_NRNX[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Actor;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FBTW[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ReplicationGraph.LastLocationGatherInfo
	 * Size -> 0x0020
	 */
	struct FLastLocationGatherInfo
	{
	public:
		class UNetConnection*                                      Connection;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LastLocation;                                            // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LastOutOfRangeLocationCheck;                             // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReplicationGraph.ClassReplicationInfo
	 * Size -> 0x0070
	 */
	struct FClassReplicationInfo
	{
	public:
		float                                                      DistancePriorityScale;                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StarvationPriorityScale;                                 // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccumulatedNetPriorityBias;                              // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   ReplicationPeriodFrame;                                  // 0x000C(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   FastPath_ReplicationPeriodFrame;                         // 0x000E(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   ActorChannelFrameTimeout;                                // 0x0010(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_08UK[0x56];                                  // 0x0012(0x0056) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CullDistance;                                            // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CullDistanceSquared;                                     // 0x006C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
