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
	 * Enum PhysicsCore.EBodyCollisionResponse
	 */
	enum class EBodyCollisionResponse : uint8_t
	{
		BodyCollision_Enabled  = 0,
		BodyCollision_Disabled = 1,
		BodyCollision_MAX      = 2
	};

	/**
	 * Enum PhysicsCore.EPhysicsType
	 */
	enum class EPhysicsType : uint8_t
	{
		PhysType_Default   = 0,
		PhysType_Kinematic = 1,
		PhysType_Simulated = 2,
		PhysType_MAX       = 3
	};

	/**
	 * Enum PhysicsCore.ECollisionTraceFlag
	 */
	enum class ECollisionTraceFlag : uint8_t
	{
		CTF_UseDefault          = 0,
		CTF_UseSimpleAndComplex = 1,
		CTF_UseSimpleAsComplex  = 2,
		CTF_UseComplexAsSimple  = 3,
		CTF_MAX                 = 4
	};

	/**
	 * Enum PhysicsCore.ELinearConstraintMotion
	 */
	enum class ELinearConstraintMotion : uint8_t
	{
		LCM_Free    = 0,
		LCM_Limited = 1,
		LCM_Locked  = 2,
		LCM_MAX     = 3
	};

	/**
	 * Enum PhysicsCore.EConstraintFrame
	 */
	enum class EConstraintFrame : uint8_t
	{
		Frame1 = 0,
		Frame2 = 1,
		MAX    = 2
	};

	/**
	 * Enum PhysicsCore.EAngularConstraintMotion
	 */
	enum class EAngularConstraintMotion : uint8_t
	{
		ACM_Free    = 0,
		ACM_Limited = 1,
		ACM_Locked  = 2,
		ACM_MAX     = 3
	};

	/**
	 * Enum PhysicsCore.ESleepFamily
	 */
	enum class ESleepFamily : uint8_t
	{
		Normal    = 0,
		Sensitive = 1,
		Custom    = 2,
		MAX       = 3
	};

	/**
	 * Enum PhysicsCore.ERadialImpulseFalloff
	 */
	enum class ERadialImpulseFalloff : uint8_t
	{
		RIF_Constant = 0,
		RIF_Linear   = 1,
		RIF_MAX      = 2
	};

	/**
	 * Enum PhysicsCore.EPhysicalSurface
	 */
	enum class EPhysicalSurface : uint8_t
	{
		SurfaceType_Default = 0,
		SurfaceType1        = 1,
		SurfaceType2        = 2,
		SurfaceType3        = 3,
		SurfaceType4        = 4,
		SurfaceType5        = 5,
		SurfaceType6        = 6,
		SurfaceType7        = 7,
		SurfaceType8        = 8,
		SurfaceType9        = 9,
		SurfaceType10       = 10,
		SurfaceType11       = 11,
		SurfaceType12       = 12,
		SurfaceType13       = 13,
		SurfaceType14       = 14,
		SurfaceType15       = 15,
		SurfaceType16       = 16,
		SurfaceType17       = 17,
		SurfaceType18       = 18,
		SurfaceType19       = 19,
		SurfaceType20       = 20,
		SurfaceType21       = 21,
		SurfaceType22       = 22,
		SurfaceType23       = 23,
		SurfaceType24       = 24,
		SurfaceType25       = 25,
		SurfaceType26       = 26,
		SurfaceType27       = 27,
		SurfaceType28       = 28,
		SurfaceType29       = 29,
		SurfaceType30       = 30,
		SurfaceType31       = 31,
		SurfaceType32       = 32,
		SurfaceType33       = 33,
		SurfaceType34       = 34,
		SurfaceType35       = 35,
		SurfaceType36       = 36,
		SurfaceType37       = 37,
		SurfaceType38       = 38,
		SurfaceType39       = 39,
		SurfaceType40       = 40,
		SurfaceType41       = 41,
		SurfaceType42       = 42,
		SurfaceType43       = 43,
		SurfaceType44       = 44,
		SurfaceType45       = 45,
		SurfaceType46       = 46,
		SurfaceType47       = 47,
		SurfaceType48       = 48,
		SurfaceType49       = 49,
		SurfaceType50       = 50,
		SurfaceType51       = 51,
		SurfaceType52       = 52,
		SurfaceType53       = 53,
		SurfaceType54       = 54,
		SurfaceType55       = 55,
		SurfaceType56       = 56,
		SurfaceType57       = 57,
		SurfaceType58       = 58,
		SurfaceType59       = 59,
		SurfaceType60       = 60,
		SurfaceType61       = 61,
		SurfaceType62       = 62,
		SurfaceType_Max     = 63,
		MAX                 = 64
	};

	/**
	 * Enum PhysicsCore.EFrictionCombineMode
	 */
	enum class EFrictionCombineMode : uint8_t
	{
		Average  = 0,
		Min      = 1,
		Multiply = 2,
		Max      = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct PhysicsCore.BodyInstanceCore
	 * Size -> 0x0018
	 */
	struct FBodyInstanceCore
	{
	public:
		unsigned char                                              UnknownData_LEBT[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bSimulatePhysics : 1;                                    // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideMass : 1;                                       // 0x0010(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableGravity : 1;                                      // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAutoWeld : 1;                                           // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bStartAwake : 1;                                         // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGenerateWakeEvents : 1;                                 // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUpdateMassWhenScaleChanges : 1;                         // 0x0010(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_68QC[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
