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
	 * Enum TaskForce.ECustomMovementMode
	 */
	enum class ECustomMovementMode : uint8_t
	{
		MOVECUSTOM_Crawling       = 0,
		MOVECUSTOM_Climbing       = 1,
		MOVECUSTOM_LadderClimbing = 2,
		MOVECUSTOM_LadderSliding  = 3,
		MOVECUSTOM_Sliding        = 4,
		MOVECUSTOM_MAX            = 5
	};

	/**
	 * Enum TaskForce.ETaskForceWorkshopStatus
	 */
	enum class ETaskForceWorkshopStatus : uint8_t
	{
		Waiting     = 0,
		Pending     = 1,
		Downloading = 2,
		Installing  = 3,
		Installed   = 4,
		Failed      = 5,
		MAX         = 6
	};

	/**
	 * Enum TaskForce.EHitbox
	 */
	enum class EHitbox : uint8_t
	{
		HitboxType_Default = 0,
		HitboxType1        = 1,
		HitboxType2        = 2,
		HitboxType3        = 3,
		HitboxType4        = 4,
		HitboxType5        = 5,
		HitboxType6        = 6,
		HitboxType7        = 7,
		HitboxType8        = 8,
		HitboxType9        = 9,
		HitboxType10       = 10,
		HitboxType11       = 11,
		HitboxType12       = 12,
		HitboxType13       = 13,
		HitboxType14       = 14,
		HitboxType15       = 15,
		HitboxType16       = 16,
		HitboxType17       = 17,
		HitboxType_Max     = 18,
		MAX                = 19
	};

	/**
	 * Enum TaskForce.ETaskForceBackerLevel
	 */
	enum class ETaskForceBackerLevel : uint8_t
	{
		Free     = 0,
		Bronze   = 1,
		Silver   = 2,
		Gold     = 3,
		Platinum = 4,
		Diamond  = 5,
		MAX      = 6
	};

	/**
	 * Enum TaskForce.ETaskForceStatsShot
	 */
	enum class ETaskForceStatsShot : uint8_t
	{
		Stand     = 0,
		Crouch    = 1,
		Prone     = 2,
		LeanLeft  = 3,
		LeanRight = 4,
		Scope     = 5,
		MAX       = 6
	};

	/**
	 * Enum TaskForce.ETaskForceStatsHitbox
	 */
	enum class ETaskForceStatsHitbox : uint8_t
	{
		Unknown       = 0,
		Head          = 1,
		Neck          = 2,
		Chest         = 3,
		Abdomen       = 4,
		Pelvis        = 5,
		UpperLeftArm  = 6,
		UpperRightArm = 7,
		LowerLeftArm  = 8,
		LowerRightArm = 9,
		LeftHand      = 10,
		RightHand     = 11,
		UpperLeftLeg  = 12,
		UpperRightLeg = 13,
		LowerLeftLeg  = 14,
		LowerRightLeg = 15,
		LeftFoot      = 16,
		RightFoot     = 17,
		MAX           = 18
	};

	/**
	 * Enum TaskForce.ETFGamePermissions
	 */
	enum class ETFGamePermissions : uint8_t
	{
		None  = 0,
		Staff = 1,
		Game  = 2,
		Mute  = 3,
		Kick  = 4,
		Ban   = 5,
		MAX   = 6
	};

	/**
	 * Enum TaskForce.ETFWorkshopError
	 */
	enum class ETFWorkshopError : uint8_t
	{
		None                           = 0,
		FailedInitializingEngine       = 1,
		FailedInitializingWorkshop     = 2,
		FailedQueryingWindowsClient    = 3,
		FailedQueryingMacClient        = 4,
		FailedQueryingLinuxClient      = 5,
		FailedCookingWindowsClient     = 6,
		FailedCookingMacClient         = 7,
		FailedCookingLinuxClient       = 8,
		FailedCookingWindowsServer     = 9,
		FailedCookingLinuxServer       = 10,
		FailedPackingWindowsClient     = 11,
		FailedPackingMacClient         = 12,
		FailedPackingLinuxClient       = 13,
		FailedPackingWindowsServer     = 14,
		FailedPackingLinuxServer       = 15,
		FailedUploadingWindowsClient   = 16,
		FailedUploadingMacClient       = 17,
		FailedUploadingLinuxClient     = 18,
		FailedUploadingWindowsServer   = 19,
		FailedUploadingLinuxServer     = 20,
		FailedUpdatingWindowsServer    = 21,
		FailedUpdatingLinuxServer      = 22,
		SteamConnectionFailed          = 23,
		SteamTimedOut                  = 24,
		SteamNotLoggedIn               = 25,
		SteamLegalAgreementNotAccepted = 26,
		SteamPrivilegesInsufficient    = 27,
		SteamCreateError               = 28,
		SteamUpdateError               = 29,
		SteamMissingPreviewImage       = 30,
		SteamInvalidPreviewImage       = 31,
		SteamPreviewImageExceedsLimit  = 32,
		MAX                            = 33
	};

	/**
	 * Enum TaskForce.ETFWorkshopStatus
	 */
	enum class ETFWorkshopStatus : uint8_t
	{
		None                   = 0,
		InitializingWorkshop   = 1,
		InitializingEngine     = 2,
		QueryingWindowsClient  = 3,
		QueryingMacClient      = 4,
		QueryingLinuxClient    = 5,
		CookingWindowsClient   = 6,
		CookingMacClient       = 7,
		CookingLinuxClient     = 8,
		CookingWindowsServer   = 9,
		CookingLinuxServer     = 10,
		PackingWindowsClient   = 11,
		PackingMacClient       = 12,
		PackingLinuxClient     = 13,
		PackingWindowsServer   = 14,
		PackingLinuxServer     = 15,
		UploadingWindowsClient = 16,
		UploadingMacClient     = 17,
		UploadingLinuxClient   = 18,
		UploadingWindowsServer = 19,
		UploadingLinuxServer   = 20,
		UpdatingWindowsServer  = 21,
		UpdatingLinuxServer    = 22,
		MAX                    = 23
	};

	/**
	 * Enum TaskForce.ETFWorkshopChange
	 */
	enum class ETFWorkshopChange : uint8_t
	{
		Subscribe        = 0,
		Unsubscribe      = 1,
		DownloadQueued   = 2,
		DownloadStarted  = 3,
		DownloadStopped  = 4,
		DownloadProgress = 5,
		DownloadComplete = 6,
		Installed        = 7,
		Uninstalled      = 8,
		UpdateQueued     = 9,
		UpdateComplete   = 10,
		MAX              = 11
	};

	/**
	 * Enum TaskForce.ETFSteamLobbyDistance
	 */
	enum class ETFSteamLobbyDistance : uint8_t
	{
		Close     = 0,
		Default   = 1,
		Far       = 2,
		Worldwide = 3,
		MAX       = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct TaskForce.BombData
	 * Size -> 0x0018
	 */
	struct FBombData
	{
	public:
		int32_t                                                    ExplosionBaseDamage;                                     // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExplosionMinimumDamage;                                  // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExplosionInnerRadius;                                    // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExplosionOuterRadius;                                    // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DamageType;                                              // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TaskForce.BreachData
	 * Size -> 0x0018
	 */
	struct FBreachData
	{
	public:
		int32_t                                                    ExplosionBaseDamage;                                     // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExplosionMinimumDamage;                                  // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExplosionInnerRadius;                                    // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExplosionOuterRadius;                                    // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DamageType;                                              // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TaskForce.HitscanDamageEvent
	 * Size -> 0x0018 (FullSize[0x00C0] - InheritedSize[0x00A8])
	 */
	struct FHitscanDamageEvent : public FPointDamageEvent
	{
	public:
		EHitbox                                                    HitBox;                                                  // 0x00A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XCCG[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector_NetQuantize100                              DamagePoint;                                             // 0x00AC(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDebug;                                                // 0x00B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AC3S[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TaskForce.HitData
	 * Size -> 0x01E8
	 */
	struct FHitData
	{
	public:
		float                                                      ActualDamage;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TCOB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DamageTypeClass;                                         // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class ACharacter>                           PawnInstigator;                                          // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AActor>                               DamageCauser;                                            // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DamageEventClassID;                                      // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bKilled : 1;                                             // 0x0024(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VB1C[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              EnsureReplicationByte;                                   // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3XG4[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDamageEvent                                        GeneralDamageEvent;                                      // 0x0030(0x0010) NativeAccessSpecifierPrivate
		struct FHitscanDamageEvent                                 HitscanDamageEvent;                                      // 0x0040(0x00C0) ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FPointDamageEvent                                   PointDamageEvent;                                        // 0x0100(0x00A8) ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FRadialDamageEvent                                  RadialDamageEvent;                                       // 0x01A8(0x0040) ContainsInstancedReference, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct TaskForce.ClimbData
	 * Size -> 0x0038
	 */
	struct FClimbData
	{
	public:
		unsigned char                                              bIsInClimbJump : 1;                                      // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsInClimbHang : 1;                                      // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsInClimbDrop : 1;                                      // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsInClimbPull : 1;                                      // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KB6I[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LedgePoint;                                              // 0x0004(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LedgeNormal;                                             // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WallPoint;                                               // 0x001C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WallNormal;                                              // 0x0028(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MoveFraction;                                            // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TaskForce.LadderData
	 * Size -> 0x003C
	 */
	struct FLadderData
	{
	public:
		unsigned char                                              bIsInClimbStep : 1;                                      // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsInClimbSpin : 1;                                      // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsInClimbHang : 1;                                      // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsInClimbDrop : 1;                                      // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsInClimbPull : 1;                                      // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsInClimbSlide : 1;                                     // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YUZB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LedgePoint;                                              // 0x0004(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LedgeNormal;                                             // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WallPoint;                                               // 0x001C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WallNormal;                                              // 0x0028(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MoveFraction;                                            // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldSpin;                                              // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GN8Q[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TaskForce.ClimbSettings
	 * Size -> 0x0010
	 */
	struct FClimbSettings
	{
	public:
		float                                                      OffsetForward;                                           // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OffsetUp;                                                // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CorrectionTime;                                          // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CorrectionDelay;                                         // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TaskForce.HitboxBoneExtremity
	 * Size -> 0x0020
	 */
	struct FHitboxBoneExtremity
	{
	public:
		TArray<class FName>                                        Left;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class FName>                                        Right;                                                   // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TaskForce.HitboxBoneExtremities
	 * Size -> 0x0040
	 */
	struct FHitboxBoneExtremities
	{
	public:
		struct FHitboxBoneExtremity                                Upper;                                                   // 0x0000(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FHitboxBoneExtremity                                Lower;                                                   // 0x0020(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TaskForce.HitboxBones
	 * Size -> 0x0110
	 */
	struct FHitboxBones
	{
	public:
		TArray<class FName>                                        Head;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class FName>                                        Neck;                                                    // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class FName>                                        Chest;                                                   // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class FName>                                        Abdomen;                                                 // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class FName>                                        Pelvis;                                                  // 0x0040(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FHitboxBoneExtremities                              Arms;                                                    // 0x0050(0x0040) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FHitboxBoneExtremities                              Legs;                                                    // 0x0090(0x0040) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FHitboxBoneExtremity                                Hands;                                                   // 0x00D0(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FHitboxBoneExtremity                                Feet;                                                    // 0x00F0(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TaskForce.DecalData
	 * Size -> 0x0010
	 */
	struct FDecalData
	{
	public:
		class UMaterial*                                           DecalMaterial;                                           // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecalSize;                                               // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_74S4[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TaskForce.HitboxDamageExtremity
	 * Size -> 0x0008
	 */
	struct FHitboxDamageExtremity
	{
	public:
		float                                                      Left;                                                    // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Right;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TaskForce.HitboxDamageExtremities
	 * Size -> 0x0010
	 */
	struct FHitboxDamageExtremities
	{
	public:
		struct FHitboxDamageExtremity                              Upper;                                                   // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FHitboxDamageExtremity                              Lower;                                                   // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TaskForce.HitboxDamage
	 * Size -> 0x0044
	 */
	struct FHitboxDamage
	{
	public:
		float                                                      Head;                                                    // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Neck;                                                    // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Chest;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Abdomen;                                                 // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Pelvis;                                                  // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHitboxDamageExtremities                            Arms;                                                    // 0x0014(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FHitboxDamageExtremities                            Legs;                                                    // 0x0024(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FHitboxDamageExtremity                              Hands;                                                   // 0x0034(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FHitboxDamageExtremity                              Feet;                                                    // 0x003C(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TaskForce.WeaponData
	 * Size -> 0x0088
	 */
	struct FWeaponData
	{
	public:
		bool                                                       bIsPistol;                                               // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsShotgun;                                              // 0x0001(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsKnife;                                                // 0x0002(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsThrown;                                               // 0x0003(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsCallout;                                              // 0x0004(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasScope;                                               // 0x0005(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInfiniteAmmo;                                           // 0x0006(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInfiniteClip;                                           // 0x0007(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSingleShot;                                             // 0x0008(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBurstFire;                                              // 0x0009(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNoAuto;                                                 // 0x000A(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VYGX[0x1];                                   // 0x000B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CalloutDistance;                                         // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxAmmo;                                                 // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AmmoPerClip;                                             // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InitialClips;                                            // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RoundsPerMinute;                                         // 0x001C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BurstRoundsPerMinute;                                    // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PelletsPerShot;                                          // 0x0024(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageScale;                                             // 0x0028(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BotDamageScale;                                          // 0x002C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DamageType;                                              // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeaponRange;                                             // 0x0038(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NoAnimReloadDuration;                                    // 0x003C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                WeaponName;                                              // 0x0040(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RecoilPitchMin;                                          // 0x0048(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RecoilPitchMax;                                          // 0x004C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RecoilYawMin;                                            // 0x0050(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RecoilYawMax;                                            // 0x0054(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RecoilAdditiveFactor;                                    // 0x0058(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RecoilAdditiveMax;                                       // 0x005C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RecoilAdditiveRate;                                      // 0x0060(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RecoilDelayTime;                                         // 0x0064(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RecoilMax;                                               // 0x0068(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RecoilRate;                                              // 0x006C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RecoilResetTime;                                         // 0x0070(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpreadAngle;                                             // 0x0074(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpreadRatio;                                             // 0x0078(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpreadMin;                                               // 0x007C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpreadMax;                                               // 0x0080(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BotRecoilScale;                                          // 0x0084(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TaskForce.WeaponAnim
	 * Size -> 0x0010
	 */
	struct FWeaponAnim
	{
	public:
		class UAnimMontage*                                        Pawn1P;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        Pawn3P;                                                  // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TaskForce.BulletHitData
	 * Size -> 0x0038
	 */
	struct FBulletHitData
	{
	public:
		class ATaskForceCharacter*                                 Target;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100                              StartPoint;                                              // 0x0008(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100                              EndPoint;                                                // 0x0014(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BoneName;                                                // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100                              DamagePoint;                                             // 0x0028(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PenetrationPower;                                        // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TaskForce.BulletImpactData
	 * Size -> 0x0060
	 */
	struct FBulletImpactData
	{
	public:
		struct FVector_NetQuantize100                              StartPoint;                                              // 0x0000(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantizeNormal                           StartNormal;                                             // 0x000C(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              StartActor;                                              // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 StartComponent;                                          // 0x0020(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100                              EndPoint;                                                // 0x0028(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantizeNormal                           EndNormal;                                               // 0x0034(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              EndActor;                                                // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 EndComponent;                                            // 0x0048(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPhysicalSurface                                           StartSurface;                                            // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPhysicalSurface                                           EndSurface;                                              // 0x0051(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9XNF[0x2];                                   // 0x0052(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                BoneName;                                                // 0x0054(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R7OJ[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TaskForce.TFWorkshopServerData
	 * Size -> 0x0020
	 */
	struct FTFWorkshopServerData
	{
	public:
		uint64_t                                                   ID;                                                      // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               Build;                                                   // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           Timestamp;                                               // 0x0018(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TaskForce.TaskForceWeaponStats
	 * Size -> 0x0024
	 */
	struct FTaskForceWeaponStats
	{
	public:
		int32_t                                                    WeaponID;                                                // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EquipTime;                                               // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageToEnemies;                                         // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageToTeammates;                                       // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Kills;                                                   // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Reloads;                                                 // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Shots;                                                   // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Hits;                                                    // 0x001C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Headshots;                                               // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TaskForce.TaskForcePlayerStats
	 * Size -> 0x0070
	 */
	struct FTaskForcePlayerStats
	{
	public:
		uint64_t                                                   SteamID;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ClientId;                                                // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsBot;                                                   // 0x000C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ILI0[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TeamID;                                                  // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AliveTime;                                               // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Kills;                                                   // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Assists;                                                 // 0x001C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TeamKills;                                               // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Score;                                                   // 0x0024(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageFromEnemies;                                       // 0x0028(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageFromTeammates;                                     // 0x002C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageFromSelf;                                          // 0x0030(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageFromWorld;                                         // 0x0034(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageToEnemies;                                         // 0x0038(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageToTeammates;                                       // 0x003C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KnifeSwings;                                             // 0x0040(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KnifeHits;                                               // 0x0044(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KnifeKills;                                              // 0x0048(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BombPickups;                                             // 0x004C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BombPlants;                                              // 0x0050(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BombDefusals;                                            // 0x0054(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HostageExtractions;                                      // 0x0058(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HostageKills;                                            // 0x005C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTaskForceWeaponStats>                       WeaponStats;                                             // 0x0060(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TaskForce.TaskForceDeathStats
	 * Size -> 0x0028
	 */
	struct FTaskForceDeathStats
	{
	public:
		uint64_t                                                   SteamID;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ClientId;                                                // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsBot;                                                   // 0x000C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DOBT[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TeamID;                                                  // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WeaponID;                                                // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TotalDamageTaken;                                        // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TotalDamageGiven;                                        // 0x001C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalHitsTaken;                                          // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalHitsGiven;                                          // 0x0024(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TaskForce.ProjectileWeaponData
	 * Size -> 0x0028
	 */
	struct FProjectileWeaponData
	{
	public:
		class UClass*                                              ProjectileClass;                                         // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProjectileLife;                                          // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExplosionBaseDamage;                                     // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExplosionMinimumDamage;                                  // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExplosionInnerRadius;                                    // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExplosionOuterRadius;                                    // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ASH5[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DamageType;                                              // 0x0020(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TaskForce.TaskForceCrosshairIcon
	 * Size -> 0x0010
	 */
	struct FTaskForceCrosshairIcon
	{
	public:
		int32_t                                                    X;                                                       // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Y;                                                       // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Width;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Height;                                                  // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TaskForce.TaskForceCrosshair
	 * Size -> 0x0050
	 */
	struct FTaskForceCrosshair
	{
	public:
		struct FTaskForceCrosshairIcon                             Center;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTaskForceCrosshairIcon                             Top;                                                     // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTaskForceCrosshairIcon                             Bottom;                                                  // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTaskForceCrosshairIcon                             Left;                                                    // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTaskForceCrosshairIcon                             Right;                                                   // 0x0040(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TaskForce.TFGameViewportSplashSound
	 * Size -> 0x0010
	 */
	struct FTFGameViewportSplashSound
	{
	public:
		class USoundCue*                                           Sound;                                                   // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Delay;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4H3K[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TaskForce.ThreadInfo
	 * Size -> 0x0018
	 */
	struct FThreadInfo
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Flags;                                                   // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TFAA[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TaskForce.ModuleInfo
	 * Size -> 0x0048
	 */
	struct FModuleInfo
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Path;                                                    // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BaseAddress;                                             // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BaseSize;                                                // 0x0040(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3SFR[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TaskForce.ProcessInfo
	 * Size -> 0x0068
	 */
	struct FProcessInfo
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              File;                                                    // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ParentId;                                                // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ModuleId;                                                // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Threads;                                                 // 0x0040(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Flags;                                                   // 0x0044(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FThreadInfo>                                 ThreadList;                                              // 0x0048(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FModuleInfo>                                 ModuleList;                                              // 0x0058(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TaskForce.BulletData
	 * Size -> 0x0080
	 */
	struct FBulletData
	{
	public:
		bool                                                       StartImpact;                                             // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EndImpact;                                               // 0x0001(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ARSU[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             StartPoint;                                              // 0x0004(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             StartNormal;                                             // 0x0010(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6716[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              StartActor;                                              // 0x0020(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 StartComponent;                                          // 0x0028(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             EndPoint;                                                // 0x0030(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             EndNormal;                                               // 0x003C(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              EndActor;                                                // 0x0048(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 EndComponent;                                            // 0x0050(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPhysicalSurface                                           StartSurface;                                            // 0x0058(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPhysicalSurface                                           EndSurface;                                              // 0x0059(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2S3E[0x2];                                   // 0x005A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PenetrationPower;                                        // 0x005C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PenetrationDepth;                                        // 0x0060(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForwardDoubleSided;                                     // 0x0064(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReverseDoubleSided;                                     // 0x0065(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsHitbox;                                                // 0x0066(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_029O[0x1];                                   // 0x0067(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                BoneName;                                                // 0x0068(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DamagePoint;                                             // 0x0070(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HOO9[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TaskForce.TaskForceStats
	 * Size -> 0x0060
	 */
	struct FTaskForceStats
	{
	public:
		unsigned char                                              UnknownData_F725[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TaskForce.TaskForceStatsCache
	 * Size -> 0x0068
	 */
	struct FTaskForceStatsCache
	{
	public:
		unsigned char                                              UnknownData_ZVUZ[0x68];                                  // 0x0000(0x0068) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TaskForce.TaskForceStatsSession
	 * Size -> 0x0148
	 */
	struct FTaskForceStatsSession
	{
	public:
		unsigned char                                              UnknownData_5ION[0x148];                                 // 0x0000(0x0148) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TaskForce.TaskForceStatsWeapon
	 * Size -> 0x0040
	 */
	struct FTaskForceStatsWeapon
	{
	public:
		unsigned char                                              UnknownData_J4EW[0x40];                                  // 0x0000(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TaskForce.TaskForceStatsMunition
	 * Size -> 0x0034
	 */
	struct FTaskForceStatsMunition
	{
	public:
		unsigned char                                              UnknownData_BVEZ[0x34];                                  // 0x0000(0x0034) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TaskForce.TaskForceStatsMatrix
	 * Size -> 0x000C
	 */
	struct FTaskForceStatsMatrix
	{
	public:
		unsigned char                                              UnknownData_Q7EG[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TaskForce.TaskForceStatsInventory
	 * Size -> 0x000C
	 */
	struct FTaskForceStatsInventory
	{
	public:
		unsigned char                                              UnknownData_0WC2[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TaskForce.TFLoadData
	 * Size -> 0x0014
	 */
	struct FTFLoadData
	{
	public:
		unsigned char                                              UnknownData_GFPK[0x14];                                  // 0x0000(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TaskForce.TFServerListing
	 * Size -> 0x0030
	 */
	struct FTFServerListing
	{
	public:
		class FString                                              TravelAddress;                                           // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LobbyID;                                                 // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Ping;                                                    // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentPlayers;                                          // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaximumSlots;                                            // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MOZZ[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TaskForce.TFWorkshopLoadData
	 * Size -> 0x0020
	 */
	struct FTFWorkshopLoadData
	{
	public:
		int32_t                                                    Installed;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Total;                                                   // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   ItemDownloading;                                         // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   ItemBytesDownloaded;                                     // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   ItemBytesTotal;                                          // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TaskForce.TFWorkshopData
	 * Size -> 0x0050
	 */
	struct FTFWorkshopData
	{
	public:
		class FString                                              Title;                                                   // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IconFile;                                                // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ChangeNotes;                                             // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      Tags;                                                    // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct TaskForce.TFWorkshopItem
	 * Size -> 0x00B0
	 */
	struct FTFWorkshopItem
	{
	public:
		unsigned char                                              UnknownData_9OTW[0xB0];                                  // 0x0000(0x00B0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TaskForce.TFWorkshopMetadata
	 * Size -> 0x00A0
	 */
	struct FTFWorkshopMetadata
	{
	public:
		unsigned char                                              UnknownData_NC1D[0xA0];                                  // 0x0000(0x00A0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TaskForce.TFWorkshopMapMetadata
	 * Size -> 0x0038
	 */
	struct FTFWorkshopMapMetadata
	{
	public:
		unsigned char                                              UnknownData_B4OB[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
