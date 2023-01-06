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
	 * Enum ChaosSolverEngine.EClusterConnectionTypeEnum
	 */
	enum class EClusterConnectionTypeEnum : uint8_t
	{
		Chaos_PointImplicit                              = 0,
		Chaos_DelaunayTriangulation                      = 1,
		Chaos_MinimalSpanningSubsetDelaunayTriangulation = 2,
		Chaos_PointImplicitAugmentedWithMinimalDelaunay  = 3,
		Chaos_None                                       = 4,
		Chaos_EClsuterCreationParameters_Max             = 5,
		Chaos_MAX                                        = 6
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ChaosSolverEngine.ChaosHandlerSet
	 * Size -> 0x0058
	 */
	struct FChaosHandlerSet
	{
	public:
		unsigned char                                              UnknownData_B2UM[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ChaosHandlers[0x50];                                     // 0x0008(0x0050) UNKNOWN PROPERTY: SetProperty ChaosSolverEngine.ChaosHandlerSet.ChaosHandlers
	};

	/**
	 * ScriptStruct ChaosSolverEngine.BreakEventCallbackWrapper
	 * Size -> 0x0040
	 */
	struct FBreakEventCallbackWrapper
	{
	public:
		unsigned char                                              UnknownData_5TJI[0x40];                                  // 0x0000(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ChaosSolverEngine.ChaosPhysicsCollisionInfo
	 * Size -> 0x0070
	 */
	struct FChaosPhysicsCollisionInfo
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 OtherComponent;                                          // 0x0008(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0010(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Normal;                                                  // 0x001C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AccumulatedImpulse;                                      // 0x0028(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Velocity;                                                // 0x0034(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             OtherVelocity;                                           // 0x0040(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AngularVelocity;                                         // 0x004C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             OtherAngularVelocity;                                    // 0x0058(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Mass;                                                    // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OtherMass;                                               // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MI68[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ChaosSolverEngine.ChaosDebugSubstepControl
	 * Size -> 0x0003
	 */
	struct FChaosDebugSubstepControl
	{
	public:
		bool                                                       bPause;                                                  // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSubstep;                                                // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStep;                                                   // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ChaosSolverEngine.ChaosBreakEvent
	 * Size -> 0x0030
	 */
	struct FChaosBreakEvent
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0008(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Velocity;                                                // 0x0014(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AngularVelocity;                                         // 0x0020(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Mass;                                                    // 0x002C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
