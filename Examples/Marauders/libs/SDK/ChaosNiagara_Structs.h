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
	 * Enum ChaosNiagara.ELocationZToSpawnEnum
	 */
	enum class ELocationZToSpawnEnum : uint8_t
	{
		ChaosNiagara_LocationZToSpawn_None   = 0,
		ChaosNiagara_LocationZToSpawn_Min    = 1,
		ChaosNiagara_LocationZToSpawn_Max    = 2,
		ChaosNiagara_LocationZToSpawn_MinMax = 3,
		ChaosNiagara_Max                     = 4
	};

	/**
	 * Enum ChaosNiagara.ELocationYToSpawnEnum
	 */
	enum class ELocationYToSpawnEnum : uint8_t
	{
		ChaosNiagara_LocationYToSpawn_None   = 0,
		ChaosNiagara_LocationYToSpawn_Min    = 1,
		ChaosNiagara_LocationYToSpawn_Max    = 2,
		ChaosNiagara_LocationYToSpawn_MinMax = 3,
		ChaosNiagara_Max                     = 4
	};

	/**
	 * Enum ChaosNiagara.ELocationXToSpawnEnum
	 */
	enum class ELocationXToSpawnEnum : uint8_t
	{
		ChaosNiagara_LocationXToSpawn_None   = 0,
		ChaosNiagara_LocationXToSpawn_Min    = 1,
		ChaosNiagara_LocationXToSpawn_Max    = 2,
		ChaosNiagara_LocationXToSpawn_MinMax = 3,
		ChaosNiagara_Max                     = 4
	};

	/**
	 * Enum ChaosNiagara.ELocationFilteringModeEnum
	 */
	enum class ELocationFilteringModeEnum : uint8_t
	{
		ChaosNiagara_LocationFilteringMode_Inclusive = 0,
		ChaosNiagara_LocationFilteringMode_Exclusive = 1,
		ChaosNiagara_Max                             = 2
	};

	/**
	 * Enum ChaosNiagara.EDataSourceTypeEnum
	 */
	enum class EDataSourceTypeEnum : uint8_t
	{
		ChaosNiagara_DataSourceType_Collision = 0,
		ChaosNiagara_DataSourceType_Breaking  = 1,
		ChaosNiagara_DataSourceType_Trailing  = 2,
		ChaosNiagara_Max                      = 3
	};

	/**
	 * Enum ChaosNiagara.EDebugTypeEnum
	 */
	enum class EDebugTypeEnum : uint8_t
	{
		ChaosNiagara_DebugType_NoDebug              = 0,
		ChaosNiagara_DebugType_ColorBySolver        = 1,
		ChaosNiagara_DebugType_ColorByParticleIndex = 2,
		ChaosNiagara_Max                            = 3
	};

	/**
	 * Enum ChaosNiagara.ERandomVelocityGenerationTypeEnum
	 */
	enum class ERandomVelocityGenerationTypeEnum : uint8_t
	{
		ChaosNiagara_RandomVelocityGenerationType_RandomDistribution              = 0,
		ChaosNiagara_RandomVelocityGenerationType_RandomDistributionWithStreamers = 1,
		ChaosNiagara_RandomVelocityGenerationType_CollisionNormalBased            = 2,
		ChaosNiagara_Max                                                          = 3
	};

	/**
	 * Enum ChaosNiagara.EDataSortTypeEnum
	 */
	enum class EDataSortTypeEnum : uint8_t
	{
		ChaosNiagara_DataSortType_NoSorting          = 0,
		ChaosNiagara_DataSortType_RandomShuffle      = 1,
		ChaosNiagara_DataSortType_SortByMassMaxToMin = 2,
		ChaosNiagara_DataSortType_SortByMassMinToMax = 3,
		ChaosNiagara_Max                             = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ChaosNiagara.ChaosDestructionEvent
	 * Size -> 0x0044
	 */
	struct FChaosDestructionEvent
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Normal;                                                  // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Velocity;                                                // 0x0018(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AngularVelocity;                                         // 0x0024(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtentMin;                                               // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtentMax;                                               // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ParticleID;                                              // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Time;                                                    // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Type;                                                    // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
