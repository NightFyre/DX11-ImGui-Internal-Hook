#pragma once

/**
 * Name: RaidGame
 * Version: 1
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
	 * Function NetworkPredictionExtras.BaseMovementComponent.PhysicsVolumeChanged
	 */
	struct UBaseMovementComponent_PhysicsVolumeChanged_Params
	{
	public:
		class APhysicsVolume*                                      NewVolume;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkPredictionExtras.BaseMovementComponent.OnBeginOverlap
	 */
	struct UBaseMovementComponent_OnBeginOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComp;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_H4VF[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction NetworkPredictionExtras.MockFlyingAbilityComponent.MockAbilityPhysicsGunFireEvent__DelegateSignature
	 */
	struct UMockFlyingAbilityComponent_MockAbilityPhysicsGunFireEvent__DelegateSignature_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bHasCooldown;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QJU6[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVector_NetQuantize100>                      HitLocations;                                            // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      ElapsedTimeSeconds;                                      // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction NetworkPredictionExtras.MockFlyingAbilityComponent.MockAbilityNotifyStateChange__DelegateSignature
	 */
	struct UMockFlyingAbilityComponent_MockAbilityNotifyStateChange__DelegateSignature_Params
	{
	public:
		bool                                                       bNewStateValue;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction NetworkPredictionExtras.MockFlyingAbilityComponent.MockAbilityBlinkCueRollback__DelegateSignature
	 */
	struct UMockFlyingAbilityComponent_MockAbilityBlinkCueRollback__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction NetworkPredictionExtras.MockFlyingAbilityComponent.MockAbilityBlinkCueEvent__DelegateSignature
	 */
	struct UMockFlyingAbilityComponent_MockAbilityBlinkCueEvent__DelegateSignature_Params
	{
	public:
		struct FVector                                             DestinationLocation;                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    RandomValue;                                             // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ElapsedTimeSeconds;                                      // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkPredictionExtras.MockFlyingAbilityComponent.IsSprinting
	 */
	struct UMockFlyingAbilityComponent_IsSprinting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkPredictionExtras.MockFlyingAbilityComponent.IsDashing
	 */
	struct UMockFlyingAbilityComponent_IsDashing_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkPredictionExtras.MockFlyingAbilityComponent.IsBlinking
	 */
	struct UMockFlyingAbilityComponent_IsBlinking_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkPredictionExtras.MockFlyingAbilityComponent.GetStamina
	 */
	struct UMockFlyingAbilityComponent_GetStamina_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkPredictionExtras.MockFlyingAbilityComponent.GetMaxStamina
	 */
	struct UMockFlyingAbilityComponent_GetMaxStamina_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkPredictionExtras.MockFlyingAbilityComponent.GetBlinkWarmupTimeSeconds
	 */
	struct UMockFlyingAbilityComponent_GetBlinkWarmupTimeSeconds_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkPredictionExtras.MockRootMotionComponent.PlayRootMotionSourceByClass
	 */
	struct UMockRootMotionComponent_PlayRootMotionSourceByClass_Params
	{
	public:
		class UClass*                                              Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkPredictionExtras.MockRootMotionComponent.PlayRootMotionSource
	 */
	struct UMockRootMotionComponent_PlayRootMotionSource_Params
	{
	public:
		class UMockRootMotionSource*                               Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkPredictionExtras.MockRootMotionComponent.Input_PlayRootMotionSourceByClass
	 */
	struct UMockRootMotionComponent_Input_PlayRootMotionSourceByClass_Params
	{
	public:
		class UClass*                                              Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkPredictionExtras.MockRootMotionComponent.Input_PlayRootMotionSource
	 */
	struct UMockRootMotionComponent_Input_PlayRootMotionSource_Params
	{
	public:
		class UMockRootMotionSource*                               Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkPredictionExtras.MockRootMotionComponent.CreateRootMotionSource
	 */
	struct UMockRootMotionComponent_CreateRootMotionSource_Params
	{
	public:
		class UClass*                                              Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMockRootMotionSource*                               ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkPredictionExtras.MockRootMotionSource_MoveToLocation.SetDestination
	 */
	struct UMockRootMotionSource_MoveToLocation_SetDestination_Params
	{
	public:
		struct FVector                                             InDestination;                                           // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkPredictionExtras.NetworkPredictionExtrasFlyingPawn.SetMaxMoveSpeed
	 */
	struct ANetworkPredictionExtrasFlyingPawn_SetMaxMoveSpeed_Params
	{
	public:
		float                                                      NewMaxMoveSpeed;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkPredictionExtras.NetworkPredictionExtrasFlyingPawn.PrintDebug
	 */
	struct ANetworkPredictionExtrasFlyingPawn_PrintDebug_Params
	{	};

	/**
	 * Function NetworkPredictionExtras.NetworkPredictionExtrasFlyingPawn.GetMaxMoveSpeed
	 */
	struct ANetworkPredictionExtrasFlyingPawn_GetMaxMoveSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkPredictionExtras.NetworkPredictionExtrasFlyingPawn.AddMaxMoveSpeed
	 */
	struct ANetworkPredictionExtrasFlyingPawn_AddMaxMoveSpeed_Params
	{
	public:
		float                                                      AdditiveMaxMoveSpeed;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkPredictionExtras.NetworkPredictionExtrasFlyingPawn_MockAbility.GetStamina
	 */
	struct ANetworkPredictionExtrasFlyingPawn_MockAbility_GetStamina_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkPredictionExtras.NetworkPredictionExtrasFlyingPawn_MockAbility.GetMockFlyingAbilityComponent
	 */
	struct ANetworkPredictionExtrasFlyingPawn_MockAbility_GetMockFlyingAbilityComponent_Params
	{
	public:
		class UMockFlyingAbilityComponent*                         ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkPredictionExtras.NetworkPredictionExtrasFlyingPawn_MockAbility.GetMaxStamina
	 */
	struct ANetworkPredictionExtrasFlyingPawn_MockAbility_GetMaxStamina_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NetworkPredictionExtras.ParametricMovementComponent.EnableInterpolationMode
	 */
	struct UParametricMovementComponent_EnableInterpolationMode_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
