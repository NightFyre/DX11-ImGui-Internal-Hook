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
	 * Class RaidGame.AsyncTaskGameplayTagAddedRemoved
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UAsyncTaskGameplayTagAddedRemoved : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnTagAdded;                                              // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTagRemoved;                                            // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UAbilitySystemComponent*                             ASC;                                                     // 0x0050(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EC6I[0x20];                                  // 0x0058(0x0020) MISSED OFFSET (PADDING)

	public:
		class UAsyncTaskGameplayTagAddedRemoved* ListenForGameplayTagAddedOrRemoved(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayTagContainer& Tags);
		void EndTask();
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.AttackPositionGenerator
	 * Size -> 0x0078 (FullSize[0x00C8] - InheritedSize[0x0050])
	 */
	class UAttackPositionGenerator : public UEnvQueryGenerator
	{
	public:
		struct FAIDataProviderFloatValue                           SquareExtent;                                            // 0x0050(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           BoxHeight;                                               // 0x0088(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UClass*                                              GenerateAround;                                          // 0x00C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.BTDecorator_HasLoSTo
	 * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
	 */
	class UBTDecorator_HasLoSTo : public UBTDecorator
	{
	public:
		struct FBlackboardKeySelector                              EnemyKey;                                                // 0x0068(0x0028) Edit, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.BTTask_FindPickup
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UBTTask_FindPickup : public UBTTask_BlackboardBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.BTTask_FindPointNearEnemy
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UBTTask_FindPointNearEnemy : public UBTTask_BlackboardBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.EnemyLocationContext
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnemyLocationContext : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.GamepadCursorSettings
	 * Size -> 0x00C0 (FullSize[0x00F8] - InheritedSize[0x0038])
	 */
	class UGamepadCursorSettings : public UDeveloperSettings
	{
	public:
		struct FRuntimeFloatCurve                                  AnalogCursorAccelerationCurve;                           // 0x0038(0x0088) Edit, Config, NativeAccessSpecifierPrivate
		float                                                      MaxAnalogCursorSpeed;                                    // 0x00C0(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxAnalogCursorSpeedWhenHovered;                         // 0x00C4(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AnalogCursorDragCoefficient;                             // 0x00C8(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AnalogCursorDragCoefficientWhenHovered;                  // 0x00CC(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MinAnalogCursorSpeed;                                    // 0x00D0(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AnalogCursorDeadZone;                                    // 0x00D4(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AnalogCursorAccelerationMultiplier;                      // 0x00D8(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AnalogCursorSize;                                        // 0x00DC(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUseEngineAnalogCursor;                                  // 0x00E0(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAnalogCursorNoAcceleration;                             // 0x00E1(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_W7LR[0x16];                                  // 0x00E2(0x0016) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.GOAPAction
	 * Size -> 0x0180 (FullSize[0x01A8] - InheritedSize[0x0028])
	 */
	class UGOAPAction : public UObject
	{
	public:
		class FString                                              Name;                                                    // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V3DN[0xC];                                   // 0x0038(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxSecondsForAction;                                     // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OrderPriority;                                           // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RPEH[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAtom>                                       preconditions;                                           // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAtom>                                       OrPreconditions;                                         // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAtom>                                       effects;                                                 // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RCZ5[0xF8];                                  // 0x0080(0x00F8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            DoOnceTagsUsed;                                          // 0x0178(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class ARaidGOAPController*                                 MyGOAPController;                                        // 0x0188(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    tempclosestMatch;                                        // 0x0190(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ATWA[0xC];                                   // 0x0194(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bDirty;                                                  // 0x01A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YS91[0x7];                                   // 0x01A1(0x0007) MISSED OFFSET (PADDING)

	public:
		void TryLean(bool Left, bool Right, bool Back);
		void TimeOutFinish();
		void StopMovementRequest();
		void StopLookRequest();
		void StopIntervalShooting();
		void StartIntervalShooting(float MissRate, float IntervalRangeMin, float IntervalRangeMax, float CooldownRangeMin, float CooldownRangeMax, float FireRate);
		void StartAction();
		void ShootAtLocation(const struct FVector& LoctoShoot, float MissRate);
		void ShootAtCurrentEnemy(float MissRate);
		void ShootAimedAtCurrentEnemy(float MissRate, const class FName& BonedAimedAt);
		void SetTargetEnemy(class ARaidCharacter* TEnemy);
		void SetShuffleOnce(float ShuffleAmountLeftRight);
		void SetMoveShuffle(float TimeBetween, float CancelOUt, float ShuffleAmountLeftRight);
		void SetLookAtTargetLocation(const struct FVector& LocatLocation);
		void SetLookAroundWiggleOnce(float WiggleAmountLeftRight, float WiggleAmountUpDown, float CancelOUt);
		void SetLookAroundWiggle(float TimeBetween, float CancelOUt, float WiggleAmountLeftRight, float WiggleAmountUpDown);
		void SetBotRotationSpeed(float RotationSpeed);
		void SetActionTimer(const class FString& FunctionName, float InRate, bool InbLoop, float InFirstDelay);
		void ReloadAIWeapon();
		void MoveInfo(const struct FVector& atLocation, EMoveRequest Branches);
		void LookAtPawnDirection(bool CancelOUt);
		bool ImIMoving();
		bool HasLostEnemy();
		bool HasEnemy();
		bool HasArrivedAtLocation(float Allowance, bool DontRestartMoveQuery, bool* RequestORMoveHasFailed);
		void GOAPSetFocalPoint(const struct FVector& NewFocus, ERaidFocusPri InPriority);
		float GetTimeSinceLostEnemy();
		class ARaidCharacter* GetSensedPlayerThatCantSeeMe();
		class ARaidCharacter* GetSensedPlayerClosetToMe();
		class ARaidCharacter* GetSensedPlayerAimingAtMe();
		class ARaidNodeBot* GetMyBot();
		struct FVector GetMovingTowardLocation();
		struct FVector GetLookAtTargetLocation();
		class ARaidCharacter* GetCurrentTarget();
		TArray<class AActor*> GetCurrentSensedTargets();
		int32_t GetCurrentAmmoInClip(int32_t maxclipsize);
		void GetCoverPointInfo(bool* CrouchPoint, bool* ShootOver, bool* LeftLean, bool* RightLean, struct FVector* DirectionToWall);
		class ARaidGOAPController* GetController();
		float GetActionTimeInSeconds();
		void EQSQueryLookToLocation(class UEnvQuery* MyQuery, EEnvQueryRunMode RunMode, float DeactiveTime);
		void EQSQueryLookToDirection(class UEnvQuery* MyQuery, EEnvQueryRunMode RunMode, const struct FVector& LookToVector, float DeactiveTime);
		void EQSQueryandMoveToLocationVector(const struct FVector& LocationVector, class UEnvQuery* MyQuery, EEnvQueryRunMode RunMode);
		void EQSQueryandMoveToLocation(class UEnvQuery* MyQuery, EEnvQueryRunMode RunMode);
		void EQSQueryandMoveToCover(class UEnvQuery* MyQuery, EEnvQueryRunMode RunMode);
		void DoOnce(int32_t TagIntForBranch, EPassEnum* Branches);
		void CleanupAction(class ARaidGOAPController* P);
		bool checkProceduralPrecondition(class ARaidGOAPController* P);
		bool CheckLOSToTarget();
		void CancelMoveShuffle();
		void CancelLookAroundWiggle();
		void BranchAtTickTime(float SecondsIn, ETimeEnum* Branches);
		void AddFrequencyCost();
		void ActionComplete();
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.GOAPBrain
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UGOAPBrain : public UObject
	{
	public:
		class ARaidGOAPController*                                 MyGOAPController;                                        // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		class ARaidGOAPController* GetController();
		void FinishedChoice(const class FString& NewGoal);
		void Brain_StartGoalChoice(ERaidAIState StateCompleted);
		bool Brain_IsRunning(class UGOAPBrain* MyControl);
		bool Brain_IsNearCover(class UGOAPBrain* MyControl, const struct FVector& BoundsIn, int32_t* NumberNear);
		bool Brain_IsHealthLow(class UGOAPBrain* MyControl, float healthAmount);
		bool Brain_IsEnemyNearCover(class UGOAPBrain* MyControl, const struct FVector& BoundsIn, int32_t* NumberNear);
		bool Brain_IsEnemyAimingAtme(class UGOAPBrain* MyControl);
		bool Brain_IsCrouched(class UGOAPBrain* MyControl);
		bool Brain_IsAnotherPlayerCloserThenTarget(class UGOAPBrain* MyControl);
		bool Brain_ImIMoving(class UGOAPBrain* MyControl);
		bool Brain_HasToReload(class UGOAPBrain* MyControl, int32_t bullletLowAmount);
		bool Brain_HasRecentlySeenSomeone(class UGOAPBrain* MyControl, float recentamount);
		bool Brain_HasRecentlyPoppedSomeshotsOff(class UGOAPBrain* MyControl, float recentamount);
		bool Brain_HasRecentlyLooted(class UGOAPBrain* MyControl, float timeSinceLastloot);
		bool Brain_HasRecentlyHeardSomeone(class UGOAPBrain* MyControl, float recentamount);
		bool Brain_HasRecentlyBeenSearching(class UGOAPBrain* MyControl, float recentamount);
		bool Brain_HasRecentlyBeenPatrolling(class UGOAPBrain* MyControl, float recentamount);
		bool Brain_HasRecentlyBeenDamaged(class UGOAPBrain* MyControl, float recentamount);
		bool Brain_HasRecentlyBeenAttacking(class UGOAPBrain* MyControl, float recentamount);
		bool Brain_HasPerceptionPeopleNear(class UGOAPBrain* MyControl, bool Allies, float distanceamount);
		bool Brain_HasLostEnemy(class UGOAPBrain* MyControl, float timeAmountforLost);
		bool Brain_HasEnemyLowHealth(class UGOAPBrain* MyControl, float amountlow);
		bool Brain_HasEnemyLowAmmo(class UGOAPBrain* MyControl, float Percentlow);
		bool Brain_HasEnemy(class UGOAPBrain* MyControl);
		bool Brain_EnemyFar(class UGOAPBrain* MyControl, float DistanceforFar);
		bool Brain_CheckLOSToTarget(class UGOAPBrain* MyControl);
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.GOAPEnemyContext
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGOAPEnemyContext : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.GOAPLocationQueryContext
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGOAPLocationQueryContext : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.GOAPLookDirectionQueryContext
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGOAPLookDirectionQueryContext : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.GOAPSearchDirectionQueryContext
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGOAPSearchDirectionQueryContext : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.GSAbilitySystemGlobals
	 * Size -> 0x0000 (FullSize[0x0260] - InheritedSize[0x0260])
	 */
	class UGSAbilitySystemGlobals : public UAbilitySystemGlobals
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.GSAbilityTask_RotateToFace
	 * Size -> 0x0050 (FullSize[0x00D0] - InheritedSize[0x0080])
	 */
	class UGSAbilityTask_RotateToFace : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnTimedOut;                                              // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTimedOutAndDestinationReached;                         // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FName                                                ForceName;                                               // 0x00A0(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRotator                                            StartRotation;                                           // 0x00A8(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FRotator                                            TargetRotation;                                          // 0x00B4(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      Duration;                                                // 0x00C0(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRestrictSpeedToExpected;                                // 0x00C4(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7IY8[0xB];                                   // 0x00C5(0x000B) MISSED OFFSET (PADDING)

	public:
		class UGSAbilityTask_RotateToFace* RotateToFace(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, const struct FRotator& TargetRotation, float Duration, bool bRestrictSpeedToExpected);
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.GSAT_MoveSceneCompRelLocation
	 * Size -> 0x0050 (FullSize[0x00D0] - InheritedSize[0x0080])
	 */
	class UGSAT_MoveSceneCompRelLocation : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnFinishMove;                                            // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LNXW[0x28];                                  // 0x0090(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     Component;                                               // 0x00B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         LerpCurve;                                               // 0x00C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveVector*                                        LerpCurveVector;                                         // 0x00C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		class UGSAT_MoveSceneCompRelLocation* MoveSceneComponentRelativeLocation(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, class USceneComponent* SceneComponent, const struct FVector& Location, float Duration, class UCurveFloat* OptionalInterpolationCurve, class UCurveVector* OptionalVectorInterpolationCurve);
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.GSAT_PlayMontageAndWaitForEvent
	 * Size -> 0x00C0 (FullSize[0x0140] - InheritedSize[0x0080])
	 */
	class UGSAT_PlayMontageAndWaitForEvent : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnCompleted;                                             // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBlendOut;                                              // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInterrupted;                                           // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCancelled;                                             // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             EventReceived;                                           // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UAnimMontage*                                        MontageToPlay;                                           // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTagContainer                               EventTags;                                               // 0x00D8(0x0020) NativeAccessSpecifierPrivate
		float                                                      Rate;                                                    // 0x00F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                StartSection;                                            // 0x00FC(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AnimRootMotionTranslationScale;                          // 0x0104(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bStopWhenAbilityEnds;                                    // 0x0108(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_490D[0x37];                                  // 0x0109(0x0037) MISSED OFFSET (PADDING)

	public:
		class UGSAT_PlayMontageAndWaitForEvent* PlayMontageAndWaitForEvent(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, class UAnimMontage* MontageToPlay, const struct FGameplayTagContainer& EventTags, float Rate, const class FName& StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale);
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.GSAT_PlayMontageForMeshAndWaitForEvent
	 * Size -> 0x00D0 (FullSize[0x0150] - InheritedSize[0x0080])
	 */
	class UGSAT_PlayMontageForMeshAndWaitForEvent : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnCompleted;                                             // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBlendOut;                                              // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInterrupted;                                           // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCancelled;                                             // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             EventReceived;                                           // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x00D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAnimMontage*                                        MontageToPlay;                                           // 0x00D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTagContainer                               EventTags;                                               // 0x00E0(0x0020) NativeAccessSpecifierPrivate
		float                                                      Rate;                                                    // 0x0100(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                StartSection;                                            // 0x0104(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AnimRootMotionTranslationScale;                          // 0x010C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bStopWhenAbilityEnds;                                    // 0x0110(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bReplicateMontage;                                       // 0x0111(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XJXT[0x2];                                   // 0x0112(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OverrideBlendOutTimeForCancelAbility;                    // 0x0114(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      OverrideBlendOutTimeForStopWhenEndAbility;               // 0x0118(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_THU9[0x34];                                  // 0x011C(0x0034) MISSED OFFSET (PADDING)

	public:
		class UGSAT_PlayMontageForMeshAndWaitForEvent* PlayMontageForMeshAndWaitForEvent(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, class USkeletalMeshComponent* Mesh, class UAnimMontage* MontageToPlay, const struct FGameplayTagContainer& EventTags, float Rate, const class FName& StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, bool bReplicateMontage, float OverrideBlendOutTimeForCancelAbility, float OverrideBlendOutTimeForStopWhenEndAbility);
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.GSAT_PlayMontageMulti
	 * Size -> 0x00D0 (FullSize[0x0150] - InheritedSize[0x0080])
	 */
	class UGSAT_PlayMontageMulti : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnCompleted;                                             // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBlendOut;                                              // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInterrupted;                                           // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCancelled;                                             // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             EventReceived;                                           // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x00D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAnimMontage*                                        MontageToPlay;                                           // 0x00D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTagContainer                               EventTags;                                               // 0x00E0(0x0020) NativeAccessSpecifierPrivate
		float                                                      Rate;                                                    // 0x0100(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                StartSection;                                            // 0x0104(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AnimRootMotionTranslationScale;                          // 0x010C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bStopWhenAbilityEnds;                                    // 0x0110(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bReplicateMontage;                                       // 0x0111(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7HWJ[0x2];                                   // 0x0112(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OverrideBlendOutTimeForCancelAbility;                    // 0x0114(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      OverrideBlendOutTimeForStopWhenEndAbility;               // 0x0118(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IIK1[0x34];                                  // 0x011C(0x0034) MISSED OFFSET (PADDING)

	public:
		class UGSAT_PlayMontageMulti* PlayMontageMulti(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, class USkeletalMeshComponent* Mesh, class UAnimMontage* MontageToPlay, const struct FGameplayTagContainer& EventTags, float Rate, const class FName& StartSection);
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.GSAT_ServerWaitForClientTargetData
	 * Size -> 0x0018 (FullSize[0x0098] - InheritedSize[0x0080])
	 */
	class UGSAT_ServerWaitForClientTargetData : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             ValidData;                                               // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AE94[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (PADDING)

	public:
		class UGSAT_ServerWaitForClientTargetData* ServerWaitForClientTargetData(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, bool TriggerOnce);
		void OnTargetDataReplicatedCallback(const struct FGameplayAbilityTargetDataHandle& Data, const struct FGameplayTag& ActivationTag);
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.GSAT_WaitChangeFOV
	 * Size -> 0x0038 (FullSize[0x00B8] - InheritedSize[0x0080])
	 */
	class UGSAT_WaitChangeFOV : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnTargetFOVReached;                                      // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9CCA[0x28];                                  // 0x0090(0x0028) MISSED OFFSET (PADDING)

	public:
		class UGSAT_WaitChangeFOV* WaitChangeFOV(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, class UCameraComponent* CameraComponent, float TargetFOV, float Duration, class UCurveFloat* OptionalInterpolationCurve);
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.GSAT_WaitClimbableTarget
	 * Size -> 0x01E0 (FullSize[0x0260] - InheritedSize[0x0080])
	 */
	class UGSAT_WaitClimbableTarget : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             FoundNewClimbableTarget;                                 // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             LostClimbableTarget;                                     // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DQGP[0x1C0];                                 // 0x00A0(0x01C0) MISSED OFFSET (PADDING)

	public:
		class UGSAT_WaitClimbableTarget* WaitForClimbableTarget(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, const struct FCollisionProfileName& TraceProfile, float MaxRange, float TimerPeriod, bool bShowDebug);
		void PerformTrace();
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.GSAT_WaitDelayOneFrame
	 * Size -> 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
	 */
	class UGSAT_WaitDelayOneFrame : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnFinish;                                                // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UGSAT_WaitDelayOneFrame* WaitDelayOneFrame(class UGameplayAbility* OwningAbility);
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.GSAT_WaitInputPressWithTags
	 * Size -> 0x0060 (FullSize[0x00E0] - InheritedSize[0x0080])
	 */
	class UGSAT_WaitInputPressWithTags : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnPress;                                                 // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JU1S[0x50];                                  // 0x0090(0x0050) MISSED OFFSET (PADDING)

	public:
		class UGSAT_WaitInputPressWithTags* WaitInputPressWithTags(class UGameplayAbility* OwningAbility, const struct FGameplayTagContainer& RequiredTags, const struct FGameplayTagContainer& IgnoredTags, bool bTestAlreadyPressed);
		void OnPressCallback();
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.GSAT_WaitInteractableTarget
	 * Size -> 0x01C0 (FullSize[0x0240] - InheritedSize[0x0080])
	 */
	class UGSAT_WaitInteractableTarget : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             FoundNewInteractableTarget;                              // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             LostInteractableTarget;                                  // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U594[0x1A0];                                 // 0x00A0(0x01A0) MISSED OFFSET (PADDING)

	public:
		class UGSAT_WaitInteractableTarget* WaitForInteractableTarget(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, const struct FCollisionProfileName& TraceProfile, float MaxRange, float TimerPeriod, bool bShowDebug);
		void PerformTrace();
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.GSAT_WaitTargetDataUsingActor
	 * Size -> 0x0038 (FullSize[0x00B8] - InheritedSize[0x0080])
	 */
	class UGSAT_WaitTargetDataUsingActor : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             ValidData;                                               // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             Cancelled;                                               // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class AGameplayAbilityTargetActor*                         TargetActor;                                             // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_H14Z[0x10];                                  // 0x00A8(0x0010) MISSED OFFSET (PADDING)

	public:
		class UGSAT_WaitTargetDataUsingActor* WaitTargetDataWithReusableActor(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, EGameplayTargetingConfirmation ConfirmationType, class AGameplayAbilityTargetActor* InTargetActor, bool bCreateKeyIfNotValidForMorePredicting);
		void OnTargetDataReplicatedCancelledCallback();
		void OnTargetDataReplicatedCallback(const struct FGameplayAbilityTargetDataHandle& Data, const struct FGameplayTag& ActivationTag);
		void OnTargetDataReadyCallback(const struct FGameplayAbilityTargetDataHandle& Data);
		void OnTargetDataCancelledCallback(const struct FGameplayAbilityTargetDataHandle& Data);
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.GSGameplayCueManager
	 * Size -> 0x0000 (FullSize[0x0310] - InheritedSize[0x0310])
	 */
	class UGSGameplayCueManager : public UGameplayCueManager
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.GSInteractable
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGSInteractable : public UInterface
	{
	public:
		void UnregisterInteracter(class UPrimitiveComponent* InteractionComponent, class AActor* InteractingActor);
		void RegisterInteracter(class UPrimitiveComponent* InteractionComponent, class AActor* InteractingActor);
		void PreInteract(class AActor* InteractingActor, class UPrimitiveComponent* InteractionComponent);
		void PostInteract(class AActor* InteractingActor, class UPrimitiveComponent* InteractionComponent);
		bool IsAvailableForInteraction(class UPrimitiveComponent* InteractionComponent);
		void InteractableCancelInteraction(class UPrimitiveComponent* InteractionComponent);
		void GetPreInteractSyncType(bool* bShouldSync, EAbilityTaskNetSyncType* Type, class UPrimitiveComponent* InteractionComponent);
		void GetPostInteractSyncType(bool* bShouldSync, EAbilityTaskNetSyncType* Type, class UPrimitiveComponent* InteractionComponent);
		float GetInteractionDuration(class UPrimitiveComponent* InteractionComponent);
		void CancelInteraction(class UPrimitiveComponent* InteractionComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.MultiCollisionCapsuleComponent
	 * Size -> 0x0000 (FullSize[0x0460] - InheritedSize[0x0460])
	 */
	class UMultiCollisionCapsuleComponent : public UCapsuleComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.MultiCollisionMovementComponent
	 * Size -> 0x0020 (FullSize[0x0B20] - InheritedSize[0x0B00])
	 */
	class UMultiCollisionMovementComponent : public UCharacterMovementComponent
	{
	public:
		TArray<class UMultiCollisionCapsuleComponent*>             AdditionalUpdatedComponents;                             // 0x0B00(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		float                                                      PenetrationOverlapCheckInflation;                        // 0x0B10(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XFPF[0x4];                                   // 0x0B14(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimitiveComponent*                                 LastBlockedComponent;                                    // 0x0B18(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.NavArea_CoverHigh
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UNavArea_CoverHigh : public UNavArea
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.NavArea_CoverLow
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UNavArea_CoverLow : public UNavArea
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.NavArea_Door
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UNavArea_Door : public UNavArea
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.NavArea_Vault
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UNavArea_Vault : public UNavArea
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.PoolActor
	 * Size -> 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
	 */
	class APoolActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_31CX[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.PoolActorInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPoolActorInterface : public UInterface
	{
	public:
		void OnPoolEnd();
		void OnPoolBegin();
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.PoolManagerBPLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPoolManagerBPLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void WarmUp(class UObject* WorldContextObject, class UClass* ActorClass, int32_t Count);
		class AActor* SpawnActor(class UObject* WorldContextObject, class UClass* ActorClass, const struct FTransform& Transform, ESpawnActorCollisionHandlingMethod CollisionHandling, class AActor* Owner);
		void ReleaseActor(class AActor* Actor);
		TArray<class AActor*> FetchActorCollection(class UClass* ActorClass, int32_t Count);
		class AActor* FetchActor(class UClass* ActorClass);
		void EmptyByClass(class UClass* ActorClass);
		void Empty();
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidAbilitySystemComponent
	 * Size -> 0x0028 (FullSize[0x1330] - InheritedSize[0x1308])
	 */
	class URaidAbilitySystemComponent : public UAbilitySystemComponent
	{
	public:
		unsigned char                                              UnknownData_L0PV[0x2];                                   // 0x1308(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bPendingMontageRepForMesh;                               // 0x130A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_66L4[0x5];                                   // 0x130B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayAbilityLocalAnimMontageForMesh>     LocalAnimMontageInfoForMeshes;                           // 0x1310(0x0010) ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TArray<struct FGameplayAbilityRepAnimMontageForMesh>       RepAnimMontageInfoForMeshes;                             // 0x1320(0x0010) Net, ZeroConstructor, RepNotify, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		void ServerCurrentMontageSetPlayRateForMesh(class USkeletalMeshComponent* InMesh, class UAnimMontage* ClientAnimMontage, float InPlayRate);
		void ServerCurrentMontageSetNextSectionNameForMesh(class USkeletalMeshComponent* InMesh, class UAnimMontage* ClientAnimMontage, float ClientPosition, const class FName& SectionName, const class FName& NextSectionName);
		void ServerCurrentMontageJumpToSectionNameForMesh(class USkeletalMeshComponent* InMesh, class UAnimMontage* ClientAnimMontage, const class FName& SectionName);
		void RemoveGameplayCueLocal(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters);
		void OnRep_ReplicatedAnimMontageForMesh();
		void NetPlayMultiMontageForMesh(class USkeletalMeshComponent* InMesh, class UAnimMontage* Montage, const class FName& StartSectionName);
		void K2_RemoveLooseGameplayTags(const struct FGameplayTagContainer& GameplayTags, int32_t Count);
		void K2_RemoveLooseGameplayTag(const struct FGameplayTag& GameplayTag, int32_t Count);
		int32_t K2_GetTagCount(const struct FGameplayTag& TagToCheck);
		void K2_AddLooseGameplayTags(const struct FGameplayTagContainer& GameplayTags, int32_t Count);
		void K2_AddLooseGameplayTag(const struct FGameplayTag& GameplayTag, int32_t Count);
		class FString GetCurrentPredictionKeyStatus();
		struct FGameplayAbilitySpecHandle FindAbilitySpecHandleForClass(class UClass* AbilityClass, class UObject* OptionalSourceObject);
		void ExecuteGameplayCueLocal(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters);
		struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTargetWithPrediction(class UClass* GameplayEffectClass, class UAbilitySystemComponent* Target, float Level, const struct FGameplayEffectContextHandle& Context);
		struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelfWithPrediction(class UClass* GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& EffectContext);
		bool BatchRPCTryActivateAbility(const struct FGameplayAbilitySpecHandle& InAbilityHandle, bool EndAbilityImmediately);
		void AddGameplayCueLocal(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters);
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidAIController
	 * Size -> 0x00B0 (FullSize[0x03D8] - InheritedSize[0x0328])
	 */
	class ARaidAIController : public AAIController
	{
	public:
		class UBlackboardComponent*                                BlackboardComp;                                          // 0x0328(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBehaviorTreeComponent*                              BehaviorComp;                                            // 0x0330(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class ARaidBot>                             CharacterActive;                                         // 0x0338(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAISenseConfig_Sight*                                SightConfig;                                             // 0x0340(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAISenseConfig_Hearing*                              HearingConfig;                                           // 0x0348(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAISenseConfig_Damage*                               DamageConfig;                                            // 0x0350(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SightRange;                                              // 0x0358(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LoseSightRange;                                          // 0x035C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PeripheralVisionAngleDegrees;                            // 0x0360(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PointOfViewBackwardOffset;                               // 0x0364(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NearClippingRadius;                                      // 0x0368(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AutoSuccessRangeFromLastSeenLocation;                    // 0x036C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HearingRange;                                            // 0x0370(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LoSHearingRange;                                         // 0x0374(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bActiveated;                                             // 0x0378(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanSeeActor;                                            // 0x0379(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanSeePlayer;                                           // 0x037A(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N67N[0x1];                                   // 0x037B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LastKnownPlayerPosition;                                 // 0x037C(0x000C) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LastKnownPlayerDirection;                                // 0x0388(0x000C) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TeamNumber;                                              // 0x0394(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCaptian;                                                // 0x0398(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9K6N[0x3];                                   // 0x0399(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BossGroupID;                                             // 0x039C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAIGuard;                                               // 0x03A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAISPAWNTYPE                                               SpawnType;                                               // 0x03A1(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E8XB[0x6];                                   // 0x03A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ARaidCharacter*                                      MyEnemy;                                                 // 0x03A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class ARaidCharacter*>                              CharsShootAt;                                            // 0x03B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5ES4[0x18];                                  // 0x03C0(0x0018) MISSED OFFSET (PADDING)

	public:
		void ShootEnemy();
		void SetDebugState(ERaidBotDebugState StateIn);
		void ReloadAIWeapon();
		void OnTargetPerceptionUpdate(class AActor* Actor, const struct FAIStimulus& Stimulus);
		int32_t GetCurrentAmmoInClip(int32_t maxclipsize);
		bool FindClosestEnemyWithLOS(class ARaidCharacter* ExcludeEnemy);
		void FindClosestEnemyCommando();
		void FindClosestEnemy();
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidAINodeStart
	 * Size -> 0x0010 (FullSize[0x0260] - InheritedSize[0x0250])
	 */
	class ARaidAINodeStart : public APlayerStart
	{
	public:
		unsigned char                                              UnknownData_H8G7[0x4];                                   // 0x0250(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                LevelStreamName;                                         // 0x0254(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CWAH[0x4];                                   // 0x025C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidAIShipController
	 * Size -> 0x0050 (FullSize[0x0378] - InheritedSize[0x0328])
	 */
	class ARaidAIShipController : public AAIController
	{
	public:
		class UBlackboardComponent*                                BlackboardComp;                                          // 0x0328(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBehaviorTreeComponent*                              BehaviorComp;                                            // 0x0330(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AIEngaugementRange;                                      // 0x0338(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MissRange;                                               // 0x033C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EXXH[0x10];                                  // 0x0340(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      PatolLocs;                                               // 0x0350(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5Z2I[0x18];                                  // 0x0360(0x0018) MISSED OFFSET (PADDING)

	public:
		void ShootEnemy();
		struct FVector GetNextLocationToMoveTo();
		void FindShipToAttack();
		bool FindClosestEnemyWithLOS(class ARaidCharacter* ExcludeEnemy);
		void FindClosestEnemy();
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidArmourActor
	 * Size -> 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
	 */
	class ARaidArmourActor : public AActor
	{
	public:
		class USkeletalMeshComponent*                              ArmourMesh;                                              // 0x0220(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ArmourDamageMitagation;                                  // 0x0228(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S9GZ[0x4];                                   // 0x022C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidCharacter
	 * Size -> 0x0620 (FullSize[0x0B40] - InheritedSize[0x0520])
	 */
	class ARaidCharacter : public ASIGISCharacter
	{
	public:
		unsigned char                                              UnknownData_DY5D[0x10];                                  // 0x0520(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DebugPlayerSpeed;                                        // 0x0530(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayerViewPitch;                                         // 0x0534(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0G5F[0x1];                                   // 0x0538(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bShipAttackable;                                         // 0x0539(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BISY[0x6];                                   // 0x053A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      CharacterAbilities;                                      // 0x0540(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		class URaidAbilitySystemComponent*                         AbilitySystemComponent;                                  // 0x0550(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkinnedDecalSampler*                                SkinnedDecalComp;                                        // 0x0558(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2CX2[0xC];                                   // 0x0560(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   Lean;                                                    // 0x056C(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Wiggle;                                                  // 0x0570(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4Q5T[0x34];                                  // 0x057C(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bDocked;                                                 // 0x05B0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAIControlled;                                         // 0x05B1(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAiming;                                               // 0x05B2(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TTSE[0x1];                                   // 0x05B3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bIsStunned : 1;                                          // 0x05B4(0x0001) BIT_FIELD Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N16L[0x13];                                  // 0x05B5(0x0013) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bIsVaulting : 1;                                         // 0x05C8(0x0001) BIT_FIELD Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bVaultForward : 1;                                       // 0x05C8(0x0001) BIT_FIELD Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BOT2[0x7];                                   // 0x05C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ARaidVaultMarker*                                    CurrentVaultMarker;                                      // 0x05D0(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        HitMontageDefault;                                       // 0x05D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        HitMontageRifle;                                         // 0x05E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        HitMontagePistol;                                        // 0x05E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        BonesCountasHeadHit;                                     // 0x05F0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class FName>                                        BonesCountasBodyHit;                                     // 0x0600(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class FName>                                        BonesCountasLegHit;                                      // 0x0610(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      WalkMantleDetectionDistance;                             // 0x0620(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RunMantleDetectionDistance;                              // 0x0624(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_22B7[0xC];                                   // 0x0628(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CrouchTimeForToggle;                                     // 0x0634(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRaidAnimMontages                                   VaultAnimations;                                         // 0x0638(0x0018) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FRaidAnimMontages                                   ClimbAnimations;                                         // 0x0650(0x0018) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HA9W[0x34];                                  // 0x0668(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RootAdjustSpeed;                                         // 0x069C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRootAdjustment;                                       // 0x06A0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FootPlacementSpeed;                                      // 0x06A4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RaidViewPitchMin;                                        // 0x06A8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RaidViewPitchMax;                                        // 0x06AC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ARaidCharacterTurrent*                               MYTurret;                                                // 0x06B0(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       weaponSwitched;                                          // 0x06B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IY35[0xF];                                   // 0x06B9(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              MantledActor;                                            // 0x06C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MantledLoc;                                              // 0x06D0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IDBQ[0x4];                                   // 0x06DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USpringArmComponent*                                 CameraBoomFPComp;                                        // 0x06E0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCameraComponent*                                    CameraFPComp;                                            // 0x06E8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsEquippingWeapon;                                       // 0x06F0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JF97[0x7];                                   // 0x06F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              Mesh1P;                                                  // 0x06F8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAIPerceptionStimuliSourceComponent*                 NoiseComp;                                               // 0x0700(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                WeaponAttachPoint;                                       // 0x0708(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                PrimAttachPoint;                                         // 0x0710(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                SecAttachPoint;                                          // 0x0718(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                PistolAttachPoint;                                       // 0x0720(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                MeleeAttachPoint;                                        // 0x0728(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      JumpTurnRate;                                            // 0x0730(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J1JO[0x4];                                   // 0x0734(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      DefaultInventoryClasses;                                 // 0x0738(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		float                                                      ItemWeightToSpeedAmount;                                 // 0x0748(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IQ0B[0x4];                                   // 0x074C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ARaidWeapon*                                         CurrentWeapon;                                           // 0x0750(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1JYR[0x134];                                 // 0x0758(0x0134) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TargetingSpeedModifier;                                  // 0x088C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RunningSpeedModifier;                                    // 0x0890(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bWantsToRun : 1;                                         // 0x0894(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0ZAO[0x13];                                  // 0x0895(0x0013) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInstanceDynamic*>                    MeshMIDs;                                                // 0x08A8(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		class UAnimMontage*                                        DeathAnim;                                               // 0x08B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundCue*                                           DeathSound;                                              // 0x08C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystem*                                     RespawnFX;                                               // 0x08C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundCue*                                           RespawnSound;                                            // 0x08D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundCue*                                           LowHealthSound;                                          // 0x08D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundCue*                                           RunLoopSound;                                            // 0x08E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundCue*                                           RunStopSound;                                            // 0x08E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundCue*                                           TargetingSound;                                          // 0x08F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAudioComponent*                                     RunLoopAC;                                               // 0x08F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAudioComponent*                                     LowHealthWarningPlayer;                                  // 0x0900(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCameraTest;                                             // 0x0908(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDebugCameraTest;                                        // 0x0909(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8ZRA[0x2];                                   // 0x090A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             NormalLocalLocation;                                     // 0x090C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            NormalLocalRotation;                                     // 0x0918(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      SmoothSpeedLoc;                                          // 0x0924(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SmoothSpeedRot;                                          // 0x0928(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NoiseThresholdLoc;                                       // 0x092C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NoiseThresholdRot;                                       // 0x0930(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O7JW[0x4];                                   // 0x0934(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StatIDForCharacter;                                      // 0x0938(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHealing;                                                // 0x0948(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N157[0x3];                                   // 0x0949(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    HealtTimeInt;                                            // 0x094C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HealPerIncrement;                                        // 0x0950(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SOH2[0xC];                                   // 0x0954(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       IsFlyingShip;                                            // 0x0960(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9U1C[0x7];                                   // 0x0961(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ARaidWeapon*>                                 Inventory;                                               // 0x0968(0x0010) Net, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char                                              bIsTargeting : 1;                                        // 0x0978(0x0001) BIT_FIELD Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AWAW[0x3];                                   // 0x0979(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bIsDying : 1;                                            // 0x097C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S0HH[0x3];                                   // 0x097D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Health;                                                  // 0x0980(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7QBW[0x4];                                   // 0x0984(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              DeathDealer;                                             // 0x0988(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              DefaultDeathBody;                                        // 0x0990(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ARaidWeapon*                                         PreviousWeapon;                                          // 0x0998(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxStaminaBurn;                                          // 0x09A0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxHealthBurn;                                           // 0x09A4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class URaidUseableFrigateHelmComponent*                    HelmControlUsing;                                        // 0x09A8(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class URaidUseableTurretConrtrolComponent*                 TurretControlUsing;                                      // 0x09B0(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              BackPack;                                                // 0x09B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              Helmet;                                                  // 0x09C0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              ChestSlot;                                               // 0x09C8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              DoRep_HeadMesh;                                          // 0x09D0(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QATS[0x7];                                   // 0x09D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMesh*                                       R_HeadMesh;                                              // 0x09D8(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              DoRep_ChestMesh;                                         // 0x09E0(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CMUY[0x7];                                   // 0x09E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMesh*                                       R_ChestMesh;                                             // 0x09E8(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              DoRep_BagMesh;                                           // 0x09F0(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_09HR[0x7];                                   // 0x09F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMesh*                                       R_BagMesh;                                               // 0x09F8(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    Gear;                                                    // 0x0A00(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Tilt;                                                    // 0x0A04(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bJustChangedGear;                                        // 0x0A08(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8VMZ[0x7];                                   // 0x0A09(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerController*                                   MyPrevController;                                        // 0x0A10(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4Z47[0x8];                                   // 0x0A18(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BagSize;                                                 // 0x0A20(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAShip;                                                  // 0x0A24(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bADropPod;                                               // 0x0A25(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R1ZZ[0x2];                                   // 0x0A26(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Stamina;                                                 // 0x0A28(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxStamina;                                              // 0x0A2C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaRegainRate;                                       // 0x0A30(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaRegainModStandingStill;                           // 0x0A34(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaRegainModMoving;                                  // 0x0A38(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaRegainModCrouched;                                // 0x0A3C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaRechargeCoolDownPercent;                          // 0x0A40(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaRunningRate;                                      // 0x0A44(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaJumpRate;                                         // 0x0A48(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaAimingRate;                                       // 0x0A4C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaRegainInterval;                                   // 0x0A50(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeadDamageMulitplier;                                    // 0x0A54(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LegDamageMulitplier;                                     // 0x0A58(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinStaminaToSprint;                                      // 0x0A5C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          EnglishSoundVoices;                                      // 0x0A60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          FrenchSoundVoices;                                       // 0x0A68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          PolishSoundVoices;                                       // 0x0A70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<EPhysicalSurface, class USoundCue*>                   FootstepSounds;                                          // 0x0A78(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class USoundCue*                                           DefaultFootStepSound;                                    // 0x0AC8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SMC7[0x40];                                  // 0x0AD0(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     RootTraceLocs;                                           // 0x0B10(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              bIsWeaponObstructed : 1;                                 // 0x0B20(0x0001) BIT_FIELD Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ECE0[0x3];                                   // 0x0B21(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ObstructionDistance;                                     // 0x0B24(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4Q2W[0x8];                                   // 0x0B28(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ObstructionTesterExtent;                                 // 0x0B30(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UVYY[0x4];                                   // 0x0B3C(0x0004) MISSED OFFSET (PADDING)

	public:
		float WeaponObstructedDistance();
		void VaultEnd();
		void UsedMine();
		void UpDateCharacterStat();
		void TryStand();
		void TryCrouch();
		void ToggleFireMode();
		void SwapToNewWeaponMesh();
		void Stun(float Duration);
		void StopSprint();
		void StartSprint();
		void StaminaChargeStart();
		void StaminaChargeEnd();
		void ShowIfWeapon();
		void SetIsEquippingFalse();
		void SetFrigate(const class FString& CurrentFrigate);
		void SetCamerRotationPitch(float Val);
		void SetCamerRotation(float Val);
		void ServerUse();
		void ServerUpDateCharacterStat();
		void ServerStopSprint();
		void ServerStopAim();
		void ServerStartSprint();
		void ServerStartMantle(class AActor* MActor, const struct FVector_NetQuantize& MLoc);
		void ServerSetTargeting(bool bNewTargeting);
		void ServerSetRunning(bool bNewRunning, bool bToggle);
		void ServerSetHead(class USkeletalMesh* NewHead);
		void ServerSetFrigate(const class FString& CurrentFrigate);
		void ServerSetChest(class USkeletalMesh* NewLegs);
		void ServerSetBag(class USkeletalMesh* NewBag);
		void ServerSellFrigate(const class FName& Frigate);
		void ServerSaveItemInventory();
		void ServerReloadTurret();
		void ServerPlayVoiceSound(const class FName& VoiceRowName, EVoiceType VoiceType);
		void ServerMoveItemInInventory(const class FString& InvName, int32_t SourceSLot, int32_t DestinationSlot);
		void ServerLean(uint32_t LeanangleIn);
		void ServerHeadY(float HeadYangle, float BendC);
		void ServerHeadX(float HeadXangle);
		void ServerFireProjectile(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir, int32_t ArrayNum);
		void ServerEquipWeapon(class ARaidWeapon* NewWeapon);
		void ServerBuyShip(const class FName& ship);
		void ServerBuyFrigate(const class FName& Frigate);
		void ServerAddRemoveShip(const class FString& ShipToUse, bool RemoveShip);
		void Server_CancelHealing();
		void SendHelmOnRep(class URaidUseableFrigateHelmComponent* Helm);
		void SendGunnerSeatOnRep(class URaidUseableTurretConrtrolComponent* GunnerTurret);
		void SellFrigate(const class FName& Frigate);
		void SaveItemInventory();
		void RefreshInventoryEvent();
		void PlayVoiceSound(const class FName& VoiceRowName, EVoiceType VoiceType);
		float PlayVaultAnimations();
		float PlayClimbAnimations();
		void PawnTakenDamage(float DamageTaken, const struct FDamageEvent& DamageEvent, class APawn* PawnInstigator);
		void OnRep_SetHead();
		void OnRep_SetGunning();
		void OnRep_SetDriving();
		void OnRep_SetBag();
		void OnRep_ServerSetChest();
		void OnRep_LastTakeHitInfo();
		void OnRep_InventoryChanged();
		void OnRep_CurrentWeapon(class ARaidWeapon* LastWeapon);
		void OnProxyHitReact(const struct FHitResult& Impact);
		void OnLowHealthBloodStart();
		void OnLowHealthBloodEnd();
		void NetPlayVoiceSound(const class FName& VoiceRowName, EVoiceType VoiceType);
		void NetMultiVault(bool bClimb);
		void NetMulti_PerformHitReaction(unsigned char MontageIdx, float StunTime);
		void MultiStopAllMontages();
		void Multi_Deathevent(float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser);
		void Mulit_StopMontage();
		void Mulit_Dismember(const class FName& BoneHit, const struct FVector_NetQuantize& ImpactNorm, class UClass* DamageTypeClass);
		void MoveItemInInventory(const class FString& InvName, int32_t SourceSLot, int32_t DestinationSlot);
		bool IsWeaponObstructed();
		bool IsVaulting();
		bool IsThrowingGrenade();
		bool IsTargeting();
		bool IsRunning();
		bool IsPlayerFlyingShip();
		bool IsPlayerAimingTurret();
		bool IsHealing();
		bool IsFirstPerson();
		bool IsFiring();
		bool IsAlive();
		bool IsAiming();
		bool IsAIControlled();
		void HumanPlayerDied();
		void HideIfWeapon();
		bool HasWeaponGotFireModes(TArray<EFireMode>* AllowedFireModes, EFireMode* CurrentFireMode);
		struct FRotator GetWiggle();
		class ARaidWeapon* GetWeapon();
		float GetThrustModifier();
		float GetTargetingSpeedModifier();
		ERaidStance GetStance();
		float GetStamina();
		float GetRunningSpeedModifier();
		TArray<class FString> GetOwnedShips();
		TArray<class FString> GetOwnedFrigates();
		float GetMaxStamina();
		float GetMaxHealth();
		struct FVector GetMantledPosition();
		class AActor* GetMantledActor();
		float GetLeanAmount();
		bool GetIsEquippingWeapon();
		float GetHealth();
		float GetHeadYAmount();
		float GetHeadXAmount();
		TArray<class FString> GetCurrentShips();
		class FString GetCurrentFrigates();
		EVoiceType GetCharacterVoiceType();
		float GetBendAmount();
		struct FRotator GetAimOffsets();
		void DrivingTurret(class URaidUseableTurretConrtrolComponent* TurretOut);
		void DrivingFrigate(class URaidUseableFrigateHelmComponent* HelmOut);
		void DismemberEvent(const class FName& BoneHit, const struct FVector_NetQuantize& ImpactNorm, class UClass* DamageTypeClass);
		void CrouchPressed();
		void Client_WeaponHit(float Damage, int32_t directionInt, const class FString& DamageType);
		void Client_HealStaminaBurn(float amount);
		void BuyShip(const class FName& ship);
		void BuyFrigate(const class FName& Frigate);
		void AddRemoveShip(const class FString& CurrentShip, bool RemoveShip);
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidBot
	 * Size -> 0x00F0 (FullSize[0x0C30] - InheritedSize[0x0B40])
	 */
	class ARaidBot : public ARaidCharacter
	{
	public:
		class UBehaviorTree*                                       BotBehavior;                                             // 0x0B40(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       StartSpawnActive;                                        // 0x0B48(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SCVP[0x7];                                   // 0x0B49(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ASIGISInventoryItem*>                         BotLootItems;                                            // 0x0B50(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		ERaidBotDebugState                                         DebugState;                                              // 0x0B60(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVisiableToUse;                                          // 0x0B61(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KSIL[0x2];                                   // 0x0B62(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class ARaidAIController>                    CachedPlayerController;                                  // 0x0B64(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bActiveated;                                             // 0x0B6C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAIDifficulty                                              AIHardness;                                              // 0x0B6D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XL4C[0x2];                                   // 0x0B6E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataTableRowHandle                                 WeaponToSpawn;                                           // 0x0B70(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                 PistolToSpawn;                                           // 0x0B80(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		class FString                                              PrimWeaponAttachments;                                   // 0x0B90(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                 HelmetToSpawn;                                           // 0x0BA0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                 ArmourToSpawn;                                           // 0x0BB0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                 BackPackToSpawn;                                         // 0x0BC0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FDataTableRowHandle>                         LootToSpawn;                                             // 0x0BD0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       HeadMeshToSpawn;                                         // 0x0BE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       BodyMeshToSpawn;                                         // 0x0BE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          WeaponTable;                                             // 0x0BF0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          BackPackTable;                                           // 0x0BF8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          ChestTable;                                              // 0x0C00(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          EquipmentLootTable;                                      // 0x0C08(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxNumberOfLootItems;                                    // 0x0C10(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FailWeapon;                                              // 0x0C14(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AIDifficulty;                                            // 0x0C1C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AIMissRate;                                              // 0x0C20(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GOAPAIMissRate;                                          // 0x0C24(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AiMissRange;                                             // 0x0C28(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESignifManagerBuckets                                      MyBucket;                                                // 0x0C2C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LRW2[0x3];                                   // 0x0C2D(0x0003) MISSED OFFSET (PADDING)

	public:
		void StartDeactiveEvent();
		void StartActiveEvent();
		void SetDebugState(ERaidBotDebugState Statin);
		bool HasTarget();
		ESignifManagerBuckets GetMyBucket();
		ERaidBotDebugState GetDebugState();
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidCharacterAnimInstance
	 * Size -> 0x0908 (FullSize[0x0BC0] - InheritedSize[0x02B8])
	 */
	class URaidCharacterAnimInstance : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_Y12U[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FRaidAnimInstanceProxy                              Proxy;                                                   // 0x02C0(0x0770) BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPrivate
		float                                                      ShakeStrength;                                           // 0x0A30(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAlive;                                                // 0x0A34(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFirstPerson;                                            // 0x0A35(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERaidRotationType                                          CurrentRotation;                                         // 0x0A36(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IW2Q[0x1];                                   // 0x0A37(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            RelativeAim;                                             // 0x0A38(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector2D                                           VelocityDir;                                             // 0x0A44(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VelocityInterpSpeed;                                     // 0x0A4C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Direction;                                               // 0x0A50(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Speed;                                                   // 0x0A54(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Accel;                                                   // 0x0A58(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            LeanRotation;                                            // 0x0A5C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsSprinting;                                            // 0x0A68(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFalling;                                              // 0x0A69(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsRelaxed;                                              // 0x0A6A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERaidStance                                                Stance;                                                  // 0x0A6B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            DefaultRightHandRotation;                                // 0x0A6C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTwoBoneJointData                                   RightHandData;                                           // 0x0A78(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FTwoBoneJointData                                   LeftHandData;                                            // 0x0AA0(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		float                                                      FPHandStrength;                                          // 0x0AC8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTwoBoneJointData                                   RightFootData;                                           // 0x0ACC(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FTwoBoneJointData                                   LeftFootData;                                            // 0x0AF4(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RM77[0x18];                                  // 0x0B1C(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           ViewRotationLagStrength;                                 // 0x0B34(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           ViewRotationLagStrength_Rot;                             // 0x0B3C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MovementLagStrength;                                     // 0x0B44(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MovementLagStrength_Rot;                                 // 0x0B50(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ViewRotationLagLimit;                                    // 0x0B5C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            ViewRotationLagRotLimit;                                 // 0x0B68(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector2D                                           GunShakeStrength;                                        // 0x0B74(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           GunShakeStrength_Rot;                                    // 0x0B7C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWeaponType                                                WeaponType;                                              // 0x0B84(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWeaponObstructed;                                       // 0x0B85(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VVUQ[0x2];                                   // 0x0B86(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            HeadRotOffset;                                           // 0x0B88(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             HeadRotFactor;                                           // 0x0B94(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWeaponLeftHanded;                                       // 0x0BA0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KHM4[0x7];                                   // 0x0BA1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           GunShakeTranslationFactor;                               // 0x0BA8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAdvancedReloadAnim;                                     // 0x0BB0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_O96Z[0x3];                                   // 0x0BB1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ReloadStrength;                                          // 0x0BB4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              FPMesh;                                                  // 0x0BB8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void PlayVaultAnimation();
		void PlayClimbAnimation();
		bool IsMoving();
		struct FVector GetGunShake();
		void CalculateGunLag(float DeltaTime, struct FVector* Translation, struct FVector* Rotation);
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidCharacterMovement
	 * Size -> 0x0050 (FullSize[0x0B70] - InheritedSize[0x0B20])
	 */
	class URaidCharacterMovement : public UMultiCollisionMovementComponent
	{
	public:
		unsigned char                                              UnknownData_4FZI[0x8];                                   // 0x0B20(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxWalkSpeedProne;                                       // 0x0B28(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxSprintSpeed;                                          // 0x0B2C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4QBJ[0x18];                                  // 0x0B30(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CrouchTransitionTime;                                    // 0x0B48(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ProneTransitionTime;                                     // 0x0B4C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AimSpeedModifier;                                        // 0x0B50(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0RXR[0xC];                                   // 0x0B54(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PostJumpStopTime;                                        // 0x0B60(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxDamagedSpeed;                                         // 0x0B64(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxDamagedPercent;                                       // 0x0B68(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxMoveBackAndStrafeSpeed;                               // 0x0B6C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		bool WantsToSprint();
		bool IsSprinting();
		bool IsChangingStance();
		ERaidStance GetDesiredStance();
		ERaidStance GetCurrentStance();
		bool CanSprint();
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidCharacterTurrent
	 * Size -> 0x0188 (FullSize[0x03A8] - InheritedSize[0x0220])
	 */
	class ARaidCharacterTurrent : public AActor
	{
	public:
		class USpringArmComponent*                                 SpringArm;                                               // 0x0220(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCameraComponent*                                    Camera;                                                  // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                TurretHullMesh;                                          // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              TurretBarrelMesh;                                        // 0x0238(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MuzzleAttachPoint;                                       // 0x0240(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SocketAttachedTo;                                        // 0x0248(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpringArmDistance;                                       // 0x0250(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SpringArmSocketOffset;                                   // 0x0254(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraMaxPitch;                                          // 0x0260(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraMinPitch;                                          // 0x0264(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraZoomAmount;                                        // 0x0268(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraZoomSpeed;                                         // 0x026C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraMaxZoom;                                           // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraMinZoom;                                           // 0x0274(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DJ52[0x4];                                   // 0x0278(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            TurretLocalRot;                                          // 0x027C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class ARaidFrigate*                                        MyFrigateOwner;                                          // 0x0288(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            AILocalRot;                                              // 0x0290(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QMOI[0x14];                                  // 0x029C(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerController*                                   ControllerHere;                                          // 0x02B0(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bACameraTurret;                                          // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CDER[0x3];                                   // 0x02B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            ExpectedActorToRotateTo;                                 // 0x02BC(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    AmmoLeft;                                                // 0x02C8(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalAmmo;                                               // 0x02CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                TurretFriendlyName;                                      // 0x02D0(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                TurretFriendlyExtraDesc;                                 // 0x02E8(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      FireRate;                                                // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReloadTime;                                              // 0x0304(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TurretYawSpeed;                                          // 0x0308(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TurretMaxYaw;                                            // 0x030C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TurretMinYaw;                                            // 0x0310(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TurretPitchSpeed;                                        // 0x0314(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TurretMaxPitch;                                          // 0x0318(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TurretMinPitch;                                          // 0x031C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsOccupied;                                              // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsTargeting;                                             // 0x0321(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KEQ8[0x6];                                   // 0x0322(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        FiringSockets;                                           // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       IsNuke;                                                  // 0x0338(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       nukeused;                                                // 0x0339(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WYN3[0x2];                                   // 0x033A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentfiringSocket;                                     // 0x033C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4K3D[0x40];                                  // 0x0340(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bJustFire;                                               // 0x0380(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RN0T[0x7];                                   // 0x0381(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FShipProjectileWeaponData                           ProjectileConfig;                                        // 0x0388(0x0020) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic

	public:
		void ServerUse();
		void ServerFireProjectile(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir, int32_t ArrayNum);
		void PlayerUnPressedZoom();
		void PlayerPressedZoom();
		void NetMultiFire(int32_t SocketArrayNum);
		void MultiFireProjectile(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir, int32_t ArrayNum);
		struct FRotator GetTheRequiredrotation();
		class APlayerController* GetController();
		void FiredTurrentEvent(int32_t SocketArrayNum);
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidChatWidgetStyle
	 * Size -> 0x0908 (FullSize[0x0938] - InheritedSize[0x0030])
	 */
	class URaidChatWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FRaidChatStyle                                      ChatStyle;                                               // 0x0030(0x0908) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidPlayerController
	 * Size -> 0x0220 (FullSize[0x0AF0] - InheritedSize[0x08D0])
	 */
	class ARaidPlayerController : public ASIGISPlayerController
	{
	public:
		class UDataTable*                                          DestructionTable;                                        // 0x08D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      ImpactActorsToPool;                                      // 0x08D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class ARaidPoolImpactEffect*>                       PooledImpactActors;                                      // 0x08E8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class UClass*                                              PooledImpactClass;                                       // 0x08F8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PoolSize;                                                // 0x0900(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumPooledActorsSpawned;                                  // 0x0904(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class ARaidProjectile*>                             PooledProjectileActors;                                  // 0x0908(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class UClass*                                              PooledProjectileClass;                                   // 0x0918(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ProjectilePoolSize;                                      // 0x0920(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumPooledProjectileSpawned;                              // 0x0924(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      HitHiddenActors;                                         // 0x0928(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUseConfigForInputAcceleration;                          // 0x0938(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HDB3[0x3];                                   // 0x0939(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AccelerationPower;                                       // 0x093C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Acceleration;                                            // 0x0940(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccelerationOffset;                                      // 0x0944(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccelerationMax;                                         // 0x0948(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ADSSensitivty;                                           // 0x094C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ADSRotationBlend;                                        // 0x0950(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NormalRotationBlend;                                     // 0x0954(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6DVF[0x8];                                   // 0x0958(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ARaidSpaceDeploy*                                    DockingStationForDroppod;                                // 0x0960(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              FrigateBreachingInto;                                    // 0x0968(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ARaidFrigateShuttleControl*                          DroppodLevelLauncher;                                    // 0x0970(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class URaidDockingComponent*                               DockedVolume;                                            // 0x0978(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KASU[0x2C];                                  // 0x0980(0x002C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bInfiniteAmmo : 1;                                       // 0x09AC(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bInfiniteClip : 1;                                       // 0x09AC(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bHealthRegen : 1;                                        // 0x09AC(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bGodMode : 1;                                            // 0x09AC(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8G75[0x5B];                                  // 0x09AD(0x005B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URaidUseableComponent*                               PreviousUSeableComp;                                     // 0x0A08(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerTranisitionState                                    CurrentTrans;                                            // 0x0A10(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MQPK[0x27];                                  // 0x0A11(0x0027) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          FrigateDataTable;                                        // 0x0A38(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          ShipDataTable;                                           // 0x0A40(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFirstSortSpawnDone;                                     // 0x0A48(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CHWU[0x7];                                   // 0x0A49(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Crew;                                                    // 0x0A50(0x0010) Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      MyCrew;                                                  // 0x0A60(0x0010) Net, ZeroConstructor, NativeAccessSpecifierPublic
		class ARaidPlanetDeploy*                                   PlanetShuttle;                                           // 0x0A70(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ARaidSpaceDeploy*                                    SpaceShuttle;                                            // 0x0A78(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ARaidSpaceshipInside*                                ShipThatsLanding;                                        // 0x0A80(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ARaidPlanetEvac*                                     EvacPoint;                                               // 0x0A88(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SpaceStationZoneName;                                    // 0x0A90(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KEJW[0x4];                                   // 0x0AA0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       ShipAdded;                                               // 0x0AA4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Evacd;                                                   // 0x0AA5(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T6WF[0x2];                                   // 0x0AA6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URaidUseableHangerConsoleComponent*                  CurrentHangerConsole;                                    // 0x0AA8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULevelSequencePlayer*                                SequencePlayer;                                          // 0x0AB0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULevelSequence*                                      LeftSequenceAsset;                                       // 0x0AB8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULevelSequence*                                      RightSequenceAsset;                                      // 0x0AC0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULevelSequence*                                      TopSequenceAsset;                                        // 0x0AC8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULevelSequence*                                      DownSequenceAsset;                                       // 0x0AD0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      CinematicFrigates;                                       // 0x0AD8(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		class AActor*                                              LastShipToSpawn;                                         // 0x0AE8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void UsedInLevelDroppod();
		void TriggerMouseRMBUp();
		void TriggerMouseRMBDown();
		void TriggerMouseLMBUp();
		void TriggerMouseLMBDown();
		void TransitionStateChange(EPlayerTranisitionState From, EPlayerTranisitionState To);
		void ToggleMouseCursorUse(bool CursorOn);
		void ToggleMouseControlDebug();
		void ToggleInventory(bool Show);
		void ToggleControllerLerp();
		void teststeamUI();
		void T17_WipeMySelf();
		void T17_Teleport(const struct FVector& LocationToGoTo);
		void T17_SpawnMapNode(const class FString& MapName);
		void T17_SetSpeed(int32_t NewSpeed);
		void T17_PauseToggleRaidTimer();
		void T17_InfiniteAmmo(bool Activate);
		void T17_GodMode(bool Activate);
		void T17_GhostMode(bool Activate);
		void T17_ChangeShopKeeper(int32_t NewShop);
		void SwitchVIPStatus();
		void Suicide();
		void SimulateInputKey(const struct FKey& Key, bool bPressed);
		void ShowHangerKeyPad();
		void ShipDockingToStation();
		void ShipBreaching();
		void SetPreviousComp(class URaidUseableComponent* CompTo);
		void SetGodMode(bool bEnable);
		void ServerToggleControllerLerp();
		void ServerSuicide();
		void ServerSendPlayerInvite(const class FString& CrewNameName);
		void ServerSay(const class FString& Msg);
		void ServerLeaveGroup();
		void ServerLandFrigate(class ARaidSpaceshipInside* ShipInside);
		void ServerKickCrewMember(const class FString& CrewNameName);
		void ServerEnterSpaceRaidVolume(class ARaidSpaceDeploy* VolumeIn);
		void ServerEnterLandRaidVolume(class ARaidPlanetDeploy* VolumeIn);
		void ServerDeploySpaceRaid();
		void ServerDeployShipFromHanger(const class FString& ShipToUse);
		void ServerDeployLandRaid();
		void ServerCreateGroup();
		void ServerCheat(const class FString& Msg);
		void ServerchangeCameraMode(int32_t NewMode);
		void ServerAcceptCrewInvite(const class FString& CrewNameName);
		void Server_T17_Teleport(const struct FVector& LocationToGoTo);
		void Server_T17_SpawnMapNode(const class FString& MapName);
		void Server_T17_SetSpeed(int32_t NewSpeed);
		void Server_SetGodMode(bool bEnable);
		void Server_PushExecCommand(const class FString& MessageIn);
		void Server_KeySend(class URaidUseableAirLockComponent* Keypad, const class FString& KeyNumber);
		void SendPlayerInvite(const class FString& PlayerName);
		void SendKeyCheck(const class FString& KeyNumber);
		void Say(const class FString& Msg);
		void RegisterAsCaptain();
		void ReceivedCrewInvite(const class FString& CrewName);
		void PlayerTakenDamageEvent(float DamageAmount, int32_t directionInt, const class FString& DamageType);
		void PlayBreachMovie(const class FName& FrigType, class AActor* BreachedActor);
		void PickShipFromHanger(const class FString& ShipToUse);
		void OnLeaderboardReadComplete(bool bWasSuccessful);
		void OnFrigatesBeenHitAndInside();
		void OnClientNoAmmoForTuret(float ReloadTime);
		void OnClientFiredTurret(float TimeforReload);
		void NotTheCaptain(bool JustCrew);
		void NotifiyBreached();
		void LeaveSpaceRaidVolume();
		void LeavelandRaidVolume();
		void LeaveGroup();
		void LeaveEvacRaidVolume();
		void LeaveEnterSpaceAtmosVolume();
		void LaunchSpaceRaid();
		void LaunchLandTeamRaid();
		void KickCrewMember(const class FString& CrewName);
		void KeyEnterCheck(bool failed);
		bool IsPlayerTheCaptain(const class FString& PlayerName);
		void Headshot(bool ArmourHit);
		void HangerEvent(EHangerEvent HEvent);
		class URaidUseableComponent* GetPreviousComp();
		int32_t GetPoolForVFX();
		int32_t GetPoolForProj();
		bool GetMouseCursorUP();
		bool GetIsPlayerACaptain();
		class FString GetGroup();
		void GetCurrentTurretDetails(class FText* FrigateName, class FText* FrigateDesc, int32_t* AmmoLeft, int32_t* MaxAmmo);
		EPlayerTranisitionState GetCurrentTransState();
		class URaidDockingComponent* GetCurrentDockingVolume();
		TArray<class FString> GetallCrewNames();
		void FrigatesBeenHitandInside();
		void FrigateDockingToStation();
		void ForceStopSequnce();
		void FirstStartComic();
		void EventShowMouse(bool Show);
		void Event_UsingHangerConsole(TArray<class FString> ShipsIN);
		void Event_ShowLoading();
		void Event_OpenShipVendorMenu(const struct FShipShop& StockInShop);
		void Event_OpenCaptainWidget();
		void Event_HideLoading();
		void EvacRaid(bool Frigate, const class FName& FrigNameIn);
		void EnteringPlanetSpaceVolume(bool Boarded);
		void EnteringPlanetRaidVolume();
		void EnteringLandRaidVolume();
		void EnterEvacRaidVolume(class ARaidPlanetEvac* VolumeIn);
		void EnteredPlanetAtmos(class ARaidSpaceshipInside* ShipInside);
		void DeathToMainMenu();
		void CreateGroup();
		void ClientUsingHangerConsole(TArray<class FString> ShipsIN);
		void ClientTransChange(EPlayerTranisitionState NewState, bool breached);
		void ClientToggleInventory(bool Show);
		void ClientStartOnlineGame();
		void ClientStarthangerKeyPad();
		void ClientStartAbility(EInteractionAbilityTypes AbTypeToCause);
		void ClientShowShopInventory();
		void ClientShowPlayerStorage();
		void ClientShowLoading();
		void ClientShowDebugSphere(const struct FVector& LocationTo);
		void ClientShowDebugLine(const struct FVector& LocationFrom, const struct FVector& LocationTo);
		void ClientSetSpectatorCamera(const struct FVector& CameraLocation, const struct FRotator& CameraRotation);
		void ClientSendRoundEndEvent(bool bIsWinner, int32_t ExpendedTimeInSeconds);
		void ClientReceivedCrewInvite(const class FString& CrewNameName);
		void ClientPlayerHasDied();
		void ClientOpenShipVendorMenu(const struct FShipShop& StockInShop);
		void ClientOpenCaptainWidget();
		void ClientNotTheCaptain(bool JustCrew);
		void ClientNoAmmoForTuret(float ReloadTime);
		void ClientKeyEnterCheck(bool failed);
		void ClientHideLoading();
		void ClientHeadshot(bool ArmourHit);
		void ClientHangerEvent(EHangerEvent HEvent);
		void ClientGameStarted();
		void ClientFrigateDockingToStation();
		void ClientFiredTurret(float TimeforReload);
		void ClientEnteringPlanetSpaceVolume(bool Boarded);
		void ClientEnteringPlanetRaidVolume();
		void ClientEnteringLandRaidVolume();
		void ClientEndOnlineGame();
		void ClientDissconnectedFromServer();
		void ClientCantLandEmemyOnBoard();
		void ClientBulletWizzPastHead(EBulletType BulletType);
		void ClientBodyshot(bool ArmourHit);
		void ClientBeenBreached();
		void Client_EvacRaidTurret(const class FName& FrigNameIn);
		void ClearPreviousComp();
		void changecameraweightingRot(float maxdist, float minamount, float maxamount);
		void changecameraweightingloc(float maxdist, float minamount, float maxamount);
		void changeCameraMode(int32_t NewMode);
		void CantLandEmemyOnBoard();
		void CantFireWeaponBroken();
		void BulletWizzPastHead(EBulletType BulletType);
		void Bodyshot(bool ArmourHit);
		void BeenBreached();
		void AcceptCrewInvite(const class FString& CrewName);
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidCheatManager
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class URaidCheatManager : public UCheatManager
	{
	public:
		void ToggleMatchTimer();
		void ToggleInfiniteClip();
		void ToggleInfiniteAmmo();
		void SpawnBot();
		void ForceMatchStart();
		void Cheat(const class FString& Msg);
		void ChangeTeam(int32_t NewTeamNumber);
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidCoverComponent
	 * Size -> 0x0058 (FullSize[0x04C0] - InheritedSize[0x0468])
	 */
	class URaidCoverComponent : public UBoxComponent
	{
	public:
		unsigned char                                              UnknownData_UK1A[0x8];                                   // 0x0468(0x0008) Fix Super Size
		unsigned char                                              UnknownData_UUQF[0x50];                                  // 0x0470(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidCoverMarker
	 * Size -> 0x0060 (FullSize[0x0280] - InheritedSize[0x0220])
	 */
	class ARaidCoverMarker : public AActor
	{
	public:
		class UBoxComponent*                                       CollisionBox;                                            // 0x0220(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SM2R[0x1];                                   // 0x0228(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ECoverType                                                 CoverType;                                               // 0x0229(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GSPR[0x2];                                   // 0x022A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Length;                                                  // 0x022C(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OOPH[0x50];                                  // 0x0230(0x0050) MISSED OFFSET (PADDING)

	public:
		bool ReserveCover(class AActor* ReservingActor, const struct FVector& Location);
		bool IsCoverLocationFreeConst(class AActor* ReservingActor, const struct FVector& Location);
		bool IsCoverLocationFree(class AActor* ReservingActor, const struct FVector& Location);
		struct FRotator GetDesiredRotation();
		void CancelReservation(class AActor* InActor);
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidDamageType
	 * Size -> 0x0038 (FullSize[0x0078] - InheritedSize[0x0040])
	 */
	class URaidDamageType : public UDamageType
	{
	public:
		unsigned char                                              bHasKnockback : 1;                                       // 0x0040(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CA8N[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      KnockbackStunTime;                                       // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeadshotDamageModifier;                                  // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1H72[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCanvasIcon                                         KillIcon;                                                // 0x0050(0x0018) Edit, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		class UForceFeedbackEffect*                                HitForceFeedback;                                        // 0x0068(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UForceFeedbackEffect*                                KilledForceFeedback;                                     // 0x0070(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidDebugAIGymSpawner
	 * Size -> 0x0060 (FullSize[0x0280] - InheritedSize[0x0220])
	 */
	class ARaidDebugAIGymSpawner : public AActor
	{
	public:
		class UDataTable*                                          AIGroupTable;                                            // 0x0220(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          AILoadoutTable;                                          // 0x0228(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          NodeSpawnTable;                                          // 0x0230(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TXZD[0x18];                                  // 0x0238(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SpawnRowUsing;                                           // 0x0250(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfAIToSpawn;                                       // 0x0258(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                LevelStreamTag;                                          // 0x025C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6KV5[0x4];                                   // 0x0264(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        AIToUse;                                                 // 0x0268(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B93T[0x8];                                   // 0x0278(0x0008) MISSED OFFSET (PADDING)

	public:
		void TimedSpawning();
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidDemoSpectator
	 * Size -> 0x0028 (FullSize[0x0598] - InheritedSize[0x0570])
	 */
	class ARaidDemoSpectator : public APlayerController
	{
	public:
		unsigned char                                              UnknownData_QW0Q[0x28];                                  // 0x0570(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidDockingComponent
	 * Size -> 0x0008 (FullSize[0x0470] - InheritedSize[0x0468])
	 */
	class URaidDockingComponent : public UBoxComponent
	{
	public:
		unsigned char                                              UnknownData_3N8Q[0x8];                                   // 0x0468(0x0008) Fix Super Size

	public:
		void ShipDocking(class ARaidSpaceship* DockingShip);
		void FrigateExiting(class ARaidFrigate* DockingShip);
		void FrigateDocking(class ARaidFrigate* DockingShip);
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidDoor
	 * Size -> 0x0000 (FullSize[0x0498] - InheritedSize[0x0498])
	 */
	class ARaidDoor : public ASIGISBaseActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidUseable
	 * Size -> 0x0080 (FullSize[0x02A0] - InheritedSize[0x0220])
	 */
	class ARaidUseable : public AActor
	{
	public:
		unsigned char                                              UnknownData_2BQU[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EInteractionType                                           InteractionType;                                         // 0x0228(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D81P[0x7];                                   // 0x0229(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInteractionInfo                                    ItemInfo;                                                // 0x0230(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                DisplayName;                                             // 0x0278(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class USoundCue*                                           PickupSound;                                             // 0x0290(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ARaidCharacter*                                      CurrentlyUsing;                                          // 0x0298(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnUsed(class APawn* InstigatorPawn);
		struct FInteractionInfo GetInteractionInfo();
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidDropPodControl
	 * Size -> 0x0000 (FullSize[0x02A0] - InheritedSize[0x02A0])
	 */
	class ARaidDropPodControl : public ARaidUseable
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidEngine
	 * Size -> 0x0000 (FullSize[0x0E30] - InheritedSize[0x0E30])
	 */
	class URaidEngine : public UGameEngine
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidExplosionEffect
	 * Size -> 0x00C8 (FullSize[0x02E8] - InheritedSize[0x0220])
	 */
	class ARaidExplosionEffect : public AActor
	{
	public:
		class UParticleSystem*                                     ExplosionFX;                                             // 0x0220(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPointLightComponent*                                ExplosionLight;                                          // 0x0228(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ExplosionLightFadeOut;                                   // 0x0230(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6G1G[0x4];                                   // 0x0234(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundCue*                                           ExplosionSound;                                          // 0x0238(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDecalData                                          Decal;                                                   // 0x0240(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FHitResult                                          SurfaceHit;                                              // 0x0250(0x008C) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G2O9[0xC];                                   // 0x02DC(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidFrigate
	 * Size -> 0x0180 (FullSize[0x0CC0] - InheritedSize[0x0B40])
	 */
	class ARaidFrigate : public ARaidCharacter
	{
	public:
		class UParticleSystemComponent*                            ThrustLeftParticleComp;                                  // 0x0B40(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystemComponent*                            ThrustRightParticleComp;                                 // 0x0B48(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USpringArmComponent*                                 ShipCameraBoomComp;                                      // 0x0B50(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCineCameraComponent*                                ShipCamera;                                              // 0x0B58(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBehaviorTree*                                       BotBehavior;                                             // 0x0B60(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FrigateID;                                               // 0x0B68(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GQH2[0x8];                                   // 0x0B70(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MainHullHealth;                                          // 0x0B78(0x0004) Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamagedSlowedAmount;                                     // 0x0B7C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BuildUpAmount;                                           // 0x0B80(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlowDownAmount;                                          // 0x0B84(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RevereseBuildUpAmount;                                   // 0x0B88(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RevereseSlowDownAmount;                                  // 0x0B8C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentThrust;                                           // 0x0B90(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ON1I[0x4];                                   // 0x0B94(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         ThrustCurve;                                             // 0x0B98(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         BrakeCurve;                                              // 0x0BA0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TurnUpAmount;                                            // 0x0BA8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TurnDownAmount;                                          // 0x0BAC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentTurn;                                             // 0x0BB0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WI25[0x4];                                   // 0x0BB4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         TurnCurve;                                               // 0x0BB8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AAIController*                                       MyAIDriver;                                              // 0x0BC0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ARaidSpaceshipInside*                                MyShipInside;                                            // 0x0BC8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSystemHealth>                               Systems;                                                 // 0x0BD0(0x0010) Net, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      LifeSupportFailDamage;                                   // 0x0BE0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W04D[0x4];                                   // 0x0BE4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              LifeSupportDamageType;                                   // 0x0BE8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q8VS[0x8];                                   // 0x0BF0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       IsAAAIPirate;                                            // 0x0BF8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BFIB[0x7];                                   // 0x0BF9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAIFrigateSpawnLocs>                         AIPiratePointsToSpawnTo;                                 // 0x0C00(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bIsExiting;                                              // 0x0C10(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEngineDestroyed;                                        // 0x0C11(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTurretDestroyed;                                        // 0x0C12(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLifeSupportDestroyed;                                   // 0x0C13(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHelmGunDestroyed;                                       // 0x0C14(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AU6D[0x3];                                   // 0x0C15(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                DockingAimPointSocket;                                   // 0x0C18(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DockingDistance;                                         // 0x0C20(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LWK5[0xC];                                   // 0x0C24(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ShipName;                                                // 0x0C30(0x0010) Net, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              FrigateHitShake;                                         // 0x0C40(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              TurretBP;                                                // 0x0C48(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        TurretArray;                                             // 0x0C50(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class ARaidCharacterTurrent*>                       SpawnedTurretArray;                                      // 0x0C60(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        CameraSocketArray;                                       // 0x0C70(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UClass*                                              TurretCameraBP;                                          // 0x0C80(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class ARaidCharacterTurrent*>                       SpawnedCameraTurretArray;                                // 0x0C88(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                TurretOneSocket;                                         // 0x0C98(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TurretTwoSocket;                                         // 0x0CA0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DebugTurrentSpawn;                                       // 0x0CA8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D9BG[0x7];                                   // 0x0CA9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              PlayerVersionOfAIFrig;                                   // 0x0CB0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TurnByte;                                                // 0x0CB8(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UpByte;                                                  // 0x0CB9(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AIFrigate;                                               // 0x0CBA(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       StarterFrigate;                                          // 0x0CBB(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TGIB[0x4];                                   // 0x0CBC(0x0004) MISSED OFFSET (PADDING)

	public:
		void ShipDocking(class ARaidSpaceship* DockingShip, int32_t DockNumber);
		void ServerReloadFrigate();
		void ServerFireFrigate();
		void ServerDockingToPlanet();
		void ServerDockingToNode(class URaidDockingComponent* DockingComp);
		void Server_ChangeUpByte(unsigned char NewByte);
		void Server_ChangeTurnByte(unsigned char NewByte);
		void OnFaceRotation(const struct FRotator& NewRotation, float DeltaTime);
		float GetUpByte();
		bool GetTurretDestroyed();
		float GetTurnByte();
		TArray<struct FSystemHealth> GetSystemsHealth();
		class FString GetShipName();
		bool GetLifeSupportDestroyed();
		float GetHullHealth();
		class FName GetFrigateID();
		bool GetEngineDestroyed();
		void FrigateSunk();
		class URaidDockingComponent* DockingCheck();
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidFrigateDockingHangerComponent
	 * Size -> 0x0008 (FullSize[0x0470] - InheritedSize[0x0468])
	 */
	class URaidFrigateDockingHangerComponent : public UBoxComponent
	{
	public:
		unsigned char                                              UnknownData_3EJ7[0x8];                                   // 0x0468(0x0008) Fix Super Size

	public:
		void OpenMainDoor();
		void CloseMainDoor();
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidFrigateHitVolumeComponent
	 * Size -> 0x0018 (FullSize[0x0480] - InheritedSize[0x0468])
	 */
	class URaidFrigateHitVolumeComponent : public UBoxComponent
	{
	public:
		unsigned char                                              UnknownData_1NH1[0x4];                                   // 0x0468(0x0004) Fix Super Size
		class FName                                                UniquePartName;                                          // 0x046C(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Health;                                                  // 0x0474(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8NQO[0x8];                                   // 0x0478(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidFrigateIntSpawn
	 * Size -> 0x0010 (FullSize[0x0260] - InheritedSize[0x0250])
	 */
	class ARaidFrigateIntSpawn : public APlayerStart
	{
	public:
		int32_t                                                    SpawnFrigateNumber;                                      // 0x0250(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForFrigateSpawning;                                     // 0x0254(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForFrigateAISpawning;                                   // 0x0255(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Occupied;                                                // 0x0256(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UL6W[0x1];                                   // 0x0257(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bNotForPlayers : 1;                                      // 0x0258(0x0001) BIT_FIELD Edit, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNotForBots : 1;                                         // 0x0258(0x0001) BIT_FIELD Edit, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EKW2[0x7];                                   // 0x0259(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidUseableComponent
	 * Size -> 0x00B0 (FullSize[0x0580] - InheritedSize[0x04D0])
	 */
	class URaidUseableComponent : public UStaticMeshComponent
	{
	public:
		unsigned char                                              UnknownData_SDPE[0x8];                                   // 0x04D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                DisplayName;                                             // 0x04D8(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<EUseComponetType>                                   UseCompTypes;                                            // 0x04F0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      InteractionDistanceAwayFrom;                             // 0x0500(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InteractionDistanceUpFrom;                               // 0x0504(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInteractionType                                           InteractionType;                                         // 0x0508(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7N5Z[0x7];                                   // 0x0509(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInteractionInfo                                    ItemInfo;                                                // 0x0510(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUsed;                                                  // 0x0558(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnState;                                                 // 0x0568(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		EUseState                                                  CurrentState;                                            // 0x0578(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6195[0x7];                                   // 0x0579(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetState(EUseState NewState);
		void ServerSetState(EUseState NewState);
		void PlayMontageOnTaggedSkelComp(const class FName& TagLookingFor, class UAnimMontage* AnimMontage);
		void PlayMontageOnSkelComp(class UAnimMontage* AnimMontage);
		void PlayLocalAndRepMontageOnTaggedSkelComp(class APlayerController* LocalController, const class FName& TagLookingFor, class UAnimMontage* ClientAnimMontage, class UAnimMontage* ServerAnimMontage);
		void OnRep_CurrentState(EUseState PrevState);
		void OnBPCompUsed(class APawn* InstigatorPawn);
		void Interact(class AActor* InteractingOwner);
		EUseState GetState();
		class USkeletalMeshComponent* GetInteractionMeshByTag(const class FName& TagLookingFor);
		class USkeletalMeshComponent* GetInteractionMesh();
		struct FRotator GetInteractionLookAtRotation();
		struct FVector GetInteractionLocation();
		struct FInteractionInfo GetInteractionInfo();
		bool CanUseComp();
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidFrigateLandingConsole
	 * Size -> 0x0000 (FullSize[0x0580] - InheritedSize[0x0580])
	 */
	class URaidFrigateLandingConsole : public URaidUseableComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidFrigateLevelStreamActor
	 * Size -> 0x0040 (FullSize[0x0260] - InheritedSize[0x0220])
	 */
	class ARaidFrigateLevelStreamActor : public AActor
	{
	public:
		class ULevelStreamingDynamic*                              StreamedLevel;                                           // 0x0220(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VIK5[0x8];                                   // 0x0228(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              LevelToUseHere[0x28];                                    // 0x0230(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       FlipRefreshBool;                                         // 0x0258(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CG94[0x7];                                   // 0x0259(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidFrigateShuttleControl
	 * Size -> 0x0030 (FullSize[0x02D0] - InheritedSize[0x02A0])
	 */
	class ARaidFrigateShuttleControl : public ARaidUseable
	{
	public:
		unsigned char                                              UnknownData_1KV9[0x8];                                   // 0x02A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UseCooldown;                                             // 0x02A8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInCoolDown;                                             // 0x02AC(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0RVJ[0x3];                                   // 0x02AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                LevelSteamTag;                                           // 0x02B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FVector>                                     ExitPoints;                                              // 0x02B8(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UClass*                                              SpaceshipToPairTo;                                       // 0x02C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void PlayCompAnimNotify(class USkeletalMeshComponent* CompToPlayOn, const class FName& NotifyName);
		void OnPlayCompAnimNotify(class USkeletalMeshComponent* CompToPlayOn, const class FName& NotifyName);
		class USkeletalMeshComponent* GetInteractionMesh();
		struct FRotator GetInteractionLookAtRotation();
		struct FVector GetInteractionLocation();
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidFrigateStashComponent
	 * Size -> 0x0000 (FullSize[0x05C0] - InheritedSize[0x05C0])
	 */
	class URaidFrigateStashComponent : public USIGISBaseComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidFrigateStationDock
	 * Size -> 0x0080 (FullSize[0x02A0] - InheritedSize[0x0220])
	 */
	class ARaidFrigateStationDock : public AActor
	{
	public:
		class USceneComponent*                                     RootScence;                                              // 0x0220(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                DoorMesh;                                                // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class URaidUseableAirLockComponent*                        OpenButton;                                              // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class URaidUseableInsideAirLockConsole*                    InAirLockButton;                                         // 0x0238(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBoxComponent*                                       InSideComp;                                              // 0x0240(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ARaidSpaceshipInside*                                MyDockedShip;                                            // 0x0248(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ARaidSpaceshipInside*                                DebugInside;                                             // 0x0250(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsOpen;                                                 // 0x0258(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9FAE[0x17];                                  // 0x0259(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bEnableColiision;                                        // 0x0270(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GYWN[0x7];                                   // 0x0271(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ARaidSpaceshipInside*>                        DockedShips;                                             // 0x0278(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZBYL[0x8];                                   // 0x0288(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bHangerInUse;                                            // 0x0290(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Transferrring;                                           // 0x0291(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EHUE[0x6];                                   // 0x0292(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ARaidSpaceshipInside*                                PendingShipTransfer;                                     // 0x0298(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void StartDoorEvent(bool OpenDoor);
		void PlayMontageOnComponentNotLocal(class UAnimMontage* AnimMontage, class USkeletalMeshComponent* CompToPlayOn);
		void PlayMontageOnComponent(class UAnimMontage* AnimMontage, class USkeletalMeshComponent* CompToPlayOn);
		void OnRep_IsOpen();
		void OnRep_HangerInUse();
		void OnRep_EnableColiision();
		void HangerUseStateChange(bool hangerchange);
		void EnableCollisionOnDoor(bool EnableCollision);
		void DoorOpenEvent(bool BopenDoor);
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidGameMode
	 * Size -> 0x00F8 (FullSize[0x0478] - InheritedSize[0x0380])
	 */
	class ARaidGameMode : public ASIGISGameMode
	{
	public:
		class UClass*                                              BotPawnClass;                                            // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ControllerAI;                                            // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              BotGuardPawnClass;                                       // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ControllerGuard;                                         // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              BotMilitaryPawnClass;                                    // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ControllerMilitary;                                      // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1ST7[0x18];                                  // 0x03B0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       ISASpaceGameMode;                                        // 0x03C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ISASpaceStationMode;                                     // 0x03C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowAI;                                                 // 0x03CA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I75U[0x1];                                   // 0x03CB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxBotsAllowed;                                          // 0x03CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              BotShipPawnClass;                                        // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D4HO[0x4];                                   // 0x03D8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bStoppedMM;                                              // 0x03DC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K33J[0x3];                                   // 0x03DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    WarmupTime;                                              // 0x03E0(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    RoundTime;                                               // 0x03E4(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    TimeBetweenMatches;                                      // 0x03E8(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    KillScore;                                               // 0x03EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    PlayerKillScore;                                         // 0x03F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    LootScore;                                               // 0x03F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumberNormalAI;                                          // 0x03F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumberGuardAI;                                           // 0x03FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumberMilitaryAI;                                        // 0x0400(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RespawnTime;                                             // 0x0404(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    DeathScore;                                              // 0x0408(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DamageSelfScale;                                         // 0x040C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxBots;                                                 // 0x0410(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3ZR6[0x4];                                   // 0x0414(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ARaidAIController*>                           BotControllers;                                          // 0x0418(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SQS1[0x10];                                  // 0x0428(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ControllerToSpawnBP;                                     // 0x0438(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class ARaidProjectile*>                             PooledProjectileActors;                                  // 0x0440(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class UClass*                                              PooledProjectileClass;                                   // 0x0450(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ProjectilePoolSize;                                      // 0x0458(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumPooledProjectileSpawned;                              // 0x045C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          ShipDataTable;                                           // 0x0460(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class ARaidPickup*>                                 LevelPickups;                                            // 0x0468(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		void SetAllowBots(bool bInAllowBots, int32_t InMaxBots);
		int32_t GetPoolForProj();
		void FinishMatch();
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidGame_FreeForAll
	 * Size -> 0x0008 (FullSize[0x0480] - InheritedSize[0x0478])
	 */
	class ARaidGame_FreeForAll : public ARaidGameMode
	{
	public:
		class ARaidPlayerState*                                    WinnerPlayerState;                                       // 0x0478(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidGame_Menu
	 * Size -> 0x0000 (FullSize[0x0380] - InheritedSize[0x0380])
	 */
	class ARaidGame_Menu : public ASIGISGameMode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidGame_Space
	 * Size -> 0x0028 (FullSize[0x04A0] - InheritedSize[0x0478])
	 */
	class ARaidGame_Space : public ARaidGameMode
	{
	public:
		TArray<class ARaidSpaceshipInside*>                        ShipsInMap;                                              // 0x0478(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class ARaidFrigate*>                                FrigatesInMap;                                           // 0x0488(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LX8R[0x8];                                   // 0x0498(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidGame_TeamDeathMatch
	 * Size -> 0x0008 (FullSize[0x0480] - InheritedSize[0x0478])
	 */
	class ARaidGame_TeamDeathMatch : public ARaidGameMode
	{
	public:
		unsigned char                                              UnknownData_BC4R[0x8];                                   // 0x0478(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidGameInstance
	 * Size -> 0x02B0 (FullSize[0x1CC0] - InheritedSize[0x1A10])
	 */
	class URaidGameInstance : public USIGISGameInstance
	{
	public:
		class FString                                              WelcomeScreenMap;                                        // 0x1A10(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              MainMenuMap;                                             // 0x1A20(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XTNV[0x290];                                 // 0x1A30(0x0290) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidGameInventoryComponent
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class URaidGameInventoryComponent : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidGameplayAbility
	 * Size -> 0x0068 (FullSize[0x0418] - InheritedSize[0x03B0])
	 */
	class URaidGameplayAbility : public UGameplayAbility
	{
	public:
		EGSAbilityInputID                                          AbilityInputID;                                          // 0x03B0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGSAbilityInputID                                          AbilityId;                                               // 0x03B1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bActivateAbilityOnGranted;                               // 0x03B2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bActivateOnInput;                                        // 0x03B3(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSourceObjectMustEqualCurrentWeaponToActivate;           // 0x03B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCannotActivateWhileInteracting;                         // 0x03B5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OLI3[0x2];                                   // 0x03B6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FGameplayTag, struct FGSGameplayEffectContainer> EffectContainerMap;                                      // 0x03B8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FAbilityMeshMontage>                         CurrentAbilityMeshMontages;                              // 0x0408(0x0010) ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		void SendTargetDataToServer(const struct FGameplayAbilityTargetDataHandle& TargetData);
		void MontageStopForMesh(class USkeletalMeshComponent* InMesh, float OverrideBlendOutTime);
		void MontageStopForAllMeshes(float OverrideBlendOutTime);
		void MontageSetPlayRate(class USkeletalMeshComponent* InMesh, float PlayRate);
		void MontageSetNextSectionNameForMesh(class USkeletalMeshComponent* InMesh, const class FName& FromSectionName, const class FName& ToSectionName);
		void MontageJumpToSectionForMesh(class USkeletalMeshComponent* InMesh, const class FName& SectionName);
		struct FGameplayAbilityTargetDataHandle MakeGameplayAbilityTargetDataHandleFromHitResults(TArray<struct FHitResult> HitResults);
		struct FGameplayAbilityTargetDataHandle MakeGameplayAbilityTargetDataHandleFromActorArray(TArray<class AActor*> TargetActors);
		struct FGSGameplayEffectContainerSpec MakeEffectContainerSpecFromContainer(const struct FGSGameplayEffectContainer& Container, const struct FGameplayEventData& EventData, int32_t OverrideGameplayLevel);
		struct FGSGameplayEffectContainerSpec MakeEffectContainerSpec(const struct FGameplayTag& ContainerTag, const struct FGameplayEventData& EventData, int32_t OverrideGameplayLevel);
		class UObject* K2_GetSourceObject(const struct FGameplayAbilitySpecHandle& Handle, const struct FGameplayAbilityActorInfo& ActorInfo);
		bool IsPredictionKeyValidForMorePrediction();
		bool IsInputPressed();
		bool GSCheckCost(const struct FGameplayAbilitySpecHandle& Handle, const struct FGameplayAbilityActorInfo& ActorInfo);
		void GSApplyCost(const struct FGameplayAbilitySpecHandle& Handle, const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilityActivationInfo& ActivationInfo);
		class FString GetCurrentPredictionKeyStatus();
		class UAnimMontage* GetCurrentMontageForMesh(class USkeletalMeshComponent* InMesh);
		bool BatchRPCTryActivateAbility(const struct FGameplayAbilitySpecHandle& InAbilityHandle, bool EndAbilityImmediately);
		TArray<struct FActiveGameplayEffectHandle> ApplyEffectContainerSpec(const struct FGSGameplayEffectContainerSpec& ContainerSpec);
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidGameSession
	 * Size -> 0x0108 (FullSize[0x0340] - InheritedSize[0x0238])
	 */
	class ARaidGameSession : public AGameSession
	{
	public:
		unsigned char                                              UnknownData_U838[0x108];                                 // 0x0238(0x0108) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidGameState
	 * Size -> 0x0020 (FullSize[0x02B0] - InheritedSize[0x0290])
	 */
	class ARaidGameState : public ASIGISGameState
	{
	public:
		int32_t                                                    NumTeams;                                                // 0x0290(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J07C[0x4];                                   // 0x0294(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            TeamScores;                                              // 0x0298(0x0010) Net, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		int32_t                                                    RemainingTime;                                           // 0x02A8(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTimerPaused;                                            // 0x02AC(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HWFO[0x3];                                   // 0x02AD(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidGameUserSettings
	 * Size -> 0x0008 (FullSize[0x0128] - InheritedSize[0x0120])
	 */
	class URaidGameUserSettings : public UGameUserSettings
	{
	public:
		int32_t                                                    GraphicsQuality;                                         // 0x0120(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsLanMatch;                                             // 0x0124(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsDedicatedServer;                                      // 0x0125(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_55NW[0x2];                                   // 0x0126(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidGameViewportClient
	 * Size -> 0x0050 (FullSize[0x03D0] - InheritedSize[0x0380])
	 */
	class URaidGameViewportClient : public USIGISGameViewportClient
	{
	public:
		unsigned char                                              UnknownData_DDUO[0x50];                                  // 0x0380(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidGenericUseableComponent
	 * Size -> 0x0000 (FullSize[0x0580] - InheritedSize[0x0580])
	 */
	class URaidGenericUseableComponent : public URaidUseableComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidGOAPController
	 * Size -> 0x0330 (FullSize[0x0708] - InheritedSize[0x03D8])
	 */
	class ARaidGOAPController : public ARaidAIController
	{
	public:
		TArray<struct FAtom>                                       currentWorld;                                            // 0x03D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAtom>                                       desiredWorld;                                            // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      actions;                                                 // 0x03F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		class UClass*                                              DefaultBrain;                                            // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERaidAIState                                               StartingAIState;                                         // 0x0410(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K1X8[0x3];                                   // 0x0411(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    maxDepth;                                                // 0x0414(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDebugGOAP;                                              // 0x0418(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WAJK[0x3];                                   // 0x0419(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BotRotationSpeed;                                        // 0x041C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          AIActionNodes;                                           // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          AIGoals;                                                 // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5V7D[0x10];                                  // 0x0430(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGOAPBrain*                                          auxBrain;                                                // 0x0440(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UGOAPAction*>                                 auxActions;                                              // 0x0448(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LHT9[0x10];                                  // 0x0458(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, float>                                 ActionFrequencies;                                       // 0x0468(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ED76[0xA0];                                  // 0x04B8(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTimerHandle>                                ActionTimerHandles;                                      // 0x0558(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7GRT[0x8];                                   // 0x0568(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ERaidAIState                                               CurrentAIState;                                          // 0x0570(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BR6B[0x3B];                                  // 0x0571(0x003B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurrentRandomNumber;                                     // 0x05AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AIActionsRowname;                                        // 0x05B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bActionsAssigned;                                        // 0x05B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2WUA[0x7];                                   // 0x05B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ARaidCharacter*                                      LostEnemy;                                               // 0x05C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeSinceLost;                                           // 0x05C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeSinceDamaged;                                        // 0x05CC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeSinceSeen;                                           // 0x05D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeSinceHeard;                                          // 0x05D4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeSinceAttacking;                                      // 0x05D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeSinceSearching;                                      // 0x05DC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeSincePatrolling;                                     // 0x05E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeSinceLooted;                                         // 0x05E4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeSincePoppingOff;                                     // 0x05E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JSQX[0x4];                                   // 0x05EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ACoverGenerator*                                     MyCoverGenerator;                                        // 0x05F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CCTS[0x4];                                   // 0x05F8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             DesiredLocationToQuery;                                  // 0x05FC(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DesiredDirectionToLook;                                  // 0x0608(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ProcessingQueryAndMove;                                  // 0x0614(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1NMO[0x3];                                   // 0x0615(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TargetLocationToGoTo;                                    // 0x0618(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ProcessingQueryAndLook;                                  // 0x0624(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GAPE[0x3];                                   // 0x0625(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TargetLocationToLookTo;                                  // 0x0628(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YV20[0x34];                                  // 0x0634(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCoverPoint*                                         MyCoverPoint;                                            // 0x0668(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LookingAroundthisArea;                                   // 0x0670(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WiggleLookingAroundthisArea;                             // 0x067C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShuffleLeftRight;                                        // 0x0688(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JLO6[0x4];                                   // 0x068C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurrentAction;                                           // 0x0690(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TickTimeInAction;                                        // 0x06A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QL0H[0x4];                                   // 0x06A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ARaidGOAPController*                                 CurrentCaptain;                                          // 0x06A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TPS;                                                     // 0x06B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDoingEQSSearch;                                       // 0x06B4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XO57[0x3];                                   // 0x06B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LocationToUse;                                           // 0x06B8(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BPBA[0x4];                                   // 0x06C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnEQSreturn;                                             // 0x06C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MB5S[0x28];                                  // 0x06D8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGOAPAction*                                         LastAction;                                              // 0x0700(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void updateGoal(TArray<struct FAtom> atoms);
		void updateCurrentWorld(TArray<struct FAtom> atoms);
		void TryLean(bool Left, bool Right, bool Back);
		void StopMovementRequest();
		void StopLookRequest();
		void StopGOAPEvent();
		void StartWorkoutGoal(ERaidAIState StateCompleted);
		bool StartsettingKeys(ERaidAIState NewState);
		void StartGOAPEvent();
		void Sprint(bool RunWalk);
		void ShootAtLocation(const struct FVector& LoctoShoot, float MissRate);
		void ShootAtCurrentEnemy(float MissRate);
		void ShootAimedAtCurrentEnemy(float MissRate, const class FName& BonedAimedAt);
		void SetWaiting(bool bForceChange);
		void SetTargetEnemy(class ARaidCharacter* TEnemy);
		void SetStartingKey(TArray<struct FAtom> StartingWorldState);
		void SetShuffleOnce(float ShuffleAmountLeftRight);
		void SetPatrolling(bool bForceChange);
		void SetMoveShuffle(float TimeBetween, float CancelOUt, float ShuffleAmountLeftRight);
		void SetLookAtTargetLocation(const struct FVector& LocatLocation);
		void SetLookAroundWiggleOnce(float WiggleAmountLeftRight, float WiggleAmountUpDown, float CancelOUt);
		void SetLookAroundWiggle(float TimeBetween, float CancelOUt, float WiggleAmountLeftRight, float WiggleAmountUpDown);
		void setGoal(TArray<struct FAtom> NewGoal);
		void setCurrentWorld(TArray<struct FAtom> newCurrentWorld);
		void SetBotRotationSpeed(float RotationSpeed);
		void SetAttacking(bool bForceChange);
		void ResetWorldStateKey(const class FString& GOAPKEY, bool NewState);
		void ResetWorldState();
		void QueryForLocation(ERaidEQS TypeToCheck);
		void ProcessFunctionTimerCall(class UGOAPAction* ActionIn, const class FString& FunctionName);
		void PlanIsNowInvalid();
		void OnGOAPTaskCompleted(const class FString& TaskFinsihed, const class FString& GoalComplete);
		void OnGOAPEvent(ERaidGOAPEvent NewGOAPEvent, class ARaidCharacter* SeenChar, const struct FAIStimulus& Stimulus);
		void OnGoalCompleted(ERaidAIState StateCompleted);
		void LootedAnItem();
		void LookAtPawnDirection(bool CancelOUt);
		bool IsRunning(class ARaidGOAPController* MyControl);
		bool IsNearCover(class ARaidGOAPController* MyControl, const struct FVector& BoundsIn, int32_t* NumberNear);
		bool IsHealthLow(class ARaidGOAPController* MyControl, float healthAmount);
		bool IsEnemyNearCover(class ARaidGOAPController* MyControl, const struct FVector& BoundsIn, int32_t* NumberNear);
		bool IsEnemyAimingAtme(class ARaidGOAPController* MyControl);
		bool IsCrouched(class ARaidGOAPController* MyControl);
		bool IsCharacterOnSeenList(class ARaidCharacter* SeenChar);
		bool IsCharacterOnHearingList(class ARaidCharacter* SeenChar);
		bool IsAnotherPlayerCloserThenTarget(class ARaidGOAPController* MyControl);
		bool IsAGroupAI();
		bool IsACaptain();
		bool ImIMoving(class ARaidGOAPController* MyControl);
		bool HasToReload(class ARaidGOAPController* MyControl, int32_t bullletLowAmount);
		bool HasRecentlySeenSomeone(class ARaidGOAPController* MyControl, float recentamount);
		bool HasRecentlyPoppedSomeshotsOff(class ARaidGOAPController* MyControl, float recentamount);
		bool HasRecentlyLooted(class ARaidGOAPController* MyControl, float timeSinceLastloot);
		bool HasRecentlyHeardSomeone(class ARaidGOAPController* MyControl, float recentamount);
		bool HasRecentlyBeenSearching(class ARaidGOAPController* MyControl, float recentamount);
		bool HasRecentlyBeenPatrolling(class ARaidGOAPController* MyControl, float recentamount);
		bool HasRecentlyBeenDamaged(class ARaidGOAPController* MyControl, float recentamount);
		bool HasRecentlyBeenAttacking(class ARaidGOAPController* MyControl, float recentamount);
		bool HasPerceptionPeopleNear(class ARaidGOAPController* MyControl, bool Allies, float distanceamount);
		bool HasLostEnemy(class ARaidGOAPController* MyControl, float timeAmountforLost);
		bool HasGotAnyTargetActors();
		bool HasEnemyLowHealth(class ARaidGOAPController* MyControl, float amountlow);
		bool HasEnemyLowAmmo(class ARaidGOAPController* MyControl, float Percentlow);
		bool HasEnemy(class ARaidGOAPController* MyControl);
		bool HasArrivedAtLocation(float Allowance, bool DontRestartMoveQuery, bool* RequestORMoveHasFailed);
		void GOAPSetFocalPoint(const struct FVector& NewFocus, ERaidFocusPri InPriority);
		float GetTimeSinceLostEnemy();
		class ARaidCharacter* GetSensedPlayerThatCantSeeMe();
		class ARaidCharacter* GetSensedPlayerClosetToMe();
		class ARaidCharacter* GetSensedPlayerAimingAtMe();
		int32_t GetRandSeed();
		TArray<class UGOAPAction*> getPlan();
		class ARaidNodeBot* GetMyBot();
		struct FVector GetMovingTowardLocation();
		class AActor* GetLootableNearMe(float MaxDistance);
		struct FVector GetLookAtTargetLocation();
		bool GetLocationToUse(struct FVector* LocToUse);
		TArray<struct FAtom> getDesiredWorldStateAtoms();
		TArray<struct FAtom> getCurrentWorldStateAtoms();
		class ARaidCharacter* GetCurrentTarget();
		TArray<class AActor*> GetCurrentSensedTargets();
		ERaidAIState GetCurrentAIState();
		void GetCoverPointInfo(bool* CrouchPoint, bool* ShootOver, bool* LeftLean, bool* RightLean, struct FVector* DirectionToWall);
		class ARaidCharacter* GetCaptainsTarget();
		struct FVector GetCaptainsMoveLocation();
		struct FVector GetCaptainsLookLocation();
		ERaidAIState GetCaptainsGoapState();
		class ARaidGOAPController* GetCaptain();
		float GetActionTimeInSeconds();
		void GenerateRandSeed(int32_t MaxInt);
		bool generatePlan();
		bool FindCaptian();
		bool executeGOAP();
		void EQSQueryLookToLocation(class UEnvQuery* MyQuery, EEnvQueryRunMode RunMode, float DeactiveTime);
		void EQSQueryLookToDirection(class UEnvQuery* MyQuery, EEnvQueryRunMode RunMode, const struct FVector& LookToVector, float DeactiveTime);
		void EQSQueryandMoveToLocationVector(const struct FVector& LocationVector, class UEnvQuery* MyQuery, EEnvQueryRunMode RunMode);
		void EQSQueryandMoveToLocation(class UEnvQuery* MyQuery, EEnvQueryRunMode RunMode);
		void EQSQueryandMoveToCover(class UEnvQuery* MyQuery, EEnvQueryRunMode RunMode);
		void EQSCoverNodeReturn(const struct FVector& LocToGo);
		bool EnemyFar(class ARaidGOAPController* MyControl, float DistanceforFar);
		void DebugStimulusEvent(class AActor* Actor, const struct FAIStimulus& Stimulus, ERaidGOAPEvent NormalEvent);
		void Crouch(bool CrouchStand);
		bool CheckLOSToTarget(class ARaidGOAPController* MyControl);
		void CancelMoveShuffle();
		void CancelLookAroundWiggle();
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidHUD
	 * Size -> 0x0430 (FullSize[0x0860] - InheritedSize[0x0430])
	 */
	class ARaidHUD : public ASIGISHUD
	{
	public:
		unsigned char                                              UnknownData_BLA2[0x10];                                  // 0x0430(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture*                                            EmptySlotTexture;                                        // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture*                                            BagTexture;                                              // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture*                                            LootTexture;                                             // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture*                                            EquipTexture;                                            // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M592[0x20];                                  // 0x0460(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCanvasIcon                                         HitNotifyIcon[0x8];                                      // 0x0480(0x00C0) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FCanvasIcon                                         KillsBg;                                                 // 0x0540(0x0018) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FCanvasIcon                                         TimePlaceBg;                                             // 0x0558(0x0018) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FCanvasIcon                                         PrimaryWeapBg;                                           // 0x0570(0x0018) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FCanvasIcon                                         SecondaryWeapBg;                                         // 0x0588(0x0018) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FCanvasIcon                                         Crosshair[0x5];                                          // 0x05A0(0x0078) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FCanvasIcon                                         HitNotifyCrosshair;                                      // 0x0618(0x0018) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FCanvasIcon                                         DeathMessagesBg;                                         // 0x0630(0x0018) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FCanvasIcon                                         HealthBarBg;                                             // 0x0648(0x0018) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FCanvasIcon                                         HealthBar;                                               // 0x0660(0x0018) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FCanvasIcon                                         HealthIcon;                                              // 0x0678(0x0018) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FCanvasIcon                                         KillsIcon;                                               // 0x0690(0x0018) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FCanvasIcon                                         KilledIcon;                                              // 0x06A8(0x0018) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FCanvasIcon                                         TimerIcon;                                               // 0x06C0(0x0018) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FCanvasIcon                                         PlaceIcon;                                               // 0x06D8(0x0018) NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MOVZ[0x90];                                  // 0x06F0(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          HitNotifyTexture;                                        // 0x0780(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          HUDMainTexture;                                          // 0x0788(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          HUDAssets02Texture;                                      // 0x0790(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          LowHealthOverlayTexture;                                 // 0x0798(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WWWU[0xC0];                                  // 0x07A0(0x00C0) MISSED OFFSET (PADDING)

	public:
		void HudTakenDamage(float DamageTaken, const struct FDamageEvent& DamageEvent, class APawn* PawnInstigator, int32_t Direction);
		void HudGivenDamage();
		class FString GetVersionInformation();
		class FString GetTimeString(float TimeSeconds);
		float GetMatchTimefloat();
		class FString GetMatchTime();
		int32_t GetCurrentAmmo();
		int32_t GetAmmoPerClip();
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidImpactEffect
	 * Size -> 0x0200 (FullSize[0x0420] - InheritedSize[0x0220])
	 */
	class ARaidImpactEffect : public AActor
	{
	public:
		class UParticleSystem*                                     DefaultFX;                                               // 0x0220(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     ConcreteFX;                                              // 0x0228(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     DirtFX;                                                  // 0x0230(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     WaterFX;                                                 // 0x0238(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     MetalFX;                                                 // 0x0240(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     WoodFX;                                                  // 0x0248(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     GlassFX;                                                 // 0x0250(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     GrassFX;                                                 // 0x0258(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     FleshFX;                                                 // 0x0260(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     HeadShotFX;                                              // 0x0268(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     MetalThinFX;                                             // 0x0270(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           DefaultSound;                                            // 0x0278(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           ConcreteSound;                                           // 0x0280(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           DirtSound;                                               // 0x0288(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           WaterSound;                                              // 0x0290(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           MetalSound;                                              // 0x0298(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           WoodSound;                                               // 0x02A0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           GlassSound;                                              // 0x02A8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           GrassSound;                                              // 0x02B0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           FleshSound;                                              // 0x02B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           MetalThinSound;                                          // 0x02C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           HeadShotSound;                                           // 0x02C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDecalData                                          DefaultDecal;                                            // 0x02D0(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  ConcreteDecal;                                           // 0x02E0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  DirtDecal;                                               // 0x02F0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  WaterDecal;                                              // 0x0300(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  MetalDecal;                                              // 0x0310(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  WoodDecal;                                               // 0x0320(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  GrassDecal;                                              // 0x0330(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  GlassDecal;                                              // 0x0340(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  FleshDecal;                                              // 0x0350(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  HeadShotDecal;                                           // 0x0360(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  MetalThinDecal;                                          // 0x0370(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FHitResult                                          SurfaceHit;                                              // 0x0380(0x008C) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       BloodHit;                                                // 0x040C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E2U3[0x7];                                   // 0x040D(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bSpawnLocal;                                             // 0x0414(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCheckView;                                              // 0x0415(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowParticleOverride : 1;                              // 0x0416(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowDecalOverride : 1;                                 // 0x0416(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowSoundOverride : 1;                                 // 0x0416(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1ATA[0x1];                                   // 0x0417(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DecalLifeTime;                                           // 0x0418(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5PAW[0x4];                                   // 0x041C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidImpactFXComponent
	 * Size -> 0x0068 (FullSize[0x0118] - InheritedSize[0x00B0])
	 */
	class URaidImpactFXComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnSimulateHit;                                           // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSpawnImpactParticle;                                   // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bOverrideParticle;                                       // 0x00D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QJJ7[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     ImpactParticle;                                          // 0x00D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bOverrideSound;                                          // 0x00E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_G11Z[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundCue*                                           ImpactSound;                                             // 0x00E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      VolumeModifier;                                          // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PitchModifier;                                           // 0x00F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bOverrideDecal;                                          // 0x00F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KS3H[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  ImpactDecal;                                             // 0x0100(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             DecalSize;                                               // 0x0108(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3SQM[0x4];                                   // 0x0114(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidInventoryScreenWidget
	 * Size -> 0x0000 (FullSize[0x0260] - InheritedSize[0x0260])
	 */
	class URaidInventoryScreenWidget : public UUserWidget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidLocalPlayer
	 * Size -> 0x0008 (FullSize[0x0260] - InheritedSize[0x0258])
	 */
	class URaidLocalPlayer : public ULocalPlayer
	{
	public:
		class URaidPersistentUser*                                 PersistentUser;                                          // 0x0258(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidLockedDoor
	 * Size -> 0x0028 (FullSize[0x04C0] - InheritedSize[0x0498])
	 */
	class ARaidLockedDoor : public ASIGISBaseActor
	{
	public:
		bool                                                       NeedsToolToOpen;                                         // 0x0498(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N9WA[0x3];                                   // 0x0499(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ItemRowNeededToUnlock;                                   // 0x049C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RCHY[0x4];                                   // 0x04A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLockHealth>                                 Systems;                                                 // 0x04A8(0x0010) Net, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bIsUnlocked;                                             // 0x04B8(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U7VC[0x7];                                   // 0x04B9(0x0007) MISSED OFFSET (PADDING)

	public:
		void TriedToOpenDoor();
		void OnUnlocked();
		void OnTriedToOpenButLocked();
		void OnRep_IsUnlocked();
		void MultiLockDamaged(const class FName& LockName, float HealthPercent);
		void LockDamaged(const class FName& LockName, float HealthPercent);
		class URaidLockVolumeComponent* GetPartCompByUniqueName(const class FName& UniName);
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidLockVolumeComponent
	 * Size -> 0x0018 (FullSize[0x0480] - InheritedSize[0x0468])
	 */
	class URaidLockVolumeComponent : public UBoxComponent
	{
	public:
		class FName                                                UniquePartName;                                          // 0x0468(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Health;                                                  // 0x0470(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KUSG[0xC];                                   // 0x0474(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidLootable
	 * Size -> 0x0020 (FullSize[0x02C0] - InheritedSize[0x02A0])
	 */
	class ARaidLootable : public ARaidUseable
	{
	public:
		int32_t                                                    ConSize;                                                 // 0x02A0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ConColoms;                                               // 0x02A4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        ItemsThatCanBeHere;                                      // 0x02A8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		int32_t                                                    maxLoot;                                                 // 0x02B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGeneratedContent;                                       // 0x02BC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YAGI[0x3];                                   // 0x02BD(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidLootableStatic
	 * Size -> 0x0000 (FullSize[0x0498] - InheritedSize[0x0498])
	 */
	class ARaidLootableStatic : public ASIGISBaseActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidMeleeAnimNotify
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class URaidMeleeAnimNotify : public UAnimNotifyState
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidMenuItemWidgetStyle
	 * Size -> 0x01A0 (FullSize[0x01D0] - InheritedSize[0x0030])
	 */
	class URaidMenuItemWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FRaidMenuItemStyle                                  MenuItemStyle;                                           // 0x0030(0x01A0) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidMenuSoundsWidgetStyle
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class URaidMenuSoundsWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FRaidMenuSoundsStyle                                SoundsStyle;                                             // 0x0030(0x0038) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidMenuWidgetStyle
	 * Size -> 0x0200 (FullSize[0x0230] - InheritedSize[0x0030])
	 */
	class URaidMenuWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FRaidMenuStyle                                      MenuStyle;                                               // 0x0030(0x0200) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidNodeActor
	 * Size -> 0x0038 (FullSize[0x0258] - InheritedSize[0x0220])
	 */
	class ARaidNodeActor : public AActor
	{
	public:
		TArray<struct FSubNodeActor>                               SubActorSpawns;                                          // 0x0220(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       IsNodeBreachable;                                        // 0x0230(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NZJK[0x3];                                   // 0x0231(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SequenceTypeID;                                          // 0x0234(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                StreamLevelToGoTag;                                      // 0x023C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                StreamDroppodPlayerToGoTag;                              // 0x0244(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUnique;                                                 // 0x024C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GF8C[0xB];                                   // 0x024D(0x000B) MISSED OFFSET (PADDING)

	public:
		class FName GetNodeSequenceTypeID();
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidNodeBot
	 * Size -> 0x0060 (FullSize[0x0C90] - InheritedSize[0x0C30])
	 */
	class ARaidNodeBot : public ARaidBot
	{
	public:
		class USkeletalMeshComponent*                              Body;                                                    // 0x0C30(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DoRep_BodyMesh;                                          // 0x0C38(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EVTV[0x7];                                   // 0x0C39(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMesh*                                       R_BodyMesh;                                              // 0x0C40(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DoRep_FaceMesh;                                          // 0x0C48(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_03W7[0x7];                                   // 0x0C49(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMesh*                                       R_FaceMesh;                                              // 0x0C50(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                DebugPrimWeapon;                                         // 0x0C58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxNodeHealth;                                           // 0x0C60(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TeamNumber;                                              // 0x0C64(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCaptian;                                                // 0x0C68(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_008R[0x3];                                   // 0x0C69(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BossGroupID;                                             // 0x0C6C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AIActionsRowname;                                        // 0x0C70(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RespawnTime;                                             // 0x0C78(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RespawnRow;                                              // 0x0C7C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZBGU[0x4];                                   // 0x0C84(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ARaidWorldNode*                                      MyNodeTouse;                                             // 0x0C88(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void ServerSetFace(class USkeletalMesh* NewHead);
		void ServerSetBody(class USkeletalMesh* NewBody);
		void OnRep_SetFace();
		void OnRep_SetBody();
		void OnGOAPDEBUGplan(const class FString& CurrentPlan);
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidOnlineSessionClient
	 * Size -> 0x0000 (FullSize[0x01E0] - InheritedSize[0x01E0])
	 */
	class URaidOnlineSessionClient : public UOnlineSessionClient
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidOptionsWidgetStyle
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class URaidOptionsWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FRaidOptionsStyle                                   OptionsStyle;                                            // 0x0030(0x0038) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidPersistentUser
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class URaidPersistentUser : public USaveGame
	{
	public:
		int32_t                                                    Kills;                                                   // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    Deaths;                                                  // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    Wins;                                                    // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    Losses;                                                  // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    BulletsFired;                                            // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    RocketsFired;                                            // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    BotsCount;                                               // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsRecordingDemos;                                       // 0x0044(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OJDF[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Gamma;                                                   // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AimSensitivity;                                          // 0x004C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bInvertedYAxis;                                          // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bVibrationOpt;                                           // 0x0051(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SWJB[0x1E];                                  // 0x0052(0x001E) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidPhysicalMaterial
	 * Size -> 0x0060 (FullSize[0x00E0] - InheritedSize[0x0080])
	 */
	class URaidPhysicalMaterial : public UPhysicalMaterial
	{
	public:
		class UParticleSystem*                                     ImpactPSC;                                               // 0x0080(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAxis                                                      ImpactPSCAxis;                                           // 0x0088(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5KYM[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundCue*                                           ImpactSound;                                             // 0x0090(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  ImpactDecal;                                             // 0x0098(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         DecalSizeRange;                                          // 0x00A0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ImpactActorClass;                                        // 0x00B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           FootStepSound;                                           // 0x00B8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           FallSound;                                               // 0x00C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FootStepNoiseMod;                                        // 0x00C8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YEBV[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundCue*                                           BulletDropSound;                                         // 0x00D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           BulletDropSound_Shotgun;                                 // 0x00D8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidPickup
	 * Size -> 0x0040 (FullSize[0x0260] - InheritedSize[0x0220])
	 */
	class ARaidPickup : public AActor
	{
	public:
		class UParticleSystemComponent*                            PickupPSC;                                               // 0x0220(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystem*                                     ActiveFX;                                                // 0x0228(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystem*                                     RespawningFX;                                            // 0x0230(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundCue*                                           PickupSound;                                             // 0x0238(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundCue*                                           RespawnSound;                                            // 0x0240(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RespawnTime;                                             // 0x0248(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bIsActive : 1;                                           // 0x024C(0x0001) BIT_FIELD Net, Transient, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QTV1[0x3];                                   // 0x024D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ARaidCharacter*                                      PickedUpBy;                                              // 0x0250(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WWVO[0x8];                                   // 0x0258(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnRespawnEvent();
		void OnRep_IsActive();
		void OnPickedUpEvent();
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidPickup_Ammo
	 * Size -> 0x0010 (FullSize[0x0270] - InheritedSize[0x0260])
	 */
	class ARaidPickup_Ammo : public ARaidPickup
	{
	public:
		int32_t                                                    AmmoClips;                                               // 0x0260(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_B4VX[0x4];                                   // 0x0264(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              WeaponType;                                              // 0x0268(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidPickup_Health
	 * Size -> 0x0008 (FullSize[0x0268] - InheritedSize[0x0260])
	 */
	class ARaidPickup_Health : public ARaidPickup
	{
	public:
		int32_t                                                    Health;                                                  // 0x0260(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9EGT[0x4];                                   // 0x0264(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidPlanetDeploy
	 * Size -> 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
	 */
	class ARaidPlanetDeploy : public AActor
	{
	public:
		class UBoxComponent*                                       InSideComp;                                              // 0x0220(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidPlanetEvac
	 * Size -> 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
	 */
	class ARaidPlanetEvac : public AActor
	{
	public:
		class UBoxComponent*                                       InSideComp;                                              // 0x0220(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidPlayerCameraManager
	 * Size -> 0x0090 (FullSize[0x2840] - InheritedSize[0x27B0])
	 */
	class ARaidPlayerCameraManager : public APlayerCameraManager
	{
	public:
		unsigned char                                              UnknownData_2K5F[0x90];                                  // 0x27B0(0x0090) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidPlayerCharacter
	 * Size -> 0x0070 (FullSize[0x0BB0] - InheritedSize[0x0B40])
	 */
	class ARaidPlayerCharacter : public ARaidCharacter
	{
	public:
		class USkeletalMeshComponent*                              Body;                                                    // 0x0B40(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USphereComponent*                                    WizVolume;                                               // 0x0B48(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DoRep_BodyMesh;                                          // 0x0B50(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G6ZL[0x7];                                   // 0x0B51(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMesh*                                       R_BodyMesh;                                              // 0x0B58(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              FallDamage;                                              // 0x0B60(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      totalTallyHealthBurn;                                    // 0x0B68(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      totalTallyStaminaBurn;                                   // 0x0B6C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TotalTallyHealthToBurn;                                  // 0x0B70(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    lastTallyhealthDivision;                                 // 0x0B74(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalTallyStaminaToBurn;                                 // 0x0B78(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      lastTallystaminaDivision;                                // 0x0B7C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HealthBurn;                                              // 0x0B80(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaBurn;                                             // 0x0B84(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PostJumpStopTime;                                        // 0x0B88(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7S98[0xC];                                   // 0x0B8C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              DoRep_FaceMesh;                                          // 0x0B98(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FB7S[0x7];                                   // 0x0B99(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMesh*                                       R_FaceMesh;                                              // 0x0BA0(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EVTJ[0x8];                                   // 0x0BA8(0x0008) MISSED OFFSET (PADDING)

	public:
		void WizzVolumeOverlapped(class ARaidProjectile* BulltActor);
		void ServerSetFace(class USkeletalMesh* NewHead);
		void ServerSetBody(class USkeletalMesh* NewBody);
		void Server_TakeStaminaBurn(float BurnAmoun);
		void OnRep_SetFace();
		void OnRep_SetBody();
		float GetStaminaBurn();
		float GetHealthBurn();
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidPlayerController_Menu
	 * Size -> 0x0000 (FullSize[0x0570] - InheritedSize[0x0570])
	 */
	class ARaidPlayerController_Menu : public APlayerController
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidPlayerInput
	 * Size -> 0x0010 (FullSize[0x03B8] - InheritedSize[0x03A8])
	 */
	class URaidPlayerInput : public UPlayerInput
	{
	public:
		float                                                      AccelerationPower;                                       // 0x03A8(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Acceleration;                                            // 0x03AC(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccelerationOffset;                                      // 0x03B0(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccelerationMax;                                         // 0x03B4(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidPlayerState
	 * Size -> 0x0060 (FullSize[0x0460] - InheritedSize[0x0400])
	 */
	class ARaidPlayerState : public ASIGISPlayerState
	{
	public:
		unsigned char                                              UnknownData_SW0N[0x8];                                   // 0x0400(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TeamNumber;                                              // 0x0408(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumKills;                                                // 0x040C(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumDeaths;                                               // 0x0410(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumBulletsFired;                                         // 0x0414(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumRocketsFired;                                         // 0x0418(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bQuitter : 1;                                            // 0x041C(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9ZWX[0x3];                                   // 0x041D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URaidAbilitySystemComponent*                         AbilitySystemComponent;                                  // 0x0420(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    XPGained;                                                // 0x0428(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LootedAmount;                                            // 0x042C(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PlayerStartLocation;                                     // 0x0430(0x000C) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            PlayerStartRotation;                                     // 0x043C(0x000C) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FString                                              DefaultPawnClass;                                        // 0x0448(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasSpawned;                                             // 0x0458(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_92WF[0x7];                                   // 0x0459(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetCharacterName(const class FString& CharacterName);
		void OnRep_TeamColor();
		void InformAboutKill(class ARaidPlayerState* KillerPlayerState, class UDamageType* KillerDamageType, class ARaidPlayerState* KilledPlayerState);
		void BroadcastDeath(class ARaidPlayerState* KillerPlayerState, class UDamageType* KillerDamageType, class ARaidPlayerState* KilledPlayerState);
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidPlayerStorageControl
	 * Size -> 0x0000 (FullSize[0x02A0] - InheritedSize[0x02A0])
	 */
	class ARaidPlayerStorageControl : public ARaidUseable
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidPoolImpactEffect
	 * Size -> 0x0068 (FullSize[0x0288] - InheritedSize[0x0220])
	 */
	class ARaidPoolImpactEffect : public AActor
	{
	public:
		unsigned char                                              bEverAllowTick : 1;                                      // 0x0220(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEverAllowCollisions : 1;                                // 0x0220(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bInUse : 1;                                              // 0x0220(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V7OO[0x3];                                   // 0x0221(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxLifespan;                                             // 0x0224(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     EffectForHit;                                            // 0x0228(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           SoundHitToUse;                                           // 0x0230(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDecalDetails                                       DecalUSed;                                               // 0x0238(0x0010) NoDestructor, NativeAccessSpecifierPublic
		class UDataTable*                                          EffectsTable;                                            // 0x0248(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundAttenuation*                                   SoundAttenuationToUse;                                   // 0x0250(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundConcurrency*                                   ConcurrencySettings;                                     // 0x0258(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReturnToPoolTime;                                        // 0x0260(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3NT7[0x4];                                   // 0x0264(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     RootScenceComp;                                          // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystemComponent*                            VfxComp;                                                 // 0x0270(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDecalComponent*                                     DecalComp;                                               // 0x0278(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_71GO[0x8];                                   // 0x0280(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnPoolDeactive();
		void OnPoolActive();
		bool IsNotInUse();
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidProjectile
	 * Size -> 0x0248 (FullSize[0x0468] - InheritedSize[0x0220])
	 */
	class ARaidProjectile : public AActor
	{
	public:
		class UDataTable*                                          MaterialPropertiesTable;                                 // 0x0220(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnedParticlePerhit;                                  // 0x0228(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsBloodHit;                                             // 0x0229(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PooledProjectile : 1;                                    // 0x022A(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEverAllowTick : 1;                                      // 0x022A(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEverAllowCollisions : 1;                                // 0x022A(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bInUse : 1;                                              // 0x022A(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y3Z7[0x1];                                   // 0x022B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxLifespan;                                             // 0x022C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxNumVfxHits;                                           // 0x0230(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumOfVfxSpawns;                                          // 0x0234(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DamageType;                                              // 0x0238(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    HitDamage;                                               // 0x0240(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_G9EY[0x4];                                   // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ProjectileHitRow;                                        // 0x0248(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class URealisticProjectileComponent*                       RealMovementComp;                                        // 0x0258(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USphereComponent*                                    CollisionComp;                                           // 0x0260(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystemComponent*                            ParticleComp;                                            // 0x0268(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              ImpactTemplate;                                          // 0x0270(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              PoolImpactTemplate;                                      // 0x0278(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bDoesExplode;                                            // 0x0280(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_E93Z[0x3];                                   // 0x0281(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NoiseMakeAmount;                                         // 0x0284(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0WQJ[0x8];                                   // 0x0288(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ExplosionTemplate;                                       // 0x0290(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TWCI[0x1A8];                                 // 0x0298(0x01A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bExploded;                                               // 0x0440(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bBulletHit;                                              // 0x0441(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6KJC[0x16];                                  // 0x0442(0x0016) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ARaidPlayerController*                               MyPoolOwner;                                             // 0x0458(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ARaidWeapon*                                         MyWeaponOwner;                                           // 0x0460(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SelfExplode();
		void PysDamageDel(class ADestructibleActor* ActorOnHit, const struct FVector& HitlOC, const struct FVector& HitNorm, float ImpulseAmount);
		void OnRep_Exploded();
		void OnRep_BulletHit();
		void OnRealImpact(const struct FHitResult& HitResult, int32_t TrajectoryNum, float TimeSinceSpawn);
		void OnRealExit(const struct FHitResult& ExitHit, const struct FVector& ExitVelocity);
		void OnRealAnyHit(const struct FHitResult& HitDetails, const struct FVector& ImpactVelocity);
		void OnProjStop(const struct FHitResult& ImpactResult);
		void OnPoolDeactive();
		void OnPoolActive();
		void OnImpact(const struct FHitResult& HitResult);
		void OnBulletHit(const struct FHitResult& Impact);
		void MultiCast_ImpactEffect(const struct FHitResult& Impact);
		bool IsNotInUse();
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidReplicateDestructionComponent
	 * Size -> 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
	 */
	class ARaidReplicateDestructionComponent : public AStaticMeshActor
	{
	public:
		class UClass*                                              ApexMeshToSpawn;                                         // 0x0230(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageToImpluseMultiplier;                               // 0x0238(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       hasbeenHitAndHide;                                       // 0x023C(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W0XH[0x3];                                   // 0x023D(0x0003) MISSED OFFSET (PADDING)

	public:
		void On_RepHide();
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidReplicationGraph
	 * Size -> 0x0248 (FullSize[0x06E0] - InheritedSize[0x0498])
	 */
	class URaidReplicationGraph : public UReplicationGraph
	{
	public:
		unsigned char                                              UnknownData_6H5O[0x8];                                   // 0x0498(0x0008) Fix Super Size
		TArray<class UClass*>                                      SpatializedClasses;                                      // 0x04A0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      NonSpatializedChildClasses;                              // 0x04B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      AlwaysRelevantClasses;                                   // 0x04C0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UReplicationGraphNode_GridSpatialization2D*          GridNode;                                                // 0x04D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UReplicationGraphNode_ActorList*                     AlwaysRelevantNode;                                      // 0x04D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRepBoundsUnique>                            AllReplicationBounds;                                    // 0x04E0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_11PK[0x50];                                  // 0x04F0(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UNetConnection*, class URaidReplicationGraphNode_SpaceActors*> SpaceActorsForConnectionNodes;                           // 0x0540(0x0050) NativeAccessSpecifierPublic
		TMap<class UNetConnection*, class URaidReplicationGraphNode_RaidRegions*> RaidRegionsForConnectionNodes;                           // 0x0590(0x0050) NativeAccessSpecifierPublic
		TArray<class URaidReplicationGraphNode_SpaceActors*>       ArraySpaceActorsForNode;                                 // 0x05E0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class URaidReplicationGraphNode_RaidRegions*>       ArrayRaidActorsForNode;                                  // 0x05F0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class URaidReplicationGraphNode_SpaceActors*               SpaceActorsForNode;                                      // 0x0600(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class URaidReplicationGraphNode_RaidRegions*               RaidActorsForNode;                                       // 0x0608(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBoxComponent*                                       SpaceBounds;                                             // 0x0610(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRepBounds                                          SpaceBoundsVector;                                       // 0x0618(0x0018) NoDestructor, NativeAccessSpecifierPublic
		TArray<class UBoxComponent*>                               RegionArrays;                                            // 0x0630(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<struct FRepBounds>                                  RegionBoundsVector;                                      // 0x0640(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2GIQ[0x90];                                  // 0x0650(0x0090) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidReplicationGraphNode_SpaceActors
	 * Size -> 0x0260 (FullSize[0x02B0] - InheritedSize[0x0050])
	 */
	class URaidReplicationGraphNode_SpaceActors : public UReplicationGraphNode
	{
	public:
		unsigned char                                              UnknownData_1L9X[0x240];                                 // 0x0050(0x0240) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              LastPawn;                                                // 0x0290(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FAlwaysRelevantActorInfo>                    PastRelevantActors;                                      // 0x0298(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MRUB[0x8];                                   // 0x02A8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidReplicationGraphNode_RaidRegions
	 * Size -> 0x02B0 (FullSize[0x0300] - InheritedSize[0x0050])
	 */
	class URaidReplicationGraphNode_RaidRegions : public UReplicationGraphNode
	{
	public:
		unsigned char                                              UnknownData_5OG8[0x290];                                 // 0x0050(0x0290) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              LastPawn;                                                // 0x02E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FAlwaysRelevantActorInfo>                    PastRelevantActors;                                      // 0x02E8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HSIE[0x8];                                   // 0x02F8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidReplicationGraphNode_AlwaysRelevant_ForConnection
	 * Size -> 0x0248 (FullSize[0x0298] - InheritedSize[0x0050])
	 */
	class URaidReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode
	{
	public:
		unsigned char                                              UnknownData_IO8A[0x228];                                 // 0x0050(0x0228) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              LastPawn;                                                // 0x0278(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FAlwaysRelevantActorInfo>                    PastRelevantActors;                                      // 0x0280(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FFAB[0x8];                                   // 0x0290(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidReplicationGraphNode_PlayerStateFrequencyLimiter
	 * Size -> 0x0030 (FullSize[0x0080] - InheritedSize[0x0050])
	 */
	class URaidReplicationGraphNode_PlayerStateFrequencyLimiter : public UReplicationGraphNode
	{
	public:
		unsigned char                                              UnknownData_5NL3[0x30];                                  // 0x0050(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidScoreboardWidgetStyle
	 * Size -> 0x0120 (FullSize[0x0150] - InheritedSize[0x0030])
	 */
	class URaidScoreboardWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FRaidScoreboardStyle                                ScoreboardStyle;                                         // 0x0030(0x0120) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidShipConsoleUseable
	 * Size -> 0x0018 (FullSize[0x02B8] - InheritedSize[0x02A0])
	 */
	class ARaidShipConsoleUseable : public ARaidUseable
	{
	public:
		class UClass*                                              SpaceshipToPairTo;                                       // 0x02A0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ARaidSpaceshipInside*                                MySpaceshipInside;                                       // 0x02A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ARaidShipUseable*                                    SpaceshipUseableSpawned;                                 // 0x02B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidShipModActor
	 * Size -> 0x0000 (FullSize[0x0248] - InheritedSize[0x0248])
	 */
	class ARaidShipModActor : public ASIGISShipModActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidShipProjectile
	 * Size -> 0x01A8 (FullSize[0x03C8] - InheritedSize[0x0220])
	 */
	class ARaidShipProjectile : public AActor
	{
	public:
		class UClass*                                              DamageType;                                              // 0x0220(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    HitDamage;                                               // 0x0228(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_U3H4[0x4];                                   // 0x022C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UProjectileMovementComponent*                        MovementComp;                                            // 0x0230(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystemComponent*                            ParticleComp;                                            // 0x0238(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              ImpactTemplate;                                          // 0x0240(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bDoesExplode;                                            // 0x0248(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P2JD[0x7];                                   // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ExplosionTemplate;                                       // 0x0250(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6RPX[0x160];                                 // 0x0258(0x0160) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bExploded;                                               // 0x03B8(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bBulletHit;                                              // 0x03B9(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6VVO[0x6];                                   // 0x03BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USphereComponent*                                    CollisionComp;                                           // 0x03C0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SelfExplode();
		void OnRep_Exploded();
		void OnRep_BulletHit();
		void OnImpact(const struct FHitResult& HitResult);
		void OnBulletHit(const struct FHitResult& Impact);
		void MultiCast_ImpactEffect(const struct FHitResult& Impact);
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidShipUseable
	 * Size -> 0x0008 (FullSize[0x02A8] - InheritedSize[0x02A0])
	 */
	class ARaidShipUseable : public ARaidUseable
	{
	public:
		class UClass*                                              SpaceshipToPairTo;                                       // 0x02A0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidShipVendor
	 * Size -> 0x0028 (FullSize[0x02C8] - InheritedSize[0x02A0])
	 */
	class ARaidShipVendor : public ARaidUseable
	{
	public:
		struct FShipShop                                           ShopStock;                                               // 0x02A0(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bGeneratedContent;                                       // 0x02C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_H7JM[0x7];                                   // 0x02C1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidSpaceDeploy
	 * Size -> 0x0040 (FullSize[0x02E0] - InheritedSize[0x02A0])
	 */
	class ARaidSpaceDeploy : public ARaidUseable
	{
	public:
		bool                                                       bForFrigateDocking;                                      // 0x02A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3KAB[0x7];                                   // 0x02A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBoxComponent*                                       InSideComp;                                              // 0x02A8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     ExitLocation;                                            // 0x02B0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TagOnSpawners;                                           // 0x02B8(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ARaidFrigateStationDock*                             DockToPairTo;                                            // 0x02C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class ARaidFrigateStationDock*>                     DocksBoundToEntrance;                                    // 0x02D0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		void ShipDocking(class ARaidSpaceship* DockingShip);
		void FrigateExiting(class ARaidFrigate* DockingShip);
		void FrigateDocking(class ARaidFrigate* DockingShip);
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidSpaceship
	 * Size -> 0x00B0 (FullSize[0x0BF0] - InheritedSize[0x0B40])
	 */
	class ARaidSpaceship : public ARaidCharacter
	{
	public:
		class FString                                              ShipID;                                                  // 0x0B40(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystemComponent*                            ThrustLeftParticleComp;                                  // 0x0B50(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystemComponent*                            ThrustRightParticleComp;                                 // 0x0B58(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBehaviorTree*                                       BotBehavior;                                             // 0x0B60(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USphereComponent*                                    ShipPillageCollision;                                    // 0x0B68(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USpringArmComponent*                                 ShipCameraBoomComp;                                      // 0x0B70(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCineCameraComponent*                                ShipCamera;                                              // 0x0B78(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bcanTakDamage;                                           // 0x0B80(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VUQS[0x7];                                   // 0x0B81(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              RamDamageType;                                           // 0x0B88(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              ShipBreachingTo;                                         // 0x0B90(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ShipAttachingToSocket;                                   // 0x0B98(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BreachingAimPoint;                                       // 0x0BA0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BreachingDistance;                                       // 0x0BA8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BreachingAllowance;                                      // 0x0BAC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FR53[0x10];                                  // 0x0BB0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BoostLength;                                             // 0x0BC0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CooldownBoostLength;                                     // 0x0BC4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      delayforLocalSPawnAbility;                               // 0x0BC8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasBoosted;                                             // 0x0BCC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBreaching;                                              // 0x0BCD(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsBoosting;                                              // 0x0BCE(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PDA7[0x1];                                   // 0x0BCF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         TurnCurve;                                               // 0x0BD0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         ThrustCurve;                                             // 0x0BD8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RamDamage;                                               // 0x0BE0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GearChangeDelayAmount;                                   // 0x0BE4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TurnModifier;                                            // 0x0BE8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J929[0x4];                                   // 0x0BEC(0x0004) MISSED OFFSET (PADDING)

	public:
		void ServerSetFrigateBreaching(class AActor* ShipBreach, const class FName& SocketTo);
		void ServerBoost();
		void OnShipHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void OnLootBodyOverlap(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t hitindex, bool bSweep, const struct FHitResult& Hit);
		void OnLootBodyEndOverlap(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t hitindex);
		void OnFaceRotation(const struct FRotator& NewRotation, float DeltaTime);
		void NetMultiBoost();
		class FName GetSocketToAttachTo();
		int32_t GetCurrentGear();
		float GetCurentBoostTimerLeft();
		float GetCurentBoostCooldownTimerLeft();
		class AActor* GetBreacingToAttachingTo();
		void ChangedGear(int32_t NewGear);
		bool BreachCheck();
		void BoostEffectEvent();
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidSpaceshipInside
	 * Size -> 0x0300 (FullSize[0x0520] - InheritedSize[0x0220])
	 */
	class ARaidSpaceshipInside : public AActor
	{
	public:
		class AActor*                                              MySHipInt;                                               // 0x0220(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAIShipActorToSpawn                                 CurrentAIDetails;                                        // 0x0228(0x0040) NoDestructor, NativeAccessSpecifierPublic
		bool                                                       SpawnShip;                                               // 0x0268(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4MZ5[0x7];                                   // 0x0269(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     RootScence;                                              // 0x0270(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     ShipDockOnePlayerStart;                                  // 0x0278(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     ShipDockTwoPlayerStart;                                  // 0x0280(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     ShipDockThreePlayerStart;                                // 0x0288(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     ShipDockFourPlayerStart;                                 // 0x0290(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     ShipDockFivePlayerStart;                                 // 0x0298(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     ShipDockSixPlayerStart;                                  // 0x02A0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     ShipDockSevenPlayerStart;                                // 0x02A8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     ShipDockEightPlayerStart;                                // 0x02B0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class URaidUseableFrigateHelmComponent*                    HelmControls;                                            // 0x02B8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class URaidFrigateDockingHangerComponent*                  DockingArea;                                             // 0x02C0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class URaidFrigateStashComponent*                          FrigateStorage;                                          // 0x02C8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7QLK[0x50];                                  // 0x02D0(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ARaidWorldProcManager*                               MasterManger;                                            // 0x0320(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ARaidNodeBot*                                        CaptBot;                                                 // 0x0328(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBoxComponent*                                       InSideComp;                                              // 0x0330(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULevelStreamingDynamic*                              StreamedLevel;                                           // 0x0338(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        AIToUse;                                                 // 0x0340(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4ZEV[0x4];                                   // 0x0350(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LocToSpawnFrigateTo;                                     // 0x0354(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              SpaceshipClassToPairTo;                                  // 0x0360(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0VYP[0x8];                                   // 0x0368(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ARaidFrigate*                                        SpaceshipToPairTo;                                       // 0x0370(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      ShipsInTheHanger;                                        // 0x0378(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              ShipCrew;                                                // 0x0388(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ShipCardID;                                              // 0x0398(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GMNP[0x7];                                   // 0x0399(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              KeyCardUUID;                                             // 0x03A0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTimerHandle                                        StreamLevelDelyHandle;                                   // 0x03B0(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ASIGISInventoryItem*                                 ShipInfoItem;                                            // 0x03B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ShipName;                                                // 0x03C0(0x0010) Net, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ARaidSpaceDeploy*                                    CurrentDockingStation;                                   // 0x03D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class URaidDockingComponent*                               CurrentDockingVolume;                                    // 0x03D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStartedDocking;                                         // 0x03E0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TurretDestroyed;                                         // 0x03E1(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EngineDestroyed;                                         // 0x03E2(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LifeSupportDestroyed;                                    // 0x03E3(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HelmGunDestroyed;                                        // 0x03E4(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6Q7D[0x3];                                   // 0x03E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TotalShipHullHealth;                                     // 0x03E8(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PI0V[0x4];                                   // 0x03EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              HangerDockedID;                                          // 0x03F0(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAnAIShip;                                              // 0x0400(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A40W[0x7];                                   // 0x0401(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LevelPath;                                               // 0x0408(0x0010) Edit, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LevelActive;                                             // 0x0418(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5XBG[0x7];                                   // 0x0419(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnLevelLoaded;                                           // 0x0420(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLevelUnloaded;                                         // 0x0430(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLevelShown;                                            // 0x0440(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLevelHidden;                                           // 0x0450(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class ARaidFrigateStationDock*                             DebugDock;                                               // 0x0460(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsOpen;                                                 // 0x0468(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableColiision;                                        // 0x0469(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FEME[0xE];                                   // 0x046A(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ARaidFrigateStationDock*                             DirectDock;                                              // 0x0478(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHangerInUse;                                            // 0x0480(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AH8V[0xF];                                   // 0x0481(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PrevLevelToUnstream;                                     // 0x0490(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Transferrring;                                           // 0x04A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F76J[0x3];                                   // 0x04A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLevelStreamInstanceInfo                            TargetLevelStreamInfo;                                   // 0x04A4(0x0030) Net, NoDestructor, NativeAccessSpecifierPrivate
		struct FLevelStreamInstanceInfo                            CurrentLevelStreamInfo;                                  // 0x04D4(0x0030) NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LE8K[0x1C];                                  // 0x0504(0x001C) MISSED OFFSET (PADDING)

	public:
		void UnDocked();
		void StartDoorEvent(bool OpenDoor);
		void ShipHullHealthChangeEvent(float OldAmount, float NewAmount);
		void SealLock();
		void SealAirLock();
		void ReadyToDock();
		void PlayMontageOnComponentNotLocal(class UAnimMontage* AnimMontage, class USkeletalMeshComponent* CompToPlayOn);
		void PlayMontageOnComponent(class UAnimMontage* AnimMontage, class USkeletalMeshComponent* CompToPlayOn);
		void PlayCompAnimNotify(class USkeletalMeshComponent* CompToPlayOn, const class FName& NotifyName);
		void OnTurretDestroyed(bool JustFixed);
		void OnRep_TurretDestroyed(bool OldBool);
		void OnRep_ShipHullHealthChange(float OldAmount);
		void OnRep_LifeSupportDestroyed(bool OldBool);
		void OnRep_IsOpen();
		void OnRep_HelmGunDestroyed(bool OldBool);
		void OnRep_HangerInUse();
		void OnRep_HangerDocked();
		void OnRep_EngineDestroyed(bool OldBool);
		void OnRep_EnableColiision();
		void OnRep_CurrentShip(bool OldShip);
		void OnPlayCompAnimNotify(class USkeletalMeshComponent* CompToPlayOn, const class FName& NotifyName);
		void OnLifeSupportDestroyed(bool JustFixed);
		void OnHelmGunDestroyed(bool JustFixed);
		void OnEngineDestroyed(bool JustFixed);
		void NotReadyToDock();
		void LevelShown();
		void HangerUseStateChange(bool hangerchange);
		bool GetTurretDestroyed();
		class FString GetShipName();
		bool GetLifeSupportDestroyed();
		float GetHullHealth();
		bool GetHelmGunDestroyed();
		class FString GetHangerID();
		bool GetEngineDestroyed();
		void EnableCollisionOnDoor(bool EnableCollision);
		void DoorOpenEvent(bool BopenDoor);
		void Docked();
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidSpaceToDropPod
	 * Size -> 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
	 */
	class ARaidSpaceToDropPod : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidSpectatorPawn
	 * Size -> 0x0000 (FullSize[0x02A8] - InheritedSize[0x02A8])
	 */
	class ARaidSpectatorPawn : public ASpectatorPawn
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidSubNodeActor
	 * Size -> 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
	 */
	class ARaidSubNodeActor : public AActor
	{
	public:
		void CheckMissionActor(class AActor* KillingActor);
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidSubNodeActor_Turret
	 * Size -> 0x00A8 (FullSize[0x02C8] - InheritedSize[0x0220])
	 */
	class ARaidSubNodeActor_Turret : public ARaidSubNodeActor
	{
	public:
		class UStaticMeshComponent*                                TurretHullMesh;                                          // 0x0220(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              TurretBarrelMesh;                                        // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FShipProjectileWeaponData                           ProjectileConfig;                                        // 0x0230(0x0020) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		class AActor*                                              CurrentAimingActor;                                      // 0x0250(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            AILocalRot;                                              // 0x0258(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            ExpectedActorToRotateTo;                                 // 0x0264(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    AmmoLeft;                                                // 0x0270(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Health;                                                  // 0x0274(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsDying : 1;                                            // 0x0278(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VKZ3[0x3];                                   // 0x0279(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MissRange;                                               // 0x027C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8Q0Q[0x10];                                  // 0x0280(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       IsTargeting;                                             // 0x0290(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_32P7[0x7];                                   // 0x0291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        FiringSockets;                                           // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      TurretMaxPitch;                                          // 0x02A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TurretMinPitch;                                          // 0x02AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentfiringSocket;                                     // 0x02B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FireRate;                                                // 0x02B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReloadTime;                                              // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalAmmo;                                               // 0x02BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FireDistance;                                            // 0x02C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bJustFire;                                               // 0x02C4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6CO2[0x3];                                   // 0x02C5(0x0003) MISSED OFFSET (PADDING)

	public:
		void ServerMultiFireProjectile(const struct FVector& Origin, const struct FVector& ShootDir);
		void ServerFireProjectile(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir, int32_t ArrayNum);
		void OnRep_Health(float OldHealth);
		void OnDeathEvent();
		void NetOnDeathEvent();
		void NetMultiFire(int32_t SocketArrayNum);
		void HealthChanged(float PercentNewHealth, float PercentOldHealth);
		struct FRotator GetTheRequiredrotation();
		void FiredTurrentEvent(int32_t SocketArrayNum);
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidTargetType
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URaidTargetType : public UObject
	{
	public:
		void GetTargets(class ARaidCharacter* TargetingCharacter, class AActor* TargetingActor, const struct FGameplayEventData& EventData, TArray<struct FHitResult>* OutHitResults, TArray<class AActor*>* OutActors);
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidTargetType_UseOwner
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URaidTargetType_UseOwner : public URaidTargetType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidTargetType_UseEventData
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URaidTargetType_UseEventData : public URaidTargetType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidTask_AnimMontage_WaitEvent
	 * Size -> 0x00C0 (FullSize[0x0140] - InheritedSize[0x0080])
	 */
	class URaidTask_AnimMontage_WaitEvent : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnCompleted;                                             // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBlendOut;                                              // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInterrupted;                                           // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCancelled;                                             // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             EventReceived;                                           // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UAnimMontage*                                        MontageToPlay;                                           // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTagContainer                               EventTags;                                               // 0x00D8(0x0020) NativeAccessSpecifierPrivate
		float                                                      Rate;                                                    // 0x00F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                StartSection;                                            // 0x00FC(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AnimRootMotionTranslationScale;                          // 0x0104(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bStopWhenAbilityEnds;                                    // 0x0108(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GOL3[0x37];                                  // 0x0109(0x0037) MISSED OFFSET (PADDING)

	public:
		class URaidTask_AnimMontage_WaitEvent* PlayMontageAndWaitForEvent(class UGameplayAbility* OwningAbility, const class FName& TaskInstanceName, class UAnimMontage* MontageToPlay, const struct FGameplayTagContainer& EventTags, float Rate, const class FName& StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale);
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidTeamStart
	 * Size -> 0x0010 (FullSize[0x0260] - InheritedSize[0x0250])
	 */
	class ARaidTeamStart : public APlayerStart
	{
	public:
		unsigned char                                              UnknownData_VUZ6[0x4];                                   // 0x0250(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EAISPAWNTYPE                                               SpawnPointType;                                          // 0x0254(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W5EI[0xB];                                   // 0x0255(0x000B) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidTextRenderActor
	 * Size -> 0x0008 (FullSize[0x0230] - InheritedSize[0x0228])
	 */
	class ARaidTextRenderActor : public ATextRenderActor
	{
	public:
		float                                                      RaidCullDistance;                                        // 0x0228(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OI5T[0x4];                                   // 0x022C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidTextRenderComponent
	 * Size -> 0x0010 (FullSize[0x04A0] - InheritedSize[0x0490])
	 */
	class URaidTextRenderComponent : public UTextRenderComponent
	{
	public:
		float                                                      RaidCullDistance;                                        // 0x0490(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VGDP[0xC];                                   // 0x0494(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidUseableAirLockComponent
	 * Size -> 0x0070 (FullSize[0x05F0] - InheritedSize[0x0580])
	 */
	class URaidUseableAirLockComponent : public URaidUseableComponent
	{
	public:
		class FString                                              CurrentKeyCheck;                                         // 0x0580(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DoorCloseTime;                                           // 0x0590(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InAirLockTime;                                           // 0x0594(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DoorOpenTime;                                            // 0x0598(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                DoorMeshTag;                                             // 0x059C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_315R[0x24];                                  // 0x05A4(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ARaidPlayerController*>                       PCsForLevelUnload;                                       // 0x05C8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       StationAirLock;                                          // 0x05D8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       StationAccessButton;                                     // 0x05D9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B2IB[0x6];                                   // 0x05DA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URaidUseableAirLockComponent*                        SisterComp;                                              // 0x05E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RDJV[0x8];                                   // 0x05E8(0x0008) MISSED OFFSET (PADDING)

	public:
		void StartTransferProcess();
		void HangerDoTransfer();
		bool CanHangerBeUsed();
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidUseableFrigateHelmComponent
	 * Size -> 0x0000 (FullSize[0x0580] - InheritedSize[0x0580])
	 */
	class URaidUseableFrigateHelmComponent : public URaidUseableComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidUseableFrigatePartComponent
	 * Size -> 0x0030 (FullSize[0x05B0] - InheritedSize[0x0580])
	 */
	class URaidUseableFrigatePartComponent : public URaidUseableComponent
	{
	public:
		EFrigatePartType                                           PartType;                                                // 0x0580(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZIBH[0x3];                                   // 0x0581(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                UniquePartName;                                          // 0x0584(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PipeNumber;                                              // 0x058C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxHealth;                                               // 0x0590(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Health;                                                  // 0x0594(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             onHealthChanged;                                         // 0x0598(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6O2F[0x8];                                   // 0x05A8(0x0008) MISSED OFFSET (PADDING)

	public:
		void Onrep_HealthChange();
		float GetPipeNumberDamagePercent();
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidUseableFrigatePodDockComponent
	 * Size -> 0x0000 (FullSize[0x0580] - InheritedSize[0x0580])
	 */
	class URaidUseableFrigatePodDockComponent : public URaidUseableComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidUseableHangerConsoleComponent
	 * Size -> 0x0040 (FullSize[0x05C0] - InheritedSize[0x0580])
	 */
	class URaidUseableHangerConsoleComponent : public URaidUseableComponent
	{
	public:
		class UClass*                                              SpaceshipToPairTo;                                       // 0x0580(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ShipToPairName;                                          // 0x0588(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UseCooldown;                                             // 0x0598(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_71XR[0x4];                                   // 0x059C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ARaidSpaceship*                                      SpaceshipUseableSpawned;                                 // 0x05A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z0L7[0x8];                                   // 0x05A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bInCoolDown;                                             // 0x05B0(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O8RC[0xF];                                   // 0x05B1(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidUseableInsideAirLockConsole
	 * Size -> 0x0000 (FullSize[0x0580] - InheritedSize[0x0580])
	 */
	class URaidUseableInsideAirLockConsole : public URaidUseableComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidUseableTurretConrtrolComponent
	 * Size -> 0x0010 (FullSize[0x0590] - InheritedSize[0x0580])
	 */
	class URaidUseableTurretConrtrolComponent : public URaidUseableComponent
	{
	public:
		int32_t                                                    TurretNumber;                                            // 0x0580(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bACameraTurret;                                          // 0x0584(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AVV4[0xB];                                   // 0x0585(0x000B) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidVaultMarker
	 * Size -> 0x0050 (FullSize[0x0270] - InheritedSize[0x0220])
	 */
	class ARaidVaultMarker : public AActor
	{
	public:
		unsigned char                                              UnknownData_CDH3[0x10];                                  // 0x0220(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNavigationLink>                             PointLinks;                                              // 0x0230(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Length;                                                  // 0x0240(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Thickness;                                               // 0x0244(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NavLinkSpacing;                                          // 0x0248(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ENavLinkDirection                                          Direction;                                               // 0x024C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_04OG[0xB];                                   // 0x024D(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bClimb : 1;                                              // 0x0258(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RHLR[0x7];                                   // 0x0259(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBoxComponent*                                       CollisionComp;                                           // 0x0260(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChildActorComponent*                                NavLinkComp;                                             // 0x0268(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidVendor
	 * Size -> 0x0020 (FullSize[0x02C0] - InheritedSize[0x02A0])
	 */
	class ARaidVendor : public ARaidUseable
	{
	public:
		int32_t                                                    ConSize;                                                 // 0x02A0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ConColoms;                                               // 0x02A4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        ItemsThatCanBeHere;                                      // 0x02A8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		int32_t                                                    maxLoot;                                                 // 0x02B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGeneratedContent;                                       // 0x02BC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KTYQ[0x3];                                   // 0x02BD(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidWeapon
	 * Size -> 0x06A8 (FullSize[0x08C8] - InheritedSize[0x0220])
	 */
	class ARaidWeapon : public AActor
	{
	public:
		unsigned char                                              UnknownData_21NH[0x10];                                  // 0x0220(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bBroke;                                                  // 0x0230(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GF8H[0x3];                                   // 0x0231(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             AimInAtVector;                                           // 0x0234(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShipGun;                                                 // 0x0240(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FYI9[0x3];                                   // 0x0241(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FireDelay;                                               // 0x0244(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6NCY[0x8];                                   // 0x0248(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EWeaponType                                                WeaponType;                                              // 0x0250(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBulletType                                                BulletType;                                              // 0x0251(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseUniqueProjectile;                                     // 0x0252(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IOJG[0x1];                                   // 0x0253(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FiringNoiseLoudness;                                     // 0x0254(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FiringNoiseMaxRange;                                     // 0x0258(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2X01[0x4];                                   // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCanvasIcon                                         PrimaryIcon;                                             // 0x0260(0x0018) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCanvasIcon                                         SecondaryIcon;                                           // 0x0278(0x0018) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCanvasIcon                                         PrimaryClipIcon;                                         // 0x0290(0x0018) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCanvasIcon                                         SecondaryClipIcon;                                       // 0x02A8(0x0018) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		float                                                      AmmoIconsCount;                                          // 0x02C0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PrimaryClipIconOffset;                                   // 0x02C4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SecondaryClipIconOffset;                                 // 0x02C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0ARZ[0x4];                                   // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCanvasIcon                                         Crosshair[0x5];                                          // 0x02D0(0x0078) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCanvasIcon                                         AimingCrosshair[0x5];                                    // 0x0348(0x0078) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       UseLaserDot;                                             // 0x03C0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseCustomCrosshair;                                      // 0x03C1(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseCustomAimingCrosshair;                                // 0x03C2(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHideCrosshairWhileNotAiming;                            // 0x03C3(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimerIntervalAdjustment;                                 // 0x03C4(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowAutomaticWeaponCatchup;                            // 0x03C8(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_94HI[0x7];                                   // 0x03C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      HitActors;                                               // 0x03D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      TimeBetweenShots;                                        // 0x03E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1WW2[0x4];                                   // 0x03E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ARaidCharacter*                                      MyPawn;                                                  // 0x03E8(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FWeaponData                                         WeaponConfig;                                            // 0x03F0(0x0138) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FVector                                             WeaponLocOffset;                                         // 0x0528(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            WeaponRotOffset;                                         // 0x0534(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             WeaponLocOffset_leanRight;                               // 0x0540(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            WeaponRotOffset_leanRight;                               // 0x054C(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             WeaponLocOffset_leanLeft;                                // 0x0558(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            WeaponRotOffset_leanLeft;                                // 0x0564(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       DebugSocketLocations;                                    // 0x0570(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L3ND[0x7];                                   // 0x0571(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     WeaponRoot;                                              // 0x0578(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USkeletalMeshComponent*                              Mesh1P;                                                  // 0x0580(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      fireweaponNoiseAmount;                                   // 0x0588(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ReloadWeaponNoiseAmount;                                 // 0x058C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAudioComponent*                                     FireAC;                                                  // 0x0590(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                MuzzleAttachPoint;                                       // 0x0598(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystem*                                     MuzzleFX;                                                // 0x05A0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystemComponent*                            MuzzlePSC;                                               // 0x05A8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystemComponent*                            MuzzlePSCSecondary;                                      // 0x05B0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              FireCameraShake;                                         // 0x05B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UForceFeedbackEffect*                                FireForceFeedback;                                       // 0x05C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundCue*                                           FireSound;                                               // 0x05C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundCue*                                           FireLoopSound;                                           // 0x05D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundCue*                                           FireFinishSound;                                         // 0x05D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundCue*                                           ReloadSound;                                             // 0x05E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FWeaponAnim                                         ReloadAnim;                                              // 0x05E8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		class USoundCue*                                           EquipSound;                                              // 0x05F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundCue*                                           UnEquipSound;                                            // 0x0600(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FWeaponAnim                                         EquipAnim;                                               // 0x0608(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FWeaponAnim                                         UnEquipAnim;                                             // 0x0618(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FWeaponAnim                                         FireAnim;                                                // 0x0628(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FWeaponAnim                                         AimFireAnim;                                             // 0x0638(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              bLoopedMuzzleFX : 1;                                     // 0x0648(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bLoopedFireSound : 1;                                    // 0x0648(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bLoopedFireAnim : 1;                                     // 0x0648(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ORLK[0x3];                                   // 0x0649(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BulletsToOneDuribilityLoss;                              // 0x064C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    TotalBulletsFired;                                       // 0x0650(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    LastAssignedDuribility;                                  // 0x0654(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HAVR : 5;                                    // 0x0658(0x0001) BIT_FIELD (PADDING)
		unsigned char                                              bPendingReload : 1;                                      // 0x0658(0x0001) BIT_FIELD Net, Transient, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_R95W[0x1B];                                  // 0x0659(0x001B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentAmmo;                                             // 0x0674(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    CurrentAmmoInClip;                                       // 0x0678(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    BurstCounter;                                            // 0x067C(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XGOL[0x20];                                  // 0x0680(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ProjectileClass;                                         // 0x06A0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bInstantWeapon;                                          // 0x06A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ADXI[0x37];                                  // 0x06A9(0x0037) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundCue*                                           OutOfAmmoSound;                                          // 0x06E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFireMode                                                  ChangedMode;                                             // 0x06E8(0x0001) Edit, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PHHZ[0x3];                                   // 0x06E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                OverrideStorageSlot;                                     // 0x06EC(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDebugWeapon;                                            // 0x06F4(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GUF0[0x3];                                   // 0x06F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RunningSpeedModifier;                                    // 0x06F8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CarrySpeedModifier;                                      // 0x06FC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaADSModifier;                                      // 0x0700(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaRechargeRate;                                     // 0x0704(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ObstructionTraceDistance;                                // 0x0708(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YIOU[0x4];                                   // 0x070C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WeaponTransForm;                                         // 0x0710(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          RightHandTransForm;                                      // 0x0740(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          LeftHandTransForm;                                       // 0x0770(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      ToADSVelocity;                                           // 0x07A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AdsFOV;                                                  // 0x07A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UUIDSIGIS;                                               // 0x07A8(0x0010) Net, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEquipmentSlot                                             RepSlotIn;                                               // 0x07B8(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LTY1[0x3];                                   // 0x07B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           currentRecoil;                                           // 0x07BC(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      currentBulletSpread;                                     // 0x07C4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      lastFireTime;                                            // 0x07C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7JNJ[0x94];                                  // 0x07CC(0x0094) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                DefaultMagazineAttachment;                               // 0x0860(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ARaidWeaponAttachment*                               MuzzleSlot;                                              // 0x0868(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ARaidWeaponAttachment*                               SightSlot;                                               // 0x0870(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ARaidWeaponAttachment*                               LowerRailSlot;                                           // 0x0878(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ARaidWeaponAttachment*                               UpperRailSlot;                                           // 0x0880(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ARaidWeaponAttachment*                               MagSlot;                                                 // 0x0888(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ARaidWeaponAttachment*                               StockSlot;                                               // 0x0890(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ARaidWeaponAttachment*                               SpecialSlot;                                             // 0x0898(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class ARaidWeaponAttachment*>                       AttachmentsOn;                                           // 0x08A0(0x0010) Net, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		struct FVector                                             HitImpactNotify;                                         // 0x08B0(0x000C) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TTrace_AllowedViewDotHitDir;                             // 0x08BC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TTrace_ClientSideHitLeeway;                              // 0x08C0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OTLH[0x4];                                   // 0x08C4(0x0004) Fix size for supers

	public:
		void TTrace_ServerNotifyMiss(const struct FVector_NetQuantizeNormal& ShootDir);
		void TTrace_ServerNotifyHit(const struct FHitResult& Impact, const struct FVector_NetQuantizeNormal& ShootDir);
		void StopDamageTrace();
		void StartDamageTrace();
		void SetMeleeStopDamage();
		void SetMeleeCanDamage();
		void ServerToggleFireMode();
		void ServerStopReload();
		void ServerStopFire();
		void ServerStartReload();
		void ServerStartFire();
		void ServerSimulateWeaponFire();
		void ServerMultiSimulateWeaponFire();
		void ServerMultiFireProjectile(const struct FVector_NetQuantize10& Origin, const struct FVector_NetQuantizeNormal& ShootDir);
		void ServerHandleFiring();
		void ServerFireProjectile(const struct FVector_NetQuantize10& Origin, const struct FVector_NetQuantizeNormal& ShootDir);
		void ServerAIMultiFireProjectile(const struct FVector_NetQuantize10& Origin, const struct FVector_NetQuantizeNormal& ShootDir);
		void OnRep_WeaponHasBroken(bool WasOk);
		void OnRep_TTrace_HitLocation();
		void OnRep_Reload();
		void OnRep_MyPawn();
		void OnRep_CurrentUpperRailSlot();
		void OnRep_CurrentStockSlot();
		void OnRep_CurrentSpecialSlot();
		void OnRep_CurrentSightSlot();
		void OnRep_CurrentMuzzleSlot();
		void OnRep_CurrentMagSlot();
		void OnRep_CurrentLowerRailSlot();
		void OnRep_BurstCounter();
		bool IsReloading();
		void HitPlayer(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		EWeaponType GetWeaponType();
		bool GetWeaponHasBroke();
		struct FWeaponData GetWeaponConfig();
		float GetRunningSpeedModifier();
		class ARaidCharacter* GetPawnOwner();
		float GetObstructionSweepDistance();
		float GetCarrySpeedModifier();
		void ClientStartReload();
		void BurstStopedFireEvent(bool HasAmmo);
		void BurstStartFireEvent(bool HasAmmo);
		void BrokenWeaponEvent();
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidWeapon_Instant
	 * Size -> 0x0084 (FullSize[0x094C] - InheritedSize[0x08C8])
	 */
	class ARaidWeapon_Instant : public ARaidWeapon
	{
	public:
		struct FInstantWeaponData                                  InstantConfig;                                           // 0x08C8(0x0028) Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       RepairGun;                                               // 0x08F0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SCP4[0x7];                                   // 0x08F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ImpactTemplate;                                          // 0x08F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystem*                                     TrailFX;                                                 // 0x0900(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                TrailTargetParam;                                        // 0x0908(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MeleeRange;                                              // 0x0910(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DamageDivide;                                            // 0x0914(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FInstantHitInfo                                     HitNotify;                                               // 0x0918(0x0014) Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FInstantHitMeleeInfo                                HitMeleeNotify;                                          // 0x092C(0x0018) Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NERR[0x8];                                   // 0x0944(0x0008) Fix size for supers

	public:
		void ServerNotifyMiss(const struct FVector_NetQuantizeNormal& ShootDir, int32_t RandomSeed, float ReticleSpread);
		void ServerNotifyMeleeHit(const struct FHitResult& Impact, const struct FVector& Origin, const struct FVector& EndLocation);
		void ServerNotifyHit(const struct FHitResult& Impact, const struct FVector_NetQuantizeNormal& ShootDir, int32_t RandomSeed, float ReticleSpread);
		void OnRep_HitNotify();
		void OnRep_HitNotifMeleey();
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidWeapon_Projectile
	 * Size -> 0x0068 (FullSize[0x0930] - InheritedSize[0x08C8])
	 */
	class ARaidWeapon_Projectile : public ARaidWeapon
	{
	public:
		struct FProjectileWeaponData                               ProjectileConfig;                                        // 0x08C8(0x0068) Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		void ServerFireProjectilFe(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir);
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidWeapon_Tool
	 * Size -> 0x0014 (FullSize[0x0960] - InheritedSize[0x094C])
	 */
	class ARaidWeapon_Tool : public ARaidWeapon_Instant
	{
	public:
		float                                                      ShipPartRepairAmount;                                    // 0x094C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAFireExtingisher;                                      // 0x0950(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U2Z6[0xF];                                   // 0x0951(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidWeapon_Turrent
	 * Size -> 0x0020 (FullSize[0x0950] - InheritedSize[0x0930])
	 */
	class ARaidWeapon_Turrent : public ARaidWeapon_Projectile
	{
	public:
		float                                                      MaxDegreesPersecond;                                     // 0x0930(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxElevationDegrees;                                     // 0x0934(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinElevationDegrees;                                     // 0x0938(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ATEP[0x14];                                  // 0x093C(0x0014) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidWeaponAttachment
	 * Size -> 0x0060 (FullSize[0x0280] - InheritedSize[0x0220])
	 */
	class ARaidWeaponAttachment : public AActor
	{
	public:
		class USceneComponent*                                     Root;                                                    // 0x0220(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMeshComponent*                                AttachmentMesh;                                          // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttachmentSlot                                            AttachmentSlot;                                          // 0x0230(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7W6V[0x3];                                   // 0x0231(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VerticalRecoilAdjustment;                                // 0x0234(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HorizontalRecoilAdjustmentMin;                           // 0x0238(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HorizontalRecoilAdjustmentMax;                           // 0x023C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageAdjustment;                                        // 0x0240(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WB21[0x4];                                   // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundCue*                                           AttachmentFireSound;                                     // 0x0248(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FireSocketOverride;                                      // 0x0250(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L9DO[0x28];                                  // 0x0258(0x0028) MISSED OFFSET (PADDING)

	public:
		void OnTurnOn(bool bIsOn);
		void OnApplyOptions(const class FString& Options);
		float ModifySpread(float OriginalSpread);
		float ModifyRecoil(float OriginalRecoil);
		float ModifyRange(float OriginalRange);
		float ModifyDamage(float OriginalDamage);
		float ModifyAimSpeed(float OriginalSpeed);
		class ARaidWeapon* GetWeaponOwner();
		class ARaidCharacter* GetCharacterOwner();
		class FText GetAttachmentName();
		void BP_OnThirdPerson();
		void BP_OnStopAiming();
		void BP_OnStartAiming();
		void BP_OnFirstPerson();
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidWeaponAttachment_Muzzle
	 * Size -> 0x0018 (FullSize[0x0298] - InheritedSize[0x0280])
	 */
	class ARaidWeaponAttachment_Muzzle : public ARaidWeaponAttachment
	{
	public:
		bool                                                       bSilenced;                                               // 0x0280(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_POBK[0x3];                                   // 0x0281(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      spreadModifier;                                          // 0x0284(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      recoilModifier;                                          // 0x0288(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SpreadRegenModifier;                                     // 0x028C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NoiseModifier;                                           // 0x0290(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bSkipLocalSimulateFire : 1;                              // 0x0294(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MLHQ[0x3];                                   // 0x0295(0x0003) MISSED OFFSET (PADDING)

	public:
		void LocalSimulateFire();
		class UParticleSystemComponent* GetMuzzleFlashPSC();
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidWeaponAttachment_Sight
	 * Size -> 0x0038 (FullSize[0x02B8] - InheritedSize[0x0280])
	 */
	class ARaidWeaponAttachment_Sight : public ARaidWeaponAttachment
	{
	public:
		class USceneComponent*                                     SightAimPoint;                                           // 0x0280(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bOverrideAimOffset : 1;                                  // 0x0288(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9M1A[0x3];                                   // 0x0289(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             AimOffset;                                               // 0x028C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AimZoomModifier;                                         // 0x0298(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SightScreenPercent;                                      // 0x029C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bModifyDepthOfField;                                     // 0x02A0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IU2Z[0x3];                                   // 0x02A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AimedNearBlurSizeMod;                                    // 0x02A4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AimedFarBlurSizeMod;                                     // 0x02A8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AimedFocusDistanceMod;                                   // 0x02AC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AimedFStop;                                              // 0x02B0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HGMG[0x4];                                   // 0x02B4(0x0004) MISSED OFFSET (PADDING)

	public:
		struct FVector ModifyAimOffset(const struct FVector& DefaultOffset);
		class USceneCaptureComponent2D* GetSceneCapture();
		float GetRecommendedRenderTargetResolution();
		float GetRecommendedFieldOfView();
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidWeaponAttachment_Special
	 * Size -> 0x0018 (FullSize[0x0298] - InheritedSize[0x0280])
	 */
	class ARaidWeaponAttachment_Special : public ARaidWeaponAttachment
	{
	public:
		class UAnimSequence*                                       FPPLeftHandAnimation;                                    // 0x0280(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      spreadModifier;                                          // 0x0288(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      recoilModifier;                                          // 0x028C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SpreadRegenModifier;                                     // 0x0290(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_08CY[0x4];                                   // 0x0294(0x0004) MISSED OFFSET (PADDING)

	public:
		bool GetLeftHandTransform(struct FTransform* OutTransform);
		class UAnimSequence* GetFPHandAnimation_Right();
		class UAnimSequence* GetFPHandAnimation_Left();
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidWeaponAttachment_Magazine
	 * Size -> 0x0028 (FullSize[0x02A8] - InheritedSize[0x0280])
	 */
	class ARaidWeaponAttachment_Magazine : public ARaidWeaponAttachment
	{
	public:
		int32_t                                                    MagAmmoAmount;                                           // 0x0280(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      spreadModifier;                                          // 0x0284(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      recoilModifier;                                          // 0x0288(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SpreadRegenModifier;                                     // 0x028C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundCue*                                           ReloadSound;                                             // 0x0290(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FWeaponAnim                                         ReloadAnim;                                              // 0x0298(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidWeaponAttachment_Weapon
	 * Size -> 0x0000 (FullSize[0x0298] - InheritedSize[0x0298])
	 */
	class ARaidWeaponAttachment_Weapon : public ARaidWeaponAttachment_Special
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidWeaponAttachmentPoint
	 * Size -> 0x0040 (FullSize[0x0498] - InheritedSize[0x0458])
	 */
	class URaidWeaponAttachmentPoint : public UArrowComponent
	{
	public:
		class FScriptMulticastDelegate                             OnWeaponAttachmentChanged;                               // 0x0458(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		int32_t                                                    Priority;                                                // 0x0468(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EEA4[0x4];                                   // 0x046C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                AttachPointName;                                         // 0x0470(0x0018) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		unsigned char                                              CurrentAttachmentIdx;                                    // 0x0488(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bGadgetOnOff;                                            // 0x0489(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_H8P6[0x6];                                   // 0x048A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ARaidWeaponAttachment*                               CurrentAttachment;                                       // 0x0490(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void OnRepGadgetOnOff();
		void OnRepAttachmentClass();
		class ARaidWeaponAttachment* GetCurrentAttachment();
		class FText GetAttachPointName();
		void GetAttachmentList(TArray<class UClass*>* AttachmentList);
		int32_t GetAttachmentIdx(class UClass* AttachmentClass);
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidWeaponAttachmentPoint_Muzzle
	 * Size -> 0x0018 (FullSize[0x04B0] - InheritedSize[0x0498])
	 */
	class URaidWeaponAttachmentPoint_Muzzle : public URaidWeaponAttachmentPoint
	{
	public:
		TArray<class UClass*>                                      AllowedAttachments;                                      // 0x0498(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2U4J[0x8];                                   // 0x04A8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidWeaponAttachmentPoint_Sight
	 * Size -> 0x0018 (FullSize[0x04B0] - InheritedSize[0x0498])
	 */
	class URaidWeaponAttachmentPoint_Sight : public URaidWeaponAttachmentPoint
	{
	public:
		TArray<class UClass*>                                      AllowedAttachments;                                      // 0x0498(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_II6V[0x8];                                   // 0x04A8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidWeaponAttachmentPoint_Special
	 * Size -> 0x0018 (FullSize[0x04B0] - InheritedSize[0x0498])
	 */
	class URaidWeaponAttachmentPoint_Special : public URaidWeaponAttachmentPoint
	{
	public:
		TArray<class UClass*>                                      AllowedAttachments;                                      // 0x0498(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WTQP[0x8];                                   // 0x04A8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidWeaponCarryContainer
	 * Size -> 0x0008 (FullSize[0x08D0] - InheritedSize[0x08C8])
	 */
	class ARaidWeaponCarryContainer : public ARaidWeapon
	{
	public:
		unsigned char                                              UnknownData_EB3M[0x8];                                   // 0x08C8(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidWorldNode
	 * Size -> 0x0060 (FullSize[0x0280] - InheritedSize[0x0220])
	 */
	class ARaidWorldNode : public ATargetPoint
	{
	public:
		class UDataTable*                                          SpawnTable;                                              // 0x0220(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDebugNode;                                              // 0x0228(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BBO8[0x3];                                   // 0x0229(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                LevelStreamTag;                                          // 0x022C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfAIToSpawn;                                       // 0x0234(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CurrentSpawnRowUsing;                                    // 0x0238(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CurrentDroppodToGo;                                      // 0x0240(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUnique;                                                 // 0x0248(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UISR[0x7];                                   // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        AIToUse;                                                 // 0x0250(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class ARaidWorldProcManager*                               WorldPorocManager;                                       // 0x0260(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QKH4[0x18];                                  // 0x0268(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidWorldProcManager
	 * Size -> 0x0080 (FullSize[0x02A0] - InheritedSize[0x0220])
	 */
	class ARaidWorldProcManager : public AActor
	{
	public:
		class FName                                                ReplicatedSeed;                                          // 0x0220(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          NodeSpawnTable;                                          // 0x0228(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          AILoadoutTable;                                          // 0x0230(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          AIGroupTable;                                            // 0x0238(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        BackgroundForcedArray;                                   // 0x0240(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FVector                                             BGStartLocation;                                         // 0x0250(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            BGStartRotation;                                         // 0x025C(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FAIShipActorToSpawn>                         AIShipsToSpawn;                                          // 0x0268(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		int32_t                                                    MaxNumOfUniques;                                         // 0x0278(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ForceRefresh;                                            // 0x027C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N8MC[0x3];                                   // 0x027D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    totalOfReplicationVolumes;                               // 0x0280(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NIXH[0x4];                                   // 0x0284(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRepBoundsUnique>                            AllReplicationBounds;                                    // 0x0288(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                BGRowToUse;                                              // 0x0298(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void TimedSpawning();
		void OnRep_Seed();
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidWorldReplicationBounds
	 * Size -> 0x0020 (FullSize[0x0240] - InheritedSize[0x0220])
	 */
	class ARaidWorldReplicationBounds : public AActor
	{
	public:
		class USceneComponent*                                     RootScence;                                              // 0x0220(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBoxComponent*                                       InSideComp;                                              // 0x0228(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bISSpaceArea;                                            // 0x0230(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YRRR[0x3];                                   // 0x0231(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                VolumeUniqueID;                                          // 0x0234(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TWUY[0x4];                                   // 0x023C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidWPNAList_Magazine
	 * Size -> 0x0010 (FullSize[0x0290] - InheritedSize[0x0280])
	 */
	class ARaidWPNAList_Magazine : public ARaidWeaponAttachment
	{
	public:
		TArray<class UClass*>                                      AttachmentList;                                          // 0x0280(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidWPNAList_Muzzle
	 * Size -> 0x0010 (FullSize[0x02A8] - InheritedSize[0x0298])
	 */
	class ARaidWPNAList_Muzzle : public ARaidWeaponAttachment_Muzzle
	{
	public:
		TArray<class UClass*>                                      AttachmentList;                                          // 0x0298(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidWPNAList_Sight
	 * Size -> 0x0010 (FullSize[0x02C8] - InheritedSize[0x02B8])
	 */
	class ARaidWPNAList_Sight : public ARaidWeaponAttachment_Sight
	{
	public:
		TArray<class UClass*>                                      AttachmentList;                                          // 0x02B8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RaidWPNAList_Special
	 * Size -> 0x0010 (FullSize[0x02A8] - InheritedSize[0x0298])
	 */
	class ARaidWPNAList_Special : public ARaidWeaponAttachment_Special
	{
	public:
		TArray<class UClass*>                                      AttachmentList;                                          // 0x0298(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RealisticProjectileComponent
	 * Size -> 0x0208 (FullSize[0x02F8] - InheritedSize[0x00F0])
	 */
	class URealisticProjectileComponent : public UMovementComponent
	{
	public:
		struct FRealisticProjectileBehavior                        Settings;                                                // 0x00F0(0x0044) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            AngularVelocityMin;                                      // 0x0134(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            AngularVelocityMax;                                      // 0x0140(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              bDrawDebugLine : 1;                                      // 0x014C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDebugLineColorFromVelocity : 1;                         // 0x014C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5ZVR[0x3];                                   // 0x014D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DebugLineThickness;                                      // 0x0150(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebugLineDuration;                                       // 0x0154(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              DebugLineAuxiliaryColor;                                 // 0x0158(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawDebugHits : 1;                                      // 0x015C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RUAT[0x3];                                   // 0x015D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DebugHitSphereSize;                                      // 0x0160(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YVGQ[0x4];                                   // 0x0164(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          MaterialPropertiesTable;                                 // 0x0168(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          ProjectilePropertiesTable;                               // 0x0170(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ImpulseScale;                                            // 0x0178(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_31GT[0x4];                                   // 0x017C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnProjectileAnyHit;                                      // 0x0180(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnProjectileBounce;                                      // 0x0190(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnProjectilePenetrate;                                   // 0x01A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPenetrationExit;                                       // 0x01B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnProjectileStop;                                        // 0x01C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnProjectileEmbed;                                       // 0x01D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnComponentBeginOverlap;                                 // 0x01E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FRandomStream                                       RandStream;                                              // 0x01F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FTrajectoryInitialConditions>                InitialConditionHistory;                                 // 0x01F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FRotator                                            AngularVelocity;                                         // 0x0208(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4JC0[0x4];                                   // 0x0214(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FHitResult>                                  ObjectsPenetrated;                                       // 0x0218(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bInCatchUpPhase;                                         // 0x0228(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6TFI[0xCF];                                  // 0x0229(0x00CF) MISSED OFFSET (PADDING)

	public:
		struct FVector VelocityAtTime_LinearDrag(const struct FTrajectoryInitialConditions& TIC, float K, const struct FVector& Vinf, float TimeSinceLaunch);
		float TimeOfFlight_Sliding(const struct FTrajectoryInitialConditions& TIC, const struct FVector& EndLocation, const struct FVector& CurrentVelocity);
		float TimeOfFlight_LinearDrag(const struct FTrajectoryInitialConditions& TIC, float K, const struct FVector& Vinf, const struct FVector& EndLocation, const struct FVector& CurrentVelocity);
		void StopSimulating(const struct FHitResult& HitResult, bool PredictOnly);
		bool ShouldBounce(const struct FHitResult& Hit, const struct FVector& ImpactVelocity);
		void SetVelocityInLocalSpace(const struct FVector& NewVelocity);
		void SetInitialConditions(const struct FTrajectoryInitialConditions& Trajectory);
		bool ServerCheckClientHit(class UObject* WorldContextObject, struct FVector* ImpactVelocity, TArray<class AActor*> ActiveProjectiles, const struct FHitResult& Hit, float TimeSinceShot, int32_t BulletRandSeed, float Epsilon, float StepTime, bool DrawHit, bool bOverrideGravity, const struct FVector& NewGravity);
		void ScaleVisualEffect(class UStaticMeshComponent* Mesh, const struct FVector& WorldLocation, const struct FVector& Direction, const struct FVector& CameraLocation, float Thickness);
		void ScaleTracerMesh(class UStaticMeshComponent* Mesh, class URealisticProjectileComponent* ProjectileComponent, const struct FVector& WorldLocation, const struct FVector& CameraLocation, float Thickness, float LengthFactor);
		struct FVector PositionAtTime_LinearDrag(const struct FTrajectoryInitialConditions& TIC, float K, const struct FVector& Vinf, float TimeSinceLaunch);
		void OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
		void OnProjectilePenetrateDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
		void OnProjectileEmbedDelegate__DelegateSignature(const struct FHitResult& HitResult, float ImpactVelocity);
		void OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
		void OnProjectileAnyHitDelegate__DelegateSignature(const struct FHitResult& HitDetails, const struct FVector& ImpactVelocity);
		void OnPenetrationExitDelegate__DelegateSignature(const struct FHitResult& ExitHit, const struct FVector& ExitVelocity);
		void OnComponentBeginOverlapDelegate__DelegateSignature(const struct FHitResult& HitResult, int32_t TrajectoryNum, float TimeSinceSpawn);
		bool HasStoppedSimulation();
		void GetPredictedTrajectoryFull(class UObject* WorldContextObject, TArray<struct FVector>* WorldLocations, TArray<struct FRotator>* Rotations, TArray<struct FVector>* Velocities, const struct FVector& StartLocation, const struct FRotator& StartRotation, class UClass* Properties, int32_t RandSeed, float TimeToSimulate, float StepTime, int32_t MaxPoints, bool bOverrideGravity, const struct FVector& GravityAccel, const struct FVector& Scale);
		void GetPredictedTrajectoryForSettings(class UObject* WorldContextObject, TArray<struct FVector>* WorldLocations, const struct FVector& StartLocation, const struct FRotator& StartRotation, class UClass* Properties, const struct FRealisticProjectileBehavior& NewSettings, int32_t RandSeed, float TimeToSimulate, float StepTime, int32_t MaxPoints, bool bOverrideGravity, const struct FVector& GravityAccel, const struct FVector& Scale);
		void GetPredictedTrajectory(class UObject* WorldContextObject, TArray<struct FVector>* WorldLocations, struct FVector* LastVelocity, const struct FVector& StartLocation, const struct FRotator& StartRotation, class UClass* Properties, int32_t RandSeed, float TimeToSimulate, float StepTime, int32_t MaxPoints, bool bOverrideGravity, const struct FVector& GravityAccel, const struct FVector& Scale);
		struct FTrajectoryInitialConditions GetInitialConditions();
		bool GetExitHit(struct FHitResult* OutHit, const struct FVector& NewLocation, const struct FRotator& Rotation, class UWorld* World);
		void FastForwardWithHistory(TArray<struct FRewindHit>* OutHits, float Timestamp, TArray<struct FRewindHistory> PlayerLocations, float StepTime);
		void FastForward(float Timestamp, float StepTime);
		void DrawPredictedPathFromPoints(class UObject* WorldContextObject, TArray<class UStaticMeshComponent*> Meshes, TArray<struct FVector> Path, float Thickness);
		void DrawPredictedPath(class UObject* WorldContextObject, TArray<class UStaticMeshComponent*> Meshes, const struct FVector& StartLocation, const struct FRotator& StartRotation, class UClass* ProjectileClass, int32_t RandSeed, float TimeToSimulate, float StepTime, bool bOverrideGravity, const struct FVector& GravityAccel, float Thickness);
		struct FVector ComputeNewVelocity(float TimeSinceLaunch);
		struct FRotator ComputeNewRotation(float TimeSinceLaunch);
		struct FVector ComputeNewLocation(float TimeSinceLaunch);
		void ApplyImpulse(struct FHitResult* Hit, const struct FVector& ImpactVelocity);
		struct FVector AdjustDirection(const struct FVector& InVelocity, const struct FVector& ImpactNormal);
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.RewindUtilities
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URewindUtilities : public UBlueprintFunctionLibrary
	{
	public:
		void TestCollisionForFrame(TArray<struct FRewindHit>* OutHits, float GameTimeStart, float GameTimeEnd, const struct FVector& LocationStart, const struct FVector& LocationEnd, TArray<struct FRewindHistory> HitboxHistories, class UPrimitiveComponent* Projectile);
		void AddFrameToRewindHistory(struct FRewindHistory* InRewindHistory, class AActor* RecordActor, const class FName& MatchComponentsWithTag, float Gametime, float ClearOlderThan);
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.SoundNodeLocalDistance
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class USoundNodeLocalDistance : public USoundNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.SoundNodeLocalPlayer
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class USoundNodeLocalPlayer : public USoundNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RaidGame.VirtualCursorFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVirtualCursorFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool IsJoypadCursorUp();
		bool IsCursorOverInteractableWidget();
		void EnableVirtualCursor(class APlayerController* PC);
		void DisableVirtualCursor(class APlayerController* PC);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
