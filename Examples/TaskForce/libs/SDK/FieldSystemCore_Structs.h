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
	 * Enum FieldSystemCore.EFieldPhysicsDefaultFields
	 */
	enum class EFieldPhysicsDefaultFields : uint8_t
	{
		Field_RadialIntMask       = 0,
		Field_RadialFalloff       = 1,
		Field_UniformVector       = 2,
		Field_RadialVector        = 3,
		Field_RadialVectorFalloff = 4,
		Field_Max                 = 5,
		Field_MAX                 = 6
	};

	/**
	 * Enum FieldSystemCore.EFieldPhysicsType
	 */
	enum class EFieldPhysicsType : uint8_t
	{
		Field_DynamicState          = 0,
		Field_LinearForce           = 1,
		Field_ExternalClusterStrain = 2,
		Field_Kill                  = 3,
		Field_LinearVelocity        = 4,
		Field_AngularVelociy        = 5,
		Field_AngularTorque         = 6,
		Field_InternalClusterStrain = 7,
		Field_DisableThreshold      = 8,
		Field_SleepingThreshold     = 9,
		Field_PositionStatic        = 10,
		Field_PositionAnimated      = 11,
		Field_PositionTarget        = 12,
		Field_DynamicConstraint     = 13,
		Field_CollisionGroup        = 14,
		Field_ActivateDisabled      = 15,
		Field_PhysicsType_Max       = 16
	};

	/**
	 * Enum FieldSystemCore.EFieldFalloffType
	 */
	enum class EFieldFalloffType : uint8_t
	{
		Field_FallOff_None        = 0,
		Field_Falloff_Linear      = 1,
		Field_Falloff_Inverse     = 2,
		Field_Falloff_Squared     = 3,
		Field_Falloff_Logarithmic = 4,
		Field_Falloff_Max         = 5
	};

	/**
	 * Enum FieldSystemCore.EFieldResolutionType
	 */
	enum class EFieldResolutionType : uint8_t
	{
		Field_Resolution_Minimal         = 0,
		Field_Resolution_DisabledParents = 1,
		Field_Resolution_Maximum         = 2,
		Field_Resolution_Max             = 3
	};

	/**
	 * Enum FieldSystemCore.EFieldCullingOperationType
	 */
	enum class EFieldCullingOperationType : uint8_t
	{
		Field_Culling_Inside        = 0,
		Field_Culling_Outside       = 1,
		Field_Culling_Operation_Max = 2,
		Field_Culling_MAX           = 3
	};

	/**
	 * Enum FieldSystemCore.EFieldOperationType
	 */
	enum class EFieldOperationType : uint8_t
	{
		Field_Multiply      = 0,
		Field_Divide        = 1,
		Field_Add           = 2,
		Field_Substract     = 3,
		Field_Operation_Max = 4
	};

	/**
	 * Enum FieldSystemCore.ESetMaskConditionType
	 */
	enum class ESetMaskConditionType : uint8_t
	{
		Field_Set_Always           = 0,
		Field_Set_IFF_NOT_Interior = 1,
		Field_Set_IFF_NOT_Exterior = 2,
		Field_MaskCondition_Max    = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
