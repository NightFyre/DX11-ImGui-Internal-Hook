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
	 * Class Foliage.FoliageInstancedStaticMeshComponent
	 * Size -> 0x0028 (FullSize[0x0640] - InheritedSize[0x0618])
	 */
	class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
	{
	public:
		class FScriptMulticastDelegate                             OnInstanceTakePointDamage;                               // 0x0618(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInstanceTakeRadialDamage;                              // 0x0628(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V500[0x8];                                   // 0x0638(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Foliage.FoliageStatistics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFoliageStatistics : public UBlueprintFunctionLibrary
	{
	public:
		int32_t STATIC_FoliageOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FVector& CenterPosition, float Radius);
		int32_t STATIC_FoliageOverlappingBoxCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FBox& Box);
		static UClass* StaticClass();
	};

	/**
	 * Class Foliage.FoliageType
	 * Size -> 0x0318 (FullSize[0x0340] - InheritedSize[0x0028])
	 */
	class UFoliageType : public UObject
	{
	public:
		struct FGuid                                               UpdateGuid;                                              // 0x0028(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Density;                                                 // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DensityAdjustmentFactor;                                 // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFoliageScaling                                            Scaling;                                                 // 0x0044(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NUOI[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFloatInterval                                      ScaleX;                                                  // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      ScaleY;                                                  // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      ScaleZ;                                                  // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFoliageVertexColorChannelMask                      VertexColorMaskByChannel[0x4];                           // 0x0060(0x0030) Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		EFoliageVertexColorMask                                    VertexColorMask;                                         // 0x0090(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QXK1[0x3];                                   // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VertexColorMaskThreshold;                                // 0x0094(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              VertexColorMaskInvert : 1;                               // 0x0098(0x0001) BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GACU[0x3];                                   // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFloatInterval                                      ZOffset;                                                 // 0x009C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              AlignToNormal : 1;                                       // 0x00A4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UOV3[0x3];                                   // 0x00A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AlignMaxAngle;                                           // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              RandomYaw : 1;                                           // 0x00AC(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P4EU[0x3];                                   // 0x00AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RandomPitchAngle;                                        // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      GroundSlopeAngle;                                        // 0x00B4(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      Height;                                                  // 0x00BC(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BY29[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        LandscapeLayers;                                         // 0x00C8(0x0010) Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
		class FName                                                LandscapeLayer;                                          // 0x00D8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CollisionWithWorld : 1;                                  // 0x00E0(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N6EP[0x3];                                   // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CollisionScale;                                          // 0x00E4(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumLayerWeight;                                      // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBoxSphereBounds                                    MeshBounds;                                              // 0x00F4(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             LowBoundOriginRadius;                                    // 0x0110(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EComponentMobility                                         Mobility;                                                // 0x011C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZRGD[0x3];                                   // 0x011D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInt32Interval                                      CullDistance;                                            // 0x0120(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableStaticLighting : 1;                               // 0x0128(0x0001) BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CastShadow : 1;                                          // 0x0128(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAffectDynamicIndirectLighting : 1;                      // 0x0128(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAffectDistanceFieldLighting : 1;                        // 0x0128(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCastDynamicShadow : 1;                                  // 0x0128(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCastStaticShadow : 1;                                   // 0x0128(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCastShadowAsTwoSided : 1;                               // 0x0128(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bReceivesDecals : 1;                                     // 0x0128(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideLightMapRes : 1;                                // 0x0129(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HJEW[0x2];                                   // 0x012A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    OverriddenLightMapRes;                                   // 0x012C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELightmapType                                              LightmapType;                                            // 0x0130(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T0XL[0x3];                                   // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bUseAsOccluder : 1;                                      // 0x0134(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TV18[0x3];                                   // 0x0135(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBodyInstance                                       BodyInstance;                                            // 0x0138(0x0110) Edit, NativeAccessSpecifierPublic
		EHasCustomNavigableGeometry                                CustomNavigableGeometry;                                 // 0x0248(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLightingChannels                                   LightingChannels;                                        // 0x0249(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UUMO[0x2];                                   // 0x024A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bRenderCustomDepth : 1;                                  // 0x024C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GAV8[0x3];                                   // 0x024D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CustomDepthStencilValue;                                 // 0x0250(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TranslucencySortPriority;                                // 0x0254(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollisionRadius;                                         // 0x0258(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShadeRadius;                                             // 0x025C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumSteps;                                                // 0x0260(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialSeedDensity;                                      // 0x0264(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AverageSpreadDistance;                                   // 0x0268(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpreadVariance;                                          // 0x026C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SeedsPerStep;                                            // 0x0270(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DistributionSeed;                                        // 0x0274(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxInitialSeedOffset;                                    // 0x0278(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanGrowInShade;                                         // 0x027C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnsInShade;                                          // 0x027D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_58HE[0x2];                                   // 0x027E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxInitialAge;                                           // 0x0280(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAge;                                                  // 0x0284(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OverlapPriority;                                         // 0x0288(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      ProceduralScale;                                         // 0x028C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SIYV[0x4];                                   // 0x0294(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  ScaleCurve;                                              // 0x0298(0x0088) Edit, NativeAccessSpecifierPublic
		int32_t                                                    ChangeCount;                                             // 0x0320(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ReapplyDensity : 1;                                      // 0x0324(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ReapplyRadius : 1;                                       // 0x0324(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ReapplyAlignToNormal : 1;                                // 0x0324(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ReapplyRandomYaw : 1;                                    // 0x0324(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ReapplyScaling : 1;                                      // 0x0324(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ReapplyScaleX : 1;                                       // 0x0324(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ReapplyScaleY : 1;                                       // 0x0324(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ReapplyScaleZ : 1;                                       // 0x0324(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ReapplyRandomPitchAngle : 1;                             // 0x0325(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ReapplyGroundSlope : 1;                                  // 0x0325(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ReapplyHeight : 1;                                       // 0x0325(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ReapplyLandscapeLayers : 1;                              // 0x0325(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ReapplyZOffset : 1;                                      // 0x0325(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ReapplyCollisionWithWorld : 1;                           // 0x0325(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ReapplyVertexColorMask : 1;                              // 0x0325(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableDensityScaling : 1;                               // 0x0325(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QPXK[0x2];                                   // 0x0326(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class URuntimeVirtualTexture*>                      RuntimeVirtualTextures;                                  // 0x0328(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    VirtualTextureCullMips;                                  // 0x0338(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERuntimeVirtualTextureMainPassType                         VirtualTextureRenderPassType;                            // 0x033C(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DRTG[0x3];                                   // 0x033D(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Foliage.FoliageType_Actor
	 * Size -> 0x0008 (FullSize[0x0348] - InheritedSize[0x0340])
	 */
	class UFoliageType_Actor : public UFoliageType
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x0340(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Foliage.FoliageType_InstancedStaticMesh
	 * Size -> 0x0020 (FullSize[0x0360] - InheritedSize[0x0340])
	 */
	class UFoliageType_InstancedStaticMesh : public UFoliageType
	{
	public:
		class UStaticMesh*                                         Mesh;                                                    // 0x0340(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          OverrideMaterials;                                       // 0x0348(0x0010) Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
		class UClass*                                              ComponentClass;                                          // 0x0358(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Foliage.InstancedFoliageActor
	 * Size -> 0x0050 (FullSize[0x0290] - InheritedSize[0x0240])
	 */
	class AInstancedFoliageActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_928I[0x50];                                  // 0x0240(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Foliage.InteractiveFoliageActor
	 * Size -> 0x0060 (FullSize[0x02B0] - InheritedSize[0x0250])
	 */
	class AInteractiveFoliageActor : public AStaticMeshActor
	{
	public:
		class UCapsuleComponent*                                   CapsuleComponent;                                        // 0x0250(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             TouchingActorEntryPosition;                              // 0x0258(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             FoliageVelocity;                                         // 0x0264(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             FoliageForce;                                            // 0x0270(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             FoliagePosition;                                         // 0x027C(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      FoliageDamageImpulseScale;                               // 0x0288(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FoliageTouchImpulseScale;                                // 0x028C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FoliageStiffness;                                        // 0x0290(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FoliageStiffnessQuadratic;                               // 0x0294(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FoliageDamping;                                          // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDamageImpulse;                                        // 0x029C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxTouchImpulse;                                         // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxForce;                                                // 0x02A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Mass;                                                    // 0x02A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_492Y[0x4];                                   // 0x02AC(0x0004) MISSED OFFSET (PADDING)

	public:
		void CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class Foliage.InteractiveFoliageComponent
	 * Size -> 0x0008 (FullSize[0x04A0] - InheritedSize[0x0498])
	 */
	class UInteractiveFoliageComponent : public UStaticMeshComponent
	{
	public:
		unsigned char                                              UnknownData_7OSA[0x8];                                   // 0x0498(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Foliage.ProceduralFoliageBlockingVolume
	 * Size -> 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
	 */
	class AProceduralFoliageBlockingVolume : public AVolume
	{
	public:
		class AProceduralFoliageVolume*                            ProceduralFoliageVolume;                                 // 0x0278(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Foliage.ProceduralFoliageComponent
	 * Size -> 0x0028 (FullSize[0x0100] - InheritedSize[0x00D8])
	 */
	class UProceduralFoliageComponent : public UActorComponent
	{
	public:
		class UProceduralFoliageSpawner*                           FoliageSpawner;                                          // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TileOverlap;                                             // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PPN8[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AVolume*                                             SpawningVolume;                                          // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGuid                                               ProceduralGuid;                                          // 0x00F0(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Foliage.ProceduralFoliageSpawner
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UProceduralFoliageSpawner : public UObject
	{
	public:
		int32_t                                                    RandomSeed;                                              // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TileSize;                                                // 0x002C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumUniqueTiles;                                          // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumQuadTreeSize;                                     // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PBM1[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFoliageTypeObject>                          FoliageTypes;                                            // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		bool                                                       bNeedsSimulation;                                        // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XLP4[0x1F];                                  // 0x0051(0x001F) MISSED OFFSET (PADDING)

	public:
		void Simulate(int32_t NumSteps);
		static UClass* StaticClass();
	};

	/**
	 * Class Foliage.ProceduralFoliageTile
	 * Size -> 0x0130 (FullSize[0x0158] - InheritedSize[0x0028])
	 */
	class UProceduralFoliageTile : public UObject
	{
	public:
		class UProceduralFoliageSpawner*                           FoliageSpawner;                                          // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_X11N[0xA0];                                  // 0x0030(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FProceduralFoliageInstance>                  InstancesArray;                                          // 0x00D0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0WNB[0x78];                                  // 0x00E0(0x0078) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Foliage.ProceduralFoliageVolume
	 * Size -> 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
	 */
	class AProceduralFoliageVolume : public AVolume
	{
	public:
		class UProceduralFoliageComponent*                         ProceduralComponent;                                     // 0x0278(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
