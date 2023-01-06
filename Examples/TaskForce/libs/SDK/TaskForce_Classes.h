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
	 * Class TaskForce.TaskForceBeaconClient
	 * Size -> 0x0028 (FullSize[0x02E8] - InheritedSize[0x02C0])
	 */
	class ATaskForceBeaconClient : public AOnlineBeaconClient
	{
	public:
		unsigned char                                              UnknownData_LL0O[0x28];                                  // 0x02C0(0x0028) MISSED OFFSET (PADDING)

	public:
		void ServerPong(int32_t BuildID, const class FString& Password);
		void ClientPing(bool bNeedsPassword);
		void ClientJoin(bool bCanJoin, const class FString& JoinSteamP2P, const class FString& JoinHostAddress, const class FString& FailedMessage);
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceBeaconHost
	 * Size -> 0x0020 (FullSize[0x0288] - InheritedSize[0x0268])
	 */
	class ATaskForceBeaconHost : public AOnlineBeaconHostObject
	{
	public:
		unsigned char                                              UnknownData_AR1E[0x20];                                  // 0x0268(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceBomb
	 * Size -> 0x00A0 (FullSize[0x02F0] - InheritedSize[0x0250])
	 */
	class ATaskForceBomb : public AStaticMeshActor
	{
	public:
		unsigned char                                              UnknownData_CDTY[0x18];                                  // 0x0250(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         CustomMesh;                                              // 0x0268(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              AttachSocket;                                            // 0x0270(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, RepNotify, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTransform                                          AttachTransform;                                         // 0x0280(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, Net, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      PlantTime;                                               // 0x02B0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ExplodeTime;                                             // 0x02B4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DefuseTime;                                              // 0x02B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SDYD[0x4];                                   // 0x02BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ExplosionTemplate;                                       // 0x02C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FBombData                                           WeaponConfig;                                            // 0x02C8(0x0018) Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bExploded;                                               // 0x02E0(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPlanted;                                                // 0x02E1(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDefused;                                                // 0x02E2(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bShowIcon;                                               // 0x02E3(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    BombTeam;                                                // 0x02E4(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9Y1X[0x8];                                   // 0x02E8(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetCustomMesh(class UStaticMesh* Mesh, const class FString& Socket, const struct FTransform& Transform);
		void ResetBomb();
		void PlantBombResetPhysics();
		void PlantBomb();
		void PickupBomb(class ATaskForceCharacter* NewOwner);
		void OnRep_Exploded();
		void OnRep_CustomMesh();
		void OnRep_AttachTransform();
		void OnRep_AttachSocket();
		void ExplodeBomb();
		void DropBomb();
		void DefuseBomb();
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceBombZone
	 * Size -> 0x0008 (FullSize[0x0250] - InheritedSize[0x0248])
	 */
	class ATaskForceBombZone : public ATriggerBox
	{
	public:
		int32_t                                                    OwningTeam;                                              // 0x0248(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bShowIcon;                                               // 0x024C(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ORC4[0x3];                                   // 0x024D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceBot_FindPointNearEnemy
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UTaskForceBot_FindPointNearEnemy : public UBTTask_BlackboardBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceBot_FindPointNearTarget
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UTaskForceBot_FindPointNearTarget : public UBTTask_BlackboardBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceBot_HasLoSTo
	 * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
	 */
	class UTaskForceBot_HasLoSTo : public UBTDecorator
	{
	public:
		struct FBlackboardKeySelector                              EnemyKey;                                                // 0x0068(0x0028) Edit, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceBotController
	 * Size -> 0x0030 (FullSize[0x0378] - InheritedSize[0x0348])
	 */
	class ATaskForceBotController : public AAIController
	{
	public:
		class UBlackboardComponent*                                BlackboardComp;                                          // 0x0348(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBehaviorTreeComponent*                              BehaviorComp;                                            // 0x0350(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      TriggerStickTime;                                        // 0x0358(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WTC4[0x1C];                                  // 0x035C(0x001C) MISSED OFFSET (PADDING)

	public:
		void ShootEnemy();
		bool IsHostage();
		void FindClosestTarget();
		bool FindClosestEnemyWithLOS(class ATaskForceCharacter* ExcludeEnemy);
		void FindClosestEnemy();
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceBreach
	 * Size -> 0x0020 (FullSize[0x0260] - InheritedSize[0x0240])
	 */
	class ATaskForceBreach : public AActor
	{
	public:
		class UClass*                                              ExplosionTemplate;                                       // 0x0240(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FBreachData                                         WeaponConfig;                                            // 0x0248(0x0018) Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		void TriggerBreach();
		void ResetState();
		bool IsBreachExploded();
		bool IsBreachActive();
		void Explode(const struct FVector& Location);
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceButton
	 * Size -> 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
	 */
	class ATaskForceButton : public AActor
	{
	public:
		void ToggleButton(bool bReleased);
		void ResetState();
		bool IsButtonPressable();
		class FString GetButtonText();
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceCharacter
	 * Size -> 0x06B8 (FullSize[0x0D10] - InheritedSize[0x0658])
	 */
	class ATaskForceCharacter : public ACharacter
	{
	public:
		class UBehaviorTree*                                       BotBehavior;                                             // 0x0658(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBehaviorTree*                                       HostageBehavior;                                         // 0x0660(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USpringArmComponent*                                 CameraBoom;                                              // 0x0668(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCameraComponent*                                    FollowCamera;                                            // 0x0670(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsDying : 1;                                            // 0x0678(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9FY6[0x3];                                   // 0x0679(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Health;                                                  // 0x067C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpawnTeamNum;                                            // 0x0680(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentTaunt;                                            // 0x0684(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      CurrentHits;                                             // 0x0688(0x0010) Net, ZeroConstructor, NativeAccessSpecifierPublic
		class UClass*                                              FootstepTemplate;                                        // 0x0698(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FootstepRadius;                                          // 0x06A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_34NA[0x4];                                   // 0x06A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATaskForceButton*                                    CurrentButton;                                           // 0x06A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AY0E[0x8];                                   // 0x06B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATaskForceBomb*                                      CurrentBomb;                                             // 0x06B8(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I9HQ[0x8];                                   // 0x06C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BombZoneCount;                                           // 0x06C8(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsPlanting;                                              // 0x06CC(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsDefusing;                                              // 0x06CD(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsTaunting;                                              // 0x06CE(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7BNY[0x11];                                  // 0x06CF(0x0011) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                BombAttachPoint;                                         // 0x06E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                BombPlantAttachPoint;                                    // 0x06E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ATaskForcePlayerState*                               FollowTarget;                                            // 0x06F0(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ExtractionZoneCount;                                     // 0x06F8(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                WeaponAttachPoint;                                       // 0x06FC(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                HeadAttachPoint;                                         // 0x0704(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                ScopeAttachPoint;                                        // 0x070C(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                EyesAttachPoint;                                         // 0x0714(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                EarsAttachPoint;                                         // 0x071C(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                OffsetAttachPoint;                                       // 0x0724(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_62BB[0x4];                                   // 0x072C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATaskForceWeapon*                                    CurrentWeapon;                                           // 0x0730(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FHitData                                            LastTakeHitInfo;                                         // 0x0738(0x01E8) Net, Transient, RepNotify, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GVE3[0x8];                                   // 0x0920(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      DefaultInventoryClasses;                                 // 0x0928(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<class ATaskForceWeapon*>                            Inventory;                                               // 0x0938(0x0010) Net, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		float                                                      fIsTargeting;                                            // 0x0948(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      fIsZooming;                                              // 0x094C(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      fProjectilePower;                                        // 0x0950(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bWantsToRun : 1;                                         // 0x0954(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bWantsToWalk : 1;                                        // 0x0954(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bWantsToCrouch : 1;                                      // 0x0954(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bWantsToProne : 1;                                       // 0x0954(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bWantsToDive : 1;                                        // 0x0954(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2035[0x17];                                  // 0x0955(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bWantsToLeanLeft : 1;                                    // 0x096C(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bWantsToLeanRight : 1;                                   // 0x096C(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bIsInJump : 1;                                           // 0x096C(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bIsInThrow : 1;                                          // 0x096C(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bCanClimb : 1;                                           // 0x096C(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bWantsToDrop : 1;                                        // 0x096C(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bWantsToPull : 1;                                        // 0x096C(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bWantsToSlide : 1;                                       // 0x096C(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WEBO[0x3];                                   // 0x096D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FClimbData                                          ClimbData;                                               // 0x0970(0x0038) Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FLadderData                                         LadderData;                                              // 0x09A8(0x003C) Net, Transient, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              bWantsToRunToggled : 1;                                  // 0x09E4(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bWantsToWalkToggled : 1;                                 // 0x09E4(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bWantsToFire : 1;                                        // 0x09E4(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bCanFire : 1;                                            // 0x09E4(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bPersistRagdoll : 1;                                     // 0x09E4(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GAIF[0x43];                                  // 0x09E5(0x0043) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       FallDebug;                                               // 0x0A28(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_K650[0x3];                                   // 0x0A29(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FallDamageSafe;                                          // 0x0A2C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FallDamageKill;                                          // 0x0A30(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FallDamageThreshold;                                     // 0x0A34(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RadialImpulseStrength;                                   // 0x0A38(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OYBS[0x4];                                   // 0x0A3C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              FallDamageClass;                                         // 0x0A40(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       ClimbDebug;                                              // 0x0A48(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2TFK[0x3];                                   // 0x0A49(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ClimbHeightMaximum;                                      // 0x0A4C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ClimbHeightJump;                                         // 0x0A50(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ClimbHeightHigh;                                         // 0x0A54(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ClimbHeightLow;                                          // 0x0A58(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ClimbRunMoveFraction;                                    // 0x0A5C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ClimbSweepDistance;                                      // 0x0A60(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ClimbRunSweepDistance;                                   // 0x0A64(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ClimbYawLimit;                                           // 0x0A68(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ClimbRunYawLimit;                                        // 0x0A6C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FClimbSettings                                      ClimbDefault;                                            // 0x0A70(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FClimbSettings                                      ClimbJump;                                               // 0x0A80(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FClimbSettings                                      ClimbHigh;                                               // 0x0A90(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FClimbSettings                                      ClimbLow;                                                // 0x0AA0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FClimbSettings                                      ClimbRun;                                                // 0x0AB0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FClimbSettings                                      ClimbRunJump;                                            // 0x0AC0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FClimbSettings                                      ClimbDrop;                                               // 0x0AD0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FClimbSettings                                      ClimbPull;                                               // 0x0AE0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       LadderDebug;                                             // 0x0AF0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JKG3[0x3];                                   // 0x0AF1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LadderOffset;                                            // 0x0AF4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LadderSpacing;                                           // 0x0AF8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LadderSweepDistance;                                     // 0x0AFC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LadderSpinSweepDistance;                                 // 0x0B00(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FClimbSettings                                      LadderStep;                                              // 0x0B04(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FClimbSettings                                      LadderSpin;                                              // 0x0B14(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FClimbSettings                                      LadderDrop;                                              // 0x0B24(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FClimbSettings                                      LadderPull;                                              // 0x0B34(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      ActionSweepDistance;                                     // 0x0B44(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PickupSweepDistance;                                     // 0x0B48(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ProneEyeHeight;                                          // 0x0B4C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BotTurnSpeedCharacter;                                   // 0x0B50(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BotTurnSpeedController;                                  // 0x0B54(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsFirstPerson : 1;                                      // 0x0B58(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XPQ9[0xF];                                   // 0x0B59(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bIsProne : 1;                                            // 0x0B68(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TQHO[0x7];                                   // 0x0B69(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHitboxBones                                        Bones;                                                   // 0x0B70(0x0110) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		float                                                      BotSpreadFactor;                                         // 0x0C80(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LeanDistance;                                            // 0x0C84(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LeanTime;                                                // 0x0C88(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ProjectileVelocity;                                      // 0x0C8C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      JumpFloodTime;                                           // 0x0C90(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      JumpFractionSpread;                                      // 0x0C94(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      JumpFractionTime;                                        // 0x0C98(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DiveSpeed;                                               // 0x0C9C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DiveAngle;                                               // 0x0CA0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StanceCrouchToStandTime;                                 // 0x0CA4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StanceCrouchToStandIdleTime;                             // 0x0CA8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StanceProneToStandTime;                                  // 0x0CAC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StanceProneToCrouchTime;                                 // 0x0CB0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StanceStandToCrouchTime;                                 // 0x0CB4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StanceStandToCrouchIdleTime;                             // 0x0CB8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StanceStandToProneTime;                                  // 0x0CBC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StanceCrouchToProneTime;                                 // 0x0CC0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StanceDiveToProneTime;                                   // 0x0CC4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StanceHoldTime;                                          // 0x0CC8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AimHoldTime;                                             // 0x0CCC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StandCameraHeight;                                       // 0x0CD0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CrouchCameraHeight;                                      // 0x0CD4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CrouchIdleCameraHeight;                                  // 0x0CD8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CrouchIdleCameraTime;                                    // 0x0CDC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ProneCameraHeight;                                       // 0x0CE0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CameraOffsetSpeed;                                       // 0x0CE4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FALP[0x8];                                   // 0x0CE8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USkeletalMesh*>                               Heads;                                                   // 0x0CF0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		TArray<class USkeletalMesh*>                               Hats;                                                    // 0x0D00(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected

	public:
		void UnProne(bool bClientSimulation);
		void ThrowProjectile();
		void TauntReset();
		void StopProjectile();
		void StartLadderPull();
		void StartLadderHang();
		void StartLadderDrop();
		void StartClimbJump();
		void StartClimbHang();
		void SpawnLadderFootstepEffects(class USoundCue* FootstepSound, const class FName& Socket);
		void SpawnFootstepEffects(const class FName& Socket, const class FName& DirectionSocket, bool IsLeftFoot);
		void SpawnCalloutEffects(class USoundCue* CalloutSound, const class FName& Socket, class USoundAttenuation* AttenuationSettings);
		bool ShouldPersistRagdoll();
		bool ShouldClimbRun();
		bool ShouldClimbLow();
		bool ShouldClimbJump();
		bool ShouldClimbHigh();
		void ServerTriggerVoiceTaunt();
		void ServerTriggerTaunt(class ATaskForceCharacter* Character);
		void ServerTriggerDoor(class ATaskForceDoor* Door);
		void ServerTriggerButton(class ATaskForceButton* Button, bool bReleased);
		void ServerTriggerBreach(class ATaskForceBreach* Breach);
		void ServerSetZooming(float fNewZooming);
		void ServerSetWalking(bool bNewWalking, bool bToggle);
		void ServerSetThrowing(bool bNewThrow);
		void ServerSetTargeting(float fNewTargeting);
		void ServerSetRunning(bool bNewRunning, bool bToggle);
		void ServerSetPower(float fNewPower);
		void ServerSetPlanting(bool bNewPlanting);
		void ServerSetLeaningRight(bool bNewLeaning, bool bToggle);
		void ServerSetLeaningLeft(bool bNewLeaning, bool bToggle);
		void ServerSetJumping(bool bNewJumping);
		void ServerSetFollow(class ATaskForceCharacter* Follower, class ATaskForceCharacter* Target);
		void ServerSetFirstPerson(bool bNewFirstPerson);
		void ServerSetFiring(bool bNewRunning, bool bToggle);
		void ServerSetDiving(bool bNewDiving);
		void ServerSetDefusing(class ATaskForceBomb* Bomb);
		void ServerSetClimbingLadder(bool bNewClimbing, bool bNewDropping, bool bNewPulling, bool bNewSliding, const struct FLadderData& Data);
		void ServerSetClimbing(bool bNewClimbing, bool bNewDropping, bool bNewPulling, const struct FClimbData& Data);
		void ServerPickupWeapon(class ATaskForceWeapon* NewWeapon);
		void ServerEquipWeapon(class ATaskForceWeapon* NewWeapon);
		void SendTauntMessage(const class FString& Message);
		void Prone(bool bClientSimulation);
		void PlantReset();
		void PlantBomb();
		void OnRep_LastTakeHitInfo();
		void OnRep_LadderData();
		void OnRep_IsProne();
		void OnRep_CurrentWeapon(class ATaskForceWeapon* LastWeapon);
		void OnRep_ClimbData();
		float LeanFraction();
		void K2_OnTauntMessage(int32_t Seed);
		void K2_OnTaunt3D(int32_t Seed);
		void K2_OnTaunt2D(int32_t Seed);
		void K2_OnTaunt();
		void K2_OnStartProne(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
		void K2_OnEndProne(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
		void K2_OnDeath(float KillingDamage, class APawn* InstigatingPawn, class AActor* DamageCauser);
		void K2_OnCallout(int32_t Seed);
		bool IsZooming();
		bool IsWalking();
		bool IsThrowing();
		bool IsTargeting();
		bool IsSpectateTarget();
		bool IsRunning();
		bool IsReloading();
		bool IsMoving();
		bool IsLocalOrSpectateTarget();
		bool IsLeaning();
		bool IsLadderStepping();
		bool IsLadderSpinning();
		bool IsLadderSliding();
		bool IsLadderPulling();
		bool IsLadderHanging();
		bool IsLadderDropping();
		bool IsJumping();
		bool IsInTaunt();
		bool IsInStanceTransition();
		bool IsInProneTransition();
		bool IsInCrouchTransition();
		bool IsHostage();
		bool IsFirstPerson();
		bool IsFiring();
		bool IsFalling();
		bool IsDiving();
		bool IsClimbPulling();
		bool IsClimbJumping();
		bool IsClimbingLadder();
		bool IsClimbing();
		bool IsClimbHanging();
		bool IsClimbDropping();
		bool IsBot();
		bool IsArming();
		bool IsAlive();
		bool HasShotgunEquipped();
		bool HasProjectileEquipped();
		bool HasProjectile();
		bool HasPistolEquipped();
		bool HasKnifeEquipped();
		class FName GetWeaponAttachPoint();
		class ATaskForceWeapon* GetWeapon();
		int32_t GetTauntID();
		float GetSpeedModifier();
		struct FVector GetScopeUpVector();
		struct FVector GetScopeRightVector();
		struct FVector GetScopeRightHandLocation(float CameraYaw, float CameraPitch, bool IsFirstPerson);
		struct FVector GetScopeLeftHandLocation(float CameraYaw, float CameraPitch, bool IsFirstPerson);
		struct FVector GetScopeForwardVector();
		class FName GetScopeAttachPoint();
		void GetProjectilePower(float* Power);
		void GetProjectileData(struct FVector* Origin, struct FVector* Direction, float* Radius, float* Velocity);
		float GetMaxAnimationSpeed();
		float GetLadderFraction();
		class FName GetHeadAttachPoint();
		struct FVector GetEyesLocation();
		struct FVector GetEarsLocation();
		struct FRotator GetAimOffsets();
		void FinishLadderSlide();
		void FinishLadderPull();
		void FinishLadderDrop();
		void FinishDive();
		void FinishClimbPull();
		void FinishClimbDrop();
		void CustomizeCharacter(class USkeletalMesh* Head, class USkeletalMesh* Hat);
		void BroadcastTaunt(int32_t Seed);
		void BroadcastCallout(int32_t Seed);
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceCharacterMovement
	 * Size -> 0x0070 (FullSize[0x07A0] - InheritedSize[0x0730])
	 */
	class UTaskForceCharacterMovement : public UCharacterMovementComponent
	{
	public:
		unsigned char                                              bWantsToProne : 1;                                       // 0x0730(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_32W8[0x3];                                   // 0x0731(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StandHalfHeight;                                         // 0x0734(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProneHalfHeight;                                         // 0x0738(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxWalkSpeedProne;                                       // 0x073C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxWalkSpeedSprint;                                      // 0x0740(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxWalkSpeedDive;                                        // 0x0744(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeaponStuckSpeed;                                        // 0x0748(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxLadderSpeedUp;                                        // 0x074C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxLadderSpeedDown;                                      // 0x0750(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RMSM[0x4C];                                  // 0x0754(0x004C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceDamageType
	 * Size -> 0x0038 (FullSize[0x0078] - InheritedSize[0x0040])
	 */
	class UTaskForceDamageType : public UDamageType
	{
	public:
		struct FCanvasIcon                                         KillIcon;                                                // 0x0040(0x0018) Edit, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                KillName;                                                // 0x0058(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KillID;                                                  // 0x0060(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsMunition;                                              // 0x0064(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DB3Q[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UForceFeedbackEffect*                                HitForceFeedback;                                        // 0x0068(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UForceFeedbackEffect*                                KilledForceFeedback;                                     // 0x0070(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TFGameMode
	 * Size -> 0x0050 (FullSize[0x0330] - InheritedSize[0x02E0])
	 */
	class ATFGameMode : public AGameModeBase
	{
	public:
		unsigned char                                              UnknownData_8O1U[0x8];                                   // 0x02E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                MatchState;                                              // 0x02E8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bDelayedStart : 1;                                       // 0x02F0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A0W8[0x3];                                   // 0x02F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumSpectators;                                           // 0x02F4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumPlayers;                                              // 0x02F8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumBots;                                                 // 0x02FC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinRespawnDelay;                                         // 0x0300(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumTravellingPlayers;                                    // 0x0304(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              EngineMessageClass;                                      // 0x0308(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class APlayerState*>                                InactivePlayerArray;                                     // 0x0310(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      InactivePlayerStateLifeSpan;                             // 0x0320(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxInactivePlayers;                                      // 0x0324(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHandleDedicatedServerReplays;                           // 0x0328(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_S3O3[0x7];                                   // 0x0329(0x0007) MISSED OFFSET (PADDING)

	public:
		void StartMatch();
		void SetBandwidthLimit(float AsyncIOBandwidthLimit);
		void Say(const class FString& Msg);
		void RestartGame();
		bool ReadyToStartMatch();
		bool ReadyToEndMatch();
		void K2_OnSetMatchState(const class FName& NewState);
		bool IsMatchInProgress();
		bool HasMatchEnded();
		class FName GetMatchState();
		void EndMatch();
		void AbortMatch();
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceGameMode
	 * Size -> 0x0280 (FullSize[0x05B0] - InheritedSize[0x0330])
	 */
	class ATaskForceGameMode : public ATFGameMode
	{
	public:
		class AOnlineBeaconHost*                                   Beacon;                                                  // 0x0330(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_01L7[0xB8];                                  // 0x0338(0x00B8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    WarmupTime;                                              // 0x03F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    WaitTime;                                                // 0x03F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    TimeBetweenMatches;                                      // 0x03F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ReserveSlotTime;                                         // 0x03FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              StartMessageSpectators;                                  // 0x0400(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              StartMessageTeam1;                                       // 0x0410(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              StartMessageTeam2;                                       // 0x0420(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              WinMessageTeam1;                                         // 0x0430(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              WinMessageTeam2;                                         // 0x0440(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              DrawMessageTeam1;                                        // 0x0450(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              DrawMessageTeam2;                                        // 0x0460(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              BombPickupMessage;                                       // 0x0470(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              BombDropMessage;                                         // 0x0480(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              BombPlantMessage;                                        // 0x0490(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              BombExplodeMessage;                                      // 0x04A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              BombDefuseMessage;                                       // 0x04B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              HostageExtractMessage;                                   // 0x04C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              HostageKillMessage;                                      // 0x04D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              HostageFollowMessage;                                    // 0x04E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RespawnEnemyDistance;                                    // 0x04F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RespawnTeammateDistance;                                 // 0x04F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RespawnSnapDistance;                                     // 0x04F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_33U0[0x8];                                   // 0x04FC(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TauntDelayTime;                                          // 0x0504(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    TauntFloodLimit;                                         // 0x0508(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    TauntTeamFloodLimit;                                     // 0x050C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    TauntWinFloodLimit;                                      // 0x0510(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2UCZ[0x14];                                  // 0x0514(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ATaskForceBotController*>                     BotControllers;                                          // 0x0528(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PACR[0x78];                                  // 0x0538(0x0078) MISSED OFFSET (PADDING)

	public:
		bool WasMatchWon();
		void SpawnWeapons();
		void SetReplicatedTeamName(int32_t TeamID, const class FString& TeamName);
		void SayObject(const class FString& Data);
		void FinishMatch();
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceDemolitionMode
	 * Size -> 0x0030 (FullSize[0x05E0] - InheritedSize[0x05B0])
	 */
	class ATaskForceDemolitionMode : public ATaskForceGameMode
	{
	public:
		TArray<class UClass*>                                      Team1;                                                   // 0x05B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<class UClass*>                                      Team2;                                                   // 0x05C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_O240[0x10];                                  // 0x05D0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceDoor
	 * Size -> 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
	 */
	class ATaskForceDoor : public AActor
	{
	public:
		void ToggleDoor();
		void ResetState();
		bool IsDoorOpen();
		bool IsDoorMoving();
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceEliminationMode
	 * Size -> 0x0020 (FullSize[0x05D0] - InheritedSize[0x05B0])
	 */
	class ATaskForceEliminationMode : public ATaskForceGameMode
	{
	public:
		TArray<class UClass*>                                      Team1;                                                   // 0x05B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<class UClass*>                                      Team2;                                                   // 0x05C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceEngine
	 * Size -> 0x0000 (FullSize[0x0E08] - InheritedSize[0x0E08])
	 */
	class UTaskForceEngine : public UGameEngine
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceExplosionEffect
	 * Size -> 0x00D8 (FullSize[0x0318] - InheritedSize[0x0240])
	 */
	class ATaskForceExplosionEffect : public AActor
	{
	public:
		class UParticleSystem*                                     ExplosionFX;                                             // 0x0240(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExplosionScale;                                          // 0x0248(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VolumeLevel;                                             // 0x024C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPointLightComponent*                                ExplosionLight;                                          // 0x0250(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDecalComponent*                                     Decal;                                                   // 0x0258(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystemComponent*                            Effect;                                                  // 0x0260(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ExplosionLightFadeOut;                                   // 0x0268(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HWL6[0x4];                                   // 0x026C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundCue*                                           ExplosionSound;                                          // 0x0270(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDecalData                                          TempDecal;                                               // 0x0278(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FHitResult                                          SurfaceHit;                                              // 0x0288(0x0088) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZKGH[0x8];                                   // 0x0310(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceExtractionMode
	 * Size -> 0x0038 (FullSize[0x05E8] - InheritedSize[0x05B0])
	 */
	class ATaskForceExtractionMode : public ATaskForceGameMode
	{
	public:
		TArray<class UClass*>                                      Team1;                                                   // 0x05B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<class UClass*>                                      Team2;                                                   // 0x05C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<class UClass*>                                      Hostages;                                                // 0x05D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		int32_t                                                    HostageExtractionLimit;                                  // 0x05E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    HostageKillLimit;                                        // 0x05E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceExtractionZone
	 * Size -> 0x0008 (FullSize[0x0250] - InheritedSize[0x0248])
	 */
	class ATaskForceExtractionZone : public ATriggerBox
	{
	public:
		int32_t                                                    OwningTeam;                                              // 0x0248(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bShowIcon;                                               // 0x024C(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZBTC[0x3];                                   // 0x024D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceFootstepEffect
	 * Size -> 0x0278 (FullSize[0x04B8] - InheritedSize[0x0240])
	 */
	class ATaskForceFootstepEffect : public AActor
	{
	public:
		struct FHitResult                                          SurfaceHit;                                              // 0x0240(0x0088) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class ATaskForceCharacter*                                 MyPawn;                                                  // 0x02C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S1ZU[0x10];                                  // 0x02D0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDecalComponent*                                     Decal;                                                   // 0x02E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystemComponent*                            Effect;                                                  // 0x02E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      VolumeLevel;                                             // 0x02F0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VolumeMinimum;                                           // 0x02F4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           DefaultSound;                                            // 0x02F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           AsphaltSound;                                            // 0x0300(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           BarkSound;                                               // 0x0308(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           BrickSound;                                              // 0x0310(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           CardboardSound;                                          // 0x0318(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           CarpetSound;                                             // 0x0320(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           CeramicSound;                                            // 0x0328(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           ClaySound;                                               // 0x0330(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           ConcreteSound;                                           // 0x0338(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           DebrisSound;                                             // 0x0340(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           DirtSound;                                               // 0x0348(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           DrywallSound;                                            // 0x0350(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           FabricSound;                                             // 0x0358(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           GlassSound;                                              // 0x0360(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           GrassSound;                                              // 0x0368(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           GravelSound;                                             // 0x0370(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           IceSound;                                                // 0x0378(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           MetalSound;                                              // 0x0380(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           MudSound;                                                // 0x0388(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           PaperSound;                                              // 0x0390(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           PlasterSound;                                            // 0x0398(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           PlasticSound;                                            // 0x03A0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           RockSound;                                               // 0x03A8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           RubberSound;                                             // 0x03B0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           SandSound;                                               // 0x03B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           SnowSound;                                               // 0x03C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           StoneSound;                                              // 0x03C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           StrawSound;                                              // 0x03D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           TileSound;                                               // 0x03D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           WaterSound;                                              // 0x03E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           WoodSound;                                               // 0x03E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     DefaultFX;                                               // 0x03F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     DebrisFX;                                                // 0x03F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     DirtFX;                                                  // 0x0400(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     GrassFX;                                                 // 0x0408(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     GravelFX;                                                // 0x0410(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     IceFX;                                                   // 0x0418(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     MudFX;                                                   // 0x0420(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     SandFX;                                                  // 0x0428(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     SnowFX;                                                  // 0x0430(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     StrawFX;                                                 // 0x0438(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     WaterFX;                                                 // 0x0440(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  DefaultDecals;                                           // 0x0448(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  ClayDecals;                                              // 0x0458(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  DirtDecals;                                              // 0x0468(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  IceDecals;                                               // 0x0478(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  MudDecals;                                               // 0x0488(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  SandDecals;                                              // 0x0498(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  SnowDecals;                                              // 0x04A8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceGameInstance
	 * Size -> 0x03B0 (FullSize[0x0518] - InheritedSize[0x0168])
	 */
	class UTaskForceGameInstance : public UGameInstance
	{
	public:
		unsigned char                                              UnknownData_9J07[0x298];                                 // 0x0168(0x0298) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, struct FSlateBrush>                    MapImages;                                               // 0x0400(0x0050) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FSlateBrush                                         WorkshopMapImage;                                        // 0x0450(0x0088) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7NFB[0x40];                                  // 0x04D8(0x0040) MISSED OFFSET (PADDING)

	public:
		void UpdatePresence(const class FString& details, const class FString& State, const class FString& largeImageKey, const class FString& largeImageText, const class FString& smallImageKey, const class FString& smallImageText, const class FString& partyId, const class FString& matchSecret, const class FString& joinSecret, const class FString& spectateSecret);
		void TickBlueprint(float DeltaSeconds);
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TFMenu
	 * Size -> 0x0000 (FullSize[0x02E0] - InheritedSize[0x02E0])
	 */
	class ATFMenu : public AGameModeBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceGameMenu
	 * Size -> 0x0000 (FullSize[0x02E0] - InheritedSize[0x02E0])
	 */
	class ATaskForceGameMenu : public ATFMenu
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceGameModeActor
	 * Size -> 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
	 */
	class ATaskForceGameModeActor : public AStaticMeshActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceGameSession
	 * Size -> 0x0108 (FullSize[0x0360] - InheritedSize[0x0258])
	 */
	class ATaskForceGameSession : public AGameSession
	{
	public:
		unsigned char                                              UnknownData_RYBK[0x108];                                 // 0x0258(0x0108) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TFGameState
	 * Size -> 0x0080 (FullSize[0x0300] - InheritedSize[0x0280])
	 */
	class ATFGameState : public AGameStateBase
	{
	public:
		unsigned char                                              UnknownData_J76E[0x60];                                  // 0x0280(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                MatchState;                                              // 0x02E0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                PreviousMatchState;                                      // 0x02E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ElapsedTime;                                             // 0x02F0(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_16OS[0xC];                                   // 0x02F4(0x000C) MISSED OFFSET (PADDING)

	public:
		void OnRep_MatchState();
		void OnRep_ElapsedTime();
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceGameState
	 * Size -> 0x00D0 (FullSize[0x03D0] - InheritedSize[0x0300])
	 */
	class ATaskForceGameState : public ATFGameState
	{
	public:
		int32_t                                                    ServerID;                                                // 0x0300(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QIL2[0x4];                                   // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ServerName;                                              // 0x0308(0x0010) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerAddress;                                           // 0x0318(0x0010) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerPassword;                                          // 0x0328(0x0010) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ServerSize;                                              // 0x0338(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsListenServer : 1;                                     // 0x033C(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsPrivateLobby : 1;                                     // 0x033C(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G4V4[0x3];                                   // 0x033D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MapName;                                                 // 0x0340(0x0010) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsWorkshopMap : 1;                                      // 0x0350(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FNCI[0x7];                                   // 0x0351(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              GameMode;                                                // 0x0358(0x0010) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bFriendlyFire : 1;                                       // 0x0368(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bControllersOnly : 1;                                    // 0x0368(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNoVoice : 1;                                            // 0x0368(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsCompetitive : 1;                                      // 0x0368(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsCoop : 1;                                             // 0x0368(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsRanked : 1;                                           // 0x0368(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UMIZ[0x7];                                   // 0x0369(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TeamName1;                                               // 0x0370(0x0010) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TeamName2;                                               // 0x0380(0x0010) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentRound;                                            // 0x0390(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalRounds;                                             // 0x0394(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RoundsWonTeam1;                                          // 0x0398(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RoundsWonTeam2;                                          // 0x039C(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HostageExtractions;                                      // 0x03A0(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HostageKillsTeam1;                                       // 0x03A4(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HostageKillsTeam2;                                       // 0x03A8(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumTeams;                                                // 0x03AC(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            TeamScores;                                              // 0x03B0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		int32_t                                                    RoundTiebreakers;                                        // 0x03C0(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RoundTime;                                               // 0x03C4(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RemainingTime;                                           // 0x03C8(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTimerPaused;                                            // 0x03CC(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsRoundOver;                                            // 0x03CD(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RZV2[0x2];                                   // 0x03CE(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceGameViewportClient
	 * Size -> 0x0000 (FullSize[0x02E8] - InheritedSize[0x02E8])
	 */
	class UTaskForceGameViewportClient : public UGameViewportClient
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceJsonObject
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UTaskForceJsonObject : public UObject
	{
	public:
		unsigned char                                              UnknownData_OLAG[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetStringValue(const class FString& Value, const class FString& Key);
		void SetNumberValue(float Value, const class FString& Key);
		void SetNestedObject(class UTaskForceJsonObject* Value, const class FString& Key);
		void SetBooleanValue(bool Value, const class FString& Key);
		class FString GetStringValue(const class FString& Key);
		TArray<class FString> GetStringArray(const class FString& Key);
		float GetNumberValue(const class FString& Key);
		TArray<float> GetNumberArray(const class FString& Key);
		class UTaskForceJsonObject* GetNestedObject(const class FString& Key);
		bool GetBooleanValue(const class FString& Key);
		TArray<bool> GetBooleanArray(const class FString& Key);
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceHelpers
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTaskForceHelpers : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_TriggerLaunch();
		class UTaskForceJsonObject* STATIC_ParseJSON(const class FString& Data);
		class FString STATIC_JSONToString(class UTaskForceJsonObject* JsonObject);
		bool STATIC_IsInEditor();
		bool STATIC_IsFirstLaunch();
		bool STATIC_HasRemote();
		int32_t STATIC_GetBuildID();
		class FString STATIC_Encrypt(const class FString& Key, const class FString& Text);
		void STATIC_DestroyNetActor(class AActor* Target);
		class FString STATIC_Decrypt(const class FString& Key, const class FString& Text);
		class UTaskForceJsonObject* STATIC_CreateJSON(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceHitboxes
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTaskForceHitboxes : public UObject
	{
	public:
		EHitbox STATIC_LookupBone(const class FName& BoneName, const struct FHitboxBones& BoneData);
		TArray<class FName> STATIC_ListBones(const struct FHitboxBones& BoneData);
		float STATIC_FindDamage(EHitbox HitBox, const struct FHitboxDamage& HitboxData, float DefaultDamage);
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceWeapon
	 * Size -> 0x0248 (FullSize[0x0488] - InheritedSize[0x0240])
	 */
	class ATaskForceWeapon : public AActor
	{
	public:
		struct FCanvasIcon                                         PrimaryIcon;                                             // 0x0240(0x0018) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCanvasIcon                                         SecondaryIcon;                                           // 0x0258(0x0018) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCanvasIcon                                         PrimaryClipIcon;                                         // 0x0270(0x0018) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FCanvasIcon                                         SecondaryClipIcon;                                       // 0x0288(0x0018) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		float                                                      AmmoIconsCount;                                          // 0x02A0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PrimaryClipIconOffset;                                   // 0x02A4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SecondaryClipIconOffset;                                 // 0x02A8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L0UZ[0x4];                                   // 0x02AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATaskForceCharacter*                                 MyPawn;                                                  // 0x02B0(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FWeaponData                                         WeaponConfig;                                            // 0x02B8(0x0088) Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              Mesh3P;                                                  // 0x0340(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAudioComponent*                                     FireAC;                                                  // 0x0348(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAudioComponent*                                     TailAC;                                                  // 0x0350(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                MuzzleAttachPoint;                                       // 0x0358(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystem*                                     MuzzleFX;                                                // 0x0360(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystemComponent*                            MuzzlePSC;                                               // 0x0368(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystemComponent*                            MuzzlePSCSecondary;                                      // 0x0370(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              FireCameraShake;                                         // 0x0378(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UForceFeedbackEffect*                                FireForceFeedback;                                       // 0x0380(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundCue*                                           FireSound;                                               // 0x0388(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FireFadeTime;                                            // 0x0390(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KX3P[0x4];                                   // 0x0394(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundCue*                                           TailSound;                                               // 0x0398(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TailFadeTime;                                            // 0x03A0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J2B5[0x4];                                   // 0x03A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundCue*                                           OutOfAmmoSound;                                          // 0x03A8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundCue*                                           ReloadSound;                                             // 0x03B0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FWeaponAnim                                         ReloadAnim;                                              // 0x03B8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		class USoundCue*                                           EquipSound;                                              // 0x03C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FWeaponAnim                                         EquipAnim;                                               // 0x03D0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FWeaponAnim                                         FireAnim;                                                // 0x03E0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              bLoopedMuzzleFX : 1;                                     // 0x03F0(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bLoopedFireAnim : 1;                                     // 0x03F0(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_15CK : 3;                                    // 0x03F0(0x0001) BIT_FIELD (PADDING)
		unsigned char                                              bPendingReload : 1;                                      // 0x03F0(0x0001) BIT_FIELD Net, Transient, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ANWL[0x17];                                  // 0x03F1(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentAmmo;                                             // 0x0408(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    CurrentAmmoInClip;                                       // 0x040C(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N2TX[0x40];                                  // 0x0410(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Reticle;                                                 // 0x0450(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             ScopeOffset;                                             // 0x0458(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             ScopeHandOffset;                                         // 0x0464(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             ScopeCameraOffset;                                       // 0x0470(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PushDistance;                                            // 0x047C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PushRadius;                                              // 0x0480(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PushVelocity;                                            // 0x0484(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void ServerStopReload();
		void ServerStopFire();
		void ServerStartReload();
		void ServerStartFire();
		void ServerHandleFiring();
		void OnRep_Reload();
		void OnRep_MyPawn();
		void OnRep_BurstCounter();
		struct FVector GetScopeOffset();
		struct FVector GetScopeHandOffset();
		struct FVector GetScopeCameraOffset();
		class ATaskForceCharacter* GetPawnOwner();
		void ClientStartReload();
		void ClientBurstCounter(int32_t Count);
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceHitscanWeapon
	 * Size -> 0x0160 (FullSize[0x05E8] - InheritedSize[0x0488])
	 */
	class ATaskForceHitscanWeapon : public ATaskForceWeapon
	{
	public:
		class UClass*                                              ImpactTemplate;                                          // 0x0488(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              TracerTemplate;                                          // 0x0490(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystem*                                     TrailFX;                                                 // 0x0498(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                TrailTargetParam;                                        // 0x04A0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3TB2[0x58];                                  // 0x04A8(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BulletWhizMinDistance;                                   // 0x0500(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BulletWhizIgnoreStart;                                   // 0x0504(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BulletWhizIgnoreEnd;                                     // 0x0508(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BulletWhizMaxThreshold;                                  // 0x050C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DefaultDepth;                                            // 0x0510(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AsphaltDepth;                                            // 0x0514(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BarkDepth;                                               // 0x0518(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BrickDepth;                                              // 0x051C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CardboardDepth;                                          // 0x0520(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CarpetDepth;                                             // 0x0524(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CeramicDepth;                                            // 0x0528(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ClayDepth;                                               // 0x052C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ConcreteDepth;                                           // 0x0530(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DebrisDepth;                                             // 0x0534(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DirtDepth;                                               // 0x0538(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DrywallDepth;                                            // 0x053C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FabricDepth;                                             // 0x0540(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FleshDepth;                                              // 0x0544(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FoliageDepth;                                            // 0x0548(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      GlassDepth;                                              // 0x054C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      GrassDepth;                                              // 0x0550(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      GravelDepth;                                             // 0x0554(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      IceDepth;                                                // 0x0558(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MetalDepth;                                              // 0x055C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MudDepth;                                                // 0x0560(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PaperDepth;                                              // 0x0564(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PlasterDepth;                                            // 0x0568(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PlasticDepth;                                            // 0x056C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RockDepth;                                               // 0x0570(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RubberDepth;                                             // 0x0574(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SandDepth;                                               // 0x0578(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SnowDepth;                                               // 0x057C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StoneDepth;                                              // 0x0580(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StrawDepth;                                              // 0x0584(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TileDepth;                                               // 0x0588(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      WaterDepth;                                              // 0x058C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      WoodDepth;                                               // 0x0590(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FHitboxDamage                                       Damage;                                                  // 0x0594(0x0044) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		class USoundCue*                                           FlybySound;                                              // 0x05D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FlybySoundLimit;                                         // 0x05E0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    TracerCount;                                             // 0x05E4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void ServerProcessBullet(const struct FVector_NetQuantize100& StartTrace, const struct FVector_NetQuantize100& EndTrace, bool IsTracer, bool IsDebug, TArray<struct FBulletHitData> Hits, float PredictionTime);
		void ClientProcessBullet(const struct FVector_NetQuantize100& StartTrace, const struct FVector_NetQuantize100& EndTrace, bool IsTracer, TArray<struct FBulletImpactData> Impacts, float PredictionTime);
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceHostageStart
	 * Size -> 0x0008 (FullSize[0x0278] - InheritedSize[0x0270])
	 */
	class ATaskForceHostageStart : public APlayerStart
	{
	public:
		unsigned char                                              bNotForPlayers : 1;                                      // 0x0270(0x0001) BIT_FIELD Edit, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNotForBots : 1;                                         // 0x0270(0x0001) BIT_FIELD Edit, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5LRT[0x7];                                   // 0x0271(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceHUD
	 * Size -> 0x0428 (FullSize[0x0758] - InheritedSize[0x0330])
	 */
	class ATaskForceHUD : public AHUD
	{
	public:
		unsigned char                                              UnknownData_N52K[0x8];                                   // 0x0330(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATaskForceWeapon*                                    CrosshairWeapon;                                         // 0x0338(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GQ0T[0x308];                                 // 0x0340(0x0308) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          BackgroundTexture;                                       // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BackgroundScrollTime;                                    // 0x0650(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N6BQ[0x4];                                   // 0x0654(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          OverlayTexture;                                          // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          FadeTexture;                                             // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FadeSpeed;                                               // 0x0668(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FadeCrosshair;                                           // 0x066C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FadeFrom;                                                // 0x0670(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FadeTo;                                                  // 0x0674(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<class FString, class UClass*>                         ReticleList;                                             // 0x0678(0x0050) Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		float                                                      DiamondOffsetStand;                                      // 0x06C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DiamondOffsetCrouch;                                     // 0x06CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DiamondOffsetProne;                                      // 0x06D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NameFadeStart;                                           // 0x06D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NameFadeEnd;                                             // 0x06D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NameAlphaMin;                                            // 0x06DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UFont*                                               IndicatorFont;                                           // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              DiamondText;                                             // 0x06E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              ObjectiveText;                                           // 0x06F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              BombText;                                                // 0x0708(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              AttackText;                                              // 0x0718(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              DefendText;                                              // 0x0728(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              ExtractAttackText;                                       // 0x0738(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              ExtractDefendText;                                       // 0x0748(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetFade(float Alpha, float Speed);
		void SetClanOfficerList(TArray<int64_t> SteamIDs);
		void ResetFade(float Alpha);
		void OnVoiceStop();
		void OnVoiceStart();
		void ExecuteJavaScript(const class FString& Code);
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceImpactEffect
	 * Size -> 0x04B0 (FullSize[0x06F0] - InheritedSize[0x0240])
	 */
	class ATaskForceImpactEffect : public AActor
	{
	public:
		struct FHitResult                                          SurfaceHit;                                              // 0x0240(0x0088) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G1D2[0x88];                                  // 0x02C8(0x0088) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDecalComponent*                                     Decal;                                                   // 0x0350(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystemComponent*                            Effect;                                                  // 0x0358(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XM7Y[0x8];                                   // 0x0360(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VolumeLevel;                                             // 0x0368(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1UZB[0x4];                                   // 0x036C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDecalData>                                  DefaultDecals;                                           // 0x0370(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  AsphaltDecals;                                           // 0x0380(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  BarkDecals;                                              // 0x0390(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  BrickDecals;                                             // 0x03A0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  CardboardDecals;                                         // 0x03B0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  CarpetDecals;                                            // 0x03C0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  CeramicDecals;                                           // 0x03D0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  ClayDecals;                                              // 0x03E0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  ConcreteDecals;                                          // 0x03F0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  DebrisDecals;                                            // 0x0400(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  DrywallDecals;                                           // 0x0410(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  FabricDecals;                                            // 0x0420(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  FleshDecals;                                             // 0x0430(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  GlassDecals;                                             // 0x0440(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  IceDecals;                                               // 0x0450(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  MetalDecals;                                             // 0x0460(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  MudDecals;                                               // 0x0470(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  PaperDecals;                                             // 0x0480(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  PlasterDecals;                                           // 0x0490(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  PlasticDecals;                                           // 0x04A0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  RockDecals;                                              // 0x04B0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  RubberDecals;                                            // 0x04C0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  StoneDecals;                                             // 0x04D0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  TileDecals;                                              // 0x04E0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDecalData>                                  WoodDecals;                                              // 0x04F0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class USoundCue*                                           DefaultSound;                                            // 0x0500(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           AsphaltSound;                                            // 0x0508(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           BarkSound;                                               // 0x0510(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           BrickSound;                                              // 0x0518(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           CardboardSound;                                          // 0x0520(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           CarpetSound;                                             // 0x0528(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           CeramicSound;                                            // 0x0530(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           ClaySound;                                               // 0x0538(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           ConcreteSound;                                           // 0x0540(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           DebrisSound;                                             // 0x0548(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           DirtSound;                                               // 0x0550(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           DrywallSound;                                            // 0x0558(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           FabricSound;                                             // 0x0560(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           FleshSound;                                              // 0x0568(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           FoliageSound;                                            // 0x0570(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           GlassSound;                                              // 0x0578(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           GrassSound;                                              // 0x0580(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           GravelSound;                                             // 0x0588(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           IceSound;                                                // 0x0590(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           MetalSound;                                              // 0x0598(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           MudSound;                                                // 0x05A0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           PaperSound;                                              // 0x05A8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           PlasterSound;                                            // 0x05B0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           PlasticSound;                                            // 0x05B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           RockSound;                                               // 0x05C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           RubberSound;                                             // 0x05C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           SandSound;                                               // 0x05D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           SnowSound;                                               // 0x05D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           StoneSound;                                              // 0x05E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           StrawSound;                                              // 0x05E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           TileSound;                                               // 0x05F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           WaterSound;                                              // 0x05F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           WoodSound;                                               // 0x0600(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     DefaultFX;                                               // 0x0608(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     AsphaltFX;                                               // 0x0610(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     BarkFX;                                                  // 0x0618(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     BrickFX;                                                 // 0x0620(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     CeramicFX;                                               // 0x0628(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     ClayFX;                                                  // 0x0630(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     ConcreteFX;                                              // 0x0638(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     DebrisFX;                                                // 0x0640(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     DirtFX;                                                  // 0x0648(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     DrywallFX;                                               // 0x0650(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     FleshFX;                                                 // 0x0658(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     FoliageFX;                                               // 0x0660(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     GlassFX;                                                 // 0x0668(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     GrassFX;                                                 // 0x0670(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     GravelFX;                                                // 0x0678(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     IceFX;                                                   // 0x0680(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     MetalFX;                                                 // 0x0688(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     MudFX;                                                   // 0x0690(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     PlasterFX;                                               // 0x0698(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     PlasticFX;                                               // 0x06A0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     RockFX;                                                  // 0x06A8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     RubberFX;                                                // 0x06B0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     SandFX;                                                  // 0x06B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     SnowFX;                                                  // 0x06C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     StoneFX;                                                 // 0x06C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     StrawFX;                                                 // 0x06D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     TileFX;                                                  // 0x06D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     WaterFX;                                                 // 0x06E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     WoodFX;                                                  // 0x06E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceLocalPlayer
	 * Size -> 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
	 */
	class UTaskForceLocalPlayer : public ULocalPlayer
	{
	public:
		class UTaskForcePersistentUser*                            PersistentUser;                                          // 0x0280(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceMenuController
	 * Size -> 0x0258 (FullSize[0x07E8] - InheritedSize[0x0590])
	 */
	class ATaskForceMenuController : public APlayerController
	{
	public:
		class ATaskForceBeaconClient*                              Beacon;                                                  // 0x0590(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BOXL[0x250];                                 // 0x0598(0x0250) MISSED OFFSET (PADDING)

	public:
		void UploadWorkshopData(const class FString& ItemID, const class FString& ProjectFile, const class FString& MapFile, const class FString& MapName, const class FString& GameModes, const class FString& IconFile, const class FString& Description);
		void TryJoinServer(const class FString& Password);
		void SetWorkshopStatus(const class FString& Message);
		void SetWorkshopRunningStatus(const class FString& Message);
		void SetWorkshopCompleteStatus(const class FString& Message);
		void SaveWorkshopData(const class FString& ItemID, const class FString& MapName, const class FString& GameModes, const class FString& IconFile, const class FString& Description);
		bool OpenURL(const class FString& URL);
		bool OpenFileDialog(const class FString& Title, const class FString& Filter, const class FString& Extension, class FString* File);
		void OpenChatWindow();
		void LoadWorkshopData();
		void JoinServer(const class FString& SteamP2P, const class FString& HostAddress);
		void InitBeaconClient(const class FString& ServerURL);
		bool HasInvalidLogin();
		bool HasEngineInstalled();
		void GoToClientURL(const class FString& URL);
		TArray<class FString> GetSteamNetTicket(TArray<int32_t>* Types, TArray<class FString>* Descriptions);
		class FString GetSteamLanguage();
		class FString GetSteamBranch();
		class FString GetSteamAuthTicket();
		class FString GenerateURL(const class FString& URL);
		void FailServer(const class FString& Message);
		void ExecuteJavaScript(const class FString& Code);
		void DoSteam();
		void DoSession();
		bool DestroySession();
		void DestroyBeaconClient();
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceOnlineSessionClient
	 * Size -> 0x0000 (FullSize[0x0190] - InheritedSize[0x0190])
	 */
	class UTaskForceOnlineSessionClient : public UOnlineSessionClient
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForcePersistentUser
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UTaskForcePersistentUser : public USaveGame
	{
	public:
		int32_t                                                    Kills;                                                   // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    Deaths;                                                  // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    Wins;                                                    // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    Losses;                                                  // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    BulletsFired;                                            // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    BotsCount;                                               // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsRecordingDemos;                                       // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9PU6[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Gamma;                                                   // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AimSensitivity;                                          // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bInvertedYAxis;                                          // 0x004C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DF4S[0x1B];                                  // 0x004D(0x001B) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TFPlayerController
	 * Size -> 0x0008 (FullSize[0x0598] - InheritedSize[0x0590])
	 */
	class ATFPlayerController : public APlayerController
	{
	public:
		unsigned char                                              UnknownData_XHSE[0x8];                                   // 0x0590(0x0008) MISSED OFFSET (PADDING)

	public:
		void ExecuteServerCommand(const class FString& Command);
		void ExecuteClientCommand(const class FString& Command);
		void ClientWorkshopRPC(TArray<struct FTFWorkshopServerData> Added, TArray<struct FTFWorkshopServerData> Existing);
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForcePlayerController
	 * Size -> 0x0158 (FullSize[0x06F0] - InheritedSize[0x0598])
	 */
	class ATaskForcePlayerController : public ATFPlayerController
	{
	public:
		class USoundClass*                                         MasterClass;                                             // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundClass*                                         EffectsClass;                                            // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundClass*                                         MusicClass;                                              // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundClass*                                         VoiceClass;                                              // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    VoiceTalkerLimit;                                        // 0x05B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    VoiceCasualFloodLimit;                                   // 0x05BC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    VoiceCompetitiveFloodLimit;                              // 0x05C0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      IdleKickLimit;                                           // 0x05C4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SpawnGracePeriod;                                        // 0x05C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZQ1O[0x8];                                   // 0x05CC(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SearchIntervalTV;                                        // 0x05D4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_E26I[0x4];                                   // 0x05D8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ChatMessageLimit;                                        // 0x05DC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bSpectatorFollow : 1;                                    // 0x05E0(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HB65[0x7];                                   // 0x05E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATaskForceCharacter*                                 SpectatorTarget;                                         // 0x05E8(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bInfiniteAmmo : 1;                                       // 0x05F0(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bInfiniteClip : 1;                                       // 0x05F0(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8LGI[0x7];                                   // 0x05F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DefaultWorkshopSkin1;                                    // 0x05F8(0x0010) Net, ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              DefaultWorkshopSkin2;                                    // 0x0608(0x0010) Net, ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    DefaultPrimaryWeapon1;                                   // 0x0618(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    DefaultPrimaryWeapon2;                                   // 0x061C(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    DefaultSecondaryWeapon1;                                 // 0x0620(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    DefaultSecondaryWeapon2;                                 // 0x0624(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UUQS[0x98];                                  // 0x0628(0x0098) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             DebugCommandCallback;                                    // 0x06C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             DebugSnapshotCallback;                                   // 0x06D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             DebugRenderCallback;                                     // 0x06E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected

	public:
		void TriggerRemote();
		void SwitchTeams();
		void SimulateInputKey(const struct FKey& Key, bool bPressed);
		void ShowSettings(bool IsController, TArray<class FString> WorkshopSkins1, TArray<class FString> WorkshopSkins2);
		void SetMouseSensitivity(float VerticalSensitivity, float HorizontalSensitivity, bool Invert);
		void SetDefaultWorkshopSkin(const class FString& Skin);
		void SetDefaultSecondaryReticle(const class FString& Reticle);
		void SetDefaultSecondary(int32_t WeaponID);
		void SetDefaultPrimaryReticle(const class FString& Reticle);
		void SetDefaultPrimary(int32_t WeaponID);
		void SetControllerSensitivity(float VerticalSensitivity, float HorizontalSensitivity, bool Invert, float Acceleration, float VerticalDeadZone, float HorizontalDeadZone, float ForwardDeadZone, float RightDeadZone);
		void ServerSwitchTeams(int32_t NewTeam);
		void ServerSetSpectate(class ATaskForcePlayerState* NewTarget, bool ShouldFollow);
		void ServerSetIsTalking(bool IsTalking);
		void ServerSetDefaultWorkshopSkin(const class FString& Skin);
		void ServerSetDefaultSecondary(int32_t WeaponID);
		void ServerSetDefaultPrimary(int32_t WeaponID);
		void ServerSay(const class FString& Msg, bool TeamOnly);
		void ServerRemote(const class FString& Guid);
		void SayTaunt(const class FString& Msg);
		void Say(const class FString& Msg, bool TeamOnly);
		void SaveInputSettings();
		void RoundWin(int32_t WinnerTeam);
		void RoundStart();
		void RemoveBinding(const class FName& KeyName);
		void RebuildInputSettings(bool RestoreDefaults);
		bool PingBrowserWindow();
		bool OpenURL(const class FString& URL);
		void OnTeamMessage();
		void OnRoundWin(const class FString& GameMode, int32_t WinnerTeam);
		void OnRoundStart(const class FString& GameMode);
		void OnRoundEnd(const class FString& GameMode, int32_t WinnerTeam);
		void OnRep_SpectatorTarget(class ATaskForceCharacter* Target);
		void OnHostageKilled(int32_t AttackerTeam, int32_t WinnerTeam);
		void OnHostageExtracted(int32_t WinnerTeam);
		void OnChatMessage();
		void OnBombPlanted(int32_t PlantTeam);
		void OnBombPickup(int32_t PickupTeam);
		void OnBombExploded(int32_t PlantTeam);
		void OnBombDefused(int32_t DefuseTeam);
		void LoadInputSettings();
		void LoadingComplete();
		void KickAway();
		bool IsTalking(class ATaskForcePlayerController* LocalController);
		bool IsInCinematicMode();
		void HideSettings();
		void GoToClientURL(const class FString& URL);
		class FString GetSteamLanguage();
		class FString GetSteamBranch();
		int32_t GetCurrentTeam();
		class FString GenerateURL(const class FString& URL);
		class FString GenerateGUID();
		bool FocusBrowserWindow();
		TArray<class ATaskForceCharacter*> FindAllCharacters();
		void ExecuteJavaScript(const class FString& Code);
		class FString DefaultWorkshopSkin();
		void DebugJavaScript(bool bAdvanced, bool bExperimental);
		void ClientStartOnlineGame();
		void ClientSetSpectatorCamera(const struct FVector& CameraLocation, const struct FRotator& CameraRotation);
		void ClientSendRoundWinEvent(int32_t WinnerTeam, const class FString& Message);
		void ClientSendRoundStartEvent(const class FString& Message);
		void ClientSendRoundResetEvent();
		void ClientSendRoundEndEvent(TArray<struct FTaskForcePlayerStats> Stats);
		void ClientSendResetActorsEvent();
		void ClientSendMessageEvent(const class FString& Message);
		void ClientRemote(bool bAdvanced, bool bExperimental);
		void ClientGameStarted();
		void ClientEndOnlineGame();
		void ClientDebugWorkshop(const class FString& Key, bool Storage);
		void ClientDebugViewport(const class FString& Key, bool Interface);
		void ClientDebugGame(const class FString& Key);
		void AddBinding(const class FName& Action, const struct FKey& Key);
		void ActivateGameOverlay(const class FString& Dialog);
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TFPlayerState
	 * Size -> 0x0008 (FullSize[0x0370] - InheritedSize[0x0368])
	 */
	class ATFPlayerState : public APlayerState
	{
	public:
		unsigned char                                              UnknownData_Z15W[0x8];                                   // 0x0368(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForcePlayerState
	 * Size -> 0x0070 (FullSize[0x03E0] - InheritedSize[0x0370])
	 */
	class ATaskForcePlayerState : public ATFPlayerState
	{
	public:
		int32_t                                                    BotId;                                                   // 0x0370(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TracerId;                                                // 0x0374(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTV;                                                     // 0x0378(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IQTT[0x7];                                   // 0x0379(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TeamNumber;                                              // 0x0380(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    CurrentSkin;                                             // 0x0384(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bIsAlive : 1;                                            // 0x0388(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5L6G[0x3];                                   // 0x0389(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TotalScore;                                              // 0x038C(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumKills;                                                // 0x0390(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumAssists;                                              // 0x0394(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumDeaths;                                               // 0x0398(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bQuitter : 1;                                            // 0x039C(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bIsTalking : 1;                                          // 0x039C(0x0001) BIT_FIELD Net, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bIsHostage : 1;                                          // 0x039C(0x0001) BIT_FIELD Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsAuthority : 1;                                        // 0x039C(0x0001) BIT_FIELD Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OHH5[0x3];                                   // 0x039D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ClanTag;                                                 // 0x03A0(0x0010) Net, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentRank;                                             // 0x03B0(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4RQ6[0x4];                                   // 0x03B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TracerName;                                              // 0x03B8(0x0010) Net, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BackerLevel;                                             // 0x03C8(0x0010) Net, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsNewPlayer : 1;                                        // 0x03D8(0x0001) BIT_FIELD Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsExperienced : 1;                                      // 0x03D8(0x0001) BIT_FIELD Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsBacker : 1;                                           // 0x03D8(0x0001) BIT_FIELD Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsAdmin : 1;                                            // 0x03D8(0x0001) BIT_FIELD Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsVIP : 1;                                              // 0x03D8(0x0001) BIT_FIELD Net, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QZSB[0x7];                                   // 0x03D9(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnRep_TeamNumber();
		void OnRep_CurrentSkin();
		bool IsServerAdmin();
		bool IsPriorityBacker();
		bool IsBacker();
		void InformAboutKill(class ATaskForcePlayerState* KillerPlayerState, class UDamageType* KillerDamageType, class ATaskForcePlayerState* KilledPlayerState);
		void InformAboutDeath(class ATaskForcePlayerState* KillerPlayerState, const struct FTaskForceDeathStats& Data);
		int32_t GetTeamNum();
		class FString GetSteamID();
		int32_t GetScore();
		int32_t GetKills();
		int32_t GetDeaths();
		int32_t GetCurrentSkin();
		int32_t GetClientID();
		ETaskForceBackerLevel GetBackerLevel();
		int32_t GetAssists();
		void BroadcastDeath(class ATaskForcePlayerState* KillerPlayerState, class UDamageType* KillerDamageType, class ATaskForcePlayerState* KilledPlayerState, class ATaskForcePlayerState* AssisterPlayerState);
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceProjectile
	 * Size -> 0x0080 (FullSize[0x02C0] - InheritedSize[0x0240])
	 */
	class ATaskForceProjectile : public AActor
	{
	public:
		class UProjectileMovementComponent*                        MovementComp;                                            // 0x0240(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCapsuleComponent*                                   CollisionComp;                                           // 0x0248(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UParticleSystemComponent*                            ParticleComp;                                            // 0x0250(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              ExplosionTemplate;                                       // 0x0258(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                EffectAttachPoint;                                       // 0x0260(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DestroyDelay;                                            // 0x0268(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3OU0[0x4];                                   // 0x026C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundCue*                                           HitSound;                                                // 0x0270(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HitSoundLimit;                                           // 0x0278(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxHitVelocity;                                          // 0x027C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinHitVelocity;                                          // 0x0280(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RIEO[0x34];                                  // 0x0284(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bExploded;                                               // 0x02B8(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AP77[0x7];                                   // 0x02B9(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnRep_Exploded();
		void OnImpact(const struct FHitResult& HitResult);
		void OnHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceProjectileWeapon
	 * Size -> 0x0028 (FullSize[0x04B0] - InheritedSize[0x0488])
	 */
	class ATaskForceProjectileWeapon : public ATaskForceWeapon
	{
	public:
		struct FProjectileWeaponData                               ProjectileConfig;                                        // 0x0488(0x0028) Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		void ServerFireProjectile(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir, float Velocity);
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceRespawnMode
	 * Size -> 0x0020 (FullSize[0x05D0] - InheritedSize[0x05B0])
	 */
	class ATaskForceRespawnMode : public ATaskForceGameMode
	{
	public:
		TArray<class UClass*>                                      Team1;                                                   // 0x05B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<class UClass*>                                      Team2;                                                   // 0x05C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceReticle
	 * Size -> 0x01F0 (FullSize[0x0218] - InheritedSize[0x0028])
	 */
	class UTaskForceReticle : public UObject
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0028(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsDiagonal;                                              // 0x0030(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3FBK[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ScaleFraction;                                           // 0x0034(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExpandFraction;                                          // 0x0038(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTaskForceCrosshair                                 Default;                                                 // 0x003C(0x0050) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTaskForceCrosshair                                 Empty;                                                   // 0x008C(0x0050) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTaskForceCrosshair                                 Enemy;                                                   // 0x00DC(0x0050) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTaskForceCrosshair                                 Teammate;                                                // 0x012C(0x0050) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTaskForceCrosshairIcon                             Obstruction;                                             // 0x017C(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTaskForceCrosshairIcon                             Diamond;                                                 // 0x018C(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTaskForceCrosshairIcon                             Objective;                                               // 0x019C(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FColor                                              DiamondTextColor;                                        // 0x01AC(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              ObjectiveTextColor;                                      // 0x01B0(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTaskForceCrosshairIcon                             Bomb;                                                    // 0x01B4(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTaskForceCrosshairIcon                             Attack;                                                  // 0x01C4(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTaskForceCrosshairIcon                             Defend;                                                  // 0x01D4(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTaskForceCrosshairIcon                             ExtractAttack;                                           // 0x01E4(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTaskForceCrosshairIcon                             ExtractDefend;                                           // 0x01F4(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FColor                                              BombTextColor;                                           // 0x0204(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              AttackTextColor;                                         // 0x0208(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              DefendTextColor;                                         // 0x020C(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              ExtractAttackTextColor;                                  // 0x0210(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              ExtractDefendTextColor;                                  // 0x0214(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceSettings
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTaskForceSettings : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_SupportsHDRDisplayOutput();
		bool STATIC_SetVSyncEnabled(bool VSync);
		void STATIC_SetVoiceVolume(float VoiceVolume, class USoundClass* VoiceClass);
		bool STATIC_SetVideoSettings(float Gamma);
		bool STATIC_SetVideoQualitySettings(int32_t AntiAliasing, int32_t Shadows, int32_t PostProcess, int32_t Textures, int32_t Effects, int32_t Foliage, float Resolution, int32_t ViewDistance);
		bool STATIC_SetScreenResolution(int32_t Width, int32_t Height, int32_t WindowMode);
		void STATIC_SetMusicVolume(float MusicVolume, class USoundClass* MusicClass);
		void STATIC_SetMenuVolume(float MenuVolume);
		void STATIC_SetMasterVolume(float MasterVolume, class USoundClass* MasterClass);
		bool STATIC_SetHDRDisplayOutput(bool Enabled);
		void STATIC_SetGamma(float Gamma);
		void STATIC_SetEffectsVolume(float EffectsVolume, class USoundClass* EffectsClass);
		void STATIC_SetBackgroundVolume(float UnfocusedVolume);
		bool STATIC_SetAudioVolumeSettings(class USoundClass* MasterClass, float MasterVolume, float MenuVolume, float UnfocusedVolume, class USoundClass* EffectsClass, float EffectsVolume, class USoundClass* MusicClass, float MusicVolume, class USoundClass* VoiceClass, float VoiceVolume);
		void STATIC_SaveVoiceVolume(float VoiceVolume);
		bool STATIC_SaveVideoModeAndQuality();
		void STATIC_SaveMusicVolume(float MusicVolume);
		void STATIC_SaveMenuVolume(float MenuVolume);
		void STATIC_SaveEffectsVolume(float EffectsVolume);
		void STATIC_SaveAudioVolumeSettings(class USoundClass* MasterClass, float MasterVolume, float MenuVolume, float UnfocusedVolume, class USoundClass* EffectsClass, float EffectsVolume, class USoundClass* MusicClass, float MusicVolume, class USoundClass* VoiceClass, float VoiceVolume);
		bool STATIC_RevertVideoMode();
		bool STATIC_IsVSyncEnabled();
		bool STATIC_IsInFullscreen();
		float STATIC_GetVoiceVolume();
		void STATIC_GetVideoSettings(float* Gamma);
		void STATIC_GetVideoQualitySettings(int32_t* AntiAliasing, int32_t* Shadows, int32_t* PostProcess, int32_t* Textures, int32_t* Effects, int32_t* Foliage, float* Resolution, int32_t* ViewDistance);
		void STATIC_GetScreenResolution(int32_t* Width, int32_t* Height);
		float STATIC_GetMusicVolume();
		float STATIC_GetMenuVolume();
		float STATIC_GetMasterVolume();
		float STATIC_GetEffectsVolume();
		float STATIC_GetBackgroundVolume();
		void STATIC_GetAudioVolumeSettings(float* MasterVolume, float* MenuVolume, float* UnfocusedVolume, float* EffectsVolume, float* MusicVolume, float* VoiceVolume);
		void STATIC_FindSavedAudioVolumeSettings(float* MasterVolume, float* MenuVolume, float* UnfocusedVolume, float* EffectsVolume, float* MusicVolume, float* VoiceVolume);
		bool STATIC_ChangeScreenResolution(int32_t Width, int32_t Height, int32_t WindowMode);
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceSmokeEffect
	 * Size -> 0x00C8 (FullSize[0x0308] - InheritedSize[0x0240])
	 */
	class ATaskForceSmokeEffect : public AActor
	{
	public:
		class UParticleSystem*                                     SmokeFX;                                                 // 0x0240(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SmokeScale;                                              // 0x0248(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VolumeLevel;                                             // 0x024C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDecalComponent*                                     Decal;                                                   // 0x0250(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystemComponent*                            Effect;                                                  // 0x0258(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SmokeTime;                                               // 0x0260(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TYRQ[0x4];                                   // 0x0264(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundCue*                                           SmokeSound;                                              // 0x0268(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDecalData                                          TempDecal;                                               // 0x0270(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FHitResult                                          SurfaceHit;                                              // 0x0280(0x0088) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceSpectator
	 * Size -> 0x0000 (FullSize[0x02C8] - InheritedSize[0x02C8])
	 */
	class ATaskForceSpectator : public ASpectatorPawn
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceTeamStart
	 * Size -> 0x0008 (FullSize[0x0278] - InheritedSize[0x0270])
	 */
	class ATaskForceTeamStart : public APlayerStart
	{
	public:
		int32_t                                                    SpawnTeam;                                               // 0x0270(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNotForPlayers : 1;                                      // 0x0274(0x0001) BIT_FIELD Edit, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bNotForBots : 1;                                         // 0x0274(0x0001) BIT_FIELD Edit, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6ZT8[0x3];                                   // 0x0275(0x0003) MISSED OFFSET (PADDING)

	public:
		void SetTeam(int32_t TeamID);
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceTracerEffect
	 * Size -> 0x0058 (FullSize[0x0298] - InheritedSize[0x0240])
	 */
	class ATaskForceTracerEffect : public AActor
	{
	public:
		unsigned char                                              UnknownData_FWL6[0x18];                                  // 0x0240(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             EffectLocation;                                          // 0x0258(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            EffectRotation;                                          // 0x0264(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UParticleSystem*                                     TracerFX;                                                // 0x0270(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TracerScale;                                             // 0x0278(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TracerOffset;                                            // 0x027C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TracerLength;                                            // 0x0280(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumDistance;                                         // 0x0284(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6W9P[0x8];                                   // 0x0288(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TracerSpeed;                                             // 0x0290(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1X5X[0x4];                                   // 0x0294(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TaskForceTrainingMode
	 * Size -> 0x0000 (FullSize[0x05D0] - InheritedSize[0x05D0])
	 */
	class ATaskForceTrainingMode : public ATaskForceRespawnMode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TFGameEngine
	 * Size -> 0x0820 (FullSize[0x1628] - InheritedSize[0x0E08])
	 */
	class UTFGameEngine : public UGameEngine
	{
	public:
		unsigned char                                              UnknownData_FGDZ[0x820];                                 // 0x0E08(0x0820) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TFGameInstance
	 * Size -> 0x03A8 (FullSize[0x0510] - InheritedSize[0x0168])
	 */
	class UTFGameInstance : public UGameInstance
	{
	public:
		TArray<class FString>                                      MenuMapNames;                                            // 0x0168(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		TMap<class FString, class FString>                         GameMapNames;                                            // 0x0178(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		class FString                                              TutorialMapName;                                         // 0x01C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              TutorialMapMode;                                         // 0x01D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              TrainingMapName;                                         // 0x01E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              TrainingMapMode;                                         // 0x01F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSeamlessTravel;                                         // 0x0208(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bWorkshopAutoDownload;                                   // 0x0209(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KXA4[0x2];                                   // 0x020A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WorkshopMountDelay;                                      // 0x020C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JHDB[0x300];                                 // 0x0210(0x0300) MISSED OFFSET (PADDING)

	public:
		bool UnsubscribeFromItem(const class FString& WorkshopID);
		bool SubscribeToItem(const class FString& WorkshopID);
		bool RefreshSteamLobbies(ETFSteamLobbyDistance Distance);
		bool RefreshDedicatedServers();
		bool ReconnectGame();
		void ReceiveOnStart();
		void ReceiveOnBackgroundMusic();
		void QuitGame();
		struct FJsonLibraryList QuerySubscribedItems();
		struct FJsonLibraryObject QueryPlayerData();
		struct FJsonLibraryObject QueryMapMetadata();
		struct FJsonLibraryObject QueryInstalledMaps();
		bool ProcessJoinSecret(const class FString& Secret);
		bool ProcessCommandLine();
		void OnDiscordShutdown();
		void OnDiscordRespond(const class FString& DiscordUserID, bool bAccept);
		void OnDiscordPresence(const struct FDiscordRichPresence& Presence);
		void OnDiscordInit(const class FString& DiscordAppID, const class FString& SteamAppID);
		void OnDiscordCallbacks();
		bool MainMenu();
		bool LoadMap(const class FString& MapName, const class FString& GameMode);
		bool JoinServer(const class FString& ServerAddress, const class FString& ServerPassword);
		bool IsServer();
		bool IsOffline();
		bool IsInMenu();
		bool IsInGame();
		bool IsInEditor();
		bool IsInControllerMode();
		bool IsInConsole();
		bool IsInChat();
		bool IsDedicatedServer();
		bool IsClient();
		bool HostServerWithMapList(TArray<class FString> MapList, TArray<class FString> WorkshopIDs, bool bPrivate, const class FString& Name, const class FString& Password, int32_t Slots, bool bControllersOnly, bool bFriendlyFire);
		bool HostServer(const class FString& MapName, const class FString& GameMode, bool bPrivate, const class FString& Name, const class FString& Password);
		bool HasProcessedCommandLine();
		class APlayerController* GetPrimaryController();
		class UTFGameViewportClient* GetGameViewport();
		struct FDateTime GetGameTimeFromAPI();
		class ATFGameState* GetGameState();
		struct FGuid GetGameSessionID();
		bool GetGameNeedsUpdate();
		class ATFGameMode* GetGameMode();
		class ATFPlayerState* FindPlayerState();
		class ATFPlayerController* FindPlayerController();
		bool ExecuteCommand(const class FString& Command, class ATFPlayerController* Controller);
		bool DisconnectGame();
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.GameInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGameInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TFGameSession
	 * Size -> 0x0000 (FullSize[0x0258] - InheritedSize[0x0258])
	 */
	class ATFGameSession : public AGameSession
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TFGameUserSettings
	 * Size -> 0x0038 (FullSize[0x0150] - InheritedSize[0x0118])
	 */
	class UTFGameUserSettings : public UGameUserSettings
	{
	public:
		float                                                      Gamma;                                                   // 0x0118(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JREU[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FInputActionKeyMapping>                      ActionMappings;                                          // 0x0120(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPublic
		TArray<struct FInputAxisConfigEntry>                       AxisConfig;                                              // 0x0130(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPublic
		TArray<struct FInputAxisKeyMapping>                        AxisMappings;                                            // 0x0140(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TFGameViewportClient
	 * Size -> 0x0208 (FullSize[0x04F0] - InheritedSize[0x02E8])
	 */
	class UTFGameViewportClient : public UGameViewportClient
	{
	public:
		float                                                      FadeInDelay;                                             // 0x02E8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FadeInDuration;                                          // 0x02EC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FadeOutDuration;                                         // 0x02F0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FadeOutLogoDelay;                                        // 0x02F4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FadeOutLogoDuration;                                     // 0x02F8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       SplashEnabled;                                           // 0x02FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8N1K[0x3];                                   // 0x02FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          SplashTexture;                                           // 0x0300(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          SplashAnimationTexture;                                  // 0x0308(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SplashAnimationDelay;                                    // 0x0310(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SplashAnimationDuration;                                 // 0x0314(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          ShakeTexture;                                            // 0x0318(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ShakeAnimationDelay;                                     // 0x0320(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ShakeAnimationDuration;                                  // 0x0324(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         ShakeCurve;                                              // 0x0328(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ShakeBezierX1;                                           // 0x0330(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ShakeBezierY1;                                           // 0x0334(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ShakeBezierX2;                                           // 0x0338(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ShakeBezierY2;                                           // 0x033C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SplashSoundVolume;                                       // 0x0340(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SplashSoundDelay;                                        // 0x0344(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FTFGameViewportSplashSound>                  SplashSounds;                                            // 0x0348(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		class UTexture2D*                                          BackgroundTexture;                                       // 0x0358(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BackgroundScrollTime;                                    // 0x0360(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AZL3[0x4];                                   // 0x0364(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          BackgroundOverlayTexture;                                // 0x0368(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          GameOverlayTexture;                                      // 0x0370(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ReadyDelay;                                              // 0x0378(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ControllerInputDelay;                                    // 0x037C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDebug;                                                  // 0x0380(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AJ42[0x3];                                   // 0x0381(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ScreenSpeed;                                             // 0x0384(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSlateBrush                                         DefaultMapImage;                                         // 0x0388(0x0088) Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		TMap<class FString, struct FSlateBrush>                    MapImages;                                               // 0x0410(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		class UTFWebUI*                                            WebUI;                                                   // 0x0460(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DIMG[0x88];                                  // 0x0468(0x0088) MISSED OFFSET (PADDING)

	public:
		void ToggleMenu();
		void ToggleConsole();
		void ShowRenderTarget(const class FName& Name);
		bool ShowMenu();
		bool ShowLoadingScreen(const class FString& MapName);
		bool ShowInterface();
		bool ShowConsole();
		void SetUnderlayOpacity(float Opacity, float Speed);
		void SetOverlayOpacity(float Opacity, float Speed);
		void SetMenuVolume(float Volume);
		void SetFocusToInterface(bool bHUD, bool bResetMousePosition, EMouseLockMode MouseLockMode);
		void SetFocusToGame();
		void SetControllerInput(bool bController);
		bool SaveBindings();
		void ResetUnderlayOpacity(float Opacity);
		void ResetOverlayOpacity(float Opacity);
		bool ResetInterface(const class FString& MapName, bool bLoadingScreen);
		bool RemoveBinding(const class FName& Key);
		bool ProcessCommandLine();
		bool OpenLegacySettings(class ATaskForcePlayerController* Controller, TArray<class FString> WorkshopSkins1, TArray<class FString> WorkshopSkins2);
		bool OpenChat(bool bTeamOnly);
		void NewBinding(const class FName& Action);
		void LoadScript(const class FString& File, bool bHUD);
		bool LoadInterface(class UTFWebUI* Interface);
		bool IsReady();
		bool IsLoading();
		bool IsInMenu();
		bool IsInControllerMode();
		bool IsInConsole();
		bool IsInChat();
		bool IsGameInputIgnored();
		bool IsAnimating();
		void HideRenderTarget();
		bool HideMenu();
		void HideLoadingScreen();
		void HideInterface();
		bool HideConsole();
		float GetUnderlayOpacity();
		float GetOverlayOpacity();
		float GetDelay();
		float GetCrashDelay();
		void ConsolePrint(const class FString& Text, const struct FColor& Color);
		void ConsoleDebug(const class FString& Text);
		void ConsoleClear();
		bool CloseLegacySettings();
		bool CloseChat();
		void CloseAlert();
		bool CheckInterface();
		bool CancelBinding();
		bool AddBinding(const class FName& Action, const struct FKey& Key);
		void ActivateMenu();
		void ActivateLogo();
		bool ActivateInterface();
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TFHelpers
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTFHelpers : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_ServerConsole(const class FString& Text);
		void STATIC_ResetLoaded();
		void STATIC_ProcessLoaded();
		bool STATIC_OpenSteamChat();
		bool STATIC_OpenSteamBrowser(const class FString& URL);
		bool STATIC_IsTestingBuild();
		bool STATIC_IsSteamSubscribed();
		bool STATIC_IsSteamRunning();
		bool STATIC_IsShippingBuild();
		bool STATIC_IsInWorkshop();
		bool STATIC_IsInTV();
		bool STATIC_IsInternalBuild();
		bool STATIC_IsInSteamOverlay();
		bool STATIC_IsInGame(class UWorld* World);
		bool STATIC_IsInFocus();
		bool STATIC_IsInEditor(class UWorld* World);
		bool STATIC_IsDevelopmentBuild();
		bool STATIC_HasWorkshopLoadData();
		bool STATIC_HasWorkshopDownloadData();
		bool STATIC_HasMapLoadProgress();
		bool STATIC_GetWorkshopLoadData(int32_t* Installed, int32_t* Total);
		class FString STATIC_GetWorkshopDownloadTotal();
		float STATIC_GetWorkshopDownloadProgress();
		class FString STATIC_GetSteamName();
		class FString STATIC_GetSteamLanguage();
		int64_t STATIC_GetSteamID();
		int64_t STATIC_GetSteamGroupID();
		class FString STATIC_GetSteamBranch();
		int32_t STATIC_GetSteamAppID();
		float STATIC_GetMapLoadProgress();
		class FString STATIC_GetLastLoadedPackage();
		class FString STATIC_GetLastLoadedObject();
		void STATIC_ExitApplication();
		void STATIC_DrawSphere(class UWorld* World, const struct FVector& Center, float Radius, const struct FRotator& Rotation, const struct FColor& Color, bool bPersistent, float LifeTime, unsigned char DepthPriority, float Thickness);
		void STATIC_DrawLine(class UWorld* World, const struct FVector& Start, const struct FVector& End, const struct FColor& Color, bool bPersistent, float LifeTime, unsigned char DepthPriority, float Thickness);
		void STATIC_DrawHistoryGraph(class UWorld* World, float Min, float Max, TArray<float> Data, const struct FVector& Location, float Width, float Height, const struct FColor& Color, bool bPersistent, float LifeTime, unsigned char DepthPriority);
		void STATIC_DrawCoordinateSystem(class UWorld* World, const struct FVector& Location, const struct FRotator& Rotation, float Scale, bool bPersistent, float LifeTime, unsigned char DepthPriority, float Thickness);
		void STATIC_DrawCapsule(class UWorld* World, const struct FVector& Center, float HalfHeight, float Radius, const struct FRotator& Rotation, const struct FColor& Color, bool bPersistent, float LifeTime, unsigned char DepthPriority, float Thickness);
		void STATIC_DrawBox(class UWorld* World, const struct FVector& Center, const struct FVector& Extents, const struct FRotator& Rotation, const struct FColor& Color, bool bPersistent, float LifeTime, unsigned char DepthPriority, float Thickness);
		void STATIC_DrawBodyInstance(class UWorld* World, const struct FBodyInstance& BodyInstance, const struct FTransform& Transform, const struct FColor& Color, bool bPersistent, float LifeTime, unsigned char DepthPriority, float Thickness);
		void STATIC_Console(class UObject* WorldContextObject, const class FString& Text, const struct FColor& Color);
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TFLocalPlayer
	 * Size -> 0x0010 (FullSize[0x0290] - InheritedSize[0x0280])
	 */
	class UTFLocalPlayer : public ULocalPlayer
	{
	public:
		unsigned char                                              UnknownData_BZRV[0x10];                                  // 0x0280(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TFSettings
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTFSettings : public UBlueprintFunctionLibrary
	{
	public:
		struct FJsonLibraryValue STATIC_WorkshopSettings();
		struct FJsonLibraryValue STATIC_ServerSettings();
		static UClass* StaticClass();
	};

	/**
	 * Class TaskForce.TFWebUI
	 * Size -> 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
	 */
	class UTFWebUI : public UUserWidget
	{
	public:
		void UnfocusBrowser();
		void TickDebug(const class FString& Status, float Ping, float ClientTime, float ServerTime, float GameTime, int32_t Tick, int32_t Step, float Delta);
		void ShowRenderTarget(const class FName& Name);
		void ShowLoadingScreen(const class FString& Map, const struct FSlateBrush& Image);
		void ShowBrowser(bool bHUD);
		void SetOverlayOpacity(float Opacity);
		void RefreshBrowser();
		void LoadScript(const class FString& File, bool bHUD);
		bool IsInLoadingScreen();
		bool IsBrowserVisible();
		void HideRenderTarget();
		void HideLoadingScreen();
		void HideDebug();
		void HideBrowser();
		void FocusBrowser(bool bHUD, bool bResetMousePosition);
		void FadeLoadingScreen(float Opacity);
		void ExecuteScript(const class FString& Script, bool bHUD);
		void ActivateMenu();
		void ActivateLogo();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
