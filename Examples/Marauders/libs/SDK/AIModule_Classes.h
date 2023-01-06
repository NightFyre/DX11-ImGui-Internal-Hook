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
	 * Class AIModule.EnvQueryNode
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UEnvQueryNode : public UObject
	{
	public:
		int32_t                                                    VerNum;                                                  // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7I51[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UEnvQueryGenerator : public UEnvQueryNode
	{
	public:
		class FString                                              OptionName;                                              // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ItemType;                                                // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAutoSortTests : 1;                                      // 0x0048(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WW6O[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryInstanceBlueprintWrapper
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UEnvQueryInstanceBlueprintWrapper : public UObject
	{
	public:
		unsigned char                                              UnknownData_HTDB[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    QueryId;                                                 // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XKVE[0x24];                                  // 0x0034(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ItemType;                                                // 0x0058(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    OptionIndex;                                             // 0x0060(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1YI2[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnQueryFinishedEvent;                                    // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected

	public:
		void SetNamedParam(const class FName& ParamName, float Value);
		TArray<struct FVector> GetResultsAsLocations();
		TArray<class AActor*> GetResultsAsActors();
		bool GetQueryResultsAsLocations(TArray<struct FVector>* ResultLocations);
		bool GetQueryResultsAsActors(TArray<class AActor*>* ResultActors);
		float GetItemScore(int32_t ItemIndex);
		void EQSQueryDoneSignature__DelegateSignature(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryItemType
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UEnvQueryItemType : public UObject
	{
	public:
		unsigned char                                              UnknownData_C55K[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryItemType_VectorBase
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryItemType_VectorBase : public UEnvQueryItemType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryTest
	 * Size -> 0x01C8 (FullSize[0x01F8] - InheritedSize[0x0030])
	 */
	class UEnvQueryTest : public UEnvQueryNode
	{
	public:
		int32_t                                                    TestOrder;                                               // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEnvTestPurpose                                            TestPurpose;                                             // 0x0034(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KS1W[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TestComment;                                             // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEnvTestFilterOperator                                     MultipleContextFilterOp;                                 // 0x0048(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEnvTestScoreOperator                                      MultipleContextScoreOp;                                  // 0x0049(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEnvTestFilterType                                         FilterType;                                              // 0x004A(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N14J[0x5];                                   // 0x004B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIDataProviderBoolValue                            BoolValue;                                               // 0x0050(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           FloatValueMin;                                           // 0x0088(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           FloatValueMax;                                           // 0x00C0(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YV3V[0x1];                                   // 0x00F8(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EEnvTestScoreEquation                                      ScoringEquation;                                         // 0x00F9(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEnvQueryTestClamping                                      ClampMinType;                                            // 0x00FA(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEnvQueryTestClamping                                      ClampMaxType;                                            // 0x00FB(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEQSNormalizationType                                      NormalizationType;                                       // 0x00FC(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6ANT[0x3];                                   // 0x00FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIDataProviderFloatValue                           ScoreClampMin;                                           // 0x0100(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           ScoreClampMax;                                           // 0x0138(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           ScoringFactor;                                           // 0x0170(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           ReferenceValue;                                          // 0x01A8(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bDefineReferenceValue;                                   // 0x01E0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BB3R[0xF];                                   // 0x01E1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bWorkOnFloatValues : 1;                                  // 0x01F0(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_97VD[0x7];                                   // 0x01F1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTNode
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UBTNode : public UObject
	{
	public:
		unsigned char                                              UnknownData_CCXA[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              NodeName;                                                // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBehaviorTree*                                       TreeAsset;                                               // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBTCompositeNode*                                    ParentNode;                                              // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SOR7[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTAuxiliaryNode
	 * Size -> 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
	 */
	class UBTAuxiliaryNode : public UBTNode
	{
	public:
		unsigned char                                              UnknownData_KV19[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	class UBTDecorator : public UBTAuxiliaryNode
	{
	public:
		unsigned char                                              UnknownData_WVIW : 7;                                    // 0x0060(0x0001) BIT_FIELD (PADDING)
		unsigned char                                              bInverseCondition : 1;                                   // 0x0060(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_W3ZU[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EBTFlowAbortMode                                           FlowAbortMode;                                           // 0x0064(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TNZN[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTaskNode
	 * Size -> 0x0018 (FullSize[0x0070] - InheritedSize[0x0058])
	 */
	class UBTTaskNode : public UBTNode
	{
	public:
		TArray<class UBTService*>                                  Services;                                                // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              bIgnoreRestartSelf : 1;                                  // 0x0068(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_468J[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_BlackboardBase
	 * Size -> 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
	 */
	class UBTTask_BlackboardBase : public UBTTaskNode
	{
	public:
		struct FBlackboardKeySelector                              BlackboardKey;                                           // 0x0070(0x0028) Edit, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryContext
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AIController
	 * Size -> 0x0090 (FullSize[0x0328] - InheritedSize[0x0298])
	 */
	class AAIController : public AController
	{
	public:
		unsigned char                                              UnknownData_HZOX[0x38];                                  // 0x0298(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bStartAILogicOnPossess : 1;                              // 0x02D0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bStopAILogicOnUnposses : 1;                              // 0x02D0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bLOSflag : 1;                                            // 0x02D0(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSkipExtraLOSChecks : 1;                                 // 0x02D0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowStrafe : 1;                                        // 0x02D0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bWantsPlayerState : 1;                                   // 0x02D0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSetControlRotationFromPawnOrientation : 1;              // 0x02D0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RNK0[0x7];                                   // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPathFollowingComponent*                             PathFollowingComponent;                                  // 0x02D8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBrainComponent*                                     BrainComponent;                                          // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAIPerceptionComponent*                              PerceptionComponent;                                     // 0x02E8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnActionsComponent*                               ActionsComp;                                             // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBlackboardComponent*                                Blackboard;                                              // 0x02F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGameplayTasksComponent*                             CachedGameplayTasksComponent;                            // 0x0300(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              DefaultNavigationFilterClass;                            // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             ReceiveMoveCompleted;                                    // 0x0310(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZERP[0x8];                                   // 0x0320(0x0008) MISSED OFFSET (PADDING)

	public:
		bool UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent** BlackboardComponent);
		void UnclaimTaskResource(class UClass* ResourceClass);
		void SetPathFollowingComponent(class UPathFollowingComponent* NewPFComponent);
		void SetMoveBlockDetection(bool bEnable);
		bool RunBehaviorTree(class UBehaviorTree* BTAsset);
		void OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset);
		void OnGameplayTaskResourcesClaimed(const struct FGameplayResourceSet& NewlyClaimed, const struct FGameplayResourceSet& FreshlyReleased);
		EPathFollowingRequestResult MoveToLocation(const struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);
		EPathFollowingRequestResult MoveToActor(class AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);
		void K2_SetFocus(class AActor* NewFocus);
		void K2_SetFocalPoint(const struct FVector& FP);
		void K2_ClearFocus();
		bool HasPartialPath();
		class UPathFollowingComponent* GetPathFollowingComponent();
		EPathFollowingStatus GetMoveStatus();
		struct FVector GetImmediateMoveDestination();
		class AActor* GetFocusActor();
		struct FVector GetFocalPointOnActor(class AActor* Actor);
		struct FVector GetFocalPoint();
		class UAIPerceptionComponent* GetAIPerceptionComponent();
		void ClaimTaskResource(class UClass* ResourceClass);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AIAsyncTaskBlueprintProxy
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UAIAsyncTaskBlueprintProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFail;                                                  // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G9GH[0x20];                                  // 0x0048(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnMoveCompleted(const struct FAIRequestID& RequestID, EPathFollowingResult MovementResult);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AIBlueprintHelperLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void UnlockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic);
		class APawn* SpawnAIFromClass(class UObject* WorldContextObject, class UClass* PawnClass, class UBehaviorTree* BehaviorTree, const struct FVector& Location, const struct FRotator& Rotation, bool bNoCollisionFail, class AActor* Owner);
		void SimpleMoveToLocation(class AController* Controller, const struct FVector& Goal);
		void SimpleMoveToActor(class AController* Controller, class AActor* Goal);
		void SendAIMessage(class APawn* Target, const class FName& Message, class UObject* MessageSource, bool bSuccess);
		void LockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic);
		bool IsValidAIRotation(const struct FRotator& Rotation);
		bool IsValidAILocation(const struct FVector& Location);
		bool IsValidAIDirection(const struct FVector& DirectionVector);
		int32_t GetNextNavLinkIndex(class AController* Controller);
		TArray<struct FVector> GetCurrentPathPoints(class AController* Controller);
		int32_t GetCurrentPathIndex(class AController* Controller);
		class UNavigationPath* GetCurrentPath(class AController* Controller);
		class UBlackboardComponent* GetBlackboard(class AActor* Target);
		class AAIController* GetAIController(class AActor* ControlledActor);
		class UAIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, const struct FVector& destination, class AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AIDataProvider
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIDataProvider : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AIDataProvider_QueryParams
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UAIDataProvider_QueryParams : public UAIDataProvider
	{
	public:
		class FName                                                ParamName;                                               // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatValue;                                              // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IntValue;                                                // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BoolValue;                                               // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OA3U[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AIDataProvider_Random
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UAIDataProvider_Random : public UAIDataProvider_QueryParams
	{
	public:
		float                                                      Min;                                                     // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Max;                                                     // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bInteger : 1;                                            // 0x0048(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EALB[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AIHotSpotManager
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIHotSpotManager : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AIPerceptionComponent
	 * Size -> 0x00E0 (FullSize[0x0190] - InheritedSize[0x00B0])
	 */
	class UAIPerceptionComponent : public UActorComponent
	{
	public:
		TArray<class UAISenseConfig*>                              SensesConfig;                                            // 0x00B0(0x0010) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class UClass*                                              DominantSense;                                           // 0x00C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N3OT[0x10];                                  // 0x00C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AAIController*                                       AIOwner;                                                 // 0x00D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3YUD[0x80];                                  // 0x00E0(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPerceptionUpdated;                                     // 0x0160(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTargetPerceptionUpdated;                               // 0x0170(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTargetPerceptionInfoUpdated;                           // 0x0180(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void SetSenseEnabled(class UClass* SenseClass, bool bEnable);
		void RequestStimuliListenerUpdate();
		void OnOwnerEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason);
		void GetPerceivedHostileActorsBySense(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
		void GetPerceivedHostileActors(TArray<class AActor*>* OutActors);
		void GetPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
		void GetKnownPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
		void GetCurrentlyPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
		bool GetActorsPerception(class AActor* Actor, struct FActorPerceptionBlueprintInfo* Info);
		void ForgetAll();
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AIPerceptionListenerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIPerceptionListenerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AIPerceptionStimuliSourceComponent
	 * Size -> 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
	 */
	class UAIPerceptionStimuliSourceComponent : public UActorComponent
	{
	public:
		unsigned char                                              bAutoRegisterAsSource : 1;                               // 0x00B0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FVW7[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      RegisterAsSourceForSenses;                               // 0x00B8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected

	public:
		void UnregisterFromSense(class UClass* SenseClass);
		void UnregisterFromPerceptionSystem();
		void RegisterWithPerceptionSystem();
		void RegisterForSense(class UClass* SenseClass);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISubsystem
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAISubsystem : public UObject
	{
	public:
		unsigned char                                              UnknownData_CHGA[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAISystem*                                           AISystem;                                                // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AIPerceptionSystem
	 * Size -> 0x00F8 (FullSize[0x0130] - InheritedSize[0x0038])
	 */
	class UAIPerceptionSystem : public UAISubsystem
	{
	public:
		unsigned char                                              UnknownData_853V[0x50];                                  // 0x0038(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAISense*>                                    Senses;                                                  // 0x0088(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		float                                                      PerceptionAgingRate;                                     // 0x0098(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_X70M[0x94];                                  // 0x009C(0x0094) MISSED OFFSET (PADDING)

	public:
		void ReportPerceptionEvent(class UObject* WorldContextObject, class UAISenseEvent* PerceptionEvent);
		void ReportEvent(class UAISenseEvent* PerceptionEvent);
		bool RegisterPerceptionStimuliSource(class UObject* WorldContextObject, class UClass* Sense, class AActor* Target);
		void OnPerceptionStimuliSourceEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason);
		class UClass* GetSenseClassForStimulus(class UObject* WorldContextObject, const struct FAIStimulus& Stimulus);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AIResourceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIResourceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AIResource_Movement
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UAIResource_Movement : public UGameplayTaskResource
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AIResource_Logic
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UAIResource_Logic : public UGameplayTaskResource
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISense
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UAISense : public UObject
	{
	public:
		float                                                      DefaultExpirationAge;                                    // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EAISenseNotifyType                                         NotifyType;                                              // 0x002C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NF9P[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bWantsNewPawnNotification : 1;                           // 0x0030(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bAutoRegisterAllPawnsAsSources : 1;                      // 0x0030(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CVIU[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAIPerceptionSystem*                                 PerceptionSystemInstance;                                // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YUWE[0x40];                                  // 0x0040(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISense_Blueprint
	 * Size -> 0x0028 (FullSize[0x00A8] - InheritedSize[0x0080])
	 */
	class UAISense_Blueprint : public UAISense
	{
	public:
		class UClass*                                              ListenerDataType;                                        // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UAIPerceptionComponent*>                      ListenerContainer;                                       // 0x0088(0x0010) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TArray<class UAISenseEvent*>                               UnprocessedEvents;                                       // 0x0098(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		float OnUpdate(TArray<class UAISenseEvent*> EventsToProcess);
		void OnListenerUpdated(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
		void OnListenerUnregistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
		void OnListenerRegistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
		void K2_OnNewPawn(class APawn* NewPawn);
		void GetAllListenerComponents(TArray<class UAIPerceptionComponent*>* ListenerComponents);
		void GetAllListenerActors(TArray<class AActor*>* ListenerActors);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISense_Damage
	 * Size -> 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
	 */
	class UAISense_Damage : public UAISense
	{
	public:
		TArray<struct FAIDamageEvent>                              RegisteredEvents;                                        // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		void ReportDamageEvent(class UObject* WorldContextObject, class AActor* DamagedActor, class AActor* Instigator, float DamageAmount, const struct FVector& EventLocation, const struct FVector& HitLocation);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISense_Hearing
	 * Size -> 0x0068 (FullSize[0x00E8] - InheritedSize[0x0080])
	 */
	class UAISense_Hearing : public UAISense
	{
	public:
		TArray<struct FAINoiseEvent>                               NoiseEvents;                                             // 0x0080(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		float                                                      SpeedOfSoundSq;                                          // 0x0090(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YSR2[0x54];                                  // 0x0094(0x0054) MISSED OFFSET (PADDING)

	public:
		void ReportNoiseEvent(class UObject* WorldContextObject, const struct FVector& NoiseLocation, float Loudness, class AActor* Instigator, float MaxRange, const class FName& Tag);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISense_Prediction
	 * Size -> 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
	 */
	class UAISense_Prediction : public UAISense
	{
	public:
		TArray<struct FAIPredictionEvent>                          RegisteredEvents;                                        // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		void RequestPawnPredictionEvent(class APawn* Requestor, class AActor* PredictedActor, float PredictionTime);
		void RequestControllerPredictionEvent(class AAIController* Requestor, class AActor* PredictedActor, float PredictionTime);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISense_Sight
	 * Size -> 0x00F0 (FullSize[0x0170] - InheritedSize[0x0080])
	 */
	class UAISense_Sight : public UAISense
	{
	public:
		unsigned char                                              UnknownData_R5G7[0xC8];                                  // 0x0080(0x00C8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxTracesPerTick;                                        // 0x0148(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MinQueriesPerTimeSliceCheck;                             // 0x014C(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		double                                                     MaxTimeSlicePerTick;                                     // 0x0150(0x0008) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HighImportanceQueryDistanceThreshold;                    // 0x0158(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_D47Q[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxQueryImportance;                                      // 0x0160(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SightLimitQueryImportance;                               // 0x0164(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_P8E6[0x8];                                   // 0x0168(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISense_Team
	 * Size -> 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
	 */
	class UAISense_Team : public UAISense
	{
	public:
		TArray<struct FAITeamStimulusEvent>                        RegisteredEvents;                                        // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISense_Touch
	 * Size -> 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
	 */
	class UAISense_Touch : public UAISense
	{
	public:
		TArray<struct FAITouchEvent>                               RegisteredEvents;                                        // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISenseBlueprintListener
	 * Size -> 0x0000 (FullSize[0x0108] - InheritedSize[0x0108])
	 */
	class UAISenseBlueprintListener : public UUserDefinedStruct
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISenseConfig
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UAISenseConfig : public UObject
	{
	public:
		struct FColor                                              DebugColor;                                              // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxAge;                                                  // 0x002C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bStartsEnabled : 1;                                      // 0x0030(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Y1ON[0x17];                                  // 0x0031(0x0017) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISenseConfig_Blueprint
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UAISenseConfig_Blueprint : public UAISenseConfig
	{
	public:
		class UClass*                                              Implementation;                                          // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISenseConfig_Damage
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UAISenseConfig_Damage : public UAISenseConfig
	{
	public:
		class UClass*                                              Implementation;                                          // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISenseConfig_Hearing
	 * Size -> 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
	 */
	class UAISenseConfig_Hearing : public UAISenseConfig
	{
	public:
		class UClass*                                              Implementation;                                          // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HearingRange;                                            // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LoSHearingRange;                                         // 0x0054(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseLoSHearing : 1;                                      // 0x0058(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1JVO[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAISenseAffiliationFilter                           DetectionByAffiliation;                                  // 0x005C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISenseConfig_Prediction
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UAISenseConfig_Prediction : public UAISenseConfig
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISenseConfig_Sight
	 * Size -> 0x0028 (FullSize[0x0070] - InheritedSize[0x0048])
	 */
	class UAISenseConfig_Sight : public UAISenseConfig
	{
	public:
		class UClass*                                              Implementation;                                          // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SightRadius;                                             // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LoseSightRadius;                                         // 0x0054(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PeripheralVisionAngleDegrees;                            // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAISenseAffiliationFilter                           DetectionByAffiliation;                                  // 0x005C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      AutoSuccessRangeFromLastSeenLocation;                    // 0x0060(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PointOfViewBackwardOffset;                               // 0x0064(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NearClippingRadius;                                      // 0x0068(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4M8Y[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISenseConfig_Team
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UAISenseConfig_Team : public UAISenseConfig
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISenseConfig_Touch
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UAISenseConfig_Touch : public UAISenseConfig
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISenseEvent
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAISenseEvent : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISenseEvent_Damage
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UAISenseEvent_Damage : public UAISenseEvent
	{
	public:
		struct FAIDamageEvent                                      Event;                                                   // 0x0028(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISenseEvent_Hearing
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UAISenseEvent_Hearing : public UAISenseEvent
	{
	public:
		struct FAINoiseEvent                                       Event;                                                   // 0x0028(0x0030) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISightTargetInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAISightTargetInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AISystem
	 * Size -> 0x00D8 (FullSize[0x0130] - InheritedSize[0x0058])
	 */
	class UAISystem : public UAISystemBase
	{
	public:
		struct FSoftClassPath                                      PerceptionSystemClassName;                               // 0x0058(0x0018) Edit, ZeroConstructor, Config, GlobalConfig, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSoftClassPath                                      HotSpotManagerClassName;                                 // 0x0070(0x0018) Edit, ZeroConstructor, Config, GlobalConfig, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AcceptanceRadius;                                        // 0x0088(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PathfollowingRegularPathPointAcceptanceRadius;           // 0x008C(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PathfollowingNavLinkAcceptanceRadius;                    // 0x0090(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFinishMoveOnGoalOverlap;                                // 0x0094(0x0001) Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAcceptPartialPaths;                                     // 0x0095(0x0001) Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowStrafing;                                          // 0x0096(0x0001) Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableBTAITasks;                                        // 0x0097(0x0001) Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowControllersAsEQSQuerier;                           // 0x0098(0x0001) Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableDebuggerPlugin;                                   // 0x0099(0x0001) Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForgetStaleActors;                                      // 0x009A(0x0001) Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAddBlackboardSelfKey;                                   // 0x009B(0x0001) Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          DefaultSightCollisionChannel;                            // 0x009C(0x0001) Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8YVO[0x3];                                   // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBehaviorTreeManager*                                BehaviorTreeManager;                                     // 0x00A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEnvQueryManager*                                    EnvironmentQueryManager;                                 // 0x00A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAIPerceptionSystem*                                 PerceptionSystem;                                        // 0x00B0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UAIAsyncTaskBlueprintProxy*>                  AllProxyObjects;                                         // 0x00B8(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		class UAIHotSpotManager*                                   HotSpotManager;                                          // 0x00C8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNavLocalGridManager*                                NavLocalGrids;                                           // 0x00D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_W4XO[0x58];                                  // 0x00D8(0x0058) MISSED OFFSET (PADDING)

	public:
		void AILoggingVerbose();
		void AIIgnorePlayers();
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AITask
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UAITask : public UGameplayTask
	{
	public:
		class AAIController*                                       OwnerController;                                         // 0x0068(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AITask_LockLogic
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAITask_LockLogic : public UAITask
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AITask_MoveTo
	 * Size -> 0x00A0 (FullSize[0x0110] - InheritedSize[0x0070])
	 */
	class UAITask_MoveTo : public UAITask
	{
	public:
		class FScriptMulticastDelegate                             OnRequestFailed;                                         // 0x0070(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnMoveFinished;                                          // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		struct FAIMoveRequest                                      MoveRequest;                                             // 0x0090(0x0040) Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L6X7[0x40];                                  // 0x00D0(0x0040) MISSED OFFSET (PADDING)

	public:
		class UAITask_MoveTo* AIMoveTo(class AAIController* Controller, const struct FVector& GoalLocation, class AActor* GoalActor, float AcceptanceRadius, EAIOptionFlag StopOnOverlap, EAIOptionFlag AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, EAIOptionFlag ProjectGoalOnNavigation);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.AITask_RunEQS
	 * Size -> 0x0078 (FullSize[0x00E8] - InheritedSize[0x0070])
	 */
	class UAITask_RunEQS : public UAITask
	{
	public:
		unsigned char                                              UnknownData_AA5A[0x78];                                  // 0x0070(0x0078) MISSED OFFSET (PADDING)

	public:
		class UAITask_RunEQS* RunEQS(class AAIController* Controller, class UEnvQuery* QueryTemplate);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BehaviorTree
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UBehaviorTree : public UObject
	{
	public:
		unsigned char                                              UnknownData_1XXC[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBTCompositeNode*                                    RootNode;                                                // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlackboardData*                                     BlackboardAsset;                                         // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UBTDecorator*>                                RootDecorators;                                          // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FBTDecoratorLogic>                           RootDecoratorOps;                                        // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6UJ7[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BrainComponent
	 * Size -> 0x0058 (FullSize[0x0108] - InheritedSize[0x00B0])
	 */
	class UBrainComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_67DT[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBlackboardComponent*                                BlackboardComp;                                          // 0x00B8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AAIController*                                       AIOwner;                                                 // 0x00C0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_93M7[0x40];                                  // 0x00C8(0x0040) MISSED OFFSET (PADDING)

	public:
		void StopLogic(const class FString& Reason);
		void StartLogic();
		void RestartLogic();
		bool IsRunning();
		bool IsPaused();
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BehaviorTreeComponent
	 * Size -> 0x0190 (FullSize[0x0298] - InheritedSize[0x0108])
	 */
	class UBehaviorTreeComponent : public UBrainComponent
	{
	public:
		unsigned char                                              UnknownData_XILQ[0x20];                                  // 0x0108(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UBTNode*>                                     NodeInstances;                                           // 0x0128(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LRL6[0x140];                                 // 0x0138(0x0140) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBehaviorTree*                                       DefaultBehaviorTreeAsset;                                // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KIUJ[0x18];                                  // 0x0280(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetDynamicSubtree(const struct FGameplayTag& InjectTag, class UBehaviorTree* BehaviorAsset);
		float GetTagCooldownEndTime(const struct FGameplayTag& CooldownTag);
		void AddCooldownTagDuration(const struct FGameplayTag& CooldownTag, float CooldownDuration, bool bAddToExistingDuration);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BehaviorTreeManager
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UBehaviorTreeManager : public UObject
	{
	public:
		int32_t                                                    MaxDebuggerSteps;                                        // 0x0028(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I0ZM[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBehaviorTreeTemplateInfo>                   LoadedTemplates;                                         // 0x0030(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UBehaviorTreeComponent*>                      ActiveComponents;                                        // 0x0040(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BehaviorTreeTypes
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBehaviorTreeTypes : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardAssetProvider
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBlackboardAssetProvider : public UInterface
	{
	public:
		class UBlackboardData* GetBlackboardAsset();
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardComponent
	 * Size -> 0x0108 (FullSize[0x01B8] - InheritedSize[0x00B0])
	 */
	class UBlackboardComponent : public UActorComponent
	{
	public:
		class UBrainComponent*                                     BrainComp;                                               // 0x00B0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBlackboardData*                                     DefaultBlackboardAsset;                                  // 0x00B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBlackboardData*                                     BlackboardAsset;                                         // 0x00C0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6XKC[0x20];                                  // 0x00C8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UBlackboardKeyType*>                          KeyInstances;                                            // 0x00E8(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Y853[0xC0];                                  // 0x00F8(0x00C0) MISSED OFFSET (PADDING)

	public:
		void SetValueAsVector(const class FName& KeyName, const struct FVector& VectorValue);
		void SetValueAsString(const class FName& KeyName, const class FString& StringValue);
		void SetValueAsRotator(const class FName& KeyName, const struct FRotator& VectorValue);
		void SetValueAsObject(const class FName& KeyName, class UObject* ObjectValue);
		void SetValueAsName(const class FName& KeyName, const class FName& NameValue);
		void SetValueAsInt(const class FName& KeyName, int32_t IntValue);
		void SetValueAsFloat(const class FName& KeyName, float FloatValue);
		void SetValueAsEnum(const class FName& KeyName, unsigned char EnumValue);
		void SetValueAsClass(const class FName& KeyName, class UClass* ClassValue);
		void SetValueAsBool(const class FName& KeyName, bool BoolValue);
		bool IsVectorValueSet(const class FName& KeyName);
		struct FVector GetValueAsVector(const class FName& KeyName);
		class FString GetValueAsString(const class FName& KeyName);
		struct FRotator GetValueAsRotator(const class FName& KeyName);
		class UObject* GetValueAsObject(const class FName& KeyName);
		class FName GetValueAsName(const class FName& KeyName);
		int32_t GetValueAsInt(const class FName& KeyName);
		float GetValueAsFloat(const class FName& KeyName);
		unsigned char GetValueAsEnum(const class FName& KeyName);
		class UClass* GetValueAsClass(const class FName& KeyName);
		bool GetValueAsBool(const class FName& KeyName);
		bool GetRotationFromEntry(const class FName& KeyName, struct FRotator* ResultRotation);
		bool GetLocationFromEntry(const class FName& KeyName, struct FVector* ResultLocation);
		void ClearValue(const class FName& KeyName);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardData
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UBlackboardData : public UDataAsset
	{
	public:
		class UBlackboardData*                                     Parent;                                                  // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FBlackboardEntry>                            keys;                                                    // 0x0038(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              bHasSynchronizedKeys : 1;                                // 0x0048(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FOHM[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UBlackboardKeyType : public UObject
	{
	public:
		unsigned char                                              UnknownData_269B[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_Bool
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_Bool : public UBlackboardKeyType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_Class
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_Class : public UBlackboardKeyType
	{
	public:
		class UClass*                                              BaseClass;                                               // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_Enum
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_Enum : public UBlackboardKeyType
	{
	public:
		class UEnum*                                               EnumType;                                                // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EnumName;                                                // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsEnumNameValid : 1;                                    // 0x0048(0x0001) BIT_FIELD Edit, DisableEditOnInstance, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ULXM[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_Float
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_Float : public UBlackboardKeyType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_Int
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_Int : public UBlackboardKeyType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_Name
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_Name : public UBlackboardKeyType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_NativeEnum
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType
	{
	public:
		class FString                                              EnumName;                                                // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEnum*                                               EnumType;                                                // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_Object
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_Object : public UBlackboardKeyType
	{
	public:
		class UClass*                                              BaseClass;                                               // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_Rotator
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_Rotator : public UBlackboardKeyType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_String
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_String : public UBlackboardKeyType
	{
	public:
		class FString                                              StringValue;                                             // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BlackboardKeyType_Vector
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_Vector : public UBlackboardKeyType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTCompositeNode
	 * Size -> 0x0038 (FullSize[0x0090] - InheritedSize[0x0058])
	 */
	class UBTCompositeNode : public UBTNode
	{
	public:
		TArray<struct FBTCompositeChild>                           Children;                                                // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UBTService*>                                  Services;                                                // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BYEN[0x10];                                  // 0x0078(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bApplyDecoratorScope : 1;                                // 0x0088(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HNXE[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTComposite_Selector
	 * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
	 */
	class UBTComposite_Selector : public UBTCompositeNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTComposite_Sequence
	 * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
	 */
	class UBTComposite_Sequence : public UBTCompositeNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTComposite_SimpleParallel
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UBTComposite_SimpleParallel : public UBTCompositeNode
	{
	public:
		EBTParallelMode                                            FinishMode;                                              // 0x0090(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_784R[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_BlackboardBase
	 * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
	 */
	class UBTDecorator_BlackboardBase : public UBTDecorator
	{
	public:
		struct FBlackboardKeySelector                              BlackboardKey;                                           // 0x0068(0x0028) Edit, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_Blackboard
	 * Size -> 0x0030 (FullSize[0x00C0] - InheritedSize[0x0090])
	 */
	class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
	{
	public:
		int32_t                                                    IntValue;                                                // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FloatValue;                                              // 0x0094(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              StringValue;                                             // 0x0098(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              CachedDescription;                                       // 0x00A8(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              OperationType;                                           // 0x00B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EBTBlackboardRestart                                       NotifyObserver;                                          // 0x00B9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KXDK[0x6];                                   // 0x00BA(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_BlueprintBase
	 * Size -> 0x0038 (FullSize[0x00A0] - InheritedSize[0x0068])
	 */
	class UBTDecorator_BlueprintBase : public UBTDecorator
	{
	public:
		class AAIController*                                       AIOwner;                                                 // 0x0068(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AActor*                                              ActorOwner;                                              // 0x0070(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class FName>                                        ObservedKeyNames;                                        // 0x0078(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5BHT[0x10];                                  // 0x0088(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bShowPropertyDetails : 1;                                // 0x0098(0x0001) BIT_FIELD Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bCheckConditionOnlyBlackBoardChanges : 1;                // 0x0098(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bIsObservingBB : 1;                                      // 0x0098(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RKQY[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (PADDING)

	public:
		void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
		void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
		void ReceiveObserverDeactivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ReceiveObserverDeactivated(class AActor* OwnerActor);
		void ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ReceiveObserverActivated(class AActor* OwnerActor);
		void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ReceiveExecutionStart(class AActor* OwnerActor);
		void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, EBTNodeResult NodeResult);
		void ReceiveExecutionFinish(class AActor* OwnerActor, EBTNodeResult NodeResult);
		bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		bool PerformConditionCheck(class AActor* OwnerActor);
		bool IsDecoratorObserverActive();
		bool IsDecoratorExecutionActive();
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_CheckGameplayTagsOnActor
	 * Size -> 0x0060 (FullSize[0x00C8] - InheritedSize[0x0068])
	 */
	class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator
	{
	public:
		struct FBlackboardKeySelector                              ActorToCheck;                                            // 0x0068(0x0028) Edit, Protected, NativeAccessSpecifierProtected
		EGameplayContainerMatchType                                TagsToMatch;                                             // 0x0090(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_57CX[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               GameplayTags;                                            // 0x0098(0x0020) Edit, Protected, NativeAccessSpecifierProtected
		class FString                                              CachedDescription;                                       // 0x00B8(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_CompareBBEntries
	 * Size -> 0x0058 (FullSize[0x00C0] - InheritedSize[0x0068])
	 */
	class UBTDecorator_CompareBBEntries : public UBTDecorator
	{
	public:
		EBlackBoardEntryComparison                                 Operator;                                                // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VR1O[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              BlackboardKeyA;                                          // 0x0070(0x0028) Edit, Protected, NativeAccessSpecifierProtected
		struct FBlackboardKeySelector                              BlackboardKeyB;                                          // 0x0098(0x0028) Edit, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_ConditionalLoop
	 * Size -> 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
	 */
	class UBTDecorator_ConditionalLoop : public UBTDecorator_Blackboard
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_ConeCheck
	 * Size -> 0x0088 (FullSize[0x00F0] - InheritedSize[0x0068])
	 */
	class UBTDecorator_ConeCheck : public UBTDecorator
	{
	public:
		float                                                      ConeHalfAngle;                                           // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YKMZ[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              ConeOrigin;                                              // 0x0070(0x0028) Edit, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              ConeDirection;                                           // 0x0098(0x0028) Edit, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              Observed;                                                // 0x00C0(0x0028) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W5QY[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_Cooldown
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UBTDecorator_Cooldown : public UBTDecorator
	{
	public:
		float                                                      CoolDownTime;                                            // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7QOZ[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_DoesPathExist
	 * Size -> 0x0060 (FullSize[0x00C8] - InheritedSize[0x0068])
	 */
	class UBTDecorator_DoesPathExist : public UBTDecorator
	{
	public:
		struct FBlackboardKeySelector                              BlackboardKeyA;                                          // 0x0068(0x0028) Edit, Protected, NativeAccessSpecifierProtected
		struct FBlackboardKeySelector                              BlackboardKeyB;                                          // 0x0090(0x0028) Edit, Protected, NativeAccessSpecifierProtected
		unsigned char                                              bUseSelf : 1;                                            // 0x00B8(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JA7K[0x3];                                   // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EPathExistanceQueryType                                    PathQueryType;                                           // 0x00BC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VOPJ[0x3];                                   // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              FilterClass;                                             // 0x00C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_ForceSuccess
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UBTDecorator_ForceSuccess : public UBTDecorator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_IsAtLocation
	 * Size -> 0x0048 (FullSize[0x00D8] - InheritedSize[0x0090])
	 */
	class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase
	{
	public:
		float                                                      AcceptableRadius;                                        // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U6LO[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIDataProviderFloatValue                           ParametrizedAcceptableRadius;                            // 0x0098(0x0038) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		EFAIDistanceType                                           GeometricDistanceType;                                   // 0x00D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UC7K[0x3];                                   // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bUseParametrizedRadius : 1;                              // 0x00D4(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseNavAgentGoalLocation : 1;                            // 0x00D4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPathFindingBasedTest : 1;                               // 0x00D4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_66WL[0x3];                                   // 0x00D5(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_IsBBEntryOfClass
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase
	{
	public:
		class UClass*                                              TestClass;                                               // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_KeepInCone
	 * Size -> 0x0060 (FullSize[0x00C8] - InheritedSize[0x0068])
	 */
	class UBTDecorator_KeepInCone : public UBTDecorator
	{
	public:
		float                                                      ConeHalfAngle;                                           // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OE3D[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              ConeOrigin;                                              // 0x0070(0x0028) Edit, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              Observed;                                                // 0x0098(0x0028) Edit, NativeAccessSpecifierPublic
		unsigned char                                              bUseSelfAsOrigin : 1;                                    // 0x00C0(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseSelfAsObserved : 1;                                  // 0x00C0(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZN6Z[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_Loop
	 * Size -> 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
	 */
	class UBTDecorator_Loop : public UBTDecorator
	{
	public:
		int32_t                                                    NumLoops;                                                // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInfiniteLoop;                                           // 0x006C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YLRG[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InfiniteLoopTimeoutTime;                                 // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5M55[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_ReachedMoveGoal
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UBTDecorator_ReachedMoveGoal : public UBTDecorator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_SetTagCooldown
	 * Size -> 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
	 */
	class UBTDecorator_SetTagCooldown : public UBTDecorator
	{
	public:
		struct FGameplayTag                                        CooldownTag;                                             // 0x0068(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CooldownDuration;                                        // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAddToExistingDuration;                                  // 0x0074(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LUUR[0x3];                                   // 0x0075(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_TagCooldown
	 * Size -> 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
	 */
	class UBTDecorator_TagCooldown : public UBTDecorator
	{
	public:
		struct FGameplayTag                                        CooldownTag;                                             // 0x0068(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CooldownDuration;                                        // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAddToExistingDuration;                                  // 0x0074(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bActivatesCooldown;                                      // 0x0075(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M7IC[0x2];                                   // 0x0076(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTDecorator_TimeLimit
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class UBTDecorator_TimeLimit : public UBTDecorator
	{
	public:
		float                                                      TimeLimit;                                               // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NFX2[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBTFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void StopUsingExternalEvent(class UBTNode* NodeOwner);
		void StartUsingExternalEvent(class UBTNode* NodeOwner, class AActor* OwningActor);
		void SetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FVector& Value);
		void SetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const class FString& Value);
		void SetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FRotator& Value);
		void SetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UObject* Value);
		void SetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const class FName& Value);
		void SetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, int32_t Value);
		void SetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, float Value);
		void SetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, unsigned char Value);
		void SetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UClass* Value);
		void SetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, bool Value);
		class UBlackboardComponent* GetOwnersBlackboard(class UBTNode* NodeOwner);
		class UBehaviorTreeComponent* GetOwnerComponent(class UBTNode* NodeOwner);
		struct FVector GetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		class FString GetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		struct FRotator GetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		class UObject* GetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		class FName GetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		int32_t GetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		float GetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		unsigned char GetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		class UClass* GetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		bool GetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		class AActor* GetBlackboardValueAsActor(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		void ClearBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		void ClearBlackboardValue(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTService
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	class UBTService : public UBTAuxiliaryNode
	{
	public:
		float                                                      Interval;                                                // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RandomDeviation;                                         // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bCallTickOnSearchStart : 1;                              // 0x0068(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bRestartTimerOnEachActivation : 1;                       // 0x0068(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UJQX[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTService_BlackboardBase
	 * Size -> 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
	 */
	class UBTService_BlackboardBase : public UBTService
	{
	public:
		struct FBlackboardKeySelector                              BlackboardKey;                                           // 0x0070(0x0028) Edit, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTService_BlueprintBase
	 * Size -> 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
	 */
	class UBTService_BlueprintBase : public UBTService
	{
	public:
		class AAIController*                                       AIOwner;                                                 // 0x0070(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AActor*                                              ActorOwner;                                              // 0x0078(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5X68[0x10];                                  // 0x0080(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bShowPropertyDetails : 1;                                // 0x0090(0x0001) BIT_FIELD Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bShowEventDetails : 1;                                   // 0x0090(0x0001) BIT_FIELD Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7PSK[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (PADDING)

	public:
		void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
		void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
		void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ReceiveSearchStart(class AActor* OwnerActor);
		void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ReceiveDeactivation(class AActor* OwnerActor);
		void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ReceiveActivation(class AActor* OwnerActor);
		bool IsServiceActive();
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTService_DefaultFocus
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	class UBTService_DefaultFocus : public UBTService_BlackboardBase
	{
	public:
		unsigned char                                              FocusPriority;                                           // 0x0098(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_787B[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTService_RunEQS
	 * Size -> 0x0058 (FullSize[0x00F0] - InheritedSize[0x0098])
	 */
	class UBTService_RunEQS : public UBTService_BlackboardBase
	{
	public:
		struct FEQSParametrizedQueryExecutionRequest               EQSRequest;                                              // 0x0098(0x0048) Edit, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VKFO[0x10];                                  // 0x00E0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_BlueprintBase
	 * Size -> 0x0038 (FullSize[0x00A8] - InheritedSize[0x0070])
	 */
	class UBTTask_BlueprintBase : public UBTTaskNode
	{
	public:
		class AAIController*                                       AIOwner;                                                 // 0x0070(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AActor*                                              ActorOwner;                                              // 0x0078(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FIntervalCountdown                                  TickInterval;                                            // 0x0080(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N26U[0x18];                                  // 0x0088(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bShowPropertyDetails : 1;                                // 0x00A0(0x0001) BIT_FIELD Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WQ50[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetFinishOnMessageWithId(const class FName& MessageName, int32_t RequestID);
		void SetFinishOnMessage(const class FName& MessageName);
		void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
		void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
		void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ReceiveExecute(class AActor* OwnerActor);
		void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ReceiveAbort(class AActor* OwnerActor);
		bool IsTaskExecuting();
		bool IsTaskAborting();
		void FinishExecute(bool bSuccess);
		void FinishAbort();
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_FinishWithResult
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UBTTask_FinishWithResult : public UBTTaskNode
	{
	public:
		EBTNodeResult                                              Result;                                                  // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BQ7F[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_GameplayTaskBase
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UBTTask_GameplayTaskBase : public UBTTaskNode
	{
	public:
		unsigned char                                              bWaitForGameplayTask : 1;                                // 0x0070(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TWQP[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_MakeNoise
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UBTTask_MakeNoise : public UBTTaskNode
	{
	public:
		float                                                      Loudnes;                                                 // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5LVP[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_MoveTo
	 * Size -> 0x0018 (FullSize[0x00B0] - InheritedSize[0x0098])
	 */
	class UBTTask_MoveTo : public UBTTask_BlackboardBase
	{
	public:
		float                                                      AcceptableRadius;                                        // 0x0098(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WN90[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              FilterClass;                                             // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ObservedBlackboardValueTolerance;                        // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bObserveBlackboardValue : 1;                             // 0x00AC(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowStrafe : 1;                                        // 0x00AC(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowPartialPath : 1;                                   // 0x00AC(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bTrackMovingGoal : 1;                                    // 0x00AC(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bProjectGoalLocation : 1;                                // 0x00AC(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bReachTestIncludesAgentRadius : 1;                       // 0x00AC(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bReachTestIncludesGoalRadius : 1;                        // 0x00AC(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bStopOnOverlap : 1;                                      // 0x00AC(0x0001) BIT_FIELD Edit, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bStopOnOverlapNeedsUpdate : 1;                           // 0x00AD(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HT35[0x2];                                   // 0x00AE(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_MoveDirectlyToward
	 * Size -> 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
	 */
	class UBTTask_MoveDirectlyToward : public UBTTask_MoveTo
	{
	public:
		unsigned char                                              bDisablePathUpdateOnGoalLocationChange : 1;              // 0x00B0(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bProjectVectorGoalToNavigation : 1;                      // 0x00B0(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUpdatedDeprecatedProperties : 1;                        // 0x00B0(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SE34[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_PawnActionBase
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UBTTask_PawnActionBase : public UBTTaskNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_PlayAnimation
	 * Size -> 0x0040 (FullSize[0x00B0] - InheritedSize[0x0070])
	 */
	class UBTTask_PlayAnimation : public UBTTaskNode
	{
	public:
		class UAnimationAsset*                                     AnimationToPlay;                                         // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bLooping : 1;                                            // 0x0078(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNonBlocking : 1;                                        // 0x0078(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YIDM[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBehaviorTreeComponent*                              MyOwnerComp;                                             // 0x0080(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              CachedSkelMesh;                                          // 0x0088(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QCDQ[0x20];                                  // 0x0090(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_PlaySound
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UBTTask_PlaySound : public UBTTaskNode
	{
	public:
		class USoundCue*                                           SoundToPlay;                                             // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_PushPawnAction
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UBTTask_PushPawnAction : public UBTTask_PawnActionBase
	{
	public:
		class UPawnAction*                                         Action;                                                  // 0x0070(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_RotateToFaceBBEntry
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
	{
	public:
		float                                                      Precision;                                               // 0x0098(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3HFV[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_RunBehavior
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UBTTask_RunBehavior : public UBTTaskNode
	{
	public:
		class UBehaviorTree*                                       BehaviorAsset;                                           // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_RunBehaviorDynamic
	 * Size -> 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
	 */
	class UBTTask_RunBehaviorDynamic : public UBTTaskNode
	{
	public:
		struct FGameplayTag                                        InjectionTag;                                            // 0x0070(0x0008) Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBehaviorTree*                                       DefaultBehaviorAsset;                                    // 0x0078(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBehaviorTree*                                       BehaviorAsset;                                           // 0x0080(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_RunEQSQuery
	 * Size -> 0x00B8 (FullSize[0x0150] - InheritedSize[0x0098])
	 */
	class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
	{
	public:
		class UEnvQuery*                                           QueryTemplate;                                           // 0x0098(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FEnvNamedValue>                              QueryParams;                                             // 0x00A0(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FAIDynamicParam>                             QueryConfig;                                             // 0x00B0(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		EEnvQueryRunMode                                           RunMode;                                                 // 0x00C0(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KVJ2[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              EQSQueryBlackboardKey;                                   // 0x00C8(0x0028) Edit, EditConst, NativeAccessSpecifierPublic
		bool                                                       bUseBBKey;                                               // 0x00F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3ZXT[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEQSParametrizedQueryExecutionRequest               EQSRequest;                                              // 0x00F8(0x0048) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VZTZ[0x10];                                  // 0x0140(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_SetTagCooldown
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	class UBTTask_SetTagCooldown : public UBTTaskNode
	{
	public:
		struct FGameplayTag                                        CooldownTag;                                             // 0x0070(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAddToExistingDuration;                                  // 0x0078(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FSJB[0x3];                                   // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CooldownDuration;                                        // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_Wait
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UBTTask_Wait : public UBTTaskNode
	{
	public:
		float                                                      WaitTime;                                                // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RandomDeviation;                                         // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.BTTask_WaitBlackboardTime
	 * Size -> 0x0028 (FullSize[0x00A0] - InheritedSize[0x0078])
	 */
	class UBTTask_WaitBlackboardTime : public UBTTask_Wait
	{
	public:
		struct FBlackboardKeySelector                              BlackboardKey;                                           // 0x0078(0x0028) Edit, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.CrowdAgentInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCrowdAgentInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.PathFollowingComponent
	 * Size -> 0x01A0 (FullSize[0x0250] - InheritedSize[0x00B0])
	 */
	class UPathFollowingComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_TV6A[0x38];                                  // 0x00B0(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNavMovementComponent*                               MovementComp;                                            // 0x00E8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CNRE[0x8];                                   // 0x00F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ANavigationData*                                     MyNavData;                                               // 0x00F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LH0N[0x150];                                 // 0x0100(0x0150) MISSED OFFSET (PADDING)

	public:
		void OnNavDataRegistered(class ANavigationData* NavData);
		void OnActorBump(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		struct FVector GetPathDestination();
		EPathFollowingAction GetPathActionType();
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.CrowdFollowingComponent
	 * Size -> 0x0048 (FullSize[0x0298] - InheritedSize[0x0250])
	 */
	class UCrowdFollowingComponent : public UPathFollowingComponent
	{
	public:
		unsigned char                                              UnknownData_4J1R[0x18];                                  // 0x0250(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CrowdAgentMoveDirection;                                 // 0x0268(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0Y02[0x24];                                  // 0x0274(0x0024) MISSED OFFSET (PADDING)

	public:
		void SuspendCrowdSteering(bool bSuspend);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.CrowdManager
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UCrowdManager : public UCrowdManagerBase
	{
	public:
		class ANavigationData*                                     MyNavData;                                               // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FCrowdAvoidanceConfig>                       AvoidanceConfig;                                         // 0x0030(0x0010) Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		TArray<struct FCrowdAvoidanceSamplingPattern>              SamplingPatterns;                                        // 0x0040(0x0010) Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		int32_t                                                    MaxAgents;                                               // 0x0050(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxAgentRadius;                                          // 0x0054(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxAvoidedAgents;                                        // 0x0058(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxAvoidedWalls;                                         // 0x005C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NavmeshCheckInterval;                                    // 0x0060(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PathOptimizationInterval;                                // 0x0064(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SeparationDirClamp;                                      // 0x0068(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PathOffsetRadiusMultiplier;                              // 0x006C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TM1T : 4;                                    // 0x0070(0x0001) BIT_FIELD (PADDING)
		unsigned char                                              bResolveCollisions : 1;                                  // 0x0070(0x0001) BIT_FIELD Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N3PY[0x7F];                                  // 0x0071(0x007F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.DetourCrowdAIController
	 * Size -> 0x0000 (FullSize[0x0328] - InheritedSize[0x0328])
	 */
	class ADetourCrowdAIController : public AAIController
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQuery
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UEnvQuery : public UDataAsset
	{
	public:
		class FName                                                QueryName;                                               // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UEnvQueryOption*>                             Options;                                                 // 0x0038(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryContext_BlueprintBase
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_BlueprintBase : public UEnvQueryContext
	{
	public:
		unsigned char                                              UnknownData_NUIV[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation);
		void ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor);
		void ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet);
		void ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryContext_Item
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_Item : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryContext_Querier
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_Querier : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryDebugHelpers
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryDebugHelpers : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator_ActorsOfClass
	 * Size -> 0x0080 (FullSize[0x00D0] - InheritedSize[0x0050])
	 */
	class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
	{
	public:
		class UClass*                                              SearchedActorClass;                                      // 0x0050(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAIDataProviderBoolValue                            GenerateOnlyActorsInRadius;                              // 0x0058(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           SearchRadius;                                            // 0x0090(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UClass*                                              SearchCenter;                                            // 0x00C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator_BlueprintBase
	 * Size -> 0x0030 (FullSize[0x0080] - InheritedSize[0x0050])
	 */
	class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
	{
	public:
		class FText                                                GeneratorsActionDescription;                             // 0x0050(0x0018) Edit, NativeAccessSpecifierPublic
		class UClass*                                              Context;                                                 // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              GeneratedItemType;                                       // 0x0070(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VZBQ[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)

	public:
		class UObject* GetQuerier();
		void DoItemGeneration(TArray<struct FVector> ContextLocations);
		void AddGeneratedVector(const struct FVector& GeneratedVector);
		void AddGeneratedActor(class AActor* GeneratedActor);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator_Composite
	 * Size -> 0x0020 (FullSize[0x0070] - InheritedSize[0x0050])
	 */
	class UEnvQueryGenerator_Composite : public UEnvQueryGenerator
	{
	public:
		TArray<class UEnvQueryGenerator*>                          Generators;                                              // 0x0050(0x0010) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              bAllowDifferentItemTypes : 1;                            // 0x0060(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bHasMatchingItemType : 1;                                // 0x0060(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CQ1H[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ForcedItemType;                                          // 0x0068(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator_ProjectedPoints
	 * Size -> 0x0030 (FullSize[0x0080] - InheritedSize[0x0050])
	 */
	class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
	{
	public:
		struct FEnvTraceData                                       ProjectionData;                                          // 0x0050(0x0030) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator_Cone
	 * Size -> 0x00F0 (FullSize[0x0170] - InheritedSize[0x0080])
	 */
	class UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints
	{
	public:
		struct FAIDataProviderFloatValue                           AlignedPointsDistance;                                   // 0x0080(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FAIDataProviderFloatValue                           ConeDegrees;                                             // 0x00B8(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FAIDataProviderFloatValue                           AngleStep;                                               // 0x00F0(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FAIDataProviderFloatValue                           Range;                                                   // 0x0128(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class UClass*                                              CenterActor;                                             // 0x0160(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bIncludeContextLocation : 1;                             // 0x0168(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZUCV[0x7];                                   // 0x0169(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator_CurrentLocation
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator
	{
	public:
		class UClass*                                              QueryContext;                                            // 0x0050(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator_Donut
	 * Size -> 0x0150 (FullSize[0x01D0] - InheritedSize[0x0080])
	 */
	class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
	{
	public:
		struct FAIDataProviderFloatValue                           InnerRadius;                                             // 0x0080(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           OuterRadius;                                             // 0x00B8(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderIntValue                             NumberOfRings;                                           // 0x00F0(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderIntValue                             PointsPerRing;                                           // 0x0128(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FEnvDirection                                       ArcDirection;                                            // 0x0160(0x0020) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           ArcAngle;                                                // 0x0180(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseSpiralPattern;                                       // 0x01B8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RF2K[0x7];                                   // 0x01B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Center;                                                  // 0x01C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDefineArc : 1;                                          // 0x01C8(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2VLJ[0x7];                                   // 0x01C9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator_OnCircle
	 * Size -> 0x0190 (FullSize[0x0210] - InheritedSize[0x0080])
	 */
	class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
	{
	public:
		struct FAIDataProviderFloatValue                           CircleRadius;                                            // 0x0080(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           SpaceBetween;                                            // 0x00B8(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderIntValue                             NumberOfPoints;                                          // 0x00F0(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		EPointOnCircleSpacingMethod                                PointOnCircleSpacingMethod;                              // 0x0128(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LPRZ[0x7];                                   // 0x0129(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEnvDirection                                       ArcDirection;                                            // 0x0130(0x0020) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           ArcAngle;                                                // 0x0150(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		float                                                      AngleRadians;                                            // 0x0188(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8LI9[0x4];                                   // 0x018C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CircleCenter;                                            // 0x0190(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreAnyContextActorsWhenGeneratingCircle;             // 0x0198(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WQPS[0x7];                                   // 0x0199(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIDataProviderFloatValue                           CircleCenterZOffset;                                     // 0x01A0(0x0038) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FEnvTraceData                                       TraceData;                                               // 0x01D8(0x0030) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              bDefineArc : 1;                                          // 0x0208(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GNAW[0x7];                                   // 0x0209(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator_SimpleGrid
	 * Size -> 0x0078 (FullSize[0x00F8] - InheritedSize[0x0080])
	 */
	class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
	{
	public:
		struct FAIDataProviderFloatValue                           GridSize;                                                // 0x0080(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           SpaceBetween;                                            // 0x00B8(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UClass*                                              GenerateAround;                                          // 0x00F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryGenerator_PathingGrid
	 * Size -> 0x0078 (FullSize[0x0170] - InheritedSize[0x00F8])
	 */
	class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid
	{
	public:
		struct FAIDataProviderBoolValue                            PathToItem;                                              // 0x00F8(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UClass*                                              NavigationFilter;                                        // 0x0130(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           ScanRangeMultiplier;                                     // 0x0138(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryItemType_ActorBase
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryItemType_ActorBase : public UEnvQueryItemType_VectorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryItemType_Actor
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryItemType_Actor : public UEnvQueryItemType_ActorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryItemType_Direction
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryItemType_Direction : public UEnvQueryItemType_VectorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryItemType_Point
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryItemType_Point : public UEnvQueryItemType_VectorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryManager
	 * Size -> 0x0108 (FullSize[0x0140] - InheritedSize[0x0038])
	 */
	class UEnvQueryManager : public UAISubsystem
	{
	public:
		unsigned char                                              UnknownData_P1V0[0x70];                                  // 0x0038(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FEnvQueryInstanceCache>                      InstanceCache;                                           // 0x00A8(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<class UEnvQueryContext*>                            LocalContexts;                                           // 0x00B8(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<class UEnvQueryInstanceBlueprintWrapper*>           GCShieldedWrappers;                                      // 0x00C8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_B869[0x54];                                  // 0x00D8(0x0054) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxAllowedTestingTime;                                   // 0x012C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bTestQueriesUsingBreadth;                                // 0x0130(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LR6K[0x3];                                   // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    QueryCountWarningThreshold;                              // 0x0134(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		double                                                     QueryCountWarningInterval;                               // 0x0138(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		class UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(class UObject* WorldContextObject, class UEnvQuery* QueryTemplate, class UObject* Querier, EEnvQueryRunMode RunMode, class UClass* WrapperClass);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryOption
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UEnvQueryOption : public UObject
	{
	public:
		class UEnvQueryGenerator*                                  Generator;                                               // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UEnvQueryTest*>                               Tests;                                                   // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryTest_Distance
	 * Size -> 0x0010 (FullSize[0x0208] - InheritedSize[0x01F8])
	 */
	class UEnvQueryTest_Distance : public UEnvQueryTest
	{
	public:
		EEnvTestDistance                                           TestMode;                                                // 0x01F8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AOHH[0x7];                                   // 0x01F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DistanceTo;                                              // 0x0200(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryTest_Dot
	 * Size -> 0x0048 (FullSize[0x0240] - InheritedSize[0x01F8])
	 */
	class UEnvQueryTest_Dot : public UEnvQueryTest
	{
	public:
		struct FEnvDirection                                       LineA;                                                   // 0x01F8(0x0020) Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FEnvDirection                                       LineB;                                                   // 0x0218(0x0020) Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected
		EEnvTestDot                                                TestMode;                                                // 0x0238(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAbsoluteValue;                                          // 0x0239(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_M07X[0x6];                                   // 0x023A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryTest_GameplayTags
	 * Size -> 0x0070 (FullSize[0x0268] - InheritedSize[0x01F8])
	 */
	class UEnvQueryTest_GameplayTags : public UEnvQueryTest
	{
	public:
		struct FGameplayTagQuery                                   TagQueryToMatch;                                         // 0x01F8(0x0048) Edit, Protected, NativeAccessSpecifierProtected
		bool                                                       bUpdatedToUseQuery;                                      // 0x0240(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EGameplayContainerMatchType                                TagsToMatch;                                             // 0x0241(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_94WG[0x6];                                   // 0x0242(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               GameplayTags;                                            // 0x0248(0x0020) Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryTest_Overlap
	 * Size -> 0x0020 (FullSize[0x0218] - InheritedSize[0x01F8])
	 */
	class UEnvQueryTest_Overlap : public UEnvQueryTest
	{
	public:
		struct FEnvOverlapData                                     OverlapData;                                             // 0x01F8(0x0020) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryTest_Pathfinding
	 * Size -> 0x0088 (FullSize[0x0280] - InheritedSize[0x01F8])
	 */
	class UEnvQueryTest_Pathfinding : public UEnvQueryTest
	{
	public:
		EEnvTestPathfinding                                        TestMode;                                                // 0x01F8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0S3Z[0x7];                                   // 0x01F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Context;                                                 // 0x0200(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAIDataProviderBoolValue                            PathFromContext;                                         // 0x0208(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderBoolValue                            SkipUnreachable;                                         // 0x0240(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic
		class UClass*                                              FilterClass;                                             // 0x0278(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryTest_PathfindingBatch
	 * Size -> 0x0038 (FullSize[0x02B8] - InheritedSize[0x0280])
	 */
	class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding
	{
	public:
		struct FAIDataProviderFloatValue                           ScanRangeMultiplier;                                     // 0x0280(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryTest_Project
	 * Size -> 0x0030 (FullSize[0x0228] - InheritedSize[0x01F8])
	 */
	class UEnvQueryTest_Project : public UEnvQueryTest
	{
	public:
		struct FEnvTraceData                                       ProjectionData;                                          // 0x01F8(0x0030) Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryTest_Random
	 * Size -> 0x0000 (FullSize[0x01F8] - InheritedSize[0x01F8])
	 */
	class UEnvQueryTest_Random : public UEnvQueryTest
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryTest_Trace
	 * Size -> 0x00E0 (FullSize[0x02D8] - InheritedSize[0x01F8])
	 */
	class UEnvQueryTest_Trace : public UEnvQueryTest
	{
	public:
		struct FEnvTraceData                                       TraceData;                                               // 0x01F8(0x0030) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FAIDataProviderBoolValue                            TraceFromContext;                                        // 0x0228(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           ItemHeightOffset;                                        // 0x0260(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           ContextHeightOffset;                                     // 0x0298(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic
		class UClass*                                              Context;                                                 // 0x02D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryTest_Volume
	 * Size -> 0x0018 (FullSize[0x0210] - InheritedSize[0x01F8])
	 */
	class UEnvQueryTest_Volume : public UEnvQueryTest
	{
	public:
		class UClass*                                              VolumeContext;                                           // 0x01F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              VolumeClass;                                             // 0x0200(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bDoComplexVolumeTest : 1;                                // 0x0208(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BGYW[0x7];                                   // 0x0209(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EnvQueryTypes
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryTypes : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EQSQueryResultSourceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEQSQueryResultSourceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EQSRenderingComponent
	 * Size -> 0x0040 (FullSize[0x0480] - InheritedSize[0x0440])
	 */
	class UEQSRenderingComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_07EP[0x40];                                  // 0x0440(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.EQSTestingPawn
	 * Size -> 0x0098 (FullSize[0x0550] - InheritedSize[0x04B8])
	 */
	class AEQSTestingPawn : public ACharacter
	{
	public:
		unsigned char                                              UnknownData_LZKD[0x8];                                   // 0x04B8(0x0008) Fix Super Size
		class UEnvQuery*                                           QueryTemplate;                                           // 0x04C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FEnvNamedValue>                              QueryParams;                                             // 0x04C8(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FAIDynamicParam>                             QueryConfig;                                             // 0x04D8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      TimeLimitPerStep;                                        // 0x04E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StepToDebugDraw;                                         // 0x04EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEnvQueryHightlightMode                                    HighlightMode;                                           // 0x04F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B3PT[0x3];                                   // 0x04F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bDrawLabels : 1;                                         // 0x04F4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawFailedItems : 1;                                    // 0x04F4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bReRunQueryOnlyOnFinishedMove : 1;                       // 0x04F4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bShouldBeVisibleInGame : 1;                              // 0x04F4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bTickDuringGame : 1;                                     // 0x04F4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y1XC[0x3];                                   // 0x04F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EEnvQueryRunMode                                           QueryingMode;                                            // 0x04F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CJ6F[0x7];                                   // 0x04F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNavAgentProperties                                 NavAgentProperties;                                      // 0x0500(0x0030) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EC1V[0x20];                                  // 0x0530(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.GenericTeamAgentInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGenericTeamAgentInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.GridPathAIController
	 * Size -> 0x0000 (FullSize[0x0328] - InheritedSize[0x0328])
	 */
	class AGridPathAIController : public AAIController
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.GridPathFollowingComponent
	 * Size -> 0x0030 (FullSize[0x0280] - InheritedSize[0x0250])
	 */
	class UGridPathFollowingComponent : public UPathFollowingComponent
	{
	public:
		class UNavLocalGridManager*                                GridManager;                                             // 0x0250(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KJUJ[0x28];                                  // 0x0258(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.NavFilter_AIControllerDefault
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UNavFilter_AIControllerDefault : public UNavigationQueryFilter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.NavLinkProxy
	 * Size -> 0x0050 (FullSize[0x0270] - InheritedSize[0x0220])
	 */
	class ANavLinkProxy : public AActor
	{
	public:
		unsigned char                                              UnknownData_4H7I[0x10];                                  // 0x0220(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNavigationLink>                             PointLinks;                                              // 0x0230(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNavigationSegmentLink>                      SegmentLinks;                                            // 0x0240(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UNavLinkCustomComponent*                             SmartLinkComp;                                           // 0x0250(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bSmartLinkIsRelevant;                                    // 0x0258(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4E53[0x7];                                   // 0x0259(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSmartLinkReached;                                      // 0x0260(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected

	public:
		void SetSmartLinkEnabled(bool bEnabled);
		void ResumePathFollowing(class AActor* Agent);
		void ReceiveSmartLinkReached(class AActor* Agent, const struct FVector& destination);
		bool IsSmartLinkEnabled();
		bool HasMovingAgents();
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.NavLocalGridManager
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UNavLocalGridManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_OXOX[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (PADDING)

	public:
		bool SetLocalNavigationGridDensity(class UObject* WorldContextObject, float CellSize);
		void RemoveLocalNavigationGrid(class UObject* WorldContextObject, int32_t GridId, bool bRebuildGrids);
		bool FindLocalNavigationGridPath(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<struct FVector>* PathPoints);
		int32_t AddLocalNavigationGridForPoints(class UObject* WorldContextObject, TArray<struct FVector> locations, int32_t Radius2D, float Height, bool bRebuildGrids);
		int32_t AddLocalNavigationGridForPoint(class UObject* WorldContextObject, const struct FVector& Location, int32_t Radius2D, float Height, bool bRebuildGrids);
		int32_t AddLocalNavigationGridForCapsule(class UObject* WorldContextObject, const struct FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int32_t Radius2D, float Height, bool bRebuildGrids);
		int32_t AddLocalNavigationGridForBox(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent, const struct FRotator& Rotation, int32_t Radius2D, float Height, bool bRebuildGrids);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.PathFollowingManager
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPathFollowingManager : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.PawnAction
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UPawnAction : public UObject
	{
	public:
		class UPawnAction*                                         ChildAction;                                             // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPawnAction*                                         ParentAction;                                            // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPawnActionsComponent*                               OwnerComponent;                                          // 0x0038(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UObject*                                             Instigator;                                              // 0x0040(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBrainComponent*                                     BrainComp;                                               // 0x0048(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_H76V[0x30];                                  // 0x0050(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bAllowNewSameClassInstance : 1;                          // 0x0080(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bReplaceActiveSameClassInstance : 1;                     // 0x0080(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bShouldPauseMovement : 1;                                // 0x0080(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bAlwaysNotifyOnFinished : 1;                             // 0x0080(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2LZD[0x17];                                  // 0x0081(0x0017) MISSED OFFSET (PADDING)

	public:
		EAIRequestPriority GetActionPriority();
		void Finish(EPawnActionResult WithResult);
		class UPawnAction* CreateActionInstance(class UObject* WorldContextObject, class UClass* ActionClass);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.PawnAction_BlueprintBase
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UPawnAction_BlueprintBase : public UPawnAction
	{
	public:
		void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
		void ActionStart(class APawn* ControlledPawn);
		void ActionResume(class APawn* ControlledPawn);
		void ActionPause(class APawn* ControlledPawn);
		void ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.PawnAction_Move
	 * Size -> 0x0050 (FullSize[0x00E8] - InheritedSize[0x0098])
	 */
	class UPawnAction_Move : public UPawnAction
	{
	public:
		class AActor*                                              GoalActor;                                               // 0x0098(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             GoalLocation;                                            // 0x00A0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AcceptableRadius;                                        // 0x00AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              FilterClass;                                             // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bAllowStrafe : 1;                                        // 0x00B8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bFinishOnOverlap : 1;                                    // 0x00B8(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bUsePathfinding : 1;                                     // 0x00B8(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bAllowPartialPath : 1;                                   // 0x00B8(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bProjectGoalToNavigation : 1;                            // 0x00B8(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bUpdatePathToGoal : 1;                                   // 0x00B8(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bAbortChildActionOnPathChange : 1;                       // 0x00B8(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BNI5[0x2F];                                  // 0x00B9(0x002F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.PawnAction_Repeat
	 * Size -> 0x0020 (FullSize[0x00B8] - InheritedSize[0x0098])
	 */
	class UPawnAction_Repeat : public UPawnAction
	{
	public:
		class UPawnAction*                                         ActionToRepeat;                                          // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPawnAction*                                         RecentActionCopy;                                        // 0x00A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPawnActionFailHandling                                    ChildFailureHandlingMode;                                // 0x00A8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PLFY[0xF];                                   // 0x00A9(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.PawnAction_Sequence
	 * Size -> 0x0028 (FullSize[0x00C0] - InheritedSize[0x0098])
	 */
	class UPawnAction_Sequence : public UPawnAction
	{
	public:
		TArray<class UPawnAction*>                                 ActionSequence;                                          // 0x0098(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		EPawnActionFailHandling                                    ChildFailureHandlingMode;                                // 0x00A8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GUUL[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPawnAction*                                         RecentActionCopy;                                        // 0x00B0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L4D2[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.PawnAction_Wait
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	class UPawnAction_Wait : public UPawnAction
	{
	public:
		float                                                      TimeToWait;                                              // 0x0098(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S6A9[0xC];                                   // 0x009C(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.PawnActionsComponent
	 * Size -> 0x0038 (FullSize[0x00E8] - InheritedSize[0x00B0])
	 */
	class UPawnActionsComponent : public UActorComponent
	{
	public:
		class APawn*                                               ControlledPawn;                                          // 0x00B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FPawnActionStack>                            ActionStacks;                                            // 0x00B8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FPawnActionEvent>                            ActionEvents;                                            // 0x00C8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UPawnAction*                                         CurrentAction;                                           // 0x00D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OU80[0x8];                                   // 0x00E0(0x0008) MISSED OFFSET (PADDING)

	public:
		bool K2_PushAction(class UPawnAction* NewAction, EAIRequestPriority Priority, class UObject* Instigator);
		bool K2_PerformAction(class APawn* Pawn, class UPawnAction* Action, EAIRequestPriority Priority);
		EPawnActionAbortState K2_ForceAbortAction(class UPawnAction* ActionToAbort);
		EPawnActionAbortState K2_AbortAction(class UPawnAction* ActionToAbort);
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.PawnSensingComponent
	 * Size -> 0x0048 (FullSize[0x00F8] - InheritedSize[0x00B0])
	 */
	class UPawnSensingComponent : public UActorComponent
	{
	public:
		float                                                      HearingThreshold;                                        // 0x00B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LOSHearingThreshold;                                     // 0x00B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SightRadius;                                             // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SensingInterval;                                         // 0x00BC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HearingMaxSoundAge;                                      // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableSensingUpdates : 1;                               // 0x00C4(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOnlySensePlayers : 1;                                   // 0x00C4(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSeePawns : 1;                                           // 0x00C4(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bHearNoises : 1;                                         // 0x00C4(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WK8M[0xB];                                   // 0x00C5(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSeePawn;                                               // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHearNoise;                                             // 0x00E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      PeripheralVisionAngle;                                   // 0x00F0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PeripheralVisionCosine;                                  // 0x00F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetSensingUpdatesEnabled(bool bEnabled);
		void SetSensingInterval(float NewSensingInterval);
		void SetPeripheralVisionAngle(float NewPeripheralVisionAngle);
		void SeePawnDelegate__DelegateSignature(class APawn* Pawn);
		void HearNoiseDelegate__DelegateSignature(class APawn* Instigator, const struct FVector& Location, float Volume);
		float GetPeripheralVisionCosine();
		float GetPeripheralVisionAngle();
		static UClass* StaticClass();
	};

	/**
	 * Class AIModule.VisualLoggerExtension
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVisualLoggerExtension : public UObject
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
