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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum RaidGame.EUseState
	 */
	enum class EUseState : uint8_t
	{
		S_On       = 0,
		S_Off      = 1,
		S_Disabled = 2,
		S_MAX      = 3
	};

	/**
	 * Enum RaidGame.EMoveRequest
	 */
	enum class EMoveRequest : uint8_t
	{
		Success     = 0,
		Failure     = 1,
		Interrupted = 2,
		MAX         = 3
	};

	/**
	 * Enum RaidGame.ETimeEnum
	 */
	enum class ETimeEnum : uint8_t
	{
		Before = 0,
		After  = 1,
		MAX    = 2
	};

	/**
	 * Enum RaidGame.EPassEnum
	 */
	enum class EPassEnum : uint8_t
	{
		Start     = 0,
		Completed = 1,
		MAX       = 2
	};

	/**
	 * Enum RaidGame.EGSAbilityInputID
	 */
	enum class EGSAbilityInputID : uint8_t
	{
		None             = 0,
		Confirm          = 1,
		Cancel           = 2,
		DROPPOD          = 3,
		PILOTSEAT        = 4,
		GUNNERSEAT       = 5,
		PILOTSEATOFF     = 6,
		GUNNERSEATOFF    = 7,
		HANGERFROMSHIP   = 8,
		HANGERFROMBASE   = 9,
		DROPPODSPAWN     = 10,
		DROPPODDOCK      = 11,
		DROPPODBREACH    = 12,
		FRIGATEDOCK      = 13,
		FRIGATEUNDOCK    = 14,
		MANBREACHED      = 15,
		FRIGATEEXIT      = 16,
		DROPPODEXIT      = 17,
		DROPPODFROMLEVEL = 18,
		MANTLE           = 19,
		CAMERAON         = 20,
		CAMERAOFF        = 21,
		MAX              = 22
	};

	/**
	 * Enum RaidGame.EOnlineMode
	 */
	enum class EOnlineMode : uint8_t
	{
		Offline = 0,
		LAN     = 1,
		Online  = 2,
		MAX     = 3
	};

	/**
	 * Enum RaidGame.ENavAreaFlag
	 */
	enum class ENavAreaFlag : uint8_t
	{
		Default = 0,
		Crouch  = 1,
		Jump    = 2,
		Door    = 3,
		Cover   = 4,
		MAX     = 5
	};

	/**
	 * Enum RaidGame.EClassRepNodeMapping
	 */
	enum class EClassRepNodeMapping : uint8_t
	{
		NotRouted              = 0,
		RelevantAllConnections = 1,
		Spatialize_Space       = 2,
		Spatialize_Raid        = 3,
		Spatialize_Static      = 4,
		Spatialize_Dynamic     = 5,
		Spatialize_Dormancy    = 6,
		MAX                    = 7
	};

	/**
	 * Enum RaidGame.EHangerEvent
	 */
	enum class EHangerEvent : uint8_t
	{
		SuccessOpening               = 0,
		SuccessAirlockDecompressing  = 1,
		KeyCardAccepted              = 2,
		KeyCardRejectedShipNotinDock = 3,
		KeyCardRejectedWrongDock     = 4,
		KeyCardRejectedNoKeyCard     = 5,
		FailAirLockBusy              = 6,
		FailNoDockConnection         = 7,
		FailDoorAlreadyOpen          = 8,
		FailAlreadyDecompressing     = 9,
		FailTechnicalError           = 10,
		MAX                          = 11
	};

	/**
	 * Enum RaidGame.EAIDifficulty
	 */
	enum class EAIDifficulty : uint8_t
	{
		Easy      = 0,
		Medium    = 1,
		Hard      = 2,
		NightMare = 3,
		MAX       = 4
	};

	/**
	 * Enum RaidGame.ERaidFocusPri
	 */
	enum class ERaidFocusPri : uint8_t
	{
		Default  = 0,
		Move     = 1,
		Gameplay = 2,
		MAX      = 3
	};

	/**
	 * Enum RaidGame.ERaidEQS
	 */
	enum class ERaidEQS : uint8_t
	{
		NodeBehind  = 0,
		NodeInFront = 1,
		PatrolNode  = 2,
		AttackNode  = 3,
		MAX         = 4
	};

	/**
	 * Enum RaidGame.ERaidAIState
	 */
	enum class ERaidAIState : uint8_t
	{
		Waiting        = 0,
		Patrolling     = 1,
		AttackingEnemy = 2,
		MAX            = 3
	};

	/**
	 * Enum RaidGame.ERaidGOAPEvent
	 */
	enum class ERaidGOAPEvent : uint8_t
	{
		None        = 0,
		SeenPlayer  = 1,
		HearPlayer  = 2,
		BeenDamaged = 3,
		LostPlayer  = 4,
		FoundPlayer = 5,
		MAX         = 6
	};

	/**
	 * Enum RaidGame.ERaidBotDebugState
	 */
	enum class ERaidBotDebugState : uint8_t
	{
		None               = 0,
		Patrolling         = 1,
		Optimised          = 2,
		Attacking          = 3,
		AttackingPrecision = 4,
		MovingToCover      = 5,
		Sprint             = 6,
		Crouch             = 7,
		MAX                = 8
	};

	/**
	 * Enum RaidGame.ERaidStance
	 */
	enum class ERaidStance : uint8_t
	{
		STANCE_Default  = 0,
		STANCE_Crouched = 1,
		STANCE_Prone    = 2,
		STANCE_MAX      = 3
	};

	/**
	 * Enum RaidGame.ERaidRotationType
	 */
	enum class ERaidRotationType : uint8_t
	{
		None  = 0,
		Left  = 1,
		Right = 2,
		MAX   = 3
	};

	/**
	 * Enum RaidGame.ECoverAimType
	 */
	enum class ECoverAimType : uint8_t
	{
		None     = 0,
		AimUp    = 1,
		AimLeft  = 2,
		AimRight = 3,
		MAX      = 4
	};

	/**
	 * Enum RaidGame.ECoverType
	 */
	enum class ECoverType : uint8_t
	{
		None      = 0,
		HighCover = 1,
		LowCover  = 2,
		MAX       = 3
	};

	/**
	 * Enum RaidGame.EVoiceType
	 */
	enum class EVoiceType : uint8_t
	{
		None    = 0,
		French  = 1,
		English = 2,
		Polish  = 3,
		MAX     = 4
	};

	/**
	 * Enum RaidGame.EBreachDirection
	 */
	enum class EBreachDirection : uint8_t
	{
		Right  = 0,
		Left   = 1,
		Top    = 2,
		Bottom = 3,
		MAX    = 4
	};

	/**
	 * Enum RaidGame.EUseComponetType
	 */
	enum class EUseComponetType : uint8_t
	{
		None      = 0,
		Container = 1,
		Action    = 2,
		Door      = 3,
		MAX       = 4
	};

	/**
	 * Enum RaidGame.EFireMode
	 */
	enum class EFireMode : uint8_t
	{
		SingleFire    = 0,
		SemiAutomatic = 1,
		Automatic     = 2,
		MAX           = 3
	};

	/**
	 * Enum RaidGame.EWeaponType
	 */
	enum class EWeaponType : uint8_t
	{
		None            = 0,
		Pistol          = 1,
		Shotgun         = 2,
		SubMachineGun   = 3,
		Rifle           = 4,
		SniperRifle     = 5,
		HeavyMachineGun = 6,
		Melee           = 7,
		MAX             = 8
	};

	/**
	 * Enum RaidGame.AISPAWNTYPE
	 */
	enum class EAISPAWNTYPE : uint8_t
	{
		AISPAWNTYPE_Player          = 0,
		AISPAWNTYPE_AIGuard         = 1,
		AISPAWNTYPE_AIMilitary      = 2,
		AISPAWNTYPE_AINormal        = 3,
		AISPAWNTYPE_AISPAWNTYPE_MAX = 4
	};

	/**
	 * Enum RaidGame.ESignifManagerBuckets
	 */
	enum class ESignifManagerBuckets : uint8_t
	{
		NullBucket = 0,
		Bucket4    = 1,
		Bucket3    = 2,
		Bucket2    = 3,
		Bucket1    = 4,
		MAX        = 5
	};

	/**
	 * Enum RaidGame.EPlayerTranisitionState
	 */
	enum class EPlayerTranisitionState : uint8_t
	{
		Human          = 0,
		DropShipFlying = 1,
		FrigateHelm    = 2,
		TurretControl  = 3,
		LiftToHanger   = 4,
		LiftToFrigate  = 5,
		CameraControl  = 6,
		MAX            = 7
	};

	/**
	 * Enum RaidGame.ESIDEBOOSTER
	 */
	enum class ESIDEBOOSTER : uint8_t
	{
		Left  = 0,
		Right = 1,
		off   = 2,
		MAX   = 3
	};

	/**
	 * Enum RaidGame.EFrigatePartType
	 */
	enum class EFrigatePartType : uint8_t
	{
		Helm         = 0,
		Engine       = 1,
		Cannon       = 2,
		Dock         = 3,
		Scanner      = 4,
		CloneMachine = 5,
		LifeSupport  = 6,
		MAX          = 7
	};

	/**
	 * Enum RaidGame.ERaidPhysMaterialType
	 */
	enum class ERaidPhysMaterialType : uint8_t
	{
		Unknown  = 0,
		Concrete = 1,
		Dirt     = 2,
		Water    = 3,
		Metal    = 4,
		Wood     = 5,
		Grass    = 6,
		Glass    = 7,
		Flesh    = 8,
		MAX      = 9
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct RaidGame.Atom
	 * Size -> 0x0018
	 */
	struct FAtom
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Value;                                                   // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NKKC[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RaidGame.GameplayAbilityLocalAnimMontageForMesh
	 * Size -> 0x0030
	 */
	struct FGameplayAbilityLocalAnimMontageForMesh
	{
	public:
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayAbilityLocalAnimMontage                    LocalMontageInfo;                                        // 0x0008(0x0028) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.GameplayAbilityRepAnimMontageForMesh
	 * Size -> 0x0038
	 */
	struct FGameplayAbilityRepAnimMontageForMesh
	{
	public:
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayAbilityRepAnimMontage                      RepMontageInfo;                                          // 0x0008(0x0030) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.RaidAnimMontages
	 * Size -> 0x0018
	 */
	struct FRaidAnimMontages
	{
	public:
		class UAnimMontage*                                        DefaultMontage;                                          // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        PistolMontage;                                           // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        RifleMontage;                                            // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.RaidAnimInstanceProxy
	 * Size -> 0x0010 (FullSize[0x0770] - InheritedSize[0x0760])
	 */
	struct FRaidAnimInstanceProxy : public FAnimInstanceProxy
	{
	public:
		float                                                      ASDASDA;                                                 // 0x0760(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EIZ5[0xC];                                   // 0x0764(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RaidGame.TwoBoneJointData
	 * Size -> 0x0028
	 */
	struct FTwoBoneJointData
	{
	public:
		struct FVector                                             TargetLocation;                                          // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            TargetRotation;                                          // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             JointLocation;                                           // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsActive;                                               // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4YPD[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RaidGame.ShipProjectileWeaponData
	 * Size -> 0x0020
	 */
	struct FShipProjectileWeaponData
	{
	public:
		class UClass*                                              ProjectileClass;                                         // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProjectileLife;                                          // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExplosionDamage;                                         // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExplosionRadius;                                         // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IF2V[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DamageType;                                              // 0x0018(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.RaidChatStyle
	 * Size -> 0x0900 (FullSize[0x0908] - InheritedSize[0x0008])
	 */
	struct FRaidChatStyle : public FSlateWidgetStyle
	{
	public:
		struct FEditableTextBoxStyle                               TextEntryStyle;                                          // 0x0008(0x07F8) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BackingBrush;                                            // 0x0800(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateColor                                         BoxBorderColor;                                          // 0x0888(0x0028) Edit, NativeAccessSpecifierPublic
		struct FSlateColor                                         TextColor;                                               // 0x08B0(0x0028) Edit, NativeAccessSpecifierPublic
		struct FSlateSound                                         RxMessgeSound;                                           // 0x08D8(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateSound                                         TxMessgeSound;                                           // 0x08F0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.DecalData
	 * Size -> 0x0010
	 */
	struct FDecalData
	{
	public:
		class UMaterialInstance*                                   DecalMaterial;                                           // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecalSize;                                               // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LifeSpan;                                                // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.SystemHealth
	 * Size -> 0x000C
	 */
	struct FSystemHealth
	{
	public:
		class FName                                                SystemName;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SystemHealth;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.AIFrigateSpawnLocs
	 * Size -> 0x0018
	 */
	struct FAIFrigateSpawnLocs
	{
	public:
		struct FVector                                             SpawnLoc;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            SpawnRot;                                                // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.GSGameplayEffectContainer
	 * Size -> 0x0018
	 */
	struct FGSGameplayEffectContainer
	{
	public:
		class UClass*                                              TargetType;                                              // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      TargetGameplayEffectClasses;                             // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.AbilityMeshMontage
	 * Size -> 0x0010
	 */
	struct FAbilityMeshMontage
	{
	public:
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        Montage;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.LockHealth
	 * Size -> 0x0010
	 */
	struct FLockHealth
	{
	public:
		class FName                                                LockName;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LockHealth;                                              // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LockMaxHealth;                                           // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.RaidMenuItemStyle
	 * Size -> 0x0198 (FullSize[0x01A0] - InheritedSize[0x0008])
	 */
	struct FRaidMenuItemStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         BackgroundBrush;                                         // 0x0008(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         LeftArrowImage;                                          // 0x0090(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         RightArrowImage;                                         // 0x0118(0x0088) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.RaidMenuSoundsStyle
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRaidMenuSoundsStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateSound                                         StartGameSound;                                          // 0x0008(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateSound                                         ExitGameSound;                                           // 0x0020(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.RaidMenuStyle
	 * Size -> 0x01F8 (FullSize[0x0200] - InheritedSize[0x0008])
	 */
	struct FRaidMenuStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         HeaderBackgroundBrush;                                   // 0x0008(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         LeftBackgroundBrush;                                     // 0x0090(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         RightBackgroundBrush;                                    // 0x0118(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateSound                                         MenuEnterSound;                                          // 0x01A0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateSound                                         MenuBackSound;                                           // 0x01B8(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateSound                                         OptionChangeSound;                                       // 0x01D0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateSound                                         MenuItemChangeSound;                                     // 0x01E8(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.SubNodeActor
	 * Size -> 0x0020
	 */
	struct FSubNodeActor
	{
	public:
		class UClass*                                              SubNodeActorToSpawn;                                     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LocalOffset;                                             // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            LocalRotation;                                           // 0x0014(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.RaidOptionsStyle
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRaidOptionsStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateSound                                         AcceptChangesSound;                                      // 0x0008(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateSound                                         DiscardChangesSound;                                     // 0x0020(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.DecalDetails
	 * Size -> 0x0010
	 */
	struct FDecalDetails
	{
	public:
		class UMaterialInstance*                                   DecalMaterial;                                           // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecalSize;                                               // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LifeSpan;                                                // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.RepBounds
	 * Size -> 0x0018
	 */
	struct FRepBounds
	{
	public:
		struct FVector                                             MinPoint;                                                // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MaxPoint;                                                // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.RepBoundsUnique
	 * Size -> 0x0020
	 */
	struct FRepBoundsUnique
	{
	public:
		struct FRepBounds                                          Bounds;                                                  // 0x0000(0x0018) NoDestructor, NativeAccessSpecifierPublic
		class FName                                                VolumeName;                                              // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.RaidScoreboardStyle
	 * Size -> 0x0118 (FullSize[0x0120] - InheritedSize[0x0008])
	 */
	struct FRaidScoreboardStyle : public FSlateWidgetStyle
	{
	public:
		struct FSlateBrush                                         ItemBorderBrush;                                         // 0x0008(0x0088) Edit, NativeAccessSpecifierPublic
		struct FSlateColor                                         KillStatColor;                                           // 0x0090(0x0028) Edit, NativeAccessSpecifierPublic
		struct FSlateColor                                         DeathStatColor;                                          // 0x00B8(0x0028) Edit, NativeAccessSpecifierPublic
		struct FSlateColor                                         ScoreStatColor;                                          // 0x00E0(0x0028) Edit, NativeAccessSpecifierPublic
		struct FSlateSound                                         PlayerChangeSound;                                       // 0x0108(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.ShipShop
	 * Size -> 0x0020
	 */
	struct FShipShop
	{
	public:
		TArray<class FName>                                        ShipsHere;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        FrigatesHere;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.AIShipActorToSpawn
	 * Size -> 0x0040
	 */
	struct FAIShipActorToSpawn
	{
	public:
		class UClass*                                              AIFrigateInsideToSpawn;                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SpawnLocationToWorldLevel;                               // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            SpawnRotatationToWorldLevel;                             // 0x0014(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      ChanceToSpawn;                                           // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MN00[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          AILoadoutsToSpawnInLevelStream;                          // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfAIToSpawn;                                       // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                StreamLevelToGoTag;                                      // 0x0034(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_03YC[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RaidGame.LevelStreamInstanceInfo
	 * Size -> 0x0030
	 */
	struct FLevelStreamInstanceInfo
	{
	public:
		class FName                                                PackageName;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PackageNameToLoad;                                       // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x001C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              bShouldBeLoaded : 1;                                     // 0x0028(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bShouldBeVisible : 1;                                    // 0x0028(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bShouldBlockOnLoad : 1;                                  // 0x0028(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FV6L[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LODIndex;                                                // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.OwnerBasedModifier
	 * Size -> 0x000C
	 */
	struct FOwnerBasedModifier
	{
	public:
		float                                                      Moving;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Crouching;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Aiming;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.RealisticProjectileBehavior
	 * Size -> 0x0044
	 */
	struct FRealisticProjectileBehavior
	{
	public:
		float                                                      InitialSpeed;                                            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TerminalVelocity;                                        // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Gravity;                                                 // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumEmbedToughness;                                   // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRotationFollowsVelocity : 1;                            // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VQNM[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinPenetrationVelocityFactor;                            // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AlwaysPenetrateVelocityFactor;                           // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AlwaysRicochetAngle;                                     // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AlwaysPenetrateAngle;                                    // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecelerationCoefficient;                                 // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecelerationExponent;                                    // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExitRandomness;                                          // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bounciness;                                              // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRollsWhenSliding;                                       // 0x003C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4GAM[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Friction;                                                // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.WeaponData
	 * Size -> 0x0138
	 */
	struct FWeaponData
	{
	public:
		unsigned char                                              UnknownData_SBQR[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxAmmo;                                                 // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AmmoPerClip;                                             // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InitialClips;                                            // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BIUZ[0x4];                                   // 0x0010(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EFireMode                                                  FireMode;                                                // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasDifferentFireModes;                                   // 0x0015(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WPIR[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EFireMode>                                          AllowedFireModes;                                        // 0x0018(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FVector2D                                           maxDamageWithDistance;                                   // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           minDamageWithDistance;                                   // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QBJ9[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    bulletsInOneShot;                                        // 0x0050(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KN0O[0x14];                                  // 0x0054(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOwnerBasedModifier                                 spreadModifier;                                          // 0x0068(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FOwnerBasedModifier                                 recoilModifier;                                          // 0x0074(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    StopAutoChance;                                          // 0x0080(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StopAutoCoolDown;                                        // 0x0084(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StopAutoCoolDownRange;                                   // 0x0088(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccuracyMultiplier;                                      // 0x008C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CrouchAccuracyMultiplier;                                // 0x0090(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeaponSpread;                                            // 0x0094(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FiringSpreadIncrement;                                   // 0x0098(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FiringSpreadMax;                                         // 0x009C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RecoilBlendSpeed;                                        // 0x00A0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VerticalRecoil;                                          // 0x00A4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VerticalRecoilADS;                                       // 0x00A8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HorizontalRecoilMin;                                     // 0x00AC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HorizontalRecoilMax;                                     // 0x00B0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HorizontalTolerance;                                     // 0x00B4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngleMin;                                                // 0x00B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngleMax;                                                // 0x00BC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RecoilRecoveryDelay;                                     // 0x00C0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RecoilRecoveryRate;                                      // 0x00C4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       NoRecoilRecovery;                                        // 0x00C8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6B85[0x3];                                   // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ProjectileVelocity;                                      // 0x00CC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProjectileLifeSpan;                                      // 0x00D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Damage;                                                  // 0x00D4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExplosionDamage;                                         // 0x00D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExplosionRadius;                                         // 0x00DC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DamageType;                                              // 0x00E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FireRate;                                                // 0x00E8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeBetweenShotBurstFire;                                // 0x00EC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberBurstShot;                                         // 0x00F0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRealisticProjectileBehavior                        RealProjSettings;                                        // 0x00F4(0x0044) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.WeaponAnim
	 * Size -> 0x0010
	 */
	struct FWeaponAnim
	{
	public:
		class UAnimMontage*                                        Pawn1P;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        Pawn3P;                                                  // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.InstantWeaponData
	 * Size -> 0x0028
	 */
	struct FInstantWeaponData
	{
	public:
		float                                                      WeaponSpread;                                            // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetingSpreadMod;                                      // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FiringSpreadIncrement;                                   // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FiringSpreadMax;                                         // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeaponRange;                                             // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HitDamage;                                               // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DamageType;                                              // 0x0018(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClientSideHitLeeway;                                     // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AllowedViewDotHitDir;                                    // 0x0024(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.InstantHitInfo
	 * Size -> 0x0014
	 */
	struct FInstantHitInfo
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReticleSpread;                                           // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RandomSeed;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.InstantHitMeleeInfo
	 * Size -> 0x0018
	 */
	struct FInstantHitMeleeInfo
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             End;                                                     // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.ProjectileWeaponData
	 * Size -> 0x0068
	 */
	struct FProjectileWeaponData
	{
	public:
		class UClass*                                              ProjectileClass;                                         // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProjectileLife;                                          // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExplosionDamage;                                         // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExplosionRadius;                                         // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HHBZ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DamageType;                                              // 0x0018(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRealisticProjectileBehavior                        RealProjSettings;                                        // 0x0020(0x0044) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NZ9M[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RaidGame.TrajectoryInitialConditions
	 * Size -> 0x006C
	 */
	struct FTrajectoryInitialConditions
	{
	public:
		unsigned char                                              UnknownData_4EI1[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             InitialVelocity;                                         // 0x0004(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InitialWorldLocation;                                    // 0x0010(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            InitialRotation;                                         // 0x001C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      t0;                                                      // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             v0direction;                                             // 0x002C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      v0length;                                                // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PenDeceleration;                                         // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndTrajectoryTime;                                       // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SlidingAcceleration;                                     // 0x0044(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SlidingSurfaceNormal;                                    // 0x0050(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MN52[0x10];                                  // 0x005C(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RaidGame.HitboxLocation
	 * Size -> 0x0040
	 */
	struct FHitboxLocation
	{
	public:
		struct FTransform                                          WorldTransform;                                          // 0x0000(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 PrimitiveComponent;                                      // 0x0030(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EAKY[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RaidGame.RewindFrame
	 * Size -> 0x0018
	 */
	struct FRewindFrame
	{
	public:
		float                                                      Gametime;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HM2H[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FHitboxLocation>                             HitboxLocations;                                         // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.RewindHistory
	 * Size -> 0x0010
	 */
	struct FRewindHistory
	{
	public:
		TArray<struct FRewindFrame>                                RewindHistory;                                           // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.RewindHit
	 * Size -> 0x009C
	 */
	struct FRewindHit
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x008C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FVector                                             HitComponentLocation;                                    // 0x008C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HitSpeed;                                                // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.GSGameplayEffectContainerSpec
	 * Size -> 0x0038
	 */
	struct FGSGameplayEffectContainerSpec
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0000(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FGameplayEffectSpecHandle>                   TargetGameplayEffectSpecs;                               // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.GSGameplayEffectContext
	 * Size -> 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
	 */
	struct FGSGameplayEffectContext : public FGameplayEffectContext
	{
	public:
		unsigned char                                              UnknownData_YUXN[0x28];                                  // 0x0070(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RaidGame.RaidGameplayEffectContainerSpec
	 * Size -> 0x0038
	 */
	struct FRaidGameplayEffectContainerSpec
	{
	public:
		struct FGameplayAbilityTargetDataHandle                    TargetData;                                              // 0x0000(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FGameplayEffectSpecHandle>                   TargetGameplayEffectSpecs;                               // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.RaidGameplayEffectContainer
	 * Size -> 0x0018
	 */
	struct FRaidGameplayEffectContainer
	{
	public:
		class UClass*                                              TargetType;                                              // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      TargetGameplayEffectClasses;                             // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.RaidAnimMontageCollection
	 * Size -> 0x0030
	 */
	struct FRaidAnimMontageCollection
	{
	public:
		TArray<class UAnimMontage*>                                DefaultMontages;                                         // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class UAnimMontage*>                                PistolMontages;                                          // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class UAnimMontage*>                                RifleMontages;                                           // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.HitEffect
	 * Size -> 0x0020
	 */
	struct FHitEffect
	{
	public:
		class UParticleSystem*                                     EffectForHit;                                            // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDecalDetails>                               DecalsToUse;                                             // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class USoundCue*                                           SoundHitToUse;                                           // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.HitEffectInfo
	 * Size -> 0x0048
	 */
	struct FHitEffectInfo
	{
	public:
		EBulletType                                                ForBullet;                                               // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TS5R[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHitEffect                                          FrontHit;                                                // 0x0008(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FHitEffect                                          ExitHit;                                                 // 0x0028(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.MaterialHitProperties
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FMaterialHitProperties : public FTableRowBase
	{
	public:
		TArray<struct FHitEffectInfo>                              HitInfos;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.LootEmu
	 * Size -> 0x0028
	 */
	struct FLootEmu
	{
	public:
		class FName                                                LootActorName;                                           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             LootTable;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        LootCreated;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UObject*                                             AssetReference;                                          // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.LootEmuPerRaid
	 * Size -> 0x0018
	 */
	struct FLootEmuPerRaid
	{
	public:
		class FName                                                RaidRegion;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FLootEmu>                                    LootSpawned;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.AIInvInfo
	 * Size -> 0x0050
	 */
	struct FAIInvInfo
	{
	public:
		class FName                                                AIRowName;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        AILoot;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FName                                                PrimWeapon;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PistolWeapon;                                            // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PrimAttachments;                                         // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Helmet;                                                  // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Armour;                                                  // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BackPack;                                                // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.EmuNode
	 * Size -> 0x0040
	 */
	struct FEmuNode
	{
	public:
		class FName                                                NodeRowName;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UniqueNode;                                              // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VJTO[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                LevelStreamTag;                                          // 0x000C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LFSU[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             AssetReference;                                          // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             AIAssetReference;                                        // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAIInvInfo>                                  AIEmuSpawned;                                            // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfAI;                                              // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V6DQ[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RaidGame.Precondition
	 * Size -> 0x0018
	 */
	struct FPrecondition
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Value;                                                   // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6QDG[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RaidGame.AIPlans
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAIPlans : public FTableRowBase
	{
	public:
		TArray<struct FPrecondition>                               GoalFinishingConditions;                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.FrequencisStruct
	 * Size -> 0x0018
	 */
	struct FFrequencisStruct
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J1W4[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RaidGame.GroupSpawner
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FGroupSpawner : public FTableRowBase
	{
	public:
		class FName                                                SquadCaptainLoadout;                                     // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          SquadCrewAILoadouts;                                     // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfCrew;                                            // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6RKF[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RaidGame.NodeSpawnDataRow
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FNodeSpawnDataRow : public FTableRowBase
	{
	public:
		unsigned char                                              ToSpawnHere[0x28];                                       // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		class FName                                                StreamLevelToGoTag;                                      // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PlayerStartForDroppodDockedTag;                          // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          AILoadoutsToSpawnInLevelStream;                          // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfAIToSpawn;                                       // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasToBeUnique;                                          // 0x004C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCosmeticOnly;                                           // 0x004D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoesntRandomRotate;                                     // 0x004E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I1PR[0x1];                                   // 0x004F(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RaidGame.AILoadOuts
	 * Size -> 0x00E0 (FullSize[0x00E8] - InheritedSize[0x0008])
	 */
	struct FAILoadOuts : public FTableRowBase
	{
	public:
		EAIDifficulty                                              AIHardness;                                              // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NP5A[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AICharacter[0x28];                                       // 0x0010(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		struct FDataTableRowHandle                                 PrimWeapon;                                              // 0x0038(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		class FString                                              PrimWeaponAttachments;                                   // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                 PistolWeapon;                                            // 0x0058(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                 Helmet;                                                  // 0x0068(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                 Armour;                                                  // 0x0078(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                 BackPack;                                                // 0x0088(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FDataTableRowHandle>                         Loot;                                                    // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       HeadMesh;                                                // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       BodyMesh;                                                // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StatIDForCharacter;                                      // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TeamNumber;                                              // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCaptian;                                                // 0x00CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EKIV[0x3];                                   // 0x00CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BossGroupID;                                             // 0x00D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxHealth;                                               // 0x00D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AIActionsRowname;                                        // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RespawnTimeInSeconds;                                    // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T5K7[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RaidGame.AIAcionsArray
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FAIAcionsArray : public FTableRowBase
	{
	public:
		TArray<class UClass*>                                      actions;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		class UClass*                                              AIBrain;                                                 // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.SensedPlayers
	 * Size -> 0x0018
	 */
	struct FSensedPlayers
	{
	public:
		class ARaidCharacter*                                      SensedPlayer;                                            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanSee;                                                  // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5HFQ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LastLocationSensed;                                      // 0x000C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.ShipDataRow
	 * Size -> 0x0070 (FullSize[0x0078] - InheritedSize[0x0008])
	 */
	struct FShipDataRow : public FTableRowBase
	{
	public:
		class FText                                                ItemName;                                                // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              ItemIcon[0x28];                                          // 0x0020(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		int32_t                                                    ItemCost;                                                // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SOAW[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ItemBP[0x28];                                            // 0x0050(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	};

	/**
	 * ScriptStruct RaidGame.VoiceSoundTable
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FVoiceSoundTable : public FTableRowBase
	{
	public:
		class USoundCue*                                           VoiceSoundToPLay;                                        // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.DynamicDestruction
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FDynamicDestruction : public FTableRowBase
	{
	public:
		class UStaticMesh*                                         MeshToCheck;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ApexMeshToSpawn;                                         // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.FrigateDataRow
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FFrigateDataRow : public FTableRowBase
	{
	public:
		unsigned char                                              ItemBP[0x28];                                            // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		class UClass*                                              CinematicActor;                                          // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RaidGame.TakeHitInfo
	 * Size -> 0x0130
	 */
	struct FTakeHitInfo
	{
	public:
		float                                                      ActualDamage;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GT9F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DamageTypeClass;                                         // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class ARaidCharacter>                       PawnInstigator;                                          // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AActor>                               DamageCauser;                                            // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DamageEventClassID;                                      // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bKilled : 1;                                             // 0x0024(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9JI4[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              EnsureReplicationByte;                                   // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_54HI[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDamageEvent                                        GeneralDamageEvent;                                      // 0x0030(0x0010) NativeAccessSpecifierPrivate
		struct FPointDamageEvent                                   PointDamageEvent;                                        // 0x0040(0x00B0) ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FRadialDamageEvent                                  RadialDamageEvent;                                       // 0x00F0(0x0040) ContainsInstancedReference, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct RaidGame.ProjectilelProperties
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FProjectilelProperties : public FTableRowBase
	{
	public:
		float                                                      Penatration;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CWXF[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RaidGame.MaterialProperties
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FMaterialProperties : public FTableRowBase
	{
	public:
		float                                                      Toughness;                                               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DontPen;                                                 // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K29F[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
