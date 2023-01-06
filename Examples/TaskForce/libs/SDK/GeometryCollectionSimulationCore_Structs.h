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
	 * Enum GeometryCollectionSimulationCore.EEmissionPatternTypeEnum
	 */
	enum class EEmissionPatternTypeEnum : uint8_t
	{
		Chaos_Emission_Pattern_First_Frame = 0,
		Chaos_Emission_Pattern_On_Demand   = 1,
		Chaos_Max                          = 2
	};

	/**
	 * Enum GeometryCollectionSimulationCore.EInitialVelocityTypeEnum
	 */
	enum class EInitialVelocityTypeEnum : uint8_t
	{
		Chaos_Initial_Velocity_User_Defined = 0,
		Chaos_Initial_Velocity_None         = 1,
		Chaos_Max                           = 2
	};

	/**
	 * Enum GeometryCollectionSimulationCore.EGeometryCollectionPhysicsTypeEnum
	 */
	enum class EGeometryCollectionPhysicsTypeEnum : uint8_t
	{
		Chaos_AngularVelocity        = 0,
		Chaos_DynamicState           = 1,
		Chaos_LinearVelocity         = 2,
		Chaos_InitialAngularVelocity = 3,
		Chaos_InitialLinearVelocity  = 4,
		Chaos_CollisionGroup         = 5,
		Chaos_LinearForce            = 6,
		Chaos_AngularTorque          = 7,
		Chaos_Max                    = 8
	};

	/**
	 * Enum GeometryCollectionSimulationCore.EObjectStateTypeEnum
	 */
	enum class EObjectStateTypeEnum : uint8_t
	{
		Chaos_Object_Sleeping    = 0,
		Chaos_Object_Kinematic   = 1,
		Chaos_Object_Static      = 2,
		Chaos_Object_Dynamic     = 3,
		Chaos_Object_UserDefined = 4,
		Chaos_Max                = 5
	};

	/**
	 * Enum GeometryCollectionSimulationCore.EImplicitTypeEnum
	 */
	enum class EImplicitTypeEnum : uint8_t
	{
		Chaos_Implicit_Box      = 0,
		Chaos_Implicit_Sphere   = 1,
		Chaos_Implicit_Capsule  = 2,
		Chaos_Implicit_LevelSet = 3,
		Chaos_Implicit_None     = 4,
		Chaos_Max               = 5
	};

	/**
	 * Enum GeometryCollectionSimulationCore.ECollisionTypeEnum
	 */
	enum class ECollisionTypeEnum : uint8_t
	{
		Chaos_Volumetric         = 0,
		Chaos_Surface_Volumetric = 1,
		Chaos_Max                = 2
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
