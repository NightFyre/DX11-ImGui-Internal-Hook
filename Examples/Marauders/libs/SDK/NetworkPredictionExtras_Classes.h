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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class NetworkPredictionExtras.BaseMovementComponent
	 * Size -> 0x0018 (FullSize[0x02B0] - InheritedSize[0x0298])
	 */
	class UBaseMovementComponent : public UNetworkPredictionComponent
	{
	public:
		class USceneComponent*                                     UpdatedComponent;                                        // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPrimitiveComponent*                                 UpdatedPrimitive;                                        // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_A732[0x8];                                   // 0x02A8(0x0008) MISSED OFFSET (PADDING)

	public:
		void PhysicsVolumeChanged(class APhysicsVolume* NewVolume);
		void OnBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class NetworkPredictionExtras.FlyingMovementComponent
	 * Size -> 0x0020 (FullSize[0x02D0] - InheritedSize[0x02B0])
	 */
	class UFlyingMovementComponent : public UBaseMovementComponent
	{
	public:
		unsigned char                                              UnknownData_SK7E[0x20];                                  // 0x02B0(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NetworkPredictionExtras.MockFlyingAbilityComponent
	 * Size -> 0x0090 (FullSize[0x0360] - InheritedSize[0x02D0])
	 */
	class UMockFlyingAbilityComponent : public UFlyingMovementComponent
	{
	public:
		unsigned char                                              UnknownData_PWD8[0x10];                                  // 0x02D0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSprintStateChange;                                     // 0x02E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDashStateChange;                                       // 0x02F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBlinkStateChange;                                      // 0x0300(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBlinkActivateEvent;                                    // 0x0310(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBlinkActivateEventRollback;                            // 0x0320(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPhysicsGunFirEvent;                                    // 0x0330(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XE71[0x20];                                  // 0x0340(0x0020) MISSED OFFSET (PADDING)

	public:
		void MockAbilityPhysicsGunFireEvent__DelegateSignature(const struct FVector& Start, const struct FVector& End, bool bHasCooldown, TArray<struct FVector_NetQuantize100> HitLocations, float ElapsedTimeSeconds);
		void MockAbilityNotifyStateChange__DelegateSignature(bool bNewStateValue);
		void MockAbilityBlinkCueRollback__DelegateSignature();
		void MockAbilityBlinkCueEvent__DelegateSignature(const struct FVector& DestinationLocation, int32_t RandomValue, float ElapsedTimeSeconds);
		bool IsSprinting();
		bool IsDashing();
		bool IsBlinking();
		float GetStamina();
		float GetMaxStamina();
		float GetBlinkWarmupTimeSeconds();
		static UClass* StaticClass();
	};

	/**
	 * Class NetworkPredictionExtras.MockNetworkSimulationComponent
	 * Size -> 0x0018 (FullSize[0x02B0] - InheritedSize[0x0298])
	 */
	class UMockNetworkSimulationComponent : public UNetworkPredictionComponent
	{
	public:
		unsigned char                                              UnknownData_PIOF[0x8];                                   // 0x0298(0x0008) Fix Super Size
		unsigned char                                              UnknownData_MZZ9[0x10];                                  // 0x02A0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NetworkPredictionExtras.MockPhysicsComponent
	 * Size -> 0x0070 (FullSize[0x0320] - InheritedSize[0x02B0])
	 */
	class UMockPhysicsComponent : public UBaseMovementComponent
	{
	public:
		unsigned char                                              UnknownData_Q92H[0x10];                                  // 0x02B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMockPhysicsInputCmd                                PendingInputCmd;                                         // 0x02C0(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnJumpActivatedEvent;                                    // 0x02D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnChargeActivatedEvent;                                  // 0x02E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnChargeStateChange;                                     // 0x02F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bIsCharging;                                             // 0x0300(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PXNJ[0x1F];                                  // 0x0301(0x001F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NetworkPredictionExtras.MockRootMotionComponent
	 * Size -> 0x00C0 (FullSize[0x0370] - InheritedSize[0x02B0])
	 */
	class UMockRootMotionComponent : public UBaseMovementComponent
	{
	public:
		unsigned char                                              UnknownData_8V80[0xB0];                                  // 0x02B0(0x00B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRootMotionSourceCache                              RootMotionSourceCache;                                   // 0x0360(0x0010) NoDestructor, NativeAccessSpecifierPrivate

	public:
		void PlayRootMotionSourceByClass(class UClass* Source);
		void PlayRootMotionSource(class UMockRootMotionSource* Source);
		void Input_PlayRootMotionSourceByClass(class UClass* Source);
		void Input_PlayRootMotionSource(class UMockRootMotionSource* Source);
		class UMockRootMotionSource* CreateRootMotionSource(class UClass* Source);
		static UClass* StaticClass();
	};

	/**
	 * Class NetworkPredictionExtras.MockRootMotionSource
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMockRootMotionSource : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NetworkPredictionExtras.MockRootMotionSourceClassMap
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UMockRootMotionSourceClassMap : public UObject
	{
	public:
		unsigned char                                              UnknownData_PKF4[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              SourceList[0x10];                                        // 0x0030(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              UnknownData_N4VY[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NetworkPredictionExtras.MockRootMotionSource_Montage
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UMockRootMotionSource_Montage : public UMockRootMotionSource
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PlayRate;                                                // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             TranslationScale;                                        // 0x0034(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NetworkPredictionExtras.MockRootMotionSource_Curve
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UMockRootMotionSource_Curve : public UMockRootMotionSource
	{
	public:
		class UCurveVector*                                        Curve;                                                   // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PlayRate;                                                // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             TranslationScale;                                        // 0x0034(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NetworkPredictionExtras.MockRootMotionSource_MoveToLocation
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UMockRootMotionSource_MoveToLocation : public UMockRootMotionSource
	{
	public:
		struct FVector                                             destination;                                             // 0x0028(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Velocity;                                                // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SnapToTolerance;                                         // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8TRT[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetDestination(const struct FVector& InDestination);
		static UClass* StaticClass();
	};

	/**
	 * Class NetworkPredictionExtras.NetworkPredictionExtrasFlyingPawn
	 * Size -> 0x0028 (FullSize[0x02A8] - InheritedSize[0x0280])
	 */
	class ANetworkPredictionExtrasFlyingPawn : public APawn
	{
	public:
		ENetworkPredictionExtrasFlyingInputPreset                  InputPreset;                                             // 0x0280(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFakeAutonomousProxy;                                    // 0x0281(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JOMP[0x6];                                   // 0x0282(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFlyingMovementComponent*                            FlyingMovementComponent;                                 // 0x0288(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UTR1[0x18];                                  // 0x0290(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetMaxMoveSpeed(float NewMaxMoveSpeed);
		void PrintDebug();
		float GetMaxMoveSpeed();
		void AddMaxMoveSpeed(float AdditiveMaxMoveSpeed);
		static UClass* StaticClass();
	};

	/**
	 * Class NetworkPredictionExtras.NetworkPredictionExtrasFlyingPawn_MockAbility
	 * Size -> 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
	 */
	class ANetworkPredictionExtrasFlyingPawn_MockAbility : public ANetworkPredictionExtrasFlyingPawn
	{
	public:
		ENetworkPredictionExtrasMockAbilityInputPreset             AbilityInputPreset;                                      // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OXZ2[0x7];                                   // 0x02A9(0x0007) MISSED OFFSET (PADDING)

	public:
		float GetStamina();
		class UMockFlyingAbilityComponent* GetMockFlyingAbilityComponent();
		float GetMaxStamina();
		static UClass* StaticClass();
	};

	/**
	 * Class NetworkPredictionExtras.ParametricMovementComponent
	 * Size -> 0x0070 (FullSize[0x0320] - InheritedSize[0x02B0])
	 */
	class UParametricMovementComponent : public UBaseMovementComponent
	{
	public:
		unsigned char                                              UnknownData_2OG0[0x8];                                   // 0x02B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bDisableParametricMovementSimulation;                    // 0x02B8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N57F[0x7];                                   // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSimpleParametricMotion                             ParametricMotion;                                        // 0x02C0(0x0050) Edit, BlueprintVisible, NoDestructor, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected
		bool                                                       bEnableDependentSimulation;                              // 0x0310(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableInterpolation;                                    // 0x0311(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableForceNetUpdate;                                   // 0x0312(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_40BH[0x1];                                   // 0x0313(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ParentNetUpdateFrequency;                                // 0x0314(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GZ29[0x8];                                   // 0x0318(0x0008) MISSED OFFSET (PADDING)

	public:
		void EnableInterpolationMode(bool bValue);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
