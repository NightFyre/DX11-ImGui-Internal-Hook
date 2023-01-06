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
	 * Enum ApexDestruction.EImpactDamageOverride
	 */
	enum class EImpactDamageOverride : uint8_t
	{
		IDO_None = 0,
		IDO_On   = 1,
		IDO_Off  = 2,
		IDO_MAX  = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ApexDestruction.FractureMaterial
	 * Size -> 0x0024
	 */
	struct FFractureMaterial
	{
	public:
		struct FVector2D                                           UVScale;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           UVOffset;                                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Tangent;                                                 // 0x0010(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UAngle;                                                  // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InteriorElementIndex;                                    // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ApexDestruction.DestructibleChunkParameters
	 * Size -> 0x0004
	 */
	struct FDestructibleChunkParameters
	{
	public:
		bool                                                       bIsSupportChunk;                                         // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoNotFracture;                                          // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoNotDamage;                                            // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoNotCrumble;                                           // 0x0003(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ApexDestruction.DestructibleDamageParameters
	 * Size -> 0x001C
	 */
	struct FDestructibleDamageParameters
	{
	public:
		float                                                      DamageThreshold;                                         // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageSpread;                                            // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableImpactDamage;                                     // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9DV8[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ImpactDamage;                                            // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DefaultImpactDamageDepth;                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCustomImpactResistance;                                 // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4BTI[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ImpactResistance;                                        // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ApexDestruction.DestructibleDebrisParameters
	 * Size -> 0x002C
	 */
	struct FDestructibleDebrisParameters
	{
	public:
		float                                                      DebrisLifetimeMin;                                       // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebrisLifetimeMax;                                       // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebrisMaxSeparationMin;                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebrisMaxSeparationMax;                                  // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBox                                                ValidBounds;                                             // 0x0010(0x001C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ApexDestruction.DestructibleAdvancedParameters
	 * Size -> 0x0010
	 */
	struct FDestructibleAdvancedParameters
	{
	public:
		float                                                      DamageCap;                                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ImpactVelocityThreshold;                                 // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxChunkSpeed;                                           // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FractureImpulseScale;                                    // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ApexDestruction.DestructibleSpecialHierarchyDepths
	 * Size -> 0x0014
	 */
	struct FDestructibleSpecialHierarchyDepths
	{
	public:
		int32_t                                                    SupportDepth;                                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinimumFractureDepth;                                    // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableDebris;                                           // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_321F[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DebrisDepth;                                             // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EssentialDepth;                                          // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ApexDestruction.DestructibleDepthParameters
	 * Size -> 0x0001
	 */
	struct FDestructibleDepthParameters
	{
	public:
		EImpactDamageOverride                                      ImpactDamageOverride;                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ApexDestruction.DestructibleParametersFlag
	 * Size -> 0x0004
	 */
	struct FDestructibleParametersFlag
	{
	public:
		unsigned char                                              bAccumulateDamage : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAssetDefinedSupport : 1;                                // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bWorldSupport : 1;                                       // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDebrisTimeout : 1;                                      // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDebrisMaxSeparation : 1;                                // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCrumbleSmallestChunks : 1;                              // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAccurateRaycasts : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseValidBounds : 1;                                     // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bFormExtendedStructures : 1;                             // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DXC3[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ApexDestruction.DestructibleParameters
	 * Size -> 0x0088
	 */
	struct FDestructibleParameters
	{
	public:
		struct FDestructibleDamageParameters                       DamageParameters;                                        // 0x0000(0x001C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FDestructibleDebrisParameters                       DebrisParameters;                                        // 0x001C(0x002C) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FDestructibleAdvancedParameters                     AdvancedParameters;                                      // 0x0048(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FDestructibleSpecialHierarchyDepths                 SpecialHierarchyDepths;                                  // 0x0058(0x0014) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RU7K[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDestructibleDepthParameters>                DepthParameters;                                         // 0x0070(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		struct FDestructibleParametersFlag                         Flags;                                                   // 0x0080(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SSET[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
