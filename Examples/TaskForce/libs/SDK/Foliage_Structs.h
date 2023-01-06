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
	 * Enum Foliage.EFoliageScaling
	 */
	enum class EFoliageScaling : uint8_t
	{
		Uniform = 0,
		Free    = 1,
		LockXY  = 2,
		LockXZ  = 3,
		LockYZ  = 4,
		MAX     = 5
	};

	/**
	 * Enum Foliage.EVertexColorMaskChannel
	 */
	enum class EVertexColorMaskChannel : uint8_t
	{
		Red      = 0,
		Green    = 1,
		Blue     = 2,
		Alpha    = 3,
		MAX_None = 4,
		MAX      = 5
	};

	/**
	 * Enum Foliage.FoliageVertexColorMask
	 */
	enum class EFoliageVertexColorMask : uint8_t
	{
		FOLIAGEVERTEXCOLORMASK_Disabled = 0,
		FOLIAGEVERTEXCOLORMASK_Red      = 1,
		FOLIAGEVERTEXCOLORMASK_Green    = 2,
		FOLIAGEVERTEXCOLORMASK_Blue     = 3,
		FOLIAGEVERTEXCOLORMASK_Alpha    = 4,
		FOLIAGEVERTEXCOLORMASK_MAX      = 5
	};

	/**
	 * Enum Foliage.ESimulationQuery
	 */
	enum class ESimulationQuery : uint8_t
	{
		CollisionOverlap = 0,
		ShadeOverlap     = 1,
		AnyOverlap       = 2,
		MAX              = 3
	};

	/**
	 * Enum Foliage.ESimulationOverlap
	 */
	enum class ESimulationOverlap : uint8_t
	{
		CollisionOverlap = 0,
		ShadeOverlap     = 1,
		None             = 2,
		MAX              = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Foliage.FoliageVertexColorChannelMask
	 * Size -> 0x000C
	 */
	struct FFoliageVertexColorChannelMask
	{
	public:
		unsigned char                                              UseMask : 1;                                             // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TV4J[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaskThreshold;                                           // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              InvertMask : 1;                                          // 0x0008(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4T5O[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Foliage.FoliageTypeObject
	 * Size -> 0x0020
	 */
	struct FFoliageTypeObject
	{
	public:
		class UObject*                                             FoliageTypeObject;                                       // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UFoliageType*                                        TypeInstance;                                            // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsAsset;                                                // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KS2R[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Type;                                                    // 0x0018(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Foliage.ProceduralFoliageInstance
	 * Size -> 0x0060
	 */
	struct FProceduralFoliageInstance
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5ZBB[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Rotation;                                                // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Normal;                                                  // 0x0020(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Age;                                                     // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_08NP[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFoliageType*                                        Type;                                                    // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5C9P[0x20];                                  // 0x0040(0x0020) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
