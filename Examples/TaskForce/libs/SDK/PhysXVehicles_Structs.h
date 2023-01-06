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
	 * Enum PhysXVehicles.EWheelSweepType
	 */
	enum class EWheelSweepType : uint8_t
	{
		SimpleAndComplex = 0,
		Simple           = 1,
		Complex          = 2,
		MAX              = 3
	};

	/**
	 * Enum PhysXVehicles.EVehicleDifferential4W
	 */
	enum class EVehicleDifferential4W : uint8_t
	{
		LimitedSlip_4W         = 0,
		LimitedSlip_FrontDrive = 1,
		LimitedSlip_RearDrive  = 2,
		Open_4W                = 3,
		Open_FrontDrive        = 4,
		Open_RearDrive         = 5,
		MAX                    = 6
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct PhysXVehicles.WheelSetup
	 * Size -> 0x0020
	 */
	struct FWheelSetup
	{
	public:
		class UClass*                                              WheelClass;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BoneName;                                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AdditionalOffset;                                        // 0x0010(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableSteering;                                        // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KAFU[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PhysXVehicles.ReplicatedVehicleState
	 * Size -> 0x0014
	 */
	struct FReplicatedVehicleState
	{
	public:
		float                                                      SteeringInput;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ThrottleInput;                                           // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BrakeInput;                                              // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HandbrakeInput;                                          // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentGear;                                             // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PhysXVehicles.VehicleInputRate
	 * Size -> 0x0008
	 */
	struct FVehicleInputRate
	{
	public:
		float                                                      RiseRate;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FallRate;                                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PhysXVehicles.TireConfigMaterialFriction
	 * Size -> 0x0010
	 */
	struct FTireConfigMaterialFriction
	{
	public:
		class UPhysicalMaterial*                                   PhysicalMaterial;                                        // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FrictionScale;                                           // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RB4R[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PhysXVehicles.VehicleEngineData
	 * Size -> 0x00A0
	 */
	struct FVehicleEngineData
	{
	public:
		struct FRuntimeFloatCurve                                  TorqueCurve;                                             // 0x0000(0x0088) Edit, NativeAccessSpecifierPublic
		float                                                      MaxRPM;                                                  // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MOI;                                                     // 0x008C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DampingRateFullThrottle;                                 // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DampingRateZeroThrottleClutchEngaged;                    // 0x0094(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DampingRateZeroThrottleClutchDisengaged;                 // 0x0098(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_81WK[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PhysXVehicles.VehicleDifferential4WData
	 * Size -> 0x001C
	 */
	struct FVehicleDifferential4WData
	{
	public:
		EVehicleDifferential4W                                     DifferentialType;                                        // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3F3P[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FrontRearSplit;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FrontLeftRightSplit;                                     // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RearLeftRightSplit;                                      // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CentreBias;                                              // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FrontBias;                                               // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RearBias;                                                // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PhysXVehicles.VehicleGearData
	 * Size -> 0x000C
	 */
	struct FVehicleGearData
	{
	public:
		float                                                      Ratio;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DownRatio;                                               // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UpRatio;                                                 // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PhysXVehicles.VehicleTransmissionData
	 * Size -> 0x0030
	 */
	struct FVehicleTransmissionData
	{
	public:
		bool                                                       bUseGearAutoBox;                                         // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WIVU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GearSwitchTime;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GearAutoBoxLatency;                                      // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FinalRatio;                                              // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVehicleGearData>                            ForwardGears;                                            // 0x0010(0x0010) Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
		float                                                      ReverseGearRatio;                                        // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NeutralGearUpRatio;                                      // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClutchStrength;                                          // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4ETV[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PhysXVehicles.AnimNode_WheelHandler
	 * Size -> 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_WheelHandler : public FAnimNode_SkeletalControlBase
	{
	public:
		unsigned char                                              UnknownData_5U2T[0x18];                                  // 0x00C8(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PhysXVehicles.VehicleAnimInstanceProxy
	 * Size -> 0x0010 (FullSize[0x06E0] - InheritedSize[0x06D0])
	 */
	struct FVehicleAnimInstanceProxy : public FAnimInstanceProxy
	{
	public:
		unsigned char                                              UnknownData_KT63[0x10];                                  // 0x06D0(0x0010) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
