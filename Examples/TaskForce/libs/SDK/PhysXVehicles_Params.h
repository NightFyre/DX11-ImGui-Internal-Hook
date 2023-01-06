#pragma once

/**
 * Name: Task_Force
 * Version: 0.3.6.1537
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears
	 */
	struct UWheeledVehicleMovementComponent_SetUseAutoGears_Params
	{
	public:
		bool                                                       bUseAuto;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput
	 */
	struct UWheeledVehicleMovementComponent_SetThrottleInput_Params
	{
	public:
		float                                                      Throttle;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear
	 */
	struct UWheeledVehicleMovementComponent_SetTargetGear_Params
	{
	public:
		int32_t                                                    GearNum;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bImmediate;                                              // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput
	 */
	struct UWheeledVehicleMovementComponent_SetSteeringInput_Params
	{
	public:
		float                                                      Steering;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput
	 */
	struct UWheeledVehicleMovementComponent_SetHandbrakeInput_Params
	{
	public:
		bool                                                       bNewHandbrake;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask
	 */
	struct UWheeledVehicleMovementComponent_SetGroupsToIgnoreMask_Params
	{
	public:
		struct FNavAvoidanceMask                                   GroupMask;                                               // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore
	 */
	struct UWheeledVehicleMovementComponent_SetGroupsToIgnore_Params
	{
	public:
		int32_t                                                    GroupFlags;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask
	 */
	struct UWheeledVehicleMovementComponent_SetGroupsToAvoidMask_Params
	{
	public:
		struct FNavAvoidanceMask                                   GroupMask;                                               // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid
	 */
	struct UWheeledVehicleMovementComponent_SetGroupsToAvoid_Params
	{
	public:
		int32_t                                                    GroupFlags;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp
	 */
	struct UWheeledVehicleMovementComponent_SetGearUp_Params
	{
	public:
		bool                                                       bNewGearUp;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown
	 */
	struct UWheeledVehicleMovementComponent_SetGearDown_Params
	{
	public:
		bool                                                       bNewGearDown;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput
	 */
	struct UWheeledVehicleMovementComponent_SetBrakeInput_Params
	{
	public:
		float                                                      Brake;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask
	 */
	struct UWheeledVehicleMovementComponent_SetAvoidanceGroupMask_Params
	{
	public:
		struct FNavAvoidanceMask                                   GroupMask;                                               // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup
	 */
	struct UWheeledVehicleMovementComponent_SetAvoidanceGroup_Params
	{
	public:
		int32_t                                                    GroupFlags;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled
	 */
	struct UWheeledVehicleMovementComponent_SetAvoidanceEnabled_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState
	 */
	struct UWheeledVehicleMovementComponent_ServerUpdateState_Params
	{
	public:
		float                                                      InSteeringInput;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InThrottleInput;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InBrakeInput;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InHandbrakeInput;                                        // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    CurrentGear;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears
	 */
	struct UWheeledVehicleMovementComponent_GetUseAutoGears_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear
	 */
	struct UWheeledVehicleMovementComponent_GetTargetGear_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed
	 */
	struct UWheeledVehicleMovementComponent_GetForwardSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed
	 */
	struct UWheeledVehicleMovementComponent_GetEngineRotationSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed
	 */
	struct UWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear
	 */
	struct UWheeledVehicleMovementComponent_GetCurrentGear_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetSteerAngle
	 */
	struct USimpleWheeledVehicleMovementComponent_SetSteerAngle_Params
	{
	public:
		float                                                      SteerAngle;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    WheelIndex;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetDriveTorque
	 */
	struct USimpleWheeledVehicleMovementComponent_SetDriveTorque_Params
	{
	public:
		float                                                      DriveTorque;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    WheelIndex;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetBrakeTorque
	 */
	struct USimpleWheeledVehicleMovementComponent_SetBrakeTorque_Params
	{
	public:
		float                                                      BrakeTorque;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    WheelIndex;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PhysXVehicles.VehicleAnimInstance.GetVehicle
	 */
	struct UVehicleAnimInstance_GetVehicle_Params
	{
	public:
		class AWheeledVehicle*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PhysXVehicles.VehicleWheel.IsInAir
	 */
	struct UVehicleWheel_IsInAir_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PhysXVehicles.VehicleWheel.GetSuspensionOffset
	 */
	struct UVehicleWheel_GetSuspensionOffset_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PhysXVehicles.VehicleWheel.GetSteerAngle
	 */
	struct UVehicleWheel_GetSteerAngle_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PhysXVehicles.VehicleWheel.GetRotationAngle
	 */
	struct UVehicleWheel_GetRotationAngle_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
