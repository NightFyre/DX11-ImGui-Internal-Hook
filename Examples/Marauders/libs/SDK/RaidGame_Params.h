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
	 * Function RaidGame.AsyncTaskGameplayTagAddedRemoved.ListenForGameplayTagAddedOrRemoved
	 */
	struct UAsyncTaskGameplayTagAddedRemoved_ListenForGameplayTagAddedOrRemoved_Params
	{
	public:
		class UAbilitySystemComponent*                             AbilitySystemComponent;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               Tags;                                                    // 0x0008(0x0020)  (Parm, NativeAccessSpecifierPublic)
		class UAsyncTaskGameplayTagAddedRemoved*                   ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.AsyncTaskGameplayTagAddedRemoved.EndTask
	 */
	struct UAsyncTaskGameplayTagAddedRemoved_EndTask_Params
	{	};

	/**
	 * Function RaidGame.GOAPAction.TryLean
	 */
	struct UGOAPAction_TryLean_Params
	{
	public:
		bool                                                       Left;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Right;                                                   // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Back;                                                    // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.TimeOutFinish
	 */
	struct UGOAPAction_TimeOutFinish_Params
	{	};

	/**
	 * Function RaidGame.GOAPAction.StopMovementRequest
	 */
	struct UGOAPAction_StopMovementRequest_Params
	{	};

	/**
	 * Function RaidGame.GOAPAction.StopLookRequest
	 */
	struct UGOAPAction_StopLookRequest_Params
	{	};

	/**
	 * Function RaidGame.GOAPAction.StopIntervalShooting
	 */
	struct UGOAPAction_StopIntervalShooting_Params
	{	};

	/**
	 * Function RaidGame.GOAPAction.StartIntervalShooting
	 */
	struct UGOAPAction_StartIntervalShooting_Params
	{
	public:
		float                                                      MissRate;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      IntervalRangeMin;                                        // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      IntervalRangeMax;                                        // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CooldownRangeMin;                                        // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CooldownRangeMax;                                        // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      FireRate;                                                // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.StartAction
	 */
	struct UGOAPAction_StartAction_Params
	{	};

	/**
	 * Function RaidGame.GOAPAction.ShootAtLocation
	 */
	struct UGOAPAction_ShootAtLocation_Params
	{
	public:
		struct FVector                                             LoctoShoot;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MissRate;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.ShootAtCurrentEnemy
	 */
	struct UGOAPAction_ShootAtCurrentEnemy_Params
	{
	public:
		float                                                      MissRate;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.ShootAimedAtCurrentEnemy
	 */
	struct UGOAPAction_ShootAimedAtCurrentEnemy_Params
	{
	public:
		float                                                      MissRate;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                BonedAimedAt;                                            // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.SetTargetEnemy
	 */
	struct UGOAPAction_SetTargetEnemy_Params
	{
	public:
		class ARaidCharacter*                                      TEnemy;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.SetShuffleOnce
	 */
	struct UGOAPAction_SetShuffleOnce_Params
	{
	public:
		float                                                      ShuffleAmountLeftRight;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.SetMoveShuffle
	 */
	struct UGOAPAction_SetMoveShuffle_Params
	{
	public:
		float                                                      TimeBetween;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CancelOUt;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ShuffleAmountLeftRight;                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.SetLookAtTargetLocation
	 */
	struct UGOAPAction_SetLookAtTargetLocation_Params
	{
	public:
		struct FVector                                             LocatLocation;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.SetLookAroundWiggleOnce
	 */
	struct UGOAPAction_SetLookAroundWiggleOnce_Params
	{
	public:
		float                                                      WiggleAmountLeftRight;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      WiggleAmountUpDown;                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CancelOUt;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.SetLookAroundWiggle
	 */
	struct UGOAPAction_SetLookAroundWiggle_Params
	{
	public:
		float                                                      TimeBetween;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CancelOUt;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      WiggleAmountLeftRight;                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      WiggleAmountUpDown;                                      // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.SetBotRotationSpeed
	 */
	struct UGOAPAction_SetBotRotationSpeed_Params
	{
	public:
		float                                                      RotationSpeed;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.SetActionTimer
	 */
	struct UGOAPAction_SetActionTimer_Params
	{
	public:
		class FString                                              FunctionName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InRate;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       InbLoop;                                                 // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CZI8[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      InFirstDelay;                                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.ReloadAIWeapon
	 */
	struct UGOAPAction_ReloadAIWeapon_Params
	{	};

	/**
	 * Function RaidGame.GOAPAction.MoveInfo
	 */
	struct UGOAPAction_MoveInfo_Params
	{
	public:
		struct FVector                                             atLocation;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMoveRequest                                               Branches;                                                // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.LookAtPawnDirection
	 */
	struct UGOAPAction_LookAtPawnDirection_Params
	{
	public:
		bool                                                       CancelOUt;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.ImIMoving
	 */
	struct UGOAPAction_ImIMoving_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.HasLostEnemy
	 */
	struct UGOAPAction_HasLostEnemy_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.HasEnemy
	 */
	struct UGOAPAction_HasEnemy_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.HasArrivedAtLocation
	 */
	struct UGOAPAction_HasArrivedAtLocation_Params
	{
	public:
		float                                                      Allowance;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       DontRestartMoveQuery;                                    // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       RequestORMoveHasFailed;                                  // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0006(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.GOAPSetFocalPoint
	 */
	struct UGOAPAction_GOAPSetFocalPoint_Params
	{
	public:
		struct FVector                                             NewFocus;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ERaidFocusPri                                              InPriority;                                              // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.GetTimeSinceLostEnemy
	 */
	struct UGOAPAction_GetTimeSinceLostEnemy_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.GetSensedPlayerThatCantSeeMe
	 */
	struct UGOAPAction_GetSensedPlayerThatCantSeeMe_Params
	{
	public:
		class ARaidCharacter*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.GetSensedPlayerClosetToMe
	 */
	struct UGOAPAction_GetSensedPlayerClosetToMe_Params
	{
	public:
		class ARaidCharacter*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.GetSensedPlayerAimingAtMe
	 */
	struct UGOAPAction_GetSensedPlayerAimingAtMe_Params
	{
	public:
		class ARaidCharacter*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.GetMyBot
	 */
	struct UGOAPAction_GetMyBot_Params
	{
	public:
		class ARaidNodeBot*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.GetMovingTowardLocation
	 */
	struct UGOAPAction_GetMovingTowardLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.GetLookAtTargetLocation
	 */
	struct UGOAPAction_GetLookAtTargetLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.GetCurrentTarget
	 */
	struct UGOAPAction_GetCurrentTarget_Params
	{
	public:
		class ARaidCharacter*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.GetCurrentSensedTargets
	 */
	struct UGOAPAction_GetCurrentSensedTargets_Params
	{
	public:
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.GetCurrentAmmoInClip
	 */
	struct UGOAPAction_GetCurrentAmmoInClip_Params
	{
	public:
		int32_t                                                    maxclipsize;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.GetCoverPointInfo
	 */
	struct UGOAPAction_GetCoverPointInfo_Params
	{
	public:
		bool                                                       CrouchPoint;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ShootOver;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       LeftLean;                                                // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       RightLean;                                               // 0x0003(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             DirectionToWall;                                         // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.GetController
	 */
	struct UGOAPAction_GetController_Params
	{
	public:
		class ARaidGOAPController*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.GetActionTimeInSeconds
	 */
	struct UGOAPAction_GetActionTimeInSeconds_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.EQSQueryLookToLocation
	 */
	struct UGOAPAction_EQSQueryLookToLocation_Params
	{
	public:
		class UEnvQuery*                                           MyQuery;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEnvQueryRunMode                                           RunMode;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OASP[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DeactiveTime;                                            // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.EQSQueryLookToDirection
	 */
	struct UGOAPAction_EQSQueryLookToDirection_Params
	{
	public:
		class UEnvQuery*                                           MyQuery;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEnvQueryRunMode                                           RunMode;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RIH6[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             LookToVector;                                            // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DeactiveTime;                                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.EQSQueryandMoveToLocationVector
	 */
	struct UGOAPAction_EQSQueryandMoveToLocationVector_Params
	{
	public:
		struct FVector                                             LocationVector;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YP4F[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UEnvQuery*                                           MyQuery;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEnvQueryRunMode                                           RunMode;                                                 // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.EQSQueryandMoveToLocation
	 */
	struct UGOAPAction_EQSQueryandMoveToLocation_Params
	{
	public:
		class UEnvQuery*                                           MyQuery;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEnvQueryRunMode                                           RunMode;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.EQSQueryandMoveToCover
	 */
	struct UGOAPAction_EQSQueryandMoveToCover_Params
	{
	public:
		class UEnvQuery*                                           MyQuery;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEnvQueryRunMode                                           RunMode;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.DoOnce
	 */
	struct UGOAPAction_DoOnce_Params
	{
	public:
		int32_t                                                    TagIntForBranch;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPassEnum                                                  Branches;                                                // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.CleanupAction
	 */
	struct UGOAPAction_CleanupAction_Params
	{
	public:
		class ARaidGOAPController*                                 P;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.checkProceduralPrecondition
	 */
	struct UGOAPAction_checkProceduralPrecondition_Params
	{
	public:
		class ARaidGOAPController*                                 P;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.CheckLOSToTarget
	 */
	struct UGOAPAction_CheckLOSToTarget_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.CancelMoveShuffle
	 */
	struct UGOAPAction_CancelMoveShuffle_Params
	{	};

	/**
	 * Function RaidGame.GOAPAction.CancelLookAroundWiggle
	 */
	struct UGOAPAction_CancelLookAroundWiggle_Params
	{	};

	/**
	 * Function RaidGame.GOAPAction.BranchAtTickTime
	 */
	struct UGOAPAction_BranchAtTickTime_Params
	{
	public:
		float                                                      SecondsIn;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETimeEnum                                                  Branches;                                                // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPAction.AddFrequencyCost
	 */
	struct UGOAPAction_AddFrequencyCost_Params
	{	};

	/**
	 * Function RaidGame.GOAPAction.ActionComplete
	 */
	struct UGOAPAction_ActionComplete_Params
	{	};

	/**
	 * Function RaidGame.GOAPBrain.GetController
	 */
	struct UGOAPBrain_GetController_Params
	{
	public:
		class ARaidGOAPController*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPBrain.FinishedChoice
	 */
	struct UGOAPBrain_FinishedChoice_Params
	{
	public:
		class FString                                              NewGoal;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPBrain.Brain_StartGoalChoice
	 */
	struct UGOAPBrain_Brain_StartGoalChoice_Params
	{
	public:
		ERaidAIState                                               StateCompleted;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPBrain.Brain_IsRunning
	 */
	struct UGOAPBrain_Brain_IsRunning_Params
	{
	public:
		class UGOAPBrain*                                          MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPBrain.Brain_IsNearCover
	 */
	struct UGOAPBrain_Brain_IsNearCover_Params
	{
	public:
		class UGOAPBrain*                                          MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             BoundsIn;                                                // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumberNear;                                              // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPBrain.Brain_IsHealthLow
	 */
	struct UGOAPBrain_Brain_IsHealthLow_Params
	{
	public:
		class UGOAPBrain*                                          MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      healthAmount;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPBrain.Brain_IsEnemyNearCover
	 */
	struct UGOAPBrain_Brain_IsEnemyNearCover_Params
	{
	public:
		class UGOAPBrain*                                          MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             BoundsIn;                                                // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumberNear;                                              // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPBrain.Brain_IsEnemyAimingAtme
	 */
	struct UGOAPBrain_Brain_IsEnemyAimingAtme_Params
	{
	public:
		class UGOAPBrain*                                          MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPBrain.Brain_IsCrouched
	 */
	struct UGOAPBrain_Brain_IsCrouched_Params
	{
	public:
		class UGOAPBrain*                                          MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPBrain.Brain_IsAnotherPlayerCloserThenTarget
	 */
	struct UGOAPBrain_Brain_IsAnotherPlayerCloserThenTarget_Params
	{
	public:
		class UGOAPBrain*                                          MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPBrain.Brain_ImIMoving
	 */
	struct UGOAPBrain_Brain_ImIMoving_Params
	{
	public:
		class UGOAPBrain*                                          MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPBrain.Brain_HasToReload
	 */
	struct UGOAPBrain_Brain_HasToReload_Params
	{
	public:
		class UGOAPBrain*                                          MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    bullletLowAmount;                                        // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPBrain.Brain_HasRecentlySeenSomeone
	 */
	struct UGOAPBrain_Brain_HasRecentlySeenSomeone_Params
	{
	public:
		class UGOAPBrain*                                          MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      recentamount;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPBrain.Brain_HasRecentlyPoppedSomeshotsOff
	 */
	struct UGOAPBrain_Brain_HasRecentlyPoppedSomeshotsOff_Params
	{
	public:
		class UGOAPBrain*                                          MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      recentamount;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPBrain.Brain_HasRecentlyLooted
	 */
	struct UGOAPBrain_Brain_HasRecentlyLooted_Params
	{
	public:
		class UGOAPBrain*                                          MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      timeSinceLastloot;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPBrain.Brain_HasRecentlyHeardSomeone
	 */
	struct UGOAPBrain_Brain_HasRecentlyHeardSomeone_Params
	{
	public:
		class UGOAPBrain*                                          MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      recentamount;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPBrain.Brain_HasRecentlyBeenSearching
	 */
	struct UGOAPBrain_Brain_HasRecentlyBeenSearching_Params
	{
	public:
		class UGOAPBrain*                                          MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      recentamount;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPBrain.Brain_HasRecentlyBeenPatrolling
	 */
	struct UGOAPBrain_Brain_HasRecentlyBeenPatrolling_Params
	{
	public:
		class UGOAPBrain*                                          MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      recentamount;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPBrain.Brain_HasRecentlyBeenDamaged
	 */
	struct UGOAPBrain_Brain_HasRecentlyBeenDamaged_Params
	{
	public:
		class UGOAPBrain*                                          MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      recentamount;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPBrain.Brain_HasRecentlyBeenAttacking
	 */
	struct UGOAPBrain_Brain_HasRecentlyBeenAttacking_Params
	{
	public:
		class UGOAPBrain*                                          MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      recentamount;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPBrain.Brain_HasPerceptionPeopleNear
	 */
	struct UGOAPBrain_Brain_HasPerceptionPeopleNear_Params
	{
	public:
		class UGOAPBrain*                                          MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Allies;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IUUI[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      distanceamount;                                          // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPBrain.Brain_HasLostEnemy
	 */
	struct UGOAPBrain_Brain_HasLostEnemy_Params
	{
	public:
		class UGOAPBrain*                                          MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      timeAmountforLost;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPBrain.Brain_HasEnemyLowHealth
	 */
	struct UGOAPBrain_Brain_HasEnemyLowHealth_Params
	{
	public:
		class UGOAPBrain*                                          MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      amountlow;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPBrain.Brain_HasEnemyLowAmmo
	 */
	struct UGOAPBrain_Brain_HasEnemyLowAmmo_Params
	{
	public:
		class UGOAPBrain*                                          MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Percentlow;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPBrain.Brain_HasEnemy
	 */
	struct UGOAPBrain_Brain_HasEnemy_Params
	{
	public:
		class UGOAPBrain*                                          MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPBrain.Brain_EnemyFar
	 */
	struct UGOAPBrain_Brain_EnemyFar_Params
	{
	public:
		class UGOAPBrain*                                          MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DistanceforFar;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GOAPBrain.Brain_CheckLOSToTarget
	 */
	struct UGOAPBrain_Brain_CheckLOSToTarget_Params
	{
	public:
		class UGOAPBrain*                                          MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GSAbilityTask_RotateToFace.RotateToFace
	 */
	struct UGSAbilityTask_RotateToFace_RotateToFace_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            TargetRotation;                                          // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRestrictSpeedToExpected;                                // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QEQ6[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGSAbilityTask_RotateToFace*                         ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GSAT_MoveSceneCompRelLocation.MoveSceneComponentRelativeLocation
	 */
	struct UGSAT_MoveSceneCompRelLocation_MoveSceneComponentRelativeLocation_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     SceneComponent;                                          // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCurveFloat*                                         OptionalInterpolationCurve;                              // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCurveVector*                                        OptionalVectorInterpolationCurve;                        // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGSAT_MoveSceneCompRelLocation*                      ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GSAT_PlayMontageAndWaitForEvent.PlayMontageAndWaitForEvent
	 */
	struct UGSAT_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               EventTags;                                               // 0x0018(0x0020)  (Parm, NativeAccessSpecifierPublic)
		float                                                      Rate;                                                    // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                StartSection;                                            // 0x003C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bStopWhenAbilityEnds;                                    // 0x0044(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_671C[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      AnimRootMotionTranslationScale;                          // 0x0048(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IHMO[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGSAT_PlayMontageAndWaitForEvent*                    ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GSAT_PlayMontageForMeshAndWaitForEvent.PlayMontageForMeshAndWaitForEvent
	 */
	struct UGSAT_PlayMontageForMeshAndWaitForEvent_PlayMontageForMeshAndWaitForEvent_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               EventTags;                                               // 0x0020(0x0020)  (Parm, NativeAccessSpecifierPublic)
		float                                                      Rate;                                                    // 0x0040(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                StartSection;                                            // 0x0044(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bStopWhenAbilityEnds;                                    // 0x004C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T6VP[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      AnimRootMotionTranslationScale;                          // 0x0050(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bReplicateMontage;                                       // 0x0054(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FOE7[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      OverrideBlendOutTimeForCancelAbility;                    // 0x0058(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OverrideBlendOutTimeForStopWhenEndAbility;               // 0x005C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGSAT_PlayMontageForMeshAndWaitForEvent*             ReturnValue;                                             // 0x0060(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GSAT_PlayMontageMulti.PlayMontageMulti
	 */
	struct UGSAT_PlayMontageMulti_PlayMontageMulti_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               EventTags;                                               // 0x0020(0x0020)  (Parm, NativeAccessSpecifierPublic)
		float                                                      Rate;                                                    // 0x0040(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                StartSection;                                            // 0x0044(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_C99W[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGSAT_PlayMontageMulti*                              ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GSAT_ServerWaitForClientTargetData.ServerWaitForClientTargetData
	 */
	struct UGSAT_ServerWaitForClientTargetData_ServerWaitForClientTargetData_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       TriggerOnce;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_242R[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGSAT_ServerWaitForClientTargetData*                 ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GSAT_ServerWaitForClientTargetData.OnTargetDataReplicatedCallback
	 */
	struct UGSAT_ServerWaitForClientTargetData_OnTargetDataReplicatedCallback_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Data;                                                    // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ActivationTag;                                           // 0x0028(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GSAT_WaitChangeFOV.WaitChangeFOV
	 */
	struct UGSAT_WaitChangeFOV_WaitChangeFOV_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCameraComponent*                                    CameraComponent;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TargetFOV;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCurveFloat*                                         OptionalInterpolationCurve;                              // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGSAT_WaitChangeFOV*                                 ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GSAT_WaitClimbableTarget.WaitForClimbableTarget
	 */
	struct UGSAT_WaitClimbableTarget_WaitForClimbableTarget_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCollisionProfileName                               TraceProfile;                                            // 0x0010(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      MaxRange;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TimerPeriod;                                             // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShowDebug;                                              // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5KK1[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGSAT_WaitClimbableTarget*                           ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GSAT_WaitClimbableTarget.PerformTrace
	 */
	struct UGSAT_WaitClimbableTarget_PerformTrace_Params
	{	};

	/**
	 * Function RaidGame.GSAT_WaitDelayOneFrame.WaitDelayOneFrame
	 */
	struct UGSAT_WaitDelayOneFrame_WaitDelayOneFrame_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGSAT_WaitDelayOneFrame*                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GSAT_WaitInputPressWithTags.WaitInputPressWithTags
	 */
	struct UGSAT_WaitInputPressWithTags_WaitInputPressWithTags_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               RequiredTags;                                            // 0x0008(0x0020)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               IgnoredTags;                                             // 0x0028(0x0020)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       bTestAlreadyPressed;                                     // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7QGX[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGSAT_WaitInputPressWithTags*                        ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GSAT_WaitInputPressWithTags.OnPressCallback
	 */
	struct UGSAT_WaitInputPressWithTags_OnPressCallback_Params
	{	};

	/**
	 * Function RaidGame.GSAT_WaitInteractableTarget.WaitForInteractableTarget
	 */
	struct UGSAT_WaitInteractableTarget_WaitForInteractableTarget_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCollisionProfileName                               TraceProfile;                                            // 0x0010(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      MaxRange;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TimerPeriod;                                             // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShowDebug;                                              // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_H5ML[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGSAT_WaitInteractableTarget*                        ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GSAT_WaitInteractableTarget.PerformTrace
	 */
	struct UGSAT_WaitInteractableTarget_PerformTrace_Params
	{	};

	/**
	 * Function RaidGame.GSAT_WaitTargetDataUsingActor.WaitTargetDataWithReusableActor
	 */
	struct UGSAT_WaitTargetDataUsingActor_WaitTargetDataWithReusableActor_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameplayTargetingConfirmation                             ConfirmationType;                                        // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4M9Y[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AGameplayAbilityTargetActor*                         InTargetActor;                                           // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCreateKeyIfNotValidForMorePredicting;                   // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BKSW[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGSAT_WaitTargetDataUsingActor*                      ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GSAT_WaitTargetDataUsingActor.OnTargetDataReplicatedCancelledCallback
	 */
	struct UGSAT_WaitTargetDataUsingActor_OnTargetDataReplicatedCancelledCallback_Params
	{	};

	/**
	 * Function RaidGame.GSAT_WaitTargetDataUsingActor.OnTargetDataReplicatedCallback
	 */
	struct UGSAT_WaitTargetDataUsingActor_OnTargetDataReplicatedCallback_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Data;                                                    // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ActivationTag;                                           // 0x0028(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GSAT_WaitTargetDataUsingActor.OnTargetDataReadyCallback
	 */
	struct UGSAT_WaitTargetDataUsingActor_OnTargetDataReadyCallback_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Data;                                                    // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GSAT_WaitTargetDataUsingActor.OnTargetDataCancelledCallback
	 */
	struct UGSAT_WaitTargetDataUsingActor_OnTargetDataCancelledCallback_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    Data;                                                    // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GSInteractable.UnregisterInteracter
	 */
	struct UGSInteractable_UnregisterInteracter_Params
	{
	public:
		class UPrimitiveComponent*                                 InteractionComponent;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              InteractingActor;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GSInteractable.RegisterInteracter
	 */
	struct UGSInteractable_RegisterInteracter_Params
	{
	public:
		class UPrimitiveComponent*                                 InteractionComponent;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              InteractingActor;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GSInteractable.PreInteract
	 */
	struct UGSInteractable_PreInteract_Params
	{
	public:
		class AActor*                                              InteractingActor;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 InteractionComponent;                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GSInteractable.PostInteract
	 */
	struct UGSInteractable_PostInteract_Params
	{
	public:
		class AActor*                                              InteractingActor;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 InteractionComponent;                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GSInteractable.IsAvailableForInteraction
	 */
	struct UGSInteractable_IsAvailableForInteraction_Params
	{
	public:
		class UPrimitiveComponent*                                 InteractionComponent;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GSInteractable.InteractableCancelInteraction
	 */
	struct UGSInteractable_InteractableCancelInteraction_Params
	{
	public:
		class UPrimitiveComponent*                                 InteractionComponent;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GSInteractable.GetPreInteractSyncType
	 */
	struct UGSInteractable_GetPreInteractSyncType_Params
	{
	public:
		bool                                                       bShouldSync;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAbilityTaskNetSyncType                                    Type;                                                    // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4YLK[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 InteractionComponent;                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GSInteractable.GetPostInteractSyncType
	 */
	struct UGSInteractable_GetPostInteractSyncType_Params
	{
	public:
		bool                                                       bShouldSync;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAbilityTaskNetSyncType                                    Type;                                                    // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WWWP[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 InteractionComponent;                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GSInteractable.GetInteractionDuration
	 */
	struct UGSInteractable_GetInteractionDuration_Params
	{
	public:
		class UPrimitiveComponent*                                 InteractionComponent;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.GSInteractable.CancelInteraction
	 */
	struct UGSInteractable_CancelInteraction_Params
	{
	public:
		class UPrimitiveComponent*                                 InteractionComponent;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.PoolActorInterface.OnPoolEnd
	 */
	struct UPoolActorInterface_OnPoolEnd_Params
	{	};

	/**
	 * Function RaidGame.PoolActorInterface.OnPoolBegin
	 */
	struct UPoolActorInterface_OnPoolBegin_Params
	{	};

	/**
	 * Function RaidGame.PoolManagerBPLibrary.WarmUp
	 */
	struct UPoolManagerBPLibrary_WarmUp_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ActorClass;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Count;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.PoolManagerBPLibrary.SpawnActor
	 */
	struct UPoolManagerBPLibrary_SpawnActor_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ActorClass;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		ESpawnActorCollisionHandlingMethod                         CollisionHandling;                                       // 0x0040(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HLKS[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Owner;                                                   // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.PoolManagerBPLibrary.ReleaseActor
	 */
	struct UPoolManagerBPLibrary_ReleaseActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.PoolManagerBPLibrary.FetchActorCollection
	 */
	struct UPoolManagerBPLibrary_FetchActorCollection_Params
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Count;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FRLC[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.PoolManagerBPLibrary.FetchActor
	 */
	struct UPoolManagerBPLibrary_FetchActor_Params
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.PoolManagerBPLibrary.EmptyByClass
	 */
	struct UPoolManagerBPLibrary_EmptyByClass_Params
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.PoolManagerBPLibrary.Empty
	 */
	struct UPoolManagerBPLibrary_Empty_Params
	{	};

	/**
	 * Function RaidGame.RaidAbilitySystemComponent.ServerCurrentMontageSetPlayRateForMesh
	 */
	struct URaidAbilitySystemComponent_ServerCurrentMontageSetPlayRateForMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              InMesh;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimMontage*                                        ClientAnimMontage;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InPlayRate;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidAbilitySystemComponent.ServerCurrentMontageSetNextSectionNameForMesh
	 */
	struct URaidAbilitySystemComponent_ServerCurrentMontageSetNextSectionNameForMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              InMesh;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimMontage*                                        ClientAnimMontage;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ClientPosition;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SectionName;                                             // 0x0014(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                NextSectionName;                                         // 0x001C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidAbilitySystemComponent.ServerCurrentMontageJumpToSectionNameForMesh
	 */
	struct URaidAbilitySystemComponent_ServerCurrentMontageJumpToSectionNameForMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              InMesh;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimMontage*                                        ClientAnimMontage;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SectionName;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidAbilitySystemComponent.RemoveGameplayCueLocal
	 */
	struct URaidAbilitySystemComponent_RemoveGameplayCueLocal_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              GameplayCueParameters;                                   // 0x0008(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidAbilitySystemComponent.OnRep_ReplicatedAnimMontageForMesh
	 */
	struct URaidAbilitySystemComponent_OnRep_ReplicatedAnimMontageForMesh_Params
	{	};

	/**
	 * Function RaidGame.RaidAbilitySystemComponent.NetPlayMultiMontageForMesh
	 */
	struct URaidAbilitySystemComponent_NetPlayMultiMontageForMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              InMesh;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimMontage*                                        Montage;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                StartSectionName;                                        // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidAbilitySystemComponent.K2_RemoveLooseGameplayTags
	 */
	struct URaidAbilitySystemComponent_K2_RemoveLooseGameplayTags_Params
	{
	public:
		struct FGameplayTagContainer                               GameplayTags;                                            // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Count;                                                   // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidAbilitySystemComponent.K2_RemoveLooseGameplayTag
	 */
	struct URaidAbilitySystemComponent_K2_RemoveLooseGameplayTag_Params
	{
	public:
		struct FGameplayTag                                        GameplayTag;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Count;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidAbilitySystemComponent.K2_GetTagCount
	 */
	struct URaidAbilitySystemComponent_K2_GetTagCount_Params
	{
	public:
		struct FGameplayTag                                        TagToCheck;                                              // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidAbilitySystemComponent.K2_AddLooseGameplayTags
	 */
	struct URaidAbilitySystemComponent_K2_AddLooseGameplayTags_Params
	{
	public:
		struct FGameplayTagContainer                               GameplayTags;                                            // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Count;                                                   // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidAbilitySystemComponent.K2_AddLooseGameplayTag
	 */
	struct URaidAbilitySystemComponent_K2_AddLooseGameplayTag_Params
	{
	public:
		struct FGameplayTag                                        GameplayTag;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Count;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidAbilitySystemComponent.GetCurrentPredictionKeyStatus
	 */
	struct URaidAbilitySystemComponent_GetCurrentPredictionKeyStatus_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidAbilitySystemComponent.FindAbilitySpecHandleForClass
	 */
	struct URaidAbilitySystemComponent_FindAbilitySpecHandleForClass_Params
	{
	public:
		class UClass*                                              AbilityClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             OptionalSourceObject;                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAbilitySpecHandle                          ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidAbilitySystemComponent.ExecuteGameplayCueLocal
	 */
	struct URaidAbilitySystemComponent_ExecuteGameplayCueLocal_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              GameplayCueParameters;                                   // 0x0008(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidAbilitySystemComponent.BP_ApplyGameplayEffectToTargetWithPrediction
	 */
	struct URaidAbilitySystemComponent_BP_ApplyGameplayEffectToTargetWithPrediction_Params
	{
	public:
		class UClass*                                              GameplayEffectClass;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilitySystemComponent*                             Target;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Level;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YARF[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayEffectContextHandle                        Context;                                                 // 0x0018(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FActiveGameplayEffectHandle                         ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidAbilitySystemComponent.BP_ApplyGameplayEffectToSelfWithPrediction
	 */
	struct URaidAbilitySystemComponent_BP_ApplyGameplayEffectToSelfWithPrediction_Params
	{
	public:
		class UClass*                                              GameplayEffectClass;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Level;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PHM2[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayEffectContextHandle                        EffectContext;                                           // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
		struct FActiveGameplayEffectHandle                         ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidAbilitySystemComponent.BatchRPCTryActivateAbility
	 */
	struct URaidAbilitySystemComponent_BatchRPCTryActivateAbility_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          InAbilityHandle;                                         // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       EndAbilityImmediately;                                   // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidAbilitySystemComponent.AddGameplayCueLocal
	 */
	struct URaidAbilitySystemComponent_AddGameplayCueLocal_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              GameplayCueParameters;                                   // 0x0008(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidAIController.ShootEnemy
	 */
	struct ARaidAIController_ShootEnemy_Params
	{	};

	/**
	 * Function RaidGame.RaidAIController.SetDebugState
	 */
	struct ARaidAIController_SetDebugState_Params
	{
	public:
		ERaidBotDebugState                                         StateIn;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidAIController.ReloadAIWeapon
	 */
	struct ARaidAIController_ReloadAIWeapon_Params
	{	};

	/**
	 * Function RaidGame.RaidAIController.OnTargetPerceptionUpdate
	 */
	struct ARaidAIController_OnTargetPerceptionUpdate_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAIStimulus                                         Stimulus;                                                // 0x0008(0x003C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidAIController.GetCurrentAmmoInClip
	 */
	struct ARaidAIController_GetCurrentAmmoInClip_Params
	{
	public:
		int32_t                                                    maxclipsize;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidAIController.FindClosestEnemyWithLOS
	 */
	struct ARaidAIController_FindClosestEnemyWithLOS_Params
	{
	public:
		class ARaidCharacter*                                      ExcludeEnemy;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidAIController.FindClosestEnemyCommando
	 */
	struct ARaidAIController_FindClosestEnemyCommando_Params
	{	};

	/**
	 * Function RaidGame.RaidAIController.FindClosestEnemy
	 */
	struct ARaidAIController_FindClosestEnemy_Params
	{	};

	/**
	 * Function RaidGame.RaidAIShipController.ShootEnemy
	 */
	struct ARaidAIShipController_ShootEnemy_Params
	{	};

	/**
	 * Function RaidGame.RaidAIShipController.GetNextLocationToMoveTo
	 */
	struct ARaidAIShipController_GetNextLocationToMoveTo_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidAIShipController.FindShipToAttack
	 */
	struct ARaidAIShipController_FindShipToAttack_Params
	{	};

	/**
	 * Function RaidGame.RaidAIShipController.FindClosestEnemyWithLOS
	 */
	struct ARaidAIShipController_FindClosestEnemyWithLOS_Params
	{
	public:
		class ARaidCharacter*                                      ExcludeEnemy;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidAIShipController.FindClosestEnemy
	 */
	struct ARaidAIShipController_FindClosestEnemy_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacter.WeaponObstructedDistance
	 */
	struct ARaidCharacter_WeaponObstructedDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.VaultEnd
	 */
	struct ARaidCharacter_VaultEnd_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacter.UsedMine
	 */
	struct ARaidCharacter_UsedMine_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacter.UpDateCharacterStat
	 */
	struct ARaidCharacter_UpDateCharacterStat_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacter.TryStand
	 */
	struct ARaidCharacter_TryStand_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacter.TryCrouch
	 */
	struct ARaidCharacter_TryCrouch_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacter.ToggleFireMode
	 */
	struct ARaidCharacter_ToggleFireMode_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacter.SwapToNewWeaponMesh
	 */
	struct ARaidCharacter_SwapToNewWeaponMesh_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacter.Stun
	 */
	struct ARaidCharacter_Stun_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.StopSprint
	 */
	struct ARaidCharacter_StopSprint_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacter.StartSprint
	 */
	struct ARaidCharacter_StartSprint_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacter.StaminaChargeStart
	 */
	struct ARaidCharacter_StaminaChargeStart_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacter.StaminaChargeEnd
	 */
	struct ARaidCharacter_StaminaChargeEnd_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacter.ShowIfWeapon
	 */
	struct ARaidCharacter_ShowIfWeapon_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacter.SetIsEquippingFalse
	 */
	struct ARaidCharacter_SetIsEquippingFalse_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacter.SetFrigate
	 */
	struct ARaidCharacter_SetFrigate_Params
	{
	public:
		class FString                                              CurrentFrigate;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.SetCamerRotationPitch
	 */
	struct ARaidCharacter_SetCamerRotationPitch_Params
	{
	public:
		float                                                      Val;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.SetCamerRotation
	 */
	struct ARaidCharacter_SetCamerRotation_Params
	{
	public:
		float                                                      Val;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.ServerUse
	 */
	struct ARaidCharacter_ServerUse_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacter.ServerUpDateCharacterStat
	 */
	struct ARaidCharacter_ServerUpDateCharacterStat_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacter.ServerStopSprint
	 */
	struct ARaidCharacter_ServerStopSprint_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacter.ServerStopAim
	 */
	struct ARaidCharacter_ServerStopAim_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacter.ServerStartSprint
	 */
	struct ARaidCharacter_ServerStartSprint_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacter.ServerStartMantle
	 */
	struct ARaidCharacter_ServerStartMantle_Params
	{
	public:
		class AActor*                                              MActor;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize                                 MLoc;                                                    // 0x0008(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.ServerSetTargeting
	 */
	struct ARaidCharacter_ServerSetTargeting_Params
	{
	public:
		bool                                                       bNewTargeting;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.ServerSetRunning
	 */
	struct ARaidCharacter_ServerSetRunning_Params
	{
	public:
		bool                                                       bNewRunning;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bToggle;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.ServerSetHead
	 */
	struct ARaidCharacter_ServerSetHead_Params
	{
	public:
		class USkeletalMesh*                                       NewHead;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.ServerSetFrigate
	 */
	struct ARaidCharacter_ServerSetFrigate_Params
	{
	public:
		class FString                                              CurrentFrigate;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.ServerSetChest
	 */
	struct ARaidCharacter_ServerSetChest_Params
	{
	public:
		class USkeletalMesh*                                       NewLegs;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.ServerSetBag
	 */
	struct ARaidCharacter_ServerSetBag_Params
	{
	public:
		class USkeletalMesh*                                       NewBag;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.ServerSellFrigate
	 */
	struct ARaidCharacter_ServerSellFrigate_Params
	{
	public:
		class FName                                                Frigate;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.ServerSaveItemInventory
	 */
	struct ARaidCharacter_ServerSaveItemInventory_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacter.ServerReloadTurret
	 */
	struct ARaidCharacter_ServerReloadTurret_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacter.ServerPlayVoiceSound
	 */
	struct ARaidCharacter_ServerPlayVoiceSound_Params
	{
	public:
		class FName                                                VoiceRowName;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EVoiceType                                                 VoiceType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.ServerMoveItemInInventory
	 */
	struct ARaidCharacter_ServerMoveItemInInventory_Params
	{
	public:
		class FString                                              InvName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SourceSLot;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    DestinationSlot;                                         // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.ServerLean
	 */
	struct ARaidCharacter_ServerLean_Params
	{
	public:
		uint32_t                                                   LeanangleIn;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.ServerHeadY
	 */
	struct ARaidCharacter_ServerHeadY_Params
	{
	public:
		float                                                      HeadYangle;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      BendC;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.ServerHeadX
	 */
	struct ARaidCharacter_ServerHeadX_Params
	{
	public:
		float                                                      HeadXangle;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.ServerFireProjectile
	 */
	struct ARaidCharacter_ServerFireProjectile_Params
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantizeNormal                           ShootDir;                                                // 0x000C(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ArrayNum;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.ServerEquipWeapon
	 */
	struct ARaidCharacter_ServerEquipWeapon_Params
	{
	public:
		class ARaidWeapon*                                         NewWeapon;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.ServerBuyShip
	 */
	struct ARaidCharacter_ServerBuyShip_Params
	{
	public:
		class FName                                                ship;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.ServerBuyFrigate
	 */
	struct ARaidCharacter_ServerBuyFrigate_Params
	{
	public:
		class FName                                                Frigate;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.ServerAddRemoveShip
	 */
	struct ARaidCharacter_ServerAddRemoveShip_Params
	{
	public:
		class FString                                              ShipToUse;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       RemoveShip;                                              // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.Server_CancelHealing
	 */
	struct ARaidCharacter_Server_CancelHealing_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacter.SendHelmOnRep
	 */
	struct ARaidCharacter_SendHelmOnRep_Params
	{
	public:
		class URaidUseableFrigateHelmComponent*                    Helm;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.SendGunnerSeatOnRep
	 */
	struct ARaidCharacter_SendGunnerSeatOnRep_Params
	{
	public:
		class URaidUseableTurretConrtrolComponent*                 GunnerTurret;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.SellFrigate
	 */
	struct ARaidCharacter_SellFrigate_Params
	{
	public:
		class FName                                                Frigate;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.SaveItemInventory
	 */
	struct ARaidCharacter_SaveItemInventory_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacter.RefreshInventoryEvent
	 */
	struct ARaidCharacter_RefreshInventoryEvent_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacter.PlayVoiceSound
	 */
	struct ARaidCharacter_PlayVoiceSound_Params
	{
	public:
		class FName                                                VoiceRowName;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EVoiceType                                                 VoiceType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.PlayVaultAnimations
	 */
	struct ARaidCharacter_PlayVaultAnimations_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.PlayClimbAnimations
	 */
	struct ARaidCharacter_PlayClimbAnimations_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.PawnTakenDamage
	 */
	struct ARaidCharacter_PawnTakenDamage_Params
	{
	public:
		float                                                      DamageTaken;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FGFT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class APawn*                                               PawnInstigator;                                          // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.OnRep_SetHead
	 */
	struct ARaidCharacter_OnRep_SetHead_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacter.OnRep_SetGunning
	 */
	struct ARaidCharacter_OnRep_SetGunning_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacter.OnRep_SetDriving
	 */
	struct ARaidCharacter_OnRep_SetDriving_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacter.OnRep_SetBag
	 */
	struct ARaidCharacter_OnRep_SetBag_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacter.OnRep_ServerSetChest
	 */
	struct ARaidCharacter_OnRep_ServerSetChest_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacter.OnRep_LastTakeHitInfo
	 */
	struct ARaidCharacter_OnRep_LastTakeHitInfo_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacter.OnRep_InventoryChanged
	 */
	struct ARaidCharacter_OnRep_InventoryChanged_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacter.OnRep_CurrentWeapon
	 */
	struct ARaidCharacter_OnRep_CurrentWeapon_Params
	{
	public:
		class ARaidWeapon*                                         LastWeapon;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.OnProxyHitReact
	 */
	struct ARaidCharacter_OnProxyHitReact_Params
	{
	public:
		struct FHitResult                                          Impact;                                                  // 0x0000(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.OnLowHealthBloodStart
	 */
	struct ARaidCharacter_OnLowHealthBloodStart_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacter.OnLowHealthBloodEnd
	 */
	struct ARaidCharacter_OnLowHealthBloodEnd_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacter.NetPlayVoiceSound
	 */
	struct ARaidCharacter_NetPlayVoiceSound_Params
	{
	public:
		class FName                                                VoiceRowName;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EVoiceType                                                 VoiceType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.NetMultiVault
	 */
	struct ARaidCharacter_NetMultiVault_Params
	{
	public:
		bool                                                       bClimb;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.NetMulti_PerformHitReaction
	 */
	struct ARaidCharacter_NetMulti_PerformHitReaction_Params
	{
	public:
		unsigned char                                              MontageIdx;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_N44P[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      StunTime;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.MultiStopAllMontages
	 */
	struct ARaidCharacter_MultiStopAllMontages_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacter.Multi_Deathevent
	 */
	struct ARaidCharacter_Multi_Deathevent_Params
	{
	public:
		float                                                      KillingDamage;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6ET8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0010)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
		class APawn*                                               InstigatingPawn;                                         // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              DamageCauser;                                            // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.Mulit_StopMontage
	 */
	struct ARaidCharacter_Mulit_StopMontage_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacter.Mulit_Dismember
	 */
	struct ARaidCharacter_Mulit_Dismember_Params
	{
	public:
		class FName                                                BoneHit;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize                                 ImpactNorm;                                              // 0x0008(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JPV2[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              DamageTypeClass;                                         // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.MoveItemInInventory
	 */
	struct ARaidCharacter_MoveItemInInventory_Params
	{
	public:
		class FString                                              InvName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SourceSLot;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    DestinationSlot;                                         // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.IsWeaponObstructed
	 */
	struct ARaidCharacter_IsWeaponObstructed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.IsVaulting
	 */
	struct ARaidCharacter_IsVaulting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.IsThrowingGrenade
	 */
	struct ARaidCharacter_IsThrowingGrenade_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.IsTargeting
	 */
	struct ARaidCharacter_IsTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.IsRunning
	 */
	struct ARaidCharacter_IsRunning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.IsPlayerFlyingShip
	 */
	struct ARaidCharacter_IsPlayerFlyingShip_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.IsPlayerAimingTurret
	 */
	struct ARaidCharacter_IsPlayerAimingTurret_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.IsHealing
	 */
	struct ARaidCharacter_IsHealing_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.IsFirstPerson
	 */
	struct ARaidCharacter_IsFirstPerson_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.IsFiring
	 */
	struct ARaidCharacter_IsFiring_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.IsAlive
	 */
	struct ARaidCharacter_IsAlive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.IsAiming
	 */
	struct ARaidCharacter_IsAiming_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.IsAIControlled
	 */
	struct ARaidCharacter_IsAIControlled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.HumanPlayerDied
	 */
	struct ARaidCharacter_HumanPlayerDied_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacter.HideIfWeapon
	 */
	struct ARaidCharacter_HideIfWeapon_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacter.HasWeaponGotFireModes
	 */
	struct ARaidCharacter_HasWeaponGotFireModes_Params
	{
	public:
		TArray<EFireMode>                                          AllowedFireModes;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		EFireMode                                                  CurrentFireMode;                                         // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.GetWiggle
	 */
	struct ARaidCharacter_GetWiggle_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.GetWeapon
	 */
	struct ARaidCharacter_GetWeapon_Params
	{
	public:
		class ARaidWeapon*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.GetThrustModifier
	 */
	struct ARaidCharacter_GetThrustModifier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.GetTargetingSpeedModifier
	 */
	struct ARaidCharacter_GetTargetingSpeedModifier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.GetStance
	 */
	struct ARaidCharacter_GetStance_Params
	{
	public:
		ERaidStance                                                ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.GetStamina
	 */
	struct ARaidCharacter_GetStamina_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.GetRunningSpeedModifier
	 */
	struct ARaidCharacter_GetRunningSpeedModifier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.GetOwnedShips
	 */
	struct ARaidCharacter_GetOwnedShips_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.GetOwnedFrigates
	 */
	struct ARaidCharacter_GetOwnedFrigates_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.GetMaxStamina
	 */
	struct ARaidCharacter_GetMaxStamina_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.GetMaxHealth
	 */
	struct ARaidCharacter_GetMaxHealth_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.GetMantledPosition
	 */
	struct ARaidCharacter_GetMantledPosition_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.GetMantledActor
	 */
	struct ARaidCharacter_GetMantledActor_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.GetLeanAmount
	 */
	struct ARaidCharacter_GetLeanAmount_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.GetIsEquippingWeapon
	 */
	struct ARaidCharacter_GetIsEquippingWeapon_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.GetHealth
	 */
	struct ARaidCharacter_GetHealth_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.GetHeadYAmount
	 */
	struct ARaidCharacter_GetHeadYAmount_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.GetHeadXAmount
	 */
	struct ARaidCharacter_GetHeadXAmount_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.GetCurrentShips
	 */
	struct ARaidCharacter_GetCurrentShips_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.GetCurrentFrigates
	 */
	struct ARaidCharacter_GetCurrentFrigates_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.GetCharacterVoiceType
	 */
	struct ARaidCharacter_GetCharacterVoiceType_Params
	{
	public:
		EVoiceType                                                 ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.GetBendAmount
	 */
	struct ARaidCharacter_GetBendAmount_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.GetAimOffsets
	 */
	struct ARaidCharacter_GetAimOffsets_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.DrivingTurret
	 */
	struct ARaidCharacter_DrivingTurret_Params
	{
	public:
		class URaidUseableTurretConrtrolComponent*                 TurretOut;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.DrivingFrigate
	 */
	struct ARaidCharacter_DrivingFrigate_Params
	{
	public:
		class URaidUseableFrigateHelmComponent*                    HelmOut;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.DismemberEvent
	 */
	struct ARaidCharacter_DismemberEvent_Params
	{
	public:
		class FName                                                BoneHit;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize                                 ImpactNorm;                                              // 0x0008(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5P1I[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              DamageTypeClass;                                         // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.CrouchPressed
	 */
	struct ARaidCharacter_CrouchPressed_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacter.Client_WeaponHit
	 */
	struct ARaidCharacter_Client_WeaponHit_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    directionInt;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              DamageType;                                              // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.Client_HealStaminaBurn
	 */
	struct ARaidCharacter_Client_HealStaminaBurn_Params
	{
	public:
		float                                                      amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.BuyShip
	 */
	struct ARaidCharacter_BuyShip_Params
	{
	public:
		class FName                                                ship;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.BuyFrigate
	 */
	struct ARaidCharacter_BuyFrigate_Params
	{
	public:
		class FName                                                Frigate;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacter.AddRemoveShip
	 */
	struct ARaidCharacter_AddRemoveShip_Params
	{
	public:
		class FString                                              CurrentShip;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       RemoveShip;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidBot.StartDeactiveEvent
	 */
	struct ARaidBot_StartDeactiveEvent_Params
	{	};

	/**
	 * Function RaidGame.RaidBot.StartActiveEvent
	 */
	struct ARaidBot_StartActiveEvent_Params
	{	};

	/**
	 * Function RaidGame.RaidBot.SetDebugState
	 */
	struct ARaidBot_SetDebugState_Params
	{
	public:
		ERaidBotDebugState                                         Statin;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidBot.HasTarget
	 */
	struct ARaidBot_HasTarget_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidBot.GetMyBucket
	 */
	struct ARaidBot_GetMyBucket_Params
	{
	public:
		ESignifManagerBuckets                                      ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidBot.GetDebugState
	 */
	struct ARaidBot_GetDebugState_Params
	{
	public:
		ERaidBotDebugState                                         ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacterAnimInstance.PlayVaultAnimation
	 */
	struct URaidCharacterAnimInstance_PlayVaultAnimation_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacterAnimInstance.PlayClimbAnimation
	 */
	struct URaidCharacterAnimInstance_PlayClimbAnimation_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacterAnimInstance.IsMoving
	 */
	struct URaidCharacterAnimInstance_IsMoving_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacterAnimInstance.GetGunShake
	 */
	struct URaidCharacterAnimInstance_GetGunShake_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacterAnimInstance.CalculateGunLag
	 */
	struct URaidCharacterAnimInstance_CalculateGunLag_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Translation;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Rotation;                                                // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacterMovement.WantsToSprint
	 */
	struct URaidCharacterMovement_WantsToSprint_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacterMovement.IsSprinting
	 */
	struct URaidCharacterMovement_IsSprinting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacterMovement.IsChangingStance
	 */
	struct URaidCharacterMovement_IsChangingStance_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacterMovement.GetDesiredStance
	 */
	struct URaidCharacterMovement_GetDesiredStance_Params
	{
	public:
		ERaidStance                                                ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacterMovement.GetCurrentStance
	 */
	struct URaidCharacterMovement_GetCurrentStance_Params
	{
	public:
		ERaidStance                                                ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacterMovement.CanSprint
	 */
	struct URaidCharacterMovement_CanSprint_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacterTurrent.ServerUse
	 */
	struct ARaidCharacterTurrent_ServerUse_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacterTurrent.ServerFireProjectile
	 */
	struct ARaidCharacterTurrent_ServerFireProjectile_Params
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantizeNormal                           ShootDir;                                                // 0x000C(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ArrayNum;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacterTurrent.PlayerUnPressedZoom
	 */
	struct ARaidCharacterTurrent_PlayerUnPressedZoom_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacterTurrent.PlayerPressedZoom
	 */
	struct ARaidCharacterTurrent_PlayerPressedZoom_Params
	{	};

	/**
	 * Function RaidGame.RaidCharacterTurrent.NetMultiFire
	 */
	struct ARaidCharacterTurrent_NetMultiFire_Params
	{
	public:
		int32_t                                                    SocketArrayNum;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacterTurrent.MultiFireProjectile
	 */
	struct ARaidCharacterTurrent_MultiFireProjectile_Params
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantizeNormal                           ShootDir;                                                // 0x000C(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ArrayNum;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacterTurrent.GetTheRequiredrotation
	 */
	struct ARaidCharacterTurrent_GetTheRequiredrotation_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacterTurrent.GetController
	 */
	struct ARaidCharacterTurrent_GetController_Params
	{
	public:
		class APlayerController*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCharacterTurrent.FiredTurrentEvent
	 */
	struct ARaidCharacterTurrent_FiredTurrentEvent_Params
	{
	public:
		int32_t                                                    SocketArrayNum;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.UsedInLevelDroppod
	 */
	struct ARaidPlayerController_UsedInLevelDroppod_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.TriggerMouseRMBUp
	 */
	struct ARaidPlayerController_TriggerMouseRMBUp_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.TriggerMouseRMBDown
	 */
	struct ARaidPlayerController_TriggerMouseRMBDown_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.TriggerMouseLMBUp
	 */
	struct ARaidPlayerController_TriggerMouseLMBUp_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.TriggerMouseLMBDown
	 */
	struct ARaidPlayerController_TriggerMouseLMBDown_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.TransitionStateChange
	 */
	struct ARaidPlayerController_TransitionStateChange_Params
	{
	public:
		EPlayerTranisitionState                                    From;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPlayerTranisitionState                                    To;                                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.ToggleMouseCursorUse
	 */
	struct ARaidPlayerController_ToggleMouseCursorUse_Params
	{
	public:
		bool                                                       CursorOn;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.ToggleMouseControlDebug
	 */
	struct ARaidPlayerController_ToggleMouseControlDebug_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.ToggleInventory
	 */
	struct ARaidPlayerController_ToggleInventory_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.ToggleControllerLerp
	 */
	struct ARaidPlayerController_ToggleControllerLerp_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.teststeamUI
	 */
	struct ARaidPlayerController_teststeamUI_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.T17_WipeMySelf
	 */
	struct ARaidPlayerController_T17_WipeMySelf_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.T17_Teleport
	 */
	struct ARaidPlayerController_T17_Teleport_Params
	{
	public:
		struct FVector                                             LocationToGoTo;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.T17_SpawnMapNode
	 */
	struct ARaidPlayerController_T17_SpawnMapNode_Params
	{
	public:
		class FString                                              MapName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.T17_SetSpeed
	 */
	struct ARaidPlayerController_T17_SetSpeed_Params
	{
	public:
		int32_t                                                    NewSpeed;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.T17_PauseToggleRaidTimer
	 */
	struct ARaidPlayerController_T17_PauseToggleRaidTimer_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.T17_InfiniteAmmo
	 */
	struct ARaidPlayerController_T17_InfiniteAmmo_Params
	{
	public:
		bool                                                       Activate;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.T17_GodMode
	 */
	struct ARaidPlayerController_T17_GodMode_Params
	{
	public:
		bool                                                       Activate;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.T17_GhostMode
	 */
	struct ARaidPlayerController_T17_GhostMode_Params
	{
	public:
		bool                                                       Activate;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.T17_ChangeShopKeeper
	 */
	struct ARaidPlayerController_T17_ChangeShopKeeper_Params
	{
	public:
		int32_t                                                    NewShop;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.SwitchVIPStatus
	 */
	struct ARaidPlayerController_SwitchVIPStatus_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.Suicide
	 */
	struct ARaidPlayerController_Suicide_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.SimulateInputKey
	 */
	struct ARaidPlayerController_SimulateInputKey_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPressed;                                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.ShowHangerKeyPad
	 */
	struct ARaidPlayerController_ShowHangerKeyPad_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.ShipDockingToStation
	 */
	struct ARaidPlayerController_ShipDockingToStation_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.ShipBreaching
	 */
	struct ARaidPlayerController_ShipBreaching_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.SetPreviousComp
	 */
	struct ARaidPlayerController_SetPreviousComp_Params
	{
	public:
		class URaidUseableComponent*                               CompTo;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.SetGodMode
	 */
	struct ARaidPlayerController_SetGodMode_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.ServerToggleControllerLerp
	 */
	struct ARaidPlayerController_ServerToggleControllerLerp_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.ServerSuicide
	 */
	struct ARaidPlayerController_ServerSuicide_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.ServerSendPlayerInvite
	 */
	struct ARaidPlayerController_ServerSendPlayerInvite_Params
	{
	public:
		class FString                                              CrewNameName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.ServerSay
	 */
	struct ARaidPlayerController_ServerSay_Params
	{
	public:
		class FString                                              Msg;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.ServerLeaveGroup
	 */
	struct ARaidPlayerController_ServerLeaveGroup_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.ServerLandFrigate
	 */
	struct ARaidPlayerController_ServerLandFrigate_Params
	{
	public:
		class ARaidSpaceshipInside*                                ShipInside;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.ServerKickCrewMember
	 */
	struct ARaidPlayerController_ServerKickCrewMember_Params
	{
	public:
		class FString                                              CrewNameName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.ServerEnterSpaceRaidVolume
	 */
	struct ARaidPlayerController_ServerEnterSpaceRaidVolume_Params
	{
	public:
		class ARaidSpaceDeploy*                                    VolumeIn;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.ServerEnterLandRaidVolume
	 */
	struct ARaidPlayerController_ServerEnterLandRaidVolume_Params
	{
	public:
		class ARaidPlanetDeploy*                                   VolumeIn;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.ServerDeploySpaceRaid
	 */
	struct ARaidPlayerController_ServerDeploySpaceRaid_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.ServerDeployShipFromHanger
	 */
	struct ARaidPlayerController_ServerDeployShipFromHanger_Params
	{
	public:
		class FString                                              ShipToUse;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.ServerDeployLandRaid
	 */
	struct ARaidPlayerController_ServerDeployLandRaid_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.ServerCreateGroup
	 */
	struct ARaidPlayerController_ServerCreateGroup_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.ServerCheat
	 */
	struct ARaidPlayerController_ServerCheat_Params
	{
	public:
		class FString                                              Msg;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.ServerchangeCameraMode
	 */
	struct ARaidPlayerController_ServerchangeCameraMode_Params
	{
	public:
		int32_t                                                    NewMode;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.ServerAcceptCrewInvite
	 */
	struct ARaidPlayerController_ServerAcceptCrewInvite_Params
	{
	public:
		class FString                                              CrewNameName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.Server_T17_Teleport
	 */
	struct ARaidPlayerController_Server_T17_Teleport_Params
	{
	public:
		struct FVector                                             LocationToGoTo;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.Server_T17_SpawnMapNode
	 */
	struct ARaidPlayerController_Server_T17_SpawnMapNode_Params
	{
	public:
		class FString                                              MapName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.Server_T17_SetSpeed
	 */
	struct ARaidPlayerController_Server_T17_SetSpeed_Params
	{
	public:
		int32_t                                                    NewSpeed;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.Server_SetGodMode
	 */
	struct ARaidPlayerController_Server_SetGodMode_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.Server_PushExecCommand
	 */
	struct ARaidPlayerController_Server_PushExecCommand_Params
	{
	public:
		class FString                                              MessageIn;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.Server_KeySend
	 */
	struct ARaidPlayerController_Server_KeySend_Params
	{
	public:
		class URaidUseableAirLockComponent*                        Keypad;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              KeyNumber;                                               // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.SendPlayerInvite
	 */
	struct ARaidPlayerController_SendPlayerInvite_Params
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.SendKeyCheck
	 */
	struct ARaidPlayerController_SendKeyCheck_Params
	{
	public:
		class FString                                              KeyNumber;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.Say
	 */
	struct ARaidPlayerController_Say_Params
	{
	public:
		class FString                                              Msg;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.RegisterAsCaptain
	 */
	struct ARaidPlayerController_RegisterAsCaptain_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.ReceivedCrewInvite
	 */
	struct ARaidPlayerController_ReceivedCrewInvite_Params
	{
	public:
		class FString                                              CrewName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.PlayerTakenDamageEvent
	 */
	struct ARaidPlayerController_PlayerTakenDamageEvent_Params
	{
	public:
		float                                                      DamageAmount;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    directionInt;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              DamageType;                                              // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.PlayBreachMovie
	 */
	struct ARaidPlayerController_PlayBreachMovie_Params
	{
	public:
		class FName                                                FrigType;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              BreachedActor;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.PickShipFromHanger
	 */
	struct ARaidPlayerController_PickShipFromHanger_Params
	{
	public:
		class FString                                              ShipToUse;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.OnLeaderboardReadComplete
	 */
	struct ARaidPlayerController_OnLeaderboardReadComplete_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.OnFrigatesBeenHitAndInside
	 */
	struct ARaidPlayerController_OnFrigatesBeenHitAndInside_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.OnClientNoAmmoForTuret
	 */
	struct ARaidPlayerController_OnClientNoAmmoForTuret_Params
	{
	public:
		float                                                      ReloadTime;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.OnClientFiredTurret
	 */
	struct ARaidPlayerController_OnClientFiredTurret_Params
	{
	public:
		float                                                      TimeforReload;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.NotTheCaptain
	 */
	struct ARaidPlayerController_NotTheCaptain_Params
	{
	public:
		bool                                                       JustCrew;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.NotifiyBreached
	 */
	struct ARaidPlayerController_NotifiyBreached_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.LeaveSpaceRaidVolume
	 */
	struct ARaidPlayerController_LeaveSpaceRaidVolume_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.LeavelandRaidVolume
	 */
	struct ARaidPlayerController_LeavelandRaidVolume_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.LeaveGroup
	 */
	struct ARaidPlayerController_LeaveGroup_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.LeaveEvacRaidVolume
	 */
	struct ARaidPlayerController_LeaveEvacRaidVolume_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.LeaveEnterSpaceAtmosVolume
	 */
	struct ARaidPlayerController_LeaveEnterSpaceAtmosVolume_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.LaunchSpaceRaid
	 */
	struct ARaidPlayerController_LaunchSpaceRaid_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.LaunchLandTeamRaid
	 */
	struct ARaidPlayerController_LaunchLandTeamRaid_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.KickCrewMember
	 */
	struct ARaidPlayerController_KickCrewMember_Params
	{
	public:
		class FString                                              CrewName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.KeyEnterCheck
	 */
	struct ARaidPlayerController_KeyEnterCheck_Params
	{
	public:
		bool                                                       failed;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.IsPlayerTheCaptain
	 */
	struct ARaidPlayerController_IsPlayerTheCaptain_Params
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.Headshot
	 */
	struct ARaidPlayerController_Headshot_Params
	{
	public:
		bool                                                       ArmourHit;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.HangerEvent
	 */
	struct ARaidPlayerController_HangerEvent_Params
	{
	public:
		EHangerEvent                                               HEvent;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.GetPreviousComp
	 */
	struct ARaidPlayerController_GetPreviousComp_Params
	{
	public:
		class URaidUseableComponent*                               ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.GetPoolForVFX
	 */
	struct ARaidPlayerController_GetPoolForVFX_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.GetPoolForProj
	 */
	struct ARaidPlayerController_GetPoolForProj_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.GetMouseCursorUP
	 */
	struct ARaidPlayerController_GetMouseCursorUP_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.GetIsPlayerACaptain
	 */
	struct ARaidPlayerController_GetIsPlayerACaptain_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.GetGroup
	 */
	struct ARaidPlayerController_GetGroup_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.GetCurrentTurretDetails
	 */
	struct ARaidPlayerController_GetCurrentTurretDetails_Params
	{
	public:
		class FText                                                FrigateName;                                             // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		class FText                                                FrigateDesc;                                             // 0x0018(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		int32_t                                                    AmmoLeft;                                                // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxAmmo;                                                 // 0x0034(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.GetCurrentTransState
	 */
	struct ARaidPlayerController_GetCurrentTransState_Params
	{
	public:
		EPlayerTranisitionState                                    ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.GetCurrentDockingVolume
	 */
	struct ARaidPlayerController_GetCurrentDockingVolume_Params
	{
	public:
		class URaidDockingComponent*                               ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.GetallCrewNames
	 */
	struct ARaidPlayerController_GetallCrewNames_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.FrigatesBeenHitandInside
	 */
	struct ARaidPlayerController_FrigatesBeenHitandInside_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.FrigateDockingToStation
	 */
	struct ARaidPlayerController_FrigateDockingToStation_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.ForceStopSequnce
	 */
	struct ARaidPlayerController_ForceStopSequnce_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.FirstStartComic
	 */
	struct ARaidPlayerController_FirstStartComic_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.EventShowMouse
	 */
	struct ARaidPlayerController_EventShowMouse_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.Event_UsingHangerConsole
	 */
	struct ARaidPlayerController_Event_UsingHangerConsole_Params
	{
	public:
		TArray<class FString>                                      ShipsIN;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.Event_ShowLoading
	 */
	struct ARaidPlayerController_Event_ShowLoading_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.Event_OpenShipVendorMenu
	 */
	struct ARaidPlayerController_Event_OpenShipVendorMenu_Params
	{
	public:
		struct FShipShop                                           StockInShop;                                             // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.Event_OpenCaptainWidget
	 */
	struct ARaidPlayerController_Event_OpenCaptainWidget_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.Event_HideLoading
	 */
	struct ARaidPlayerController_Event_HideLoading_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.EvacRaid
	 */
	struct ARaidPlayerController_EvacRaid_Params
	{
	public:
		bool                                                       Frigate;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RWUT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                FrigNameIn;                                              // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.EnteringPlanetSpaceVolume
	 */
	struct ARaidPlayerController_EnteringPlanetSpaceVolume_Params
	{
	public:
		bool                                                       Boarded;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.EnteringPlanetRaidVolume
	 */
	struct ARaidPlayerController_EnteringPlanetRaidVolume_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.EnteringLandRaidVolume
	 */
	struct ARaidPlayerController_EnteringLandRaidVolume_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.EnterEvacRaidVolume
	 */
	struct ARaidPlayerController_EnterEvacRaidVolume_Params
	{
	public:
		class ARaidPlanetEvac*                                     VolumeIn;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.EnteredPlanetAtmos
	 */
	struct ARaidPlayerController_EnteredPlanetAtmos_Params
	{
	public:
		class ARaidSpaceshipInside*                                ShipInside;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.DeathToMainMenu
	 */
	struct ARaidPlayerController_DeathToMainMenu_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.CreateGroup
	 */
	struct ARaidPlayerController_CreateGroup_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.ClientUsingHangerConsole
	 */
	struct ARaidPlayerController_ClientUsingHangerConsole_Params
	{
	public:
		TArray<class FString>                                      ShipsIN;                                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.ClientTransChange
	 */
	struct ARaidPlayerController_ClientTransChange_Params
	{
	public:
		EPlayerTranisitionState                                    NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       breached;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.ClientToggleInventory
	 */
	struct ARaidPlayerController_ClientToggleInventory_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.ClientStartOnlineGame
	 */
	struct ARaidPlayerController_ClientStartOnlineGame_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.ClientStarthangerKeyPad
	 */
	struct ARaidPlayerController_ClientStarthangerKeyPad_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.ClientStartAbility
	 */
	struct ARaidPlayerController_ClientStartAbility_Params
	{
	public:
		EInteractionAbilityTypes                                   AbTypeToCause;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.ClientShowShopInventory
	 */
	struct ARaidPlayerController_ClientShowShopInventory_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.ClientShowPlayerStorage
	 */
	struct ARaidPlayerController_ClientShowPlayerStorage_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.ClientShowLoading
	 */
	struct ARaidPlayerController_ClientShowLoading_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.ClientShowDebugSphere
	 */
	struct ARaidPlayerController_ClientShowDebugSphere_Params
	{
	public:
		struct FVector                                             LocationTo;                                              // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.ClientShowDebugLine
	 */
	struct ARaidPlayerController_ClientShowDebugLine_Params
	{
	public:
		struct FVector                                             LocationFrom;                                            // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LocationTo;                                              // 0x000C(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.ClientSetSpectatorCamera
	 */
	struct ARaidPlayerController_ClientSetSpectatorCamera_Params
	{
	public:
		struct FVector                                             CameraLocation;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            CameraRotation;                                          // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.ClientSendRoundEndEvent
	 */
	struct ARaidPlayerController_ClientSendRoundEndEvent_Params
	{
	public:
		bool                                                       bIsWinner;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_37OM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ExpendedTimeInSeconds;                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.ClientReceivedCrewInvite
	 */
	struct ARaidPlayerController_ClientReceivedCrewInvite_Params
	{
	public:
		class FString                                              CrewNameName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.ClientPlayerHasDied
	 */
	struct ARaidPlayerController_ClientPlayerHasDied_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.ClientOpenShipVendorMenu
	 */
	struct ARaidPlayerController_ClientOpenShipVendorMenu_Params
	{
	public:
		struct FShipShop                                           StockInShop;                                             // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.ClientOpenCaptainWidget
	 */
	struct ARaidPlayerController_ClientOpenCaptainWidget_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.ClientNotTheCaptain
	 */
	struct ARaidPlayerController_ClientNotTheCaptain_Params
	{
	public:
		bool                                                       JustCrew;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.ClientNoAmmoForTuret
	 */
	struct ARaidPlayerController_ClientNoAmmoForTuret_Params
	{
	public:
		float                                                      ReloadTime;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.ClientKeyEnterCheck
	 */
	struct ARaidPlayerController_ClientKeyEnterCheck_Params
	{
	public:
		bool                                                       failed;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.ClientHideLoading
	 */
	struct ARaidPlayerController_ClientHideLoading_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.ClientHeadshot
	 */
	struct ARaidPlayerController_ClientHeadshot_Params
	{
	public:
		bool                                                       ArmourHit;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.ClientHangerEvent
	 */
	struct ARaidPlayerController_ClientHangerEvent_Params
	{
	public:
		EHangerEvent                                               HEvent;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.ClientGameStarted
	 */
	struct ARaidPlayerController_ClientGameStarted_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.ClientFrigateDockingToStation
	 */
	struct ARaidPlayerController_ClientFrigateDockingToStation_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.ClientFiredTurret
	 */
	struct ARaidPlayerController_ClientFiredTurret_Params
	{
	public:
		float                                                      TimeforReload;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.ClientEnteringPlanetSpaceVolume
	 */
	struct ARaidPlayerController_ClientEnteringPlanetSpaceVolume_Params
	{
	public:
		bool                                                       Boarded;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.ClientEnteringPlanetRaidVolume
	 */
	struct ARaidPlayerController_ClientEnteringPlanetRaidVolume_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.ClientEnteringLandRaidVolume
	 */
	struct ARaidPlayerController_ClientEnteringLandRaidVolume_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.ClientEndOnlineGame
	 */
	struct ARaidPlayerController_ClientEndOnlineGame_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.ClientDissconnectedFromServer
	 */
	struct ARaidPlayerController_ClientDissconnectedFromServer_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.ClientCantLandEmemyOnBoard
	 */
	struct ARaidPlayerController_ClientCantLandEmemyOnBoard_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.ClientBulletWizzPastHead
	 */
	struct ARaidPlayerController_ClientBulletWizzPastHead_Params
	{
	public:
		EBulletType                                                BulletType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.ClientBodyshot
	 */
	struct ARaidPlayerController_ClientBodyshot_Params
	{
	public:
		bool                                                       ArmourHit;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.ClientBeenBreached
	 */
	struct ARaidPlayerController_ClientBeenBreached_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.Client_EvacRaidTurret
	 */
	struct ARaidPlayerController_Client_EvacRaidTurret_Params
	{
	public:
		class FName                                                FrigNameIn;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.ClearPreviousComp
	 */
	struct ARaidPlayerController_ClearPreviousComp_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.changecameraweightingRot
	 */
	struct ARaidPlayerController_changecameraweightingRot_Params
	{
	public:
		float                                                      maxdist;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      minamount;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      maxamount;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.changecameraweightingloc
	 */
	struct ARaidPlayerController_changecameraweightingloc_Params
	{
	public:
		float                                                      maxdist;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      minamount;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      maxamount;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.changeCameraMode
	 */
	struct ARaidPlayerController_changeCameraMode_Params
	{
	public:
		int32_t                                                    NewMode;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.CantLandEmemyOnBoard
	 */
	struct ARaidPlayerController_CantLandEmemyOnBoard_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.CantFireWeaponBroken
	 */
	struct ARaidPlayerController_CantFireWeaponBroken_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.BulletWizzPastHead
	 */
	struct ARaidPlayerController_BulletWizzPastHead_Params
	{
	public:
		EBulletType                                                BulletType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.Bodyshot
	 */
	struct ARaidPlayerController_Bodyshot_Params
	{
	public:
		bool                                                       ArmourHit;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerController.BeenBreached
	 */
	struct ARaidPlayerController_BeenBreached_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerController.AcceptCrewInvite
	 */
	struct ARaidPlayerController_AcceptCrewInvite_Params
	{
	public:
		class FString                                              CrewName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCheatManager.ToggleMatchTimer
	 */
	struct URaidCheatManager_ToggleMatchTimer_Params
	{	};

	/**
	 * Function RaidGame.RaidCheatManager.ToggleInfiniteClip
	 */
	struct URaidCheatManager_ToggleInfiniteClip_Params
	{	};

	/**
	 * Function RaidGame.RaidCheatManager.ToggleInfiniteAmmo
	 */
	struct URaidCheatManager_ToggleInfiniteAmmo_Params
	{	};

	/**
	 * Function RaidGame.RaidCheatManager.SpawnBot
	 */
	struct URaidCheatManager_SpawnBot_Params
	{	};

	/**
	 * Function RaidGame.RaidCheatManager.ForceMatchStart
	 */
	struct URaidCheatManager_ForceMatchStart_Params
	{	};

	/**
	 * Function RaidGame.RaidCheatManager.Cheat
	 */
	struct URaidCheatManager_Cheat_Params
	{
	public:
		class FString                                              Msg;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCheatManager.ChangeTeam
	 */
	struct URaidCheatManager_ChangeTeam_Params
	{
	public:
		int32_t                                                    NewTeamNumber;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCoverMarker.ReserveCover
	 */
	struct ARaidCoverMarker_ReserveCover_Params
	{
	public:
		class AActor*                                              ReservingActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCoverMarker.IsCoverLocationFreeConst
	 */
	struct ARaidCoverMarker_IsCoverLocationFreeConst_Params
	{
	public:
		class AActor*                                              ReservingActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCoverMarker.IsCoverLocationFree
	 */
	struct ARaidCoverMarker_IsCoverLocationFree_Params
	{
	public:
		class AActor*                                              ReservingActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCoverMarker.GetDesiredRotation
	 */
	struct ARaidCoverMarker_GetDesiredRotation_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidCoverMarker.CancelReservation
	 */
	struct ARaidCoverMarker_CancelReservation_Params
	{
	public:
		class AActor*                                              InActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidDebugAIGymSpawner.TimedSpawning
	 */
	struct ARaidDebugAIGymSpawner_TimedSpawning_Params
	{	};

	/**
	 * Function RaidGame.RaidDockingComponent.ShipDocking
	 */
	struct URaidDockingComponent_ShipDocking_Params
	{
	public:
		class ARaidSpaceship*                                      DockingShip;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidDockingComponent.FrigateExiting
	 */
	struct URaidDockingComponent_FrigateExiting_Params
	{
	public:
		class ARaidFrigate*                                        DockingShip;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidDockingComponent.FrigateDocking
	 */
	struct URaidDockingComponent_FrigateDocking_Params
	{
	public:
		class ARaidFrigate*                                        DockingShip;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidUseable.OnUsed
	 */
	struct ARaidUseable_OnUsed_Params
	{
	public:
		class APawn*                                               InstigatorPawn;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidUseable.GetInteractionInfo
	 */
	struct ARaidUseable_GetInteractionInfo_Params
	{
	public:
		struct FInteractionInfo                                    ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidFrigate.ShipDocking
	 */
	struct ARaidFrigate_ShipDocking_Params
	{
	public:
		class ARaidSpaceship*                                      DockingShip;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    DockNumber;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidFrigate.ServerReloadFrigate
	 */
	struct ARaidFrigate_ServerReloadFrigate_Params
	{	};

	/**
	 * Function RaidGame.RaidFrigate.ServerFireFrigate
	 */
	struct ARaidFrigate_ServerFireFrigate_Params
	{	};

	/**
	 * Function RaidGame.RaidFrigate.ServerDockingToPlanet
	 */
	struct ARaidFrigate_ServerDockingToPlanet_Params
	{	};

	/**
	 * Function RaidGame.RaidFrigate.ServerDockingToNode
	 */
	struct ARaidFrigate_ServerDockingToNode_Params
	{
	public:
		class URaidDockingComponent*                               DockingComp;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidFrigate.Server_ChangeUpByte
	 */
	struct ARaidFrigate_Server_ChangeUpByte_Params
	{
	public:
		unsigned char                                              NewByte;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidFrigate.Server_ChangeTurnByte
	 */
	struct ARaidFrigate_Server_ChangeTurnByte_Params
	{
	public:
		unsigned char                                              NewByte;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidFrigate.OnFaceRotation
	 */
	struct ARaidFrigate_OnFaceRotation_Params
	{
	public:
		struct FRotator                                            NewRotation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidFrigate.GetUpByte
	 */
	struct ARaidFrigate_GetUpByte_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidFrigate.GetTurretDestroyed
	 */
	struct ARaidFrigate_GetTurretDestroyed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidFrigate.GetTurnByte
	 */
	struct ARaidFrigate_GetTurnByte_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidFrigate.GetSystemsHealth
	 */
	struct ARaidFrigate_GetSystemsHealth_Params
	{
	public:
		TArray<struct FSystemHealth>                               ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidFrigate.GetShipName
	 */
	struct ARaidFrigate_GetShipName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidFrigate.GetLifeSupportDestroyed
	 */
	struct ARaidFrigate_GetLifeSupportDestroyed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidFrigate.GetHullHealth
	 */
	struct ARaidFrigate_GetHullHealth_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidFrigate.GetFrigateID
	 */
	struct ARaidFrigate_GetFrigateID_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidFrigate.GetEngineDestroyed
	 */
	struct ARaidFrigate_GetEngineDestroyed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidFrigate.FrigateSunk
	 */
	struct ARaidFrigate_FrigateSunk_Params
	{	};

	/**
	 * Function RaidGame.RaidFrigate.DockingCheck
	 */
	struct ARaidFrigate_DockingCheck_Params
	{
	public:
		class URaidDockingComponent*                               ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidFrigateDockingHangerComponent.OpenMainDoor
	 */
	struct URaidFrigateDockingHangerComponent_OpenMainDoor_Params
	{	};

	/**
	 * Function RaidGame.RaidFrigateDockingHangerComponent.CloseMainDoor
	 */
	struct URaidFrigateDockingHangerComponent_CloseMainDoor_Params
	{	};

	/**
	 * Function RaidGame.RaidUseableComponent.SetState
	 */
	struct URaidUseableComponent_SetState_Params
	{
	public:
		EUseState                                                  NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidUseableComponent.ServerSetState
	 */
	struct URaidUseableComponent_ServerSetState_Params
	{
	public:
		EUseState                                                  NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidUseableComponent.PlayMontageOnTaggedSkelComp
	 */
	struct URaidUseableComponent_PlayMontageOnTaggedSkelComp_Params
	{
	public:
		class FName                                                TagLookingFor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimMontage*                                        AnimMontage;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidUseableComponent.PlayMontageOnSkelComp
	 */
	struct URaidUseableComponent_PlayMontageOnSkelComp_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidUseableComponent.PlayLocalAndRepMontageOnTaggedSkelComp
	 */
	struct URaidUseableComponent_PlayLocalAndRepMontageOnTaggedSkelComp_Params
	{
	public:
		class APlayerController*                                   LocalController;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TagLookingFor;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimMontage*                                        ClientAnimMontage;                                       // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimMontage*                                        ServerAnimMontage;                                       // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidUseableComponent.OnRep_CurrentState
	 */
	struct URaidUseableComponent_OnRep_CurrentState_Params
	{
	public:
		EUseState                                                  PrevState;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidUseableComponent.OnBPCompUsed
	 */
	struct URaidUseableComponent_OnBPCompUsed_Params
	{
	public:
		class APawn*                                               InstigatorPawn;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidUseableComponent.Interact
	 */
	struct URaidUseableComponent_Interact_Params
	{
	public:
		class AActor*                                              InteractingOwner;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidUseableComponent.GetState
	 */
	struct URaidUseableComponent_GetState_Params
	{
	public:
		EUseState                                                  ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidUseableComponent.GetInteractionMeshByTag
	 */
	struct URaidUseableComponent_GetInteractionMeshByTag_Params
	{
	public:
		class FName                                                TagLookingFor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidUseableComponent.GetInteractionMesh
	 */
	struct URaidUseableComponent_GetInteractionMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidUseableComponent.GetInteractionLookAtRotation
	 */
	struct URaidUseableComponent_GetInteractionLookAtRotation_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidUseableComponent.GetInteractionLocation
	 */
	struct URaidUseableComponent_GetInteractionLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidUseableComponent.GetInteractionInfo
	 */
	struct URaidUseableComponent_GetInteractionInfo_Params
	{
	public:
		struct FInteractionInfo                                    ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidUseableComponent.CanUseComp
	 */
	struct URaidUseableComponent_CanUseComp_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidFrigateShuttleControl.PlayCompAnimNotify
	 */
	struct ARaidFrigateShuttleControl_PlayCompAnimNotify_Params
	{
	public:
		class USkeletalMeshComponent*                              CompToPlayOn;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                NotifyName;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidFrigateShuttleControl.OnPlayCompAnimNotify
	 */
	struct ARaidFrigateShuttleControl_OnPlayCompAnimNotify_Params
	{
	public:
		class USkeletalMeshComponent*                              CompToPlayOn;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                NotifyName;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidFrigateShuttleControl.GetInteractionMesh
	 */
	struct ARaidFrigateShuttleControl_GetInteractionMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidFrigateShuttleControl.GetInteractionLookAtRotation
	 */
	struct ARaidFrigateShuttleControl_GetInteractionLookAtRotation_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidFrigateShuttleControl.GetInteractionLocation
	 */
	struct ARaidFrigateShuttleControl_GetInteractionLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidFrigateStationDock.StartDoorEvent
	 */
	struct ARaidFrigateStationDock_StartDoorEvent_Params
	{
	public:
		bool                                                       OpenDoor;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidFrigateStationDock.PlayMontageOnComponentNotLocal
	 */
	struct ARaidFrigateStationDock_PlayMontageOnComponentNotLocal_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USkeletalMeshComponent*                              CompToPlayOn;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidFrigateStationDock.PlayMontageOnComponent
	 */
	struct ARaidFrigateStationDock_PlayMontageOnComponent_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USkeletalMeshComponent*                              CompToPlayOn;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidFrigateStationDock.OnRep_IsOpen
	 */
	struct ARaidFrigateStationDock_OnRep_IsOpen_Params
	{	};

	/**
	 * Function RaidGame.RaidFrigateStationDock.OnRep_HangerInUse
	 */
	struct ARaidFrigateStationDock_OnRep_HangerInUse_Params
	{	};

	/**
	 * Function RaidGame.RaidFrigateStationDock.OnRep_EnableColiision
	 */
	struct ARaidFrigateStationDock_OnRep_EnableColiision_Params
	{	};

	/**
	 * Function RaidGame.RaidFrigateStationDock.HangerUseStateChange
	 */
	struct ARaidFrigateStationDock_HangerUseStateChange_Params
	{
	public:
		bool                                                       hangerchange;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidFrigateStationDock.EnableCollisionOnDoor
	 */
	struct ARaidFrigateStationDock_EnableCollisionOnDoor_Params
	{
	public:
		bool                                                       EnableCollision;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidFrigateStationDock.DoorOpenEvent
	 */
	struct ARaidFrigateStationDock_DoorOpenEvent_Params
	{
	public:
		bool                                                       BopenDoor;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGameMode.SetAllowBots
	 */
	struct ARaidGameMode_SetAllowBots_Params
	{
	public:
		bool                                                       bInAllowBots;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_26QE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InMaxBots;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGameMode.GetPoolForProj
	 */
	struct ARaidGameMode_GetPoolForProj_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGameMode.FinishMatch
	 */
	struct ARaidGameMode_FinishMatch_Params
	{	};

	/**
	 * Function RaidGame.RaidGameplayAbility.SendTargetDataToServer
	 */
	struct URaidGameplayAbility_SendTargetDataToServer_Params
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGameplayAbility.MontageStopForMesh
	 */
	struct URaidGameplayAbility_MontageStopForMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              InMesh;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OverrideBlendOutTime;                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGameplayAbility.MontageStopForAllMeshes
	 */
	struct URaidGameplayAbility_MontageStopForAllMeshes_Params
	{
	public:
		float                                                      OverrideBlendOutTime;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGameplayAbility.MontageSetPlayRate
	 */
	struct URaidGameplayAbility_MontageSetPlayRate_Params
	{
	public:
		class USkeletalMeshComponent*                              InMesh;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PlayRate;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGameplayAbility.MontageSetNextSectionNameForMesh
	 */
	struct URaidGameplayAbility_MontageSetNextSectionNameForMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              InMesh;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                FromSectionName;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ToSectionName;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGameplayAbility.MontageJumpToSectionForMesh
	 */
	struct URaidGameplayAbility_MontageJumpToSectionForMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              InMesh;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SectionName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGameplayAbility.MakeGameplayAbilityTargetDataHandleFromHitResults
	 */
	struct URaidGameplayAbility_MakeGameplayAbilityTargetDataHandleFromHitResults_Params
	{
	public:
		TArray<struct FHitResult>                                  HitResults;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetDataHandle                    ReturnValue;                                             // 0x0010(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGameplayAbility.MakeGameplayAbilityTargetDataHandleFromActorArray
	 */
	struct URaidGameplayAbility_MakeGameplayAbilityTargetDataHandleFromActorArray_Params
	{
	public:
		TArray<class AActor*>                                      TargetActors;                                            // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FGameplayAbilityTargetDataHandle                    ReturnValue;                                             // 0x0010(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGameplayAbility.MakeEffectContainerSpecFromContainer
	 */
	struct URaidGameplayAbility_MakeEffectContainerSpecFromContainer_Params
	{
	public:
		struct FGSGameplayEffectContainer                          Container;                                               // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0018(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    OverrideGameplayLevel;                                   // 0x00C8(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OF7H[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGSGameplayEffectContainerSpec                      ReturnValue;                                             // 0x00D0(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGameplayAbility.MakeEffectContainerSpec
	 */
	struct URaidGameplayAbility_MakeEffectContainerSpec_Params
	{
	public:
		struct FGameplayTag                                        ContainerTag;                                            // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0008(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    OverrideGameplayLevel;                                   // 0x00B8(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Z2GV[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGSGameplayEffectContainerSpec                      ReturnValue;                                             // 0x00C0(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGameplayAbility.K2_GetSourceObject
	 */
	struct URaidGameplayAbility_K2_GetSourceObject_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          Handle;                                                  // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5U5G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayAbilityActorInfo                           ActorInfo;                                               // 0x0008(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGameplayAbility.IsPredictionKeyValidForMorePrediction
	 */
	struct URaidGameplayAbility_IsPredictionKeyValidForMorePrediction_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGameplayAbility.IsInputPressed
	 */
	struct URaidGameplayAbility_IsInputPressed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGameplayAbility.GSCheckCost
	 */
	struct URaidGameplayAbility_GSCheckCost_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          Handle;                                                  // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1CB3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayAbilityActorInfo                           ActorInfo;                                               // 0x0008(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGameplayAbility.GSApplyCost
	 */
	struct URaidGameplayAbility_GSApplyCost_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          Handle;                                                  // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZGZ2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayAbilityActorInfo                           ActorInfo;                                               // 0x0008(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FGameplayAbilityActivationInfo                      ActivationInfo;                                          // 0x0050(0x0018)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGameplayAbility.GetCurrentPredictionKeyStatus
	 */
	struct URaidGameplayAbility_GetCurrentPredictionKeyStatus_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGameplayAbility.GetCurrentMontageForMesh
	 */
	struct URaidGameplayAbility_GetCurrentMontageForMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              InMesh;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimMontage*                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGameplayAbility.BatchRPCTryActivateAbility
	 */
	struct URaidGameplayAbility_BatchRPCTryActivateAbility_Params
	{
	public:
		struct FGameplayAbilitySpecHandle                          InAbilityHandle;                                         // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       EndAbilityImmediately;                                   // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGameplayAbility.ApplyEffectContainerSpec
	 */
	struct URaidGameplayAbility_ApplyEffectContainerSpec_Params
	{
	public:
		struct FGSGameplayEffectContainerSpec                      ContainerSpec;                                           // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FActiveGameplayEffectHandle>                 ReturnValue;                                             // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.updateGoal
	 */
	struct ARaidGOAPController_updateGoal_Params
	{
	public:
		TArray<struct FAtom>                                       atoms;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.updateCurrentWorld
	 */
	struct ARaidGOAPController_updateCurrentWorld_Params
	{
	public:
		TArray<struct FAtom>                                       atoms;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.TryLean
	 */
	struct ARaidGOAPController_TryLean_Params
	{
	public:
		bool                                                       Left;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Right;                                                   // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Back;                                                    // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.StopMovementRequest
	 */
	struct ARaidGOAPController_StopMovementRequest_Params
	{	};

	/**
	 * Function RaidGame.RaidGOAPController.StopLookRequest
	 */
	struct ARaidGOAPController_StopLookRequest_Params
	{	};

	/**
	 * Function RaidGame.RaidGOAPController.StopGOAPEvent
	 */
	struct ARaidGOAPController_StopGOAPEvent_Params
	{	};

	/**
	 * Function RaidGame.RaidGOAPController.StartWorkoutGoal
	 */
	struct ARaidGOAPController_StartWorkoutGoal_Params
	{
	public:
		ERaidAIState                                               StateCompleted;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.StartsettingKeys
	 */
	struct ARaidGOAPController_StartsettingKeys_Params
	{
	public:
		ERaidAIState                                               NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.StartGOAPEvent
	 */
	struct ARaidGOAPController_StartGOAPEvent_Params
	{	};

	/**
	 * Function RaidGame.RaidGOAPController.Sprint
	 */
	struct ARaidGOAPController_Sprint_Params
	{
	public:
		bool                                                       RunWalk;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.ShootAtLocation
	 */
	struct ARaidGOAPController_ShootAtLocation_Params
	{
	public:
		struct FVector                                             LoctoShoot;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MissRate;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.ShootAtCurrentEnemy
	 */
	struct ARaidGOAPController_ShootAtCurrentEnemy_Params
	{
	public:
		float                                                      MissRate;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.ShootAimedAtCurrentEnemy
	 */
	struct ARaidGOAPController_ShootAimedAtCurrentEnemy_Params
	{
	public:
		float                                                      MissRate;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                BonedAimedAt;                                            // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.SetWaiting
	 */
	struct ARaidGOAPController_SetWaiting_Params
	{
	public:
		bool                                                       bForceChange;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.SetTargetEnemy
	 */
	struct ARaidGOAPController_SetTargetEnemy_Params
	{
	public:
		class ARaidCharacter*                                      TEnemy;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.SetStartingKey
	 */
	struct ARaidGOAPController_SetStartingKey_Params
	{
	public:
		TArray<struct FAtom>                                       StartingWorldState;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.SetShuffleOnce
	 */
	struct ARaidGOAPController_SetShuffleOnce_Params
	{
	public:
		float                                                      ShuffleAmountLeftRight;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.SetPatrolling
	 */
	struct ARaidGOAPController_SetPatrolling_Params
	{
	public:
		bool                                                       bForceChange;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.SetMoveShuffle
	 */
	struct ARaidGOAPController_SetMoveShuffle_Params
	{
	public:
		float                                                      TimeBetween;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CancelOUt;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ShuffleAmountLeftRight;                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.SetLookAtTargetLocation
	 */
	struct ARaidGOAPController_SetLookAtTargetLocation_Params
	{
	public:
		struct FVector                                             LocatLocation;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.SetLookAroundWiggleOnce
	 */
	struct ARaidGOAPController_SetLookAroundWiggleOnce_Params
	{
	public:
		float                                                      WiggleAmountLeftRight;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      WiggleAmountUpDown;                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CancelOUt;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.SetLookAroundWiggle
	 */
	struct ARaidGOAPController_SetLookAroundWiggle_Params
	{
	public:
		float                                                      TimeBetween;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CancelOUt;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      WiggleAmountLeftRight;                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      WiggleAmountUpDown;                                      // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.setGoal
	 */
	struct ARaidGOAPController_setGoal_Params
	{
	public:
		TArray<struct FAtom>                                       NewGoal;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.setCurrentWorld
	 */
	struct ARaidGOAPController_setCurrentWorld_Params
	{
	public:
		TArray<struct FAtom>                                       newCurrentWorld;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.SetBotRotationSpeed
	 */
	struct ARaidGOAPController_SetBotRotationSpeed_Params
	{
	public:
		float                                                      RotationSpeed;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.SetAttacking
	 */
	struct ARaidGOAPController_SetAttacking_Params
	{
	public:
		bool                                                       bForceChange;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.ResetWorldStateKey
	 */
	struct ARaidGOAPController_ResetWorldStateKey_Params
	{
	public:
		class FString                                              GOAPKEY;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       NewState;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.ResetWorldState
	 */
	struct ARaidGOAPController_ResetWorldState_Params
	{	};

	/**
	 * Function RaidGame.RaidGOAPController.QueryForLocation
	 */
	struct ARaidGOAPController_QueryForLocation_Params
	{
	public:
		ERaidEQS                                                   TypeToCheck;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.ProcessFunctionTimerCall
	 */
	struct ARaidGOAPController_ProcessFunctionTimerCall_Params
	{
	public:
		class UGOAPAction*                                         ActionIn;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              FunctionName;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.PlanIsNowInvalid
	 */
	struct ARaidGOAPController_PlanIsNowInvalid_Params
	{	};

	/**
	 * Function RaidGame.RaidGOAPController.OnGOAPTaskCompleted
	 */
	struct ARaidGOAPController_OnGOAPTaskCompleted_Params
	{
	public:
		class FString                                              TaskFinsihed;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              GoalComplete;                                            // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.OnGOAPEvent
	 */
	struct ARaidGOAPController_OnGOAPEvent_Params
	{
	public:
		ERaidGOAPEvent                                             NewGOAPEvent;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SEC3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ARaidCharacter*                                      SeenChar;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAIStimulus                                         Stimulus;                                                // 0x0010(0x003C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.OnGoalCompleted
	 */
	struct ARaidGOAPController_OnGoalCompleted_Params
	{
	public:
		ERaidAIState                                               StateCompleted;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.LootedAnItem
	 */
	struct ARaidGOAPController_LootedAnItem_Params
	{	};

	/**
	 * Function RaidGame.RaidGOAPController.LookAtPawnDirection
	 */
	struct ARaidGOAPController_LookAtPawnDirection_Params
	{
	public:
		bool                                                       CancelOUt;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.IsRunning
	 */
	struct ARaidGOAPController_IsRunning_Params
	{
	public:
		class ARaidGOAPController*                                 MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.IsNearCover
	 */
	struct ARaidGOAPController_IsNearCover_Params
	{
	public:
		class ARaidGOAPController*                                 MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             BoundsIn;                                                // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumberNear;                                              // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.IsHealthLow
	 */
	struct ARaidGOAPController_IsHealthLow_Params
	{
	public:
		class ARaidGOAPController*                                 MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      healthAmount;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.IsEnemyNearCover
	 */
	struct ARaidGOAPController_IsEnemyNearCover_Params
	{
	public:
		class ARaidGOAPController*                                 MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             BoundsIn;                                                // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumberNear;                                              // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.IsEnemyAimingAtme
	 */
	struct ARaidGOAPController_IsEnemyAimingAtme_Params
	{
	public:
		class ARaidGOAPController*                                 MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.IsCrouched
	 */
	struct ARaidGOAPController_IsCrouched_Params
	{
	public:
		class ARaidGOAPController*                                 MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.IsCharacterOnSeenList
	 */
	struct ARaidGOAPController_IsCharacterOnSeenList_Params
	{
	public:
		class ARaidCharacter*                                      SeenChar;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.IsCharacterOnHearingList
	 */
	struct ARaidGOAPController_IsCharacterOnHearingList_Params
	{
	public:
		class ARaidCharacter*                                      SeenChar;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.IsAnotherPlayerCloserThenTarget
	 */
	struct ARaidGOAPController_IsAnotherPlayerCloserThenTarget_Params
	{
	public:
		class ARaidGOAPController*                                 MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.IsAGroupAI
	 */
	struct ARaidGOAPController_IsAGroupAI_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.IsACaptain
	 */
	struct ARaidGOAPController_IsACaptain_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.ImIMoving
	 */
	struct ARaidGOAPController_ImIMoving_Params
	{
	public:
		class ARaidGOAPController*                                 MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.HasToReload
	 */
	struct ARaidGOAPController_HasToReload_Params
	{
	public:
		class ARaidGOAPController*                                 MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    bullletLowAmount;                                        // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.HasRecentlySeenSomeone
	 */
	struct ARaidGOAPController_HasRecentlySeenSomeone_Params
	{
	public:
		class ARaidGOAPController*                                 MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      recentamount;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.HasRecentlyPoppedSomeshotsOff
	 */
	struct ARaidGOAPController_HasRecentlyPoppedSomeshotsOff_Params
	{
	public:
		class ARaidGOAPController*                                 MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      recentamount;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.HasRecentlyLooted
	 */
	struct ARaidGOAPController_HasRecentlyLooted_Params
	{
	public:
		class ARaidGOAPController*                                 MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      timeSinceLastloot;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.HasRecentlyHeardSomeone
	 */
	struct ARaidGOAPController_HasRecentlyHeardSomeone_Params
	{
	public:
		class ARaidGOAPController*                                 MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      recentamount;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.HasRecentlyBeenSearching
	 */
	struct ARaidGOAPController_HasRecentlyBeenSearching_Params
	{
	public:
		class ARaidGOAPController*                                 MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      recentamount;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.HasRecentlyBeenPatrolling
	 */
	struct ARaidGOAPController_HasRecentlyBeenPatrolling_Params
	{
	public:
		class ARaidGOAPController*                                 MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      recentamount;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.HasRecentlyBeenDamaged
	 */
	struct ARaidGOAPController_HasRecentlyBeenDamaged_Params
	{
	public:
		class ARaidGOAPController*                                 MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      recentamount;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.HasRecentlyBeenAttacking
	 */
	struct ARaidGOAPController_HasRecentlyBeenAttacking_Params
	{
	public:
		class ARaidGOAPController*                                 MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      recentamount;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.HasPerceptionPeopleNear
	 */
	struct ARaidGOAPController_HasPerceptionPeopleNear_Params
	{
	public:
		class ARaidGOAPController*                                 MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Allies;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_O81I[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      distanceamount;                                          // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.HasLostEnemy
	 */
	struct ARaidGOAPController_HasLostEnemy_Params
	{
	public:
		class ARaidGOAPController*                                 MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      timeAmountforLost;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.HasGotAnyTargetActors
	 */
	struct ARaidGOAPController_HasGotAnyTargetActors_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.HasEnemyLowHealth
	 */
	struct ARaidGOAPController_HasEnemyLowHealth_Params
	{
	public:
		class ARaidGOAPController*                                 MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      amountlow;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.HasEnemyLowAmmo
	 */
	struct ARaidGOAPController_HasEnemyLowAmmo_Params
	{
	public:
		class ARaidGOAPController*                                 MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Percentlow;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.HasEnemy
	 */
	struct ARaidGOAPController_HasEnemy_Params
	{
	public:
		class ARaidGOAPController*                                 MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.HasArrivedAtLocation
	 */
	struct ARaidGOAPController_HasArrivedAtLocation_Params
	{
	public:
		float                                                      Allowance;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       DontRestartMoveQuery;                                    // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       RequestORMoveHasFailed;                                  // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0006(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.GOAPSetFocalPoint
	 */
	struct ARaidGOAPController_GOAPSetFocalPoint_Params
	{
	public:
		struct FVector                                             NewFocus;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ERaidFocusPri                                              InPriority;                                              // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.GetTimeSinceLostEnemy
	 */
	struct ARaidGOAPController_GetTimeSinceLostEnemy_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.GetSensedPlayerThatCantSeeMe
	 */
	struct ARaidGOAPController_GetSensedPlayerThatCantSeeMe_Params
	{
	public:
		class ARaidCharacter*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.GetSensedPlayerClosetToMe
	 */
	struct ARaidGOAPController_GetSensedPlayerClosetToMe_Params
	{
	public:
		class ARaidCharacter*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.GetSensedPlayerAimingAtMe
	 */
	struct ARaidGOAPController_GetSensedPlayerAimingAtMe_Params
	{
	public:
		class ARaidCharacter*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.GetRandSeed
	 */
	struct ARaidGOAPController_GetRandSeed_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.getPlan
	 */
	struct ARaidGOAPController_getPlan_Params
	{
	public:
		TArray<class UGOAPAction*>                                 ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.GetMyBot
	 */
	struct ARaidGOAPController_GetMyBot_Params
	{
	public:
		class ARaidNodeBot*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.GetMovingTowardLocation
	 */
	struct ARaidGOAPController_GetMovingTowardLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.GetLootableNearMe
	 */
	struct ARaidGOAPController_GetLootableNearMe_Params
	{
	public:
		float                                                      MaxDistance;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4UZW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.GetLookAtTargetLocation
	 */
	struct ARaidGOAPController_GetLookAtTargetLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.GetLocationToUse
	 */
	struct ARaidGOAPController_GetLocationToUse_Params
	{
	public:
		struct FVector                                             LocToUse;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.getDesiredWorldStateAtoms
	 */
	struct ARaidGOAPController_getDesiredWorldStateAtoms_Params
	{
	public:
		TArray<struct FAtom>                                       ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.getCurrentWorldStateAtoms
	 */
	struct ARaidGOAPController_getCurrentWorldStateAtoms_Params
	{
	public:
		TArray<struct FAtom>                                       ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.GetCurrentTarget
	 */
	struct ARaidGOAPController_GetCurrentTarget_Params
	{
	public:
		class ARaidCharacter*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.GetCurrentSensedTargets
	 */
	struct ARaidGOAPController_GetCurrentSensedTargets_Params
	{
	public:
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.GetCurrentAIState
	 */
	struct ARaidGOAPController_GetCurrentAIState_Params
	{
	public:
		ERaidAIState                                               ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.GetCoverPointInfo
	 */
	struct ARaidGOAPController_GetCoverPointInfo_Params
	{
	public:
		bool                                                       CrouchPoint;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ShootOver;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       LeftLean;                                                // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       RightLean;                                               // 0x0003(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             DirectionToWall;                                         // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.GetCaptainsTarget
	 */
	struct ARaidGOAPController_GetCaptainsTarget_Params
	{
	public:
		class ARaidCharacter*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.GetCaptainsMoveLocation
	 */
	struct ARaidGOAPController_GetCaptainsMoveLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.GetCaptainsLookLocation
	 */
	struct ARaidGOAPController_GetCaptainsLookLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.GetCaptainsGoapState
	 */
	struct ARaidGOAPController_GetCaptainsGoapState_Params
	{
	public:
		ERaidAIState                                               ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.GetCaptain
	 */
	struct ARaidGOAPController_GetCaptain_Params
	{
	public:
		class ARaidGOAPController*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.GetActionTimeInSeconds
	 */
	struct ARaidGOAPController_GetActionTimeInSeconds_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.GenerateRandSeed
	 */
	struct ARaidGOAPController_GenerateRandSeed_Params
	{
	public:
		int32_t                                                    MaxInt;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.generatePlan
	 */
	struct ARaidGOAPController_generatePlan_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.FindCaptian
	 */
	struct ARaidGOAPController_FindCaptian_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.executeGOAP
	 */
	struct ARaidGOAPController_executeGOAP_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.EQSQueryLookToLocation
	 */
	struct ARaidGOAPController_EQSQueryLookToLocation_Params
	{
	public:
		class UEnvQuery*                                           MyQuery;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEnvQueryRunMode                                           RunMode;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_X1CL[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DeactiveTime;                                            // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.EQSQueryLookToDirection
	 */
	struct ARaidGOAPController_EQSQueryLookToDirection_Params
	{
	public:
		class UEnvQuery*                                           MyQuery;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEnvQueryRunMode                                           RunMode;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5VJ5[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             LookToVector;                                            // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DeactiveTime;                                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.EQSQueryandMoveToLocationVector
	 */
	struct ARaidGOAPController_EQSQueryandMoveToLocationVector_Params
	{
	public:
		struct FVector                                             LocationVector;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_I5NQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UEnvQuery*                                           MyQuery;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEnvQueryRunMode                                           RunMode;                                                 // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.EQSQueryandMoveToLocation
	 */
	struct ARaidGOAPController_EQSQueryandMoveToLocation_Params
	{
	public:
		class UEnvQuery*                                           MyQuery;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEnvQueryRunMode                                           RunMode;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.EQSQueryandMoveToCover
	 */
	struct ARaidGOAPController_EQSQueryandMoveToCover_Params
	{
	public:
		class UEnvQuery*                                           MyQuery;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEnvQueryRunMode                                           RunMode;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.EQSCoverNodeReturn
	 */
	struct ARaidGOAPController_EQSCoverNodeReturn_Params
	{
	public:
		struct FVector                                             LocToGo;                                                 // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.EnemyFar
	 */
	struct ARaidGOAPController_EnemyFar_Params
	{
	public:
		class ARaidGOAPController*                                 MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DistanceforFar;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.DebugStimulusEvent
	 */
	struct ARaidGOAPController_DebugStimulusEvent_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAIStimulus                                         Stimulus;                                                // 0x0008(0x003C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		ERaidGOAPEvent                                             NormalEvent;                                             // 0x0044(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.Crouch
	 */
	struct ARaidGOAPController_Crouch_Params
	{
	public:
		bool                                                       CrouchStand;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.CheckLOSToTarget
	 */
	struct ARaidGOAPController_CheckLOSToTarget_Params
	{
	public:
		class ARaidGOAPController*                                 MyControl;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidGOAPController.CancelMoveShuffle
	 */
	struct ARaidGOAPController_CancelMoveShuffle_Params
	{	};

	/**
	 * Function RaidGame.RaidGOAPController.CancelLookAroundWiggle
	 */
	struct ARaidGOAPController_CancelLookAroundWiggle_Params
	{	};

	/**
	 * Function RaidGame.RaidHUD.HudTakenDamage
	 */
	struct ARaidHUD_HudTakenDamage_Params
	{
	public:
		float                                                      DamageTaken;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BOPW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class APawn*                                               PawnInstigator;                                          // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Direction;                                               // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidHUD.HudGivenDamage
	 */
	struct ARaidHUD_HudGivenDamage_Params
	{	};

	/**
	 * Function RaidGame.RaidHUD.GetVersionInformation
	 */
	struct ARaidHUD_GetVersionInformation_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidHUD.GetTimeString
	 */
	struct ARaidHUD_GetTimeString_Params
	{
	public:
		float                                                      TimeSeconds;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LAPT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidHUD.GetMatchTimefloat
	 */
	struct ARaidHUD_GetMatchTimefloat_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidHUD.GetMatchTime
	 */
	struct ARaidHUD_GetMatchTime_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidHUD.GetCurrentAmmo
	 */
	struct ARaidHUD_GetCurrentAmmo_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidHUD.GetAmmoPerClip
	 */
	struct ARaidHUD_GetAmmoPerClip_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidLockedDoor.TriedToOpenDoor
	 */
	struct ARaidLockedDoor_TriedToOpenDoor_Params
	{	};

	/**
	 * Function RaidGame.RaidLockedDoor.OnUnlocked
	 */
	struct ARaidLockedDoor_OnUnlocked_Params
	{	};

	/**
	 * Function RaidGame.RaidLockedDoor.OnTriedToOpenButLocked
	 */
	struct ARaidLockedDoor_OnTriedToOpenButLocked_Params
	{	};

	/**
	 * Function RaidGame.RaidLockedDoor.OnRep_IsUnlocked
	 */
	struct ARaidLockedDoor_OnRep_IsUnlocked_Params
	{	};

	/**
	 * Function RaidGame.RaidLockedDoor.MultiLockDamaged
	 */
	struct ARaidLockedDoor_MultiLockDamaged_Params
	{
	public:
		class FName                                                LockName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      HealthPercent;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidLockedDoor.LockDamaged
	 */
	struct ARaidLockedDoor_LockDamaged_Params
	{
	public:
		class FName                                                LockName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      HealthPercent;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidLockedDoor.GetPartCompByUniqueName
	 */
	struct ARaidLockedDoor_GetPartCompByUniqueName_Params
	{
	public:
		class FName                                                UniName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class URaidLockVolumeComponent*                            ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidNodeActor.GetNodeSequenceTypeID
	 */
	struct ARaidNodeActor_GetNodeSequenceTypeID_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidNodeBot.ServerSetFace
	 */
	struct ARaidNodeBot_ServerSetFace_Params
	{
	public:
		class USkeletalMesh*                                       NewHead;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidNodeBot.ServerSetBody
	 */
	struct ARaidNodeBot_ServerSetBody_Params
	{
	public:
		class USkeletalMesh*                                       NewBody;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidNodeBot.OnRep_SetFace
	 */
	struct ARaidNodeBot_OnRep_SetFace_Params
	{	};

	/**
	 * Function RaidGame.RaidNodeBot.OnRep_SetBody
	 */
	struct ARaidNodeBot_OnRep_SetBody_Params
	{	};

	/**
	 * Function RaidGame.RaidNodeBot.OnGOAPDEBUGplan
	 */
	struct ARaidNodeBot_OnGOAPDEBUGplan_Params
	{
	public:
		class FString                                              CurrentPlan;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPickup.OnRespawnEvent
	 */
	struct ARaidPickup_OnRespawnEvent_Params
	{	};

	/**
	 * Function RaidGame.RaidPickup.OnRep_IsActive
	 */
	struct ARaidPickup_OnRep_IsActive_Params
	{	};

	/**
	 * Function RaidGame.RaidPickup.OnPickedUpEvent
	 */
	struct ARaidPickup_OnPickedUpEvent_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerCharacter.WizzVolumeOverlapped
	 */
	struct ARaidPlayerCharacter_WizzVolumeOverlapped_Params
	{
	public:
		class ARaidProjectile*                                     BulltActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerCharacter.ServerSetFace
	 */
	struct ARaidPlayerCharacter_ServerSetFace_Params
	{
	public:
		class USkeletalMesh*                                       NewHead;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerCharacter.ServerSetBody
	 */
	struct ARaidPlayerCharacter_ServerSetBody_Params
	{
	public:
		class USkeletalMesh*                                       NewBody;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerCharacter.Server_TakeStaminaBurn
	 */
	struct ARaidPlayerCharacter_Server_TakeStaminaBurn_Params
	{
	public:
		float                                                      BurnAmoun;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerCharacter.OnRep_SetFace
	 */
	struct ARaidPlayerCharacter_OnRep_SetFace_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerCharacter.OnRep_SetBody
	 */
	struct ARaidPlayerCharacter_OnRep_SetBody_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerCharacter.GetStaminaBurn
	 */
	struct ARaidPlayerCharacter_GetStaminaBurn_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerCharacter.GetHealthBurn
	 */
	struct ARaidPlayerCharacter_GetHealthBurn_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerState.SetCharacterName
	 */
	struct ARaidPlayerState_SetCharacterName_Params
	{
	public:
		class FString                                              CharacterName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerState.OnRep_TeamColor
	 */
	struct ARaidPlayerState_OnRep_TeamColor_Params
	{	};

	/**
	 * Function RaidGame.RaidPlayerState.InformAboutKill
	 */
	struct ARaidPlayerState_InformAboutKill_Params
	{
	public:
		class ARaidPlayerState*                                    KillerPlayerState;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDamageType*                                         KillerDamageType;                                        // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ARaidPlayerState*                                    KilledPlayerState;                                       // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPlayerState.BroadcastDeath
	 */
	struct ARaidPlayerState_BroadcastDeath_Params
	{
	public:
		class ARaidPlayerState*                                    KillerPlayerState;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDamageType*                                         KillerDamageType;                                        // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ARaidPlayerState*                                    KilledPlayerState;                                       // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidPoolImpactEffect.OnPoolDeactive
	 */
	struct ARaidPoolImpactEffect_OnPoolDeactive_Params
	{	};

	/**
	 * Function RaidGame.RaidPoolImpactEffect.OnPoolActive
	 */
	struct ARaidPoolImpactEffect_OnPoolActive_Params
	{	};

	/**
	 * Function RaidGame.RaidPoolImpactEffect.IsNotInUse
	 */
	struct ARaidPoolImpactEffect_IsNotInUse_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidProjectile.SelfExplode
	 */
	struct ARaidProjectile_SelfExplode_Params
	{	};

	/**
	 * Function RaidGame.RaidProjectile.PysDamageDel
	 */
	struct ARaidProjectile_PysDamageDel_Params
	{
	public:
		class ADestructibleActor*                                  ActorOnHit;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             HitlOC;                                                  // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             HitNorm;                                                 // 0x0014(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ImpulseAmount;                                           // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidProjectile.OnRep_Exploded
	 */
	struct ARaidProjectile_OnRep_Exploded_Params
	{	};

	/**
	 * Function RaidGame.RaidProjectile.OnRep_BulletHit
	 */
	struct ARaidProjectile_OnRep_BulletHit_Params
	{	};

	/**
	 * Function RaidGame.RaidProjectile.OnRealImpact
	 */
	struct ARaidProjectile_OnRealImpact_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		int32_t                                                    TrajectoryNum;                                           // 0x008C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TimeSinceSpawn;                                          // 0x0090(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidProjectile.OnRealExit
	 */
	struct ARaidProjectile_OnRealExit_Params
	{
	public:
		struct FHitResult                                          ExitHit;                                                 // 0x0000(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             ExitVelocity;                                            // 0x008C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidProjectile.OnRealAnyHit
	 */
	struct ARaidProjectile_OnRealAnyHit_Params
	{
	public:
		struct FHitResult                                          HitDetails;                                              // 0x0000(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             ImpactVelocity;                                          // 0x008C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidProjectile.OnProjStop
	 */
	struct ARaidProjectile_OnProjStop_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidProjectile.OnPoolDeactive
	 */
	struct ARaidProjectile_OnPoolDeactive_Params
	{	};

	/**
	 * Function RaidGame.RaidProjectile.OnPoolActive
	 */
	struct ARaidProjectile_OnPoolActive_Params
	{	};

	/**
	 * Function RaidGame.RaidProjectile.OnImpact
	 */
	struct ARaidProjectile_OnImpact_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidProjectile.OnBulletHit
	 */
	struct ARaidProjectile_OnBulletHit_Params
	{
	public:
		struct FHitResult                                          Impact;                                                  // 0x0000(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidProjectile.MultiCast_ImpactEffect
	 */
	struct ARaidProjectile_MultiCast_ImpactEffect_Params
	{
	public:
		struct FHitResult                                          Impact;                                                  // 0x0000(0x008C)  (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidProjectile.IsNotInUse
	 */
	struct ARaidProjectile_IsNotInUse_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidReplicateDestructionComponent.On_RepHide
	 */
	struct ARaidReplicateDestructionComponent_On_RepHide_Params
	{	};

	/**
	 * Function RaidGame.RaidShipProjectile.SelfExplode
	 */
	struct ARaidShipProjectile_SelfExplode_Params
	{	};

	/**
	 * Function RaidGame.RaidShipProjectile.OnRep_Exploded
	 */
	struct ARaidShipProjectile_OnRep_Exploded_Params
	{	};

	/**
	 * Function RaidGame.RaidShipProjectile.OnRep_BulletHit
	 */
	struct ARaidShipProjectile_OnRep_BulletHit_Params
	{	};

	/**
	 * Function RaidGame.RaidShipProjectile.OnImpact
	 */
	struct ARaidShipProjectile_OnImpact_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidShipProjectile.OnBulletHit
	 */
	struct ARaidShipProjectile_OnBulletHit_Params
	{
	public:
		struct FHitResult                                          Impact;                                                  // 0x0000(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidShipProjectile.MultiCast_ImpactEffect
	 */
	struct ARaidShipProjectile_MultiCast_ImpactEffect_Params
	{
	public:
		struct FHitResult                                          Impact;                                                  // 0x0000(0x008C)  (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceDeploy.ShipDocking
	 */
	struct ARaidSpaceDeploy_ShipDocking_Params
	{
	public:
		class ARaidSpaceship*                                      DockingShip;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceDeploy.FrigateExiting
	 */
	struct ARaidSpaceDeploy_FrigateExiting_Params
	{
	public:
		class ARaidFrigate*                                        DockingShip;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceDeploy.FrigateDocking
	 */
	struct ARaidSpaceDeploy_FrigateDocking_Params
	{
	public:
		class ARaidFrigate*                                        DockingShip;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceship.ServerSetFrigateBreaching
	 */
	struct ARaidSpaceship_ServerSetFrigateBreaching_Params
	{
	public:
		class AActor*                                              ShipBreach;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SocketTo;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceship.ServerBoost
	 */
	struct ARaidSpaceship_ServerBoost_Params
	{	};

	/**
	 * Function RaidGame.RaidSpaceship.OnShipHit
	 */
	struct ARaidSpaceship_OnShipHit_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceship.OnLootBodyOverlap
	 */
	struct ARaidSpaceship_OnLootBodyOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    hitindex;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSweep;                                                  // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2K7G[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0020(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceship.OnLootBodyEndOverlap
	 */
	struct ARaidSpaceship_OnLootBodyEndOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    hitindex;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceship.OnFaceRotation
	 */
	struct ARaidSpaceship_OnFaceRotation_Params
	{
	public:
		struct FRotator                                            NewRotation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceship.NetMultiBoost
	 */
	struct ARaidSpaceship_NetMultiBoost_Params
	{	};

	/**
	 * Function RaidGame.RaidSpaceship.GetSocketToAttachTo
	 */
	struct ARaidSpaceship_GetSocketToAttachTo_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceship.GetCurrentGear
	 */
	struct ARaidSpaceship_GetCurrentGear_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceship.GetCurentBoostTimerLeft
	 */
	struct ARaidSpaceship_GetCurentBoostTimerLeft_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceship.GetCurentBoostCooldownTimerLeft
	 */
	struct ARaidSpaceship_GetCurentBoostCooldownTimerLeft_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceship.GetBreacingToAttachingTo
	 */
	struct ARaidSpaceship_GetBreacingToAttachingTo_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceship.ChangedGear
	 */
	struct ARaidSpaceship_ChangedGear_Params
	{
	public:
		int32_t                                                    NewGear;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceship.BreachCheck
	 */
	struct ARaidSpaceship_BreachCheck_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceship.BoostEffectEvent
	 */
	struct ARaidSpaceship_BoostEffectEvent_Params
	{	};

	/**
	 * Function RaidGame.RaidSpaceshipInside.UnDocked
	 */
	struct ARaidSpaceshipInside_UnDocked_Params
	{	};

	/**
	 * Function RaidGame.RaidSpaceshipInside.StartDoorEvent
	 */
	struct ARaidSpaceshipInside_StartDoorEvent_Params
	{
	public:
		bool                                                       OpenDoor;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceshipInside.ShipHullHealthChangeEvent
	 */
	struct ARaidSpaceshipInside_ShipHullHealthChangeEvent_Params
	{
	public:
		float                                                      OldAmount;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NewAmount;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceshipInside.SealLock
	 */
	struct ARaidSpaceshipInside_SealLock_Params
	{	};

	/**
	 * Function RaidGame.RaidSpaceshipInside.SealAirLock
	 */
	struct ARaidSpaceshipInside_SealAirLock_Params
	{	};

	/**
	 * Function RaidGame.RaidSpaceshipInside.ReadyToDock
	 */
	struct ARaidSpaceshipInside_ReadyToDock_Params
	{	};

	/**
	 * Function RaidGame.RaidSpaceshipInside.PlayMontageOnComponentNotLocal
	 */
	struct ARaidSpaceshipInside_PlayMontageOnComponentNotLocal_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USkeletalMeshComponent*                              CompToPlayOn;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceshipInside.PlayMontageOnComponent
	 */
	struct ARaidSpaceshipInside_PlayMontageOnComponent_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USkeletalMeshComponent*                              CompToPlayOn;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceshipInside.PlayCompAnimNotify
	 */
	struct ARaidSpaceshipInside_PlayCompAnimNotify_Params
	{
	public:
		class USkeletalMeshComponent*                              CompToPlayOn;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                NotifyName;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceshipInside.OnTurretDestroyed
	 */
	struct ARaidSpaceshipInside_OnTurretDestroyed_Params
	{
	public:
		bool                                                       JustFixed;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceshipInside.OnRep_TurretDestroyed
	 */
	struct ARaidSpaceshipInside_OnRep_TurretDestroyed_Params
	{
	public:
		bool                                                       OldBool;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceshipInside.OnRep_ShipHullHealthChange
	 */
	struct ARaidSpaceshipInside_OnRep_ShipHullHealthChange_Params
	{
	public:
		float                                                      OldAmount;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceshipInside.OnRep_LifeSupportDestroyed
	 */
	struct ARaidSpaceshipInside_OnRep_LifeSupportDestroyed_Params
	{
	public:
		bool                                                       OldBool;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceshipInside.OnRep_IsOpen
	 */
	struct ARaidSpaceshipInside_OnRep_IsOpen_Params
	{	};

	/**
	 * Function RaidGame.RaidSpaceshipInside.OnRep_HelmGunDestroyed
	 */
	struct ARaidSpaceshipInside_OnRep_HelmGunDestroyed_Params
	{
	public:
		bool                                                       OldBool;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceshipInside.OnRep_HangerInUse
	 */
	struct ARaidSpaceshipInside_OnRep_HangerInUse_Params
	{	};

	/**
	 * Function RaidGame.RaidSpaceshipInside.OnRep_HangerDocked
	 */
	struct ARaidSpaceshipInside_OnRep_HangerDocked_Params
	{	};

	/**
	 * Function RaidGame.RaidSpaceshipInside.OnRep_EngineDestroyed
	 */
	struct ARaidSpaceshipInside_OnRep_EngineDestroyed_Params
	{
	public:
		bool                                                       OldBool;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceshipInside.OnRep_EnableColiision
	 */
	struct ARaidSpaceshipInside_OnRep_EnableColiision_Params
	{	};

	/**
	 * Function RaidGame.RaidSpaceshipInside.OnRep_CurrentShip
	 */
	struct ARaidSpaceshipInside_OnRep_CurrentShip_Params
	{
	public:
		bool                                                       OldShip;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceshipInside.OnPlayCompAnimNotify
	 */
	struct ARaidSpaceshipInside_OnPlayCompAnimNotify_Params
	{
	public:
		class USkeletalMeshComponent*                              CompToPlayOn;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                NotifyName;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceshipInside.OnLifeSupportDestroyed
	 */
	struct ARaidSpaceshipInside_OnLifeSupportDestroyed_Params
	{
	public:
		bool                                                       JustFixed;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceshipInside.OnHelmGunDestroyed
	 */
	struct ARaidSpaceshipInside_OnHelmGunDestroyed_Params
	{
	public:
		bool                                                       JustFixed;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceshipInside.OnEngineDestroyed
	 */
	struct ARaidSpaceshipInside_OnEngineDestroyed_Params
	{
	public:
		bool                                                       JustFixed;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceshipInside.NotReadyToDock
	 */
	struct ARaidSpaceshipInside_NotReadyToDock_Params
	{	};

	/**
	 * Function RaidGame.RaidSpaceshipInside.LevelShown
	 */
	struct ARaidSpaceshipInside_LevelShown_Params
	{	};

	/**
	 * Function RaidGame.RaidSpaceshipInside.HangerUseStateChange
	 */
	struct ARaidSpaceshipInside_HangerUseStateChange_Params
	{
	public:
		bool                                                       hangerchange;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceshipInside.GetTurretDestroyed
	 */
	struct ARaidSpaceshipInside_GetTurretDestroyed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceshipInside.GetShipName
	 */
	struct ARaidSpaceshipInside_GetShipName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceshipInside.GetLifeSupportDestroyed
	 */
	struct ARaidSpaceshipInside_GetLifeSupportDestroyed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceshipInside.GetHullHealth
	 */
	struct ARaidSpaceshipInside_GetHullHealth_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceshipInside.GetHelmGunDestroyed
	 */
	struct ARaidSpaceshipInside_GetHelmGunDestroyed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceshipInside.GetHangerID
	 */
	struct ARaidSpaceshipInside_GetHangerID_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceshipInside.GetEngineDestroyed
	 */
	struct ARaidSpaceshipInside_GetEngineDestroyed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceshipInside.EnableCollisionOnDoor
	 */
	struct ARaidSpaceshipInside_EnableCollisionOnDoor_Params
	{
	public:
		bool                                                       EnableCollision;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceshipInside.DoorOpenEvent
	 */
	struct ARaidSpaceshipInside_DoorOpenEvent_Params
	{
	public:
		bool                                                       BopenDoor;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSpaceshipInside.Docked
	 */
	struct ARaidSpaceshipInside_Docked_Params
	{	};

	/**
	 * Function RaidGame.RaidSubNodeActor.CheckMissionActor
	 */
	struct ARaidSubNodeActor_CheckMissionActor_Params
	{
	public:
		class AActor*                                              KillingActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSubNodeActor_Turret.ServerMultiFireProjectile
	 */
	struct ARaidSubNodeActor_Turret_ServerMultiFireProjectile_Params
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ShootDir;                                                // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSubNodeActor_Turret.ServerFireProjectile
	 */
	struct ARaidSubNodeActor_Turret_ServerFireProjectile_Params
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantizeNormal                           ShootDir;                                                // 0x000C(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ArrayNum;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSubNodeActor_Turret.OnRep_Health
	 */
	struct ARaidSubNodeActor_Turret_OnRep_Health_Params
	{
	public:
		float                                                      OldHealth;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSubNodeActor_Turret.OnDeathEvent
	 */
	struct ARaidSubNodeActor_Turret_OnDeathEvent_Params
	{	};

	/**
	 * Function RaidGame.RaidSubNodeActor_Turret.NetOnDeathEvent
	 */
	struct ARaidSubNodeActor_Turret_NetOnDeathEvent_Params
	{	};

	/**
	 * Function RaidGame.RaidSubNodeActor_Turret.NetMultiFire
	 */
	struct ARaidSubNodeActor_Turret_NetMultiFire_Params
	{
	public:
		int32_t                                                    SocketArrayNum;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSubNodeActor_Turret.HealthChanged
	 */
	struct ARaidSubNodeActor_Turret_HealthChanged_Params
	{
	public:
		float                                                      PercentNewHealth;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PercentOldHealth;                                        // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSubNodeActor_Turret.GetTheRequiredrotation
	 */
	struct ARaidSubNodeActor_Turret_GetTheRequiredrotation_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidSubNodeActor_Turret.FiredTurrentEvent
	 */
	struct ARaidSubNodeActor_Turret_FiredTurrentEvent_Params
	{
	public:
		int32_t                                                    SocketArrayNum;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidTargetType.GetTargets
	 */
	struct URaidTargetType_GetTargets_Params
	{
	public:
		class ARaidCharacter*                                      TargetingCharacter;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              TargetingActor;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayEventData                                  EventData;                                               // 0x0010(0x00B0)  (Parm, NativeAccessSpecifierPublic)
		TArray<struct FHitResult>                                  OutHitResults;                                           // 0x00C0(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		TArray<class AActor*>                                      OutActors;                                               // 0x00D0(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidTask_AnimMontage_WaitEvent.PlayMontageAndWaitForEvent
	 */
	struct URaidTask_AnimMontage_WaitEvent_PlayMontageAndWaitForEvent_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TaskInstanceName;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimMontage*                                        MontageToPlay;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               EventTags;                                               // 0x0018(0x0020)  (Parm, NativeAccessSpecifierPublic)
		float                                                      Rate;                                                    // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                StartSection;                                            // 0x003C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bStopWhenAbilityEnds;                                    // 0x0044(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KSK8[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      AnimRootMotionTranslationScale;                          // 0x0048(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_X4QK[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class URaidTask_AnimMontage_WaitEvent*                     ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidUseableAirLockComponent.StartTransferProcess
	 */
	struct URaidUseableAirLockComponent_StartTransferProcess_Params
	{	};

	/**
	 * Function RaidGame.RaidUseableAirLockComponent.HangerDoTransfer
	 */
	struct URaidUseableAirLockComponent_HangerDoTransfer_Params
	{	};

	/**
	 * Function RaidGame.RaidUseableAirLockComponent.CanHangerBeUsed
	 */
	struct URaidUseableAirLockComponent_CanHangerBeUsed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidUseableFrigatePartComponent.Onrep_HealthChange
	 */
	struct URaidUseableFrigatePartComponent_Onrep_HealthChange_Params
	{	};

	/**
	 * Function RaidGame.RaidUseableFrigatePartComponent.GetPipeNumberDamagePercent
	 */
	struct URaidUseableFrigatePartComponent_GetPipeNumberDamagePercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeapon.TTrace_ServerNotifyMiss
	 */
	struct ARaidWeapon_TTrace_ServerNotifyMiss_Params
	{
	public:
		struct FVector_NetQuantizeNormal                           ShootDir;                                                // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeapon.TTrace_ServerNotifyHit
	 */
	struct ARaidWeapon_TTrace_ServerNotifyHit_Params
	{
	public:
		struct FHitResult                                          Impact;                                                  // 0x0000(0x008C)  (ConstParm, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector_NetQuantizeNormal                           ShootDir;                                                // 0x008C(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeapon.StopDamageTrace
	 */
	struct ARaidWeapon_StopDamageTrace_Params
	{	};

	/**
	 * Function RaidGame.RaidWeapon.StartDamageTrace
	 */
	struct ARaidWeapon_StartDamageTrace_Params
	{	};

	/**
	 * Function RaidGame.RaidWeapon.SetMeleeStopDamage
	 */
	struct ARaidWeapon_SetMeleeStopDamage_Params
	{	};

	/**
	 * Function RaidGame.RaidWeapon.SetMeleeCanDamage
	 */
	struct ARaidWeapon_SetMeleeCanDamage_Params
	{	};

	/**
	 * Function RaidGame.RaidWeapon.ServerToggleFireMode
	 */
	struct ARaidWeapon_ServerToggleFireMode_Params
	{	};

	/**
	 * Function RaidGame.RaidWeapon.ServerStopReload
	 */
	struct ARaidWeapon_ServerStopReload_Params
	{	};

	/**
	 * Function RaidGame.RaidWeapon.ServerStopFire
	 */
	struct ARaidWeapon_ServerStopFire_Params
	{	};

	/**
	 * Function RaidGame.RaidWeapon.ServerStartReload
	 */
	struct ARaidWeapon_ServerStartReload_Params
	{	};

	/**
	 * Function RaidGame.RaidWeapon.ServerStartFire
	 */
	struct ARaidWeapon_ServerStartFire_Params
	{	};

	/**
	 * Function RaidGame.RaidWeapon.ServerSimulateWeaponFire
	 */
	struct ARaidWeapon_ServerSimulateWeaponFire_Params
	{	};

	/**
	 * Function RaidGame.RaidWeapon.ServerMultiSimulateWeaponFire
	 */
	struct ARaidWeapon_ServerMultiSimulateWeaponFire_Params
	{	};

	/**
	 * Function RaidGame.RaidWeapon.ServerMultiFireProjectile
	 */
	struct ARaidWeapon_ServerMultiFireProjectile_Params
	{
	public:
		struct FVector_NetQuantize10                               Origin;                                                  // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantizeNormal                           ShootDir;                                                // 0x000C(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeapon.ServerHandleFiring
	 */
	struct ARaidWeapon_ServerHandleFiring_Params
	{	};

	/**
	 * Function RaidGame.RaidWeapon.ServerFireProjectile
	 */
	struct ARaidWeapon_ServerFireProjectile_Params
	{
	public:
		struct FVector_NetQuantize10                               Origin;                                                  // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantizeNormal                           ShootDir;                                                // 0x000C(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeapon.ServerAIMultiFireProjectile
	 */
	struct ARaidWeapon_ServerAIMultiFireProjectile_Params
	{
	public:
		struct FVector_NetQuantize10                               Origin;                                                  // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantizeNormal                           ShootDir;                                                // 0x000C(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeapon.OnRep_WeaponHasBroken
	 */
	struct ARaidWeapon_OnRep_WeaponHasBroken_Params
	{
	public:
		bool                                                       WasOk;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeapon.OnRep_TTrace_HitLocation
	 */
	struct ARaidWeapon_OnRep_TTrace_HitLocation_Params
	{	};

	/**
	 * Function RaidGame.RaidWeapon.OnRep_Reload
	 */
	struct ARaidWeapon_OnRep_Reload_Params
	{	};

	/**
	 * Function RaidGame.RaidWeapon.OnRep_MyPawn
	 */
	struct ARaidWeapon_OnRep_MyPawn_Params
	{	};

	/**
	 * Function RaidGame.RaidWeapon.OnRep_CurrentUpperRailSlot
	 */
	struct ARaidWeapon_OnRep_CurrentUpperRailSlot_Params
	{	};

	/**
	 * Function RaidGame.RaidWeapon.OnRep_CurrentStockSlot
	 */
	struct ARaidWeapon_OnRep_CurrentStockSlot_Params
	{	};

	/**
	 * Function RaidGame.RaidWeapon.OnRep_CurrentSpecialSlot
	 */
	struct ARaidWeapon_OnRep_CurrentSpecialSlot_Params
	{	};

	/**
	 * Function RaidGame.RaidWeapon.OnRep_CurrentSightSlot
	 */
	struct ARaidWeapon_OnRep_CurrentSightSlot_Params
	{	};

	/**
	 * Function RaidGame.RaidWeapon.OnRep_CurrentMuzzleSlot
	 */
	struct ARaidWeapon_OnRep_CurrentMuzzleSlot_Params
	{	};

	/**
	 * Function RaidGame.RaidWeapon.OnRep_CurrentMagSlot
	 */
	struct ARaidWeapon_OnRep_CurrentMagSlot_Params
	{	};

	/**
	 * Function RaidGame.RaidWeapon.OnRep_CurrentLowerRailSlot
	 */
	struct ARaidWeapon_OnRep_CurrentLowerRailSlot_Params
	{	};

	/**
	 * Function RaidGame.RaidWeapon.OnRep_BurstCounter
	 */
	struct ARaidWeapon_OnRep_BurstCounter_Params
	{	};

	/**
	 * Function RaidGame.RaidWeapon.IsReloading
	 */
	struct ARaidWeapon_IsReloading_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeapon.HitPlayer
	 */
	struct ARaidWeapon_HitPlayer_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeapon.GetWeaponType
	 */
	struct ARaidWeapon_GetWeaponType_Params
	{
	public:
		EWeaponType                                                ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeapon.GetWeaponHasBroke
	 */
	struct ARaidWeapon_GetWeaponHasBroke_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeapon.GetWeaponConfig
	 */
	struct ARaidWeapon_GetWeaponConfig_Params
	{
	public:
		struct FWeaponData                                         ReturnValue;                                             // 0x0000(0x0138)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeapon.GetRunningSpeedModifier
	 */
	struct ARaidWeapon_GetRunningSpeedModifier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeapon.GetPawnOwner
	 */
	struct ARaidWeapon_GetPawnOwner_Params
	{
	public:
		class ARaidCharacter*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeapon.GetObstructionSweepDistance
	 */
	struct ARaidWeapon_GetObstructionSweepDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeapon.GetCarrySpeedModifier
	 */
	struct ARaidWeapon_GetCarrySpeedModifier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeapon.ClientStartReload
	 */
	struct ARaidWeapon_ClientStartReload_Params
	{	};

	/**
	 * Function RaidGame.RaidWeapon.BurstStopedFireEvent
	 */
	struct ARaidWeapon_BurstStopedFireEvent_Params
	{
	public:
		bool                                                       HasAmmo;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeapon.BurstStartFireEvent
	 */
	struct ARaidWeapon_BurstStartFireEvent_Params
	{
	public:
		bool                                                       HasAmmo;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeapon.BrokenWeaponEvent
	 */
	struct ARaidWeapon_BrokenWeaponEvent_Params
	{	};

	/**
	 * Function RaidGame.RaidWeapon_Instant.ServerNotifyMiss
	 */
	struct ARaidWeapon_Instant_ServerNotifyMiss_Params
	{
	public:
		struct FVector_NetQuantizeNormal                           ShootDir;                                                // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    RandomSeed;                                              // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReticleSpread;                                           // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeapon_Instant.ServerNotifyMeleeHit
	 */
	struct ARaidWeapon_Instant_ServerNotifyMeleeHit_Params
	{
	public:
		struct FHitResult                                          Impact;                                                  // 0x0000(0x008C)  (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             Origin;                                                  // 0x008C(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             EndLocation;                                             // 0x0098(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeapon_Instant.ServerNotifyHit
	 */
	struct ARaidWeapon_Instant_ServerNotifyHit_Params
	{
	public:
		struct FHitResult                                          Impact;                                                  // 0x0000(0x008C)  (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector_NetQuantizeNormal                           ShootDir;                                                // 0x008C(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    RandomSeed;                                              // 0x0098(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReticleSpread;                                           // 0x009C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeapon_Instant.OnRep_HitNotify
	 */
	struct ARaidWeapon_Instant_OnRep_HitNotify_Params
	{	};

	/**
	 * Function RaidGame.RaidWeapon_Instant.OnRep_HitNotifMeleey
	 */
	struct ARaidWeapon_Instant_OnRep_HitNotifMeleey_Params
	{	};

	/**
	 * Function RaidGame.RaidWeapon_Projectile.ServerFireProjectilFe
	 */
	struct ARaidWeapon_Projectile_ServerFireProjectilFe_Params
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantizeNormal                           ShootDir;                                                // 0x000C(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeaponAttachment.OnTurnOn
	 */
	struct ARaidWeaponAttachment_OnTurnOn_Params
	{
	public:
		bool                                                       bIsOn;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeaponAttachment.OnApplyOptions
	 */
	struct ARaidWeaponAttachment_OnApplyOptions_Params
	{
	public:
		class FString                                              Options;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeaponAttachment.ModifySpread
	 */
	struct ARaidWeaponAttachment_ModifySpread_Params
	{
	public:
		float                                                      OriginalSpread;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeaponAttachment.ModifyRecoil
	 */
	struct ARaidWeaponAttachment_ModifyRecoil_Params
	{
	public:
		float                                                      OriginalRecoil;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeaponAttachment.ModifyRange
	 */
	struct ARaidWeaponAttachment_ModifyRange_Params
	{
	public:
		float                                                      OriginalRange;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeaponAttachment.ModifyDamage
	 */
	struct ARaidWeaponAttachment_ModifyDamage_Params
	{
	public:
		float                                                      OriginalDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeaponAttachment.ModifyAimSpeed
	 */
	struct ARaidWeaponAttachment_ModifyAimSpeed_Params
	{
	public:
		float                                                      OriginalSpeed;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeaponAttachment.GetWeaponOwner
	 */
	struct ARaidWeaponAttachment_GetWeaponOwner_Params
	{
	public:
		class ARaidWeapon*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeaponAttachment.GetCharacterOwner
	 */
	struct ARaidWeaponAttachment_GetCharacterOwner_Params
	{
	public:
		class ARaidCharacter*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeaponAttachment.GetAttachmentName
	 */
	struct ARaidWeaponAttachment_GetAttachmentName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeaponAttachment.BP_OnThirdPerson
	 */
	struct ARaidWeaponAttachment_BP_OnThirdPerson_Params
	{	};

	/**
	 * Function RaidGame.RaidWeaponAttachment.BP_OnStopAiming
	 */
	struct ARaidWeaponAttachment_BP_OnStopAiming_Params
	{	};

	/**
	 * Function RaidGame.RaidWeaponAttachment.BP_OnStartAiming
	 */
	struct ARaidWeaponAttachment_BP_OnStartAiming_Params
	{	};

	/**
	 * Function RaidGame.RaidWeaponAttachment.BP_OnFirstPerson
	 */
	struct ARaidWeaponAttachment_BP_OnFirstPerson_Params
	{	};

	/**
	 * Function RaidGame.RaidWeaponAttachment_Muzzle.LocalSimulateFire
	 */
	struct ARaidWeaponAttachment_Muzzle_LocalSimulateFire_Params
	{	};

	/**
	 * Function RaidGame.RaidWeaponAttachment_Muzzle.GetMuzzleFlashPSC
	 */
	struct ARaidWeaponAttachment_Muzzle_GetMuzzleFlashPSC_Params
	{
	public:
		class UParticleSystemComponent*                            ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeaponAttachment_Sight.ModifyAimOffset
	 */
	struct ARaidWeaponAttachment_Sight_ModifyAimOffset_Params
	{
	public:
		struct FVector                                             DefaultOffset;                                           // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeaponAttachment_Sight.GetSceneCapture
	 */
	struct ARaidWeaponAttachment_Sight_GetSceneCapture_Params
	{
	public:
		class USceneCaptureComponent2D*                            ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeaponAttachment_Sight.GetRecommendedRenderTargetResolution
	 */
	struct ARaidWeaponAttachment_Sight_GetRecommendedRenderTargetResolution_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeaponAttachment_Sight.GetRecommendedFieldOfView
	 */
	struct ARaidWeaponAttachment_Sight_GetRecommendedFieldOfView_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeaponAttachment_Special.GetLeftHandTransform
	 */
	struct ARaidWeaponAttachment_Special_GetLeftHandTransform_Params
	{
	public:
		struct FTransform                                          OutTransform;                                            // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeaponAttachment_Special.GetFPHandAnimation_Right
	 */
	struct ARaidWeaponAttachment_Special_GetFPHandAnimation_Right_Params
	{
	public:
		class UAnimSequence*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeaponAttachment_Special.GetFPHandAnimation_Left
	 */
	struct ARaidWeaponAttachment_Special_GetFPHandAnimation_Left_Params
	{
	public:
		class UAnimSequence*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeaponAttachmentPoint.OnRepGadgetOnOff
	 */
	struct URaidWeaponAttachmentPoint_OnRepGadgetOnOff_Params
	{	};

	/**
	 * Function RaidGame.RaidWeaponAttachmentPoint.OnRepAttachmentClass
	 */
	struct URaidWeaponAttachmentPoint_OnRepAttachmentClass_Params
	{	};

	/**
	 * Function RaidGame.RaidWeaponAttachmentPoint.GetCurrentAttachment
	 */
	struct URaidWeaponAttachmentPoint_GetCurrentAttachment_Params
	{
	public:
		class ARaidWeaponAttachment*                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeaponAttachmentPoint.GetAttachPointName
	 */
	struct URaidWeaponAttachmentPoint_GetAttachPointName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeaponAttachmentPoint.GetAttachmentList
	 */
	struct URaidWeaponAttachmentPoint_GetAttachmentList_Params
	{
	public:
		TArray<class UClass*>                                      AttachmentList;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWeaponAttachmentPoint.GetAttachmentIdx
	 */
	struct URaidWeaponAttachmentPoint_GetAttachmentIdx_Params
	{
	public:
		class UClass*                                              AttachmentClass;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RaidWorldProcManager.TimedSpawning
	 */
	struct ARaidWorldProcManager_TimedSpawning_Params
	{	};

	/**
	 * Function RaidGame.RaidWorldProcManager.OnRep_Seed
	 */
	struct ARaidWorldProcManager_OnRep_Seed_Params
	{	};

	/**
	 * Function RaidGame.RealisticProjectileComponent.VelocityAtTime_LinearDrag
	 */
	struct URealisticProjectileComponent_VelocityAtTime_LinearDrag_Params
	{
	public:
		struct FTrajectoryInitialConditions                        TIC;                                                     // 0x0000(0x006C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      K;                                                       // 0x006C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Vinf;                                                    // 0x0070(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TimeSinceLaunch;                                         // 0x007C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0080(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RealisticProjectileComponent.TimeOfFlight_Sliding
	 */
	struct URealisticProjectileComponent_TimeOfFlight_Sliding_Params
	{
	public:
		struct FTrajectoryInitialConditions                        TIC;                                                     // 0x0000(0x006C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             EndLocation;                                             // 0x006C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             CurrentVelocity;                                         // 0x0078(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0084(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RealisticProjectileComponent.TimeOfFlight_LinearDrag
	 */
	struct URealisticProjectileComponent_TimeOfFlight_LinearDrag_Params
	{
	public:
		struct FTrajectoryInitialConditions                        TIC;                                                     // 0x0000(0x006C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      K;                                                       // 0x006C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Vinf;                                                    // 0x0070(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             EndLocation;                                             // 0x007C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             CurrentVelocity;                                         // 0x0088(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0094(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RealisticProjectileComponent.StopSimulating
	 */
	struct URealisticProjectileComponent_StopSimulating_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       PredictOnly;                                             // 0x008C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RealisticProjectileComponent.ShouldBounce
	 */
	struct URealisticProjectileComponent_ShouldBounce_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             ImpactVelocity;                                          // 0x008C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0098(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RealisticProjectileComponent.SetVelocityInLocalSpace
	 */
	struct URealisticProjectileComponent_SetVelocityInLocalSpace_Params
	{
	public:
		struct FVector                                             NewVelocity;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RealisticProjectileComponent.SetInitialConditions
	 */
	struct URealisticProjectileComponent_SetInitialConditions_Params
	{
	public:
		struct FTrajectoryInitialConditions                        Trajectory;                                              // 0x0000(0x006C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RealisticProjectileComponent.ServerCheckClientHit
	 */
	struct URealisticProjectileComponent_ServerCheckClientHit_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ImpactVelocity;                                          // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VRE1[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      ActiveProjectiles;                                       // 0x0018(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x0028(0x008C)  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		float                                                      TimeSinceShot;                                           // 0x00B4(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    BulletRandSeed;                                          // 0x00B8(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Epsilon;                                                 // 0x00BC(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StepTime;                                                // 0x00C0(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       DrawHit;                                                 // 0x00C4(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOverrideGravity;                                        // 0x00C5(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0E18[0x2];                                   // 0x00C6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             NewGravity;                                              // 0x00C8(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00D4(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RealisticProjectileComponent.ScaleVisualEffect
	 */
	struct URealisticProjectileComponent_ScaleVisualEffect_Params
	{
	public:
		class UStaticMeshComponent*                                Mesh;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             WorldLocation;                                           // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Direction;                                               // 0x0014(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             CameraLocation;                                          // 0x0020(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Thickness;                                               // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RealisticProjectileComponent.ScaleTracerMesh
	 */
	struct URealisticProjectileComponent_ScaleTracerMesh_Params
	{
	public:
		class UStaticMeshComponent*                                Mesh;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class URealisticProjectileComponent*                       ProjectileComponent;                                     // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             WorldLocation;                                           // 0x0010(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             CameraLocation;                                          // 0x001C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Thickness;                                               // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      LengthFactor;                                            // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RealisticProjectileComponent.PositionAtTime_LinearDrag
	 */
	struct URealisticProjectileComponent_PositionAtTime_LinearDrag_Params
	{
	public:
		struct FTrajectoryInitialConditions                        TIC;                                                     // 0x0000(0x006C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      K;                                                       // 0x006C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Vinf;                                                    // 0x0070(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TimeSinceLaunch;                                         // 0x007C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0080(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction RaidGame.RealisticProjectileComponent.OnProjectileStopDelegate__DelegateSignature
	 */
	struct URealisticProjectileComponent_OnProjectileStopDelegate__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction RaidGame.RealisticProjectileComponent.OnProjectilePenetrateDelegate__DelegateSignature
	 */
	struct URealisticProjectileComponent_OnProjectilePenetrateDelegate__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             ImpactVelocity;                                          // 0x008C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction RaidGame.RealisticProjectileComponent.OnProjectileEmbedDelegate__DelegateSignature
	 */
	struct URealisticProjectileComponent_OnProjectileEmbedDelegate__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		float                                                      ImpactVelocity;                                          // 0x008C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction RaidGame.RealisticProjectileComponent.OnProjectileBounceDelegate__DelegateSignature
	 */
	struct URealisticProjectileComponent_OnProjectileBounceDelegate__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             ImpactVelocity;                                          // 0x008C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction RaidGame.RealisticProjectileComponent.OnProjectileAnyHitDelegate__DelegateSignature
	 */
	struct URealisticProjectileComponent_OnProjectileAnyHitDelegate__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          HitDetails;                                              // 0x0000(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             ImpactVelocity;                                          // 0x008C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction RaidGame.RealisticProjectileComponent.OnPenetrationExitDelegate__DelegateSignature
	 */
	struct URealisticProjectileComponent_OnPenetrationExitDelegate__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          ExitHit;                                                 // 0x0000(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             ExitVelocity;                                            // 0x008C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction RaidGame.RealisticProjectileComponent.OnComponentBeginOverlapDelegate__DelegateSignature
	 */
	struct URealisticProjectileComponent_OnComponentBeginOverlapDelegate__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		int32_t                                                    TrajectoryNum;                                           // 0x008C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TimeSinceSpawn;                                          // 0x0090(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RealisticProjectileComponent.HasStoppedSimulation
	 */
	struct URealisticProjectileComponent_HasStoppedSimulation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RealisticProjectileComponent.GetPredictedTrajectoryFull
	 */
	struct URealisticProjectileComponent_GetPredictedTrajectoryFull_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     WorldLocations;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FRotator>                                    Rotations;                                               // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     Velocities;                                              // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FVector                                             StartLocation;                                           // 0x0038(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            StartRotation;                                           // 0x0044(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class UClass*                                              Properties;                                              // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    RandSeed;                                                // 0x0058(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TimeToSimulate;                                          // 0x005C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StepTime;                                                // 0x0060(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxPoints;                                               // 0x0064(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOverrideGravity;                                        // 0x0068(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UIZO[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             GravityAccel;                                            // 0x006C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Scale;                                                   // 0x0078(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RealisticProjectileComponent.GetPredictedTrajectoryForSettings
	 */
	struct URealisticProjectileComponent_GetPredictedTrajectoryForSettings_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     WorldLocations;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FVector                                             StartLocation;                                           // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            StartRotation;                                           // 0x0024(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class UClass*                                              Properties;                                              // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRealisticProjectileBehavior                        NewSettings;                                             // 0x0038(0x0044)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    RandSeed;                                                // 0x007C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TimeToSimulate;                                          // 0x0080(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StepTime;                                                // 0x0084(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxPoints;                                               // 0x0088(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOverrideGravity;                                        // 0x008C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CEOV[0x3];                                   // 0x008D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             GravityAccel;                                            // 0x0090(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Scale;                                                   // 0x009C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RealisticProjectileComponent.GetPredictedTrajectory
	 */
	struct URealisticProjectileComponent_GetPredictedTrajectory_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     WorldLocations;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FVector                                             LastVelocity;                                            // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             StartLocation;                                           // 0x0024(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            StartRotation;                                           // 0x0030(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_F6G3[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              Properties;                                              // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    RandSeed;                                                // 0x0048(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TimeToSimulate;                                          // 0x004C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StepTime;                                                // 0x0050(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxPoints;                                               // 0x0054(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOverrideGravity;                                        // 0x0058(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6IXE[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             GravityAccel;                                            // 0x005C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Scale;                                                   // 0x0068(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RealisticProjectileComponent.GetInitialConditions
	 */
	struct URealisticProjectileComponent_GetInitialConditions_Params
	{
	public:
		struct FTrajectoryInitialConditions                        ReturnValue;                                             // 0x0000(0x006C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RealisticProjectileComponent.GetExitHit
	 */
	struct URealisticProjectileComponent_GetExitHit_Params
	{
	public:
		struct FHitResult                                          OutHit;                                                  // 0x0000(0x008C)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             NewLocation;                                             // 0x008C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x0098(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GHCV[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWorld*                                              World;                                                   // 0x00A8(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00B0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RealisticProjectileComponent.FastForwardWithHistory
	 */
	struct URealisticProjectileComponent_FastForwardWithHistory_Params
	{
	public:
		TArray<struct FRewindHit>                                  OutHits;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		float                                                      Timestamp;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6QK7[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FRewindHistory>                              PlayerLocations;                                         // 0x0018(0x0010)  (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		float                                                      StepTime;                                                // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RealisticProjectileComponent.FastForward
	 */
	struct URealisticProjectileComponent_FastForward_Params
	{
	public:
		float                                                      Timestamp;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StepTime;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RealisticProjectileComponent.DrawPredictedPathFromPoints
	 */
	struct URealisticProjectileComponent_DrawPredictedPathFromPoints_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UStaticMeshComponent*>                        Meshes;                                                  // 0x0008(0x0010)  (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     Path;                                                    // 0x0018(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		float                                                      Thickness;                                               // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RealisticProjectileComponent.DrawPredictedPath
	 */
	struct URealisticProjectileComponent_DrawPredictedPath_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UStaticMeshComponent*>                        Meshes;                                                  // 0x0008(0x0010)  (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             StartLocation;                                           // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            StartRotation;                                           // 0x0024(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class UClass*                                              ProjectileClass;                                         // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    RandSeed;                                                // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TimeToSimulate;                                          // 0x003C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StepTime;                                                // 0x0040(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOverrideGravity;                                        // 0x0044(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WGWV[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             GravityAccel;                                            // 0x0048(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Thickness;                                               // 0x0054(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RealisticProjectileComponent.ComputeNewVelocity
	 */
	struct URealisticProjectileComponent_ComputeNewVelocity_Params
	{
	public:
		float                                                      TimeSinceLaunch;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RealisticProjectileComponent.ComputeNewRotation
	 */
	struct URealisticProjectileComponent_ComputeNewRotation_Params
	{
	public:
		float                                                      TimeSinceLaunch;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            ReturnValue;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RealisticProjectileComponent.ComputeNewLocation
	 */
	struct URealisticProjectileComponent_ComputeNewLocation_Params
	{
	public:
		float                                                      TimeSinceLaunch;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RealisticProjectileComponent.ApplyImpulse
	 */
	struct URealisticProjectileComponent_ApplyImpulse_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x008C)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             ImpactVelocity;                                          // 0x008C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RealisticProjectileComponent.AdjustDirection
	 */
	struct URealisticProjectileComponent_AdjustDirection_Params
	{
	public:
		struct FVector                                             InVelocity;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ImpactNormal;                                            // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RewindUtilities.TestCollisionForFrame
	 */
	struct URewindUtilities_TestCollisionForFrame_Params
	{
	public:
		TArray<struct FRewindHit>                                  OutHits;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		float                                                      GameTimeStart;                                           // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      GameTimeEnd;                                             // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LocationStart;                                           // 0x0018(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LocationEnd;                                             // 0x0024(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FRewindHistory>                              HitboxHistories;                                         // 0x0030(0x0010)  (ConstParm, Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 Projectile;                                              // 0x0040(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.RewindUtilities.AddFrameToRewindHistory
	 */
	struct URewindUtilities_AddFrameToRewindHistory_Params
	{
	public:
		struct FRewindHistory                                      InRewindHistory;                                         // 0x0000(0x0010)  (Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class AActor*                                              RecordActor;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                MatchComponentsWithTag;                                  // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Gametime;                                                // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ClearOlderThan;                                          // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.VirtualCursorFunctionLibrary.IsJoypadCursorUp
	 */
	struct UVirtualCursorFunctionLibrary_IsJoypadCursorUp_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.VirtualCursorFunctionLibrary.IsCursorOverInteractableWidget
	 */
	struct UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.VirtualCursorFunctionLibrary.EnableVirtualCursor
	 */
	struct UVirtualCursorFunctionLibrary_EnableVirtualCursor_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function RaidGame.VirtualCursorFunctionLibrary.DisableVirtualCursor
	 */
	struct UVirtualCursorFunctionLibrary_DisableVirtualCursor_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
