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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class PhysXVehicles.WheeledVehicleMovementComponent
	 * Size -> 0x0158 (FullSize[0x02B8] - InheritedSize[0x0160])
	 */
	class UWheeledVehicleMovementComponent : public UPawnMovementComponent
	{
	public:
		unsigned char                                              UnknownData_XNSW[0x8];                                   // 0x0160(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bDeprecatedSpringOffsetMode : 1;                         // 0x0168(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bReverseAsBrake : 1;                                     // 0x0168(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseRVOAvoidance : 1;                                    // 0x0168(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRawHandbrakeInput : 1;                                  // 0x0168(0x0001) BIT_FIELD Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bRawGearUpInput : 1;                                     // 0x0168(0x0001) BIT_FIELD Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bRawGearDownInput : 1;                                   // 0x0168(0x0001) BIT_FIELD Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OCX4[0x3];                                   // 0x0169(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bWasAvoidanceUpdated : 1;                                // 0x016C(0x0001) BIT_FIELD Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RLJH[0x3];                                   // 0x016D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Mass;                                                    // 0x0170(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7133[0x4];                                   // 0x0174(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWheelSetup>                                 WheelSetups;                                             // 0x0178(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      DragCoefficient;                                         // 0x0188(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChassisWidth;                                            // 0x018C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChassisHeight;                                           // 0x0190(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DragArea;                                                // 0x0194(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EstimatedMaxEngineSpeed;                                 // 0x0198(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxEngineRPM;                                            // 0x019C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebugDragMagnitude;                                      // 0x01A0(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InertiaTensorScale;                                      // 0x01A4(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinNormalizedTireLoad;                                   // 0x01B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinNormalizedTireLoadFiltered;                           // 0x01B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxNormalizedTireLoad;                                   // 0x01B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxNormalizedTireLoadFiltered;                           // 0x01BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ThresholdLongitudinalSpeed;                              // 0x01C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LowForwardSpeedSubStepCount;                             // 0x01C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HighForwardSpeedSubStepCount;                            // 0x01C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FKEA[0x4];                                   // 0x01CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UVehicleWheel*>                               Wheels;                                                  // 0x01D0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A0S2[0x18];                                  // 0x01E0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RVOAvoidanceRadius;                                      // 0x01F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RVOAvoidanceHeight;                                      // 0x01FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AvoidanceConsiderationRadius;                            // 0x0200(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RVOSteeringStep;                                         // 0x0204(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RVOThrottleStep;                                         // 0x0208(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AvoidanceUID;                                            // 0x020C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNavAvoidanceMask                                   AvoidanceGroup;                                          // 0x0210(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FNavAvoidanceMask                                   GroupsToAvoid;                                           // 0x0214(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FNavAvoidanceMask                                   GroupsToIgnore;                                          // 0x0218(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		float                                                      AvoidanceWeight;                                         // 0x021C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PendingLaunchVelocity;                                   // 0x0220(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FReplicatedVehicleState                             ReplicatedState;                                         // 0x022C(0x0014) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0FCI[0x4];                                   // 0x0240(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RawSteeringInput;                                        // 0x0244(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RawThrottleInput;                                        // 0x0248(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RawBrakeInput;                                           // 0x024C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SteeringInput;                                           // 0x0250(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ThrottleInput;                                           // 0x0254(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BrakeInput;                                              // 0x0258(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HandbrakeInput;                                          // 0x025C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      IdleBrakeInput;                                          // 0x0260(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StopThreshold;                                           // 0x0264(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      WrongDirectionThreshold;                                 // 0x0268(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVehicleInputRate                                   ThrottleInputRate;                                       // 0x026C(0x0008) Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
		struct FVehicleInputRate                                   BrakeInputRate;                                          // 0x0274(0x0008) Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
		struct FVehicleInputRate                                   HandbrakeInputRate;                                      // 0x027C(0x0008) Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
		struct FVehicleInputRate                                   SteeringInputRate;                                       // 0x0284(0x0008) Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZRCH[0x24];                                  // 0x028C(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         OverrideController;                                      // 0x02B0(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetUseAutoGears(bool bUseAuto);
		void SetThrottleInput(float Throttle);
		void SetTargetGear(int32_t GearNum, bool bImmediate);
		void SetSteeringInput(float Steering);
		void SetHandbrakeInput(bool bNewHandbrake);
		void SetGroupsToIgnoreMask(const struct FNavAvoidanceMask& GroupMask);
		void SetGroupsToIgnore(int32_t GroupFlags);
		void SetGroupsToAvoidMask(const struct FNavAvoidanceMask& GroupMask);
		void SetGroupsToAvoid(int32_t GroupFlags);
		void SetGearUp(bool bNewGearUp);
		void SetGearDown(bool bNewGearDown);
		void SetBrakeInput(float Brake);
		void SetAvoidanceGroupMask(const struct FNavAvoidanceMask& GroupMask);
		void SetAvoidanceGroup(int32_t GroupFlags);
		void SetAvoidanceEnabled(bool bEnable);
		void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32_t CurrentGear);
		bool GetUseAutoGears();
		int32_t GetTargetGear();
		float GetForwardSpeed();
		float GetEngineRotationSpeed();
		float GetEngineMaxRotationSpeed();
		int32_t GetCurrentGear();
		static UClass* StaticClass();
	};

	/**
	 * Class PhysXVehicles.SimpleWheeledVehicleMovementComponent
	 * Size -> 0x0000 (FullSize[0x02B8] - InheritedSize[0x02B8])
	 */
	class USimpleWheeledVehicleMovementComponent : public UWheeledVehicleMovementComponent
	{
	public:
		void SetSteerAngle(float SteerAngle, int32_t WheelIndex);
		void SetDriveTorque(float DriveTorque, int32_t WheelIndex);
		void SetBrakeTorque(float BrakeTorque, int32_t WheelIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class PhysXVehicles.TireConfig
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UTireConfig : public UDataAsset
	{
	public:
		float                                                      FrictionScale;                                           // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J493[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTireConfigMaterialFriction>                 TireFrictionScales;                                      // 0x0038(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_E0MM[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PhysXVehicles.VehicleAnimInstance
	 * Size -> 0x0708 (FullSize[0x0970] - InheritedSize[0x0268])
	 */
	class UVehicleAnimInstance : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_QONL[0x8];                                   // 0x0268(0x0008) Fix Super Size
		unsigned char                                              UnknownData_3Q8Z[0x6F0];                                 // 0x0270(0x06F0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWheeledVehicleMovementComponent*                    WheeledVehicleMovementComponent;                         // 0x0960(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y4G8[0x8];                                   // 0x0968(0x0008) MISSED OFFSET (PADDING)

	public:
		class AWheeledVehicle* GetVehicle();
		static UClass* StaticClass();
	};

	/**
	 * Class PhysXVehicles.VehicleWheel
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UVehicleWheel : public UObject
	{
	public:
		class UStaticMesh*                                         CollisionMesh;                                           // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDontCreateShape;                                        // 0x0030(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoAdjustCollisionSize;                                // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DFM8[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Offset;                                                  // 0x0034(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShapeRadius;                                             // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShapeWidth;                                              // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Mass;                                                    // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DampingRate;                                             // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SteerAngle;                                              // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectedByHandbrake;                                    // 0x0054(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UTNM[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTireType*                                           TireType;                                                // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTireConfig*                                         TireConfig;                                              // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LatStiffMaxLoad;                                         // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LatStiffValue;                                           // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LongStiffValue;                                          // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SuspensionForceOffset;                                   // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SuspensionMaxRaise;                                      // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SuspensionMaxDrop;                                       // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SuspensionNaturalFrequency;                              // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SuspensionDampingRatio;                                  // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWheelSweepType                                            SweepType;                                               // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BDNF[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxBrakeTorque;                                          // 0x008C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxHandBrakeTorque;                                      // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4CJE[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWheeledVehicleMovementComponent*                    VehicleSim;                                              // 0x0098(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WheelIndex;                                              // 0x00A0(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebugLongSlip;                                           // 0x00A4(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebugLatSlip;                                            // 0x00A8(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebugNormalizedTireLoad;                                 // 0x00AC(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_613D[0x4];                                   // 0x00B0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DebugWheelTorque;                                        // 0x00B4(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebugLongForce;                                          // 0x00B8(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebugLatForce;                                           // 0x00BC(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x00C0(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             OldLocation;                                             // 0x00CC(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Velocity;                                                // 0x00D8(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HN7F[0xC];                                   // 0x00E4(0x000C) MISSED OFFSET (PADDING)

	public:
		bool IsInAir();
		float GetSuspensionOffset();
		float GetSteerAngle();
		float GetRotationAngle();
		static UClass* StaticClass();
	};

	/**
	 * Class PhysXVehicles.WheeledVehicle
	 * Size -> 0x0010 (FullSize[0x02B0] - InheritedSize[0x02A0])
	 */
	class AWheeledVehicle : public APawn
	{
	public:
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x02A0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UWheeledVehicleMovementComponent*                    VehicleMovement;                                         // 0x02A8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PhysXVehicles.WheeledVehicleMovementComponent4W
	 * Size -> 0x0178 (FullSize[0x0430] - InheritedSize[0x02B8])
	 */
	class UWheeledVehicleMovementComponent4W : public UWheeledVehicleMovementComponent
	{
	public:
		struct FVehicleEngineData                                  EngineSetup;                                             // 0x02B8(0x00A0) Edit, NativeAccessSpecifierPublic
		struct FVehicleDifferential4WData                          DifferentialSetup;                                       // 0x0358(0x001C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      AckermannAccuracy;                                       // 0x0374(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVehicleTransmissionData                            TransmissionSetup;                                       // 0x0378(0x0030) Edit, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  SteeringCurve;                                           // 0x03A8(0x0088) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
