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
	 * Enum GeometryCollectionEngine.EChaosBreakingSortMethod
	 */
	enum class EChaosBreakingSortMethod : uint8_t
	{
		SortNone           = 0,
		SortByHighestMass  = 1,
		SortByHighestSpeed = 2,
		SortByNearestFirst = 3,
		Count              = 4,
		MAX                = 5
	};

	/**
	 * Enum GeometryCollectionEngine.EChaosCollisionSortMethod
	 */
	enum class EChaosCollisionSortMethod : uint8_t
	{
		SortNone             = 0,
		SortByHighestMass    = 1,
		SortByHighestSpeed   = 2,
		SortByHighestImpulse = 3,
		SortByNearestFirst   = 4,
		Count                = 5,
		MAX                  = 6
	};

	/**
	 * Enum GeometryCollectionEngine.EChaosTrailingSortMethod
	 */
	enum class EChaosTrailingSortMethod : uint8_t
	{
		SortNone           = 0,
		SortByHighestMass  = 1,
		SortByHighestSpeed = 2,
		SortByNearestFirst = 3,
		Count              = 4,
		MAX                = 5
	};

	/**
	 * Enum GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
	 */
	enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8_t
	{
		HideNone            = 0,
		HideWithCollision   = 1,
		HideSelected        = 2,
		HideWholeCollection = 3,
		HideAll             = 4,
		MAX                 = 5
	};

	/**
	 * Enum GeometryCollectionEngine.ECollectionGroupEnum
	 */
	enum class ECollectionGroupEnum : uint8_t
	{
		Chaos_Traansform = 0,
		Chaos_Max        = 1
	};

	/**
	 * Enum GeometryCollectionEngine.ECollectionAttributeEnum
	 */
	enum class ECollectionAttributeEnum : uint8_t
	{
		Chaos_Active         = 0,
		Chaos_DynamicState   = 1,
		Chaos_CollisionGroup = 2,
		Chaos_Max            = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GeometryCollectionEngine.ChaosCollisionEventRequestSettings
	 * Size -> 0x0018
	 */
	struct FChaosCollisionEventRequestSettings
	{
	public:
		int32_t                                                    MaxNumberResults;                                        // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinMass;                                                 // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinSpeed;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinImpulse;                                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDistance;                                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EChaosCollisionSortMethod                                  SortMethod;                                              // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VJWZ[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionEngine.ChaosBreakingEventRequestSettings
	 * Size -> 0x0018
	 */
	struct FChaosBreakingEventRequestSettings
	{
	public:
		int32_t                                                    MaxNumberOfResults;                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinRadius;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinSpeed;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinMass;                                                 // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDistance;                                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EChaosBreakingSortMethod                                   SortMethod;                                              // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9HGY[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionEngine.ChaosTrailingEventRequestSettings
	 * Size -> 0x0018
	 */
	struct FChaosTrailingEventRequestSettings
	{
	public:
		int32_t                                                    MaxNumberOfResults;                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinMass;                                                 // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinSpeed;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinAngularSpeed;                                         // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDistance;                                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EChaosTrailingSortMethod                                   SortMethod;                                              // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OZ9L[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionEngine.GeomComponentCacheParameters
	 * Size -> 0x0050
	 */
	struct FGeomComponentCacheParameters
	{
	public:
		EGeometryCollectionCacheType                               CacheMode;                                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YMXD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGeometryCollectionCache*                            TargetCache;                                             // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReverseCacheBeginTime;                                   // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SaveCollisionData;                                       // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DoGenerateCollisionData;                                 // 0x0015(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B99X[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CollisionDataSizeMax;                                    // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DoCollisionDataSpatialHash;                              // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UXG5[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CollisionDataSpatialHashRadius;                          // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxCollisionPerCell;                                     // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SaveBreakingData;                                        // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DoGenerateBreakingData;                                  // 0x0029(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NWO9[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BreakingDataSizeMax;                                     // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DoBreakingDataSpatialHash;                               // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZP3V[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BreakingDataSpatialHashRadius;                           // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxBreakingPerCell;                                      // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SaveTrailingData;                                        // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DoGenerateTrailingData;                                  // 0x003D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6FM7[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TrailingDataSizeMax;                                     // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TrailingMinSpeedThreshold;                               // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TrailingMinVolumeThreshold;                              // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4ZZQ[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionEngine.GeometryCollectionRepData
	 * Size -> 0x0018
	 */
	struct FGeometryCollectionRepData
	{
	public:
		unsigned char                                              UnknownData_2QZC[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawWarningMessage
	 * Size -> 0x0001
	 */
	struct FGeometryCollectionDebugDrawWarningMessage
	{
	public:
		unsigned char                                              UnknownData_66IA[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawActorSelectedRigidBody
	 * Size -> 0x0018
	 */
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3JIC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AChaosSolverActor*                                   Solver;                                                  // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AGeometryCollectionActor*                            GeometryCollection;                                      // 0x0010(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionEngine.GeometryCollectionSource
	 * Size -> 0x0060
	 */
	struct FGeometryCollectionSource
	{
	public:
		struct FSoftObjectPath                                     SourceGeometryObject;                                    // 0x0000(0x0018) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GNF8[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          LocalTransform;                                          // 0x0020(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          SourceMaterial;                                          // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionEngine.GeometryCollectionSizeSpecificData
	 * Size -> 0x0024
	 */
	struct FGeometryCollectionSizeSpecificData
	{
	public:
		float                                                      maxSize;                                                 // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionTypeEnum                                         CollisionType;                                           // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EImplicitTypeEnum                                          ImplicitType;                                            // 0x0005(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NGL9[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinLevelSetResolution;                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxLevelSetResolution;                                   // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinClusterLevelSetResolution;                            // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxClusterLevelSetResolution;                            // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CollisionObjectReductionPercentage;                      // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollisionParticlesFraction;                              // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaximumCollisionParticles;                               // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionEngine.ChaosCollisionEventData
	 * Size -> 0x0058
	 */
	struct FChaosCollisionEventData
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Normal;                                                  // 0x000C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Velocity1;                                               // 0x0018(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Velocity2;                                               // 0x0024(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Mass1;                                                   // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Mass2;                                                   // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Impulse;                                                 // 0x0038(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V6SA[0x14];                                  // 0x0044(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GeometryCollectionEngine.ChaosBreakingEventData
	 * Size -> 0x001C
	 */
	struct FChaosBreakingEventData
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Velocity;                                                // 0x000C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Mass;                                                    // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GeometryCollectionEngine.ChaosTrailingEventData
	 * Size -> 0x002C
	 */
	struct FChaosTrailingEventData
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Velocity;                                                // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AngularVelocity;                                         // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Mass;                                                    // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ParticleIndex;                                           // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
