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
	 * Class Landscape.ControlPointMeshComponent
	 * Size -> 0x0008 (FullSize[0x04A0] - InheritedSize[0x0498])
	 */
	class UControlPointMeshComponent : public UStaticMeshComponent
	{
	public:
		unsigned char                                              UnknownData_KV93[0x8];                                   // 0x0498(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeProxy
	 * Size -> 0x02F8 (FullSize[0x0538] - InheritedSize[0x0240])
	 */
	class ALandscapeProxy : public AActor
	{
	public:
		class ULandscapeSplinesComponent*                          SplineComponent;                                         // 0x0240(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               LandscapeGuid;                                           // 0x0248(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FIntPoint                                           LandscapeSectionOffset;                                  // 0x0258(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxLODLevel;                                             // 0x0260(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LODDistanceFactor;                                       // 0x0264(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELandscapeLODFalloff                                       LODFalloff;                                              // 0x0268(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BHM7[0x3];                                   // 0x0269(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ComponentScreenSizeToUseSubSections;                     // 0x026C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LOD0ScreenSize;                                          // 0x0270(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LOD0DistributionSetting;                                 // 0x0274(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LODDistributionSetting;                                  // 0x0278(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TessellationComponentScreenSize;                         // 0x027C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseTessellationComponentScreenSizeFalloff;               // 0x0280(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ELCJ[0x3];                                   // 0x0281(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TessellationComponentScreenSizeFalloff;                  // 0x0284(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OccluderGeometryLOD;                                     // 0x0288(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StaticLightingLOD;                                       // 0x028C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPhysicalMaterial*                                   DefaultPhysMaterial;                                     // 0x0290(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StreamingDistanceMultiplier;                             // 0x0298(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PLV6[0x4];                                   // 0x029C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  LandscapeMaterial;                                       // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  LandscapeHoleMaterial;                                   // 0x02A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FLandscapeProxyMaterialOverride>             LandscapeMaterialsOverride;                              // 0x02B0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class URuntimeVirtualTexture*>                      RuntimeVirtualTextures;                                  // 0x02C0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    VirtualTextureNumLods;                                   // 0x02D0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VirtualTextureLodBias;                                   // 0x02D4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERuntimeVirtualTextureMainPassType                         VirtualTextureRenderPassType;                            // 0x02D8(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4Y89[0x3];                                   // 0x02D9(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      NegativeZBoundsExtension;                                // 0x02DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PositiveZBoundsExtension;                                // 0x02E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3KVP[0x4];                                   // 0x02E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ULandscapeComponent*>                         LandscapeComponents;                                     // 0x02E8(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class ULandscapeHeightfieldCollisionComponent*>     CollisionComponents;                                     // 0x02F8(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UHierarchicalInstancedStaticMeshComponent*>   FoliageComponents;                                       // 0x0308(0x0010) ExportObject, ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D3OF[0x64];                                  // 0x0318(0x0064) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bHasLandscapeGrass;                                      // 0x037C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KLRU[0x3];                                   // 0x037D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StaticLightingResolution;                                // 0x0380(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCastStaticShadow : 1;                                   // 0x0384(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCastShadowAsTwoSided : 1;                               // 0x0384(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCastFarShadow : 1;                                      // 0x0384(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E388[0x3];                                   // 0x0385(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bAffectDistanceFieldLighting : 1;                        // 0x0388(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLightingChannels                                   LightingChannels;                                        // 0x0389(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8TBI[0x2];                                   // 0x038A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bUseMaterialPositionOffsetInStaticLighting : 1;          // 0x038C(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRenderCustomDepth : 1;                                  // 0x038C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1KEP[0x3];                                   // 0x038D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CustomDepthStencilValue;                                 // 0x0390(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LDMaxDrawDistance;                                       // 0x0394(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLightmassPrimitiveSettings                         LightmassSettings;                                       // 0x0398(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    CollisionMipLevel;                                       // 0x03B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SimpleCollisionMipLevel;                                 // 0x03B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollisionThickness;                                      // 0x03B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7P7G[0x4];                                   // 0x03BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBodyInstance                                       BodyInstance;                                            // 0x03C0(0x0110) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              bGenerateOverlapEvents : 1;                              // 0x04D0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bBakeMaterialPositionOffsetIntoCollision : 1;            // 0x04D0(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KKIM[0x3];                                   // 0x04D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ComponentSizeQuads;                                      // 0x04D4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SubsectionSizeQuads;                                     // 0x04D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumSubsections;                                          // 0x04DC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUsedForNavigation : 1;                                  // 0x04E0(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KGBW[0x3];                                   // 0x04E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bUseDynamicMaterialInstance;                             // 0x04E4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENavDataGatheringMode                                      NavigationGeometryGatheringMode;                         // 0x04E5(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseLandscapeForCullingInvisibleHLODVertices;            // 0x04E6(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasLayersContent;                                       // 0x04E7(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class UTexture2D*, class ULandscapeWeightmapUsage*>   WeightmapUsageMap;                                       // 0x04E8(0x0050) ZeroConstructor, Transient, NativeAccessSpecifierPublic

	public:
		void SetLandscapeMaterialVectorParameterValue(const class FName& ParameterName, const struct FLinearColor& Value);
		void SetLandscapeMaterialTextureParameterValue(const class FName& ParameterName, class UTexture* Value);
		void SetLandscapeMaterialScalarParameterValue(const class FName& ParameterName, float Value);
		void EditorSetLandscapeMaterial(class UMaterialInterface* NewLandscapeMaterial);
		void EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer);
		void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections);
		void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff);
		void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize);
		void ChangeLODDistanceFactor(float InLODDistanceFactor);
		void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.Landscape
	 * Size -> 0x0000 (FullSize[0x0538] - InheritedSize[0x0538])
	 */
	class ALandscape : public ALandscapeProxy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeBlueprintBrushBase
	 * Size -> 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
	 */
	class ALandscapeBlueprintBrushBase : public AActor
	{
	public:
		void RequestLandscapeUpdate();
		class UTextureRenderTarget2D* Render(bool InIsHeightmap, class UTextureRenderTarget2D* InCombinedResult, const class FName& InWeightmapLayerName);
		void Initialize(const struct FTransform& InLandscapeTransform, const struct FIntPoint& InLandscapeSize, const struct FIntPoint& InLandscapeRenderTargetSize);
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeComponent
	 * Size -> 0x01F8 (FullSize[0x0600] - InheritedSize[0x0408])
	 */
	class ULandscapeComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_OF9J[0x4];                                   // 0x0408(0x0004) Fix Super Size
		int32_t                                                    SectionBaseY;                                            // 0x040C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ComponentSizeQuads;                                      // 0x0410(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SubsectionSizeQuads;                                     // 0x0414(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumSubsections;                                          // 0x0418(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RJLE[0x4];                                   // 0x041C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  OverrideMaterial;                                        // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  OverrideHoleMaterial;                                    // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FLandscapeComponentMaterialOverride>         OverrideMaterials;                                       // 0x0430(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UMaterialInstanceConstant*>                   MaterialInstances;                                       // 0x0440(0x0010) ZeroConstructor, TextExportTransient, NativeAccessSpecifierPublic
		TArray<class UMaterialInstanceDynamic*>                    MaterialInstancesDynamic;                                // 0x0450(0x0010) ZeroConstructor, Transient, TextExportTransient, NativeAccessSpecifierPublic
		TArray<int8_t>                                             LODIndexToMaterialIndex;                                 // 0x0460(0x0010) ZeroConstructor, TextExportTransient, NativeAccessSpecifierPublic
		TArray<int8_t>                                             MaterialIndexToDisabledTessellationMaterial;             // 0x0470(0x0010) ZeroConstructor, TextExportTransient, NativeAccessSpecifierPublic
		class UTexture2D*                                          XYOffsetmapTexture;                                      // 0x0480(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_81Z0[0x8];                                   // 0x0488(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector4                                            WeightmapScaleBias;                                      // 0x0490(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeightmapSubsectionOffset;                               // 0x04A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IMFR[0xC];                                   // 0x04A4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector4                                            HeightmapScaleBias;                                      // 0x04B0(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBox                                                CachedLocalBox;                                          // 0x04C0(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TLazyObjectPtr<class ULandscapeHeightfieldCollisionComponent> CollisionComponent;                                      // 0x04DC(0x001C) ExportObject, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          HeightmapTexture;                                        // 0x04F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FWeightmapLayerAllocationInfo>               WeightmapLayerAllocations;                               // 0x0500(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UTexture2D*>                                  WeightmapTextures;                                       // 0x0510(0x0010) ZeroConstructor, TextExportTransient, NativeAccessSpecifierPrivate
		struct FGuid                                               MapBuildDataId;                                          // 0x0520(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGuid>                                       IrrelevantLights;                                        // 0x0530(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPublic
		int32_t                                                    CollisionMipLevel;                                       // 0x0540(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SimpleCollisionMipLevel;                                 // 0x0544(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NegativeZBoundsExtension;                                // 0x0548(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PositiveZBoundsExtension;                                // 0x054C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaticLightingResolution;                                // 0x0550(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ForcedLOD;                                               // 0x0554(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LODBias;                                                 // 0x0558(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               StateId;                                                 // 0x055C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               BakedTextureMaterialGuid;                                // 0x056C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6LWN[0x4];                                   // 0x057C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          GIBakedBaseColorTexture;                                 // 0x0580(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MobileBlendableLayerMask;                                // 0x0588(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E7O5[0x7];                                   // 0x0589(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  MobileMaterialInterface;                                 // 0x0590(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          MobileMaterialInterfaces;                                // 0x0598(0x0010) ZeroConstructor, NonPIEDuplicateTransient, NativeAccessSpecifierPublic
		TArray<class UTexture2D*>                                  MobileWeightmapTextures;                                 // 0x05A8(0x0010) ZeroConstructor, NonPIEDuplicateTransient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N2EA[0x48];                                  // 0x05B8(0x0048) MISSED OFFSET (PADDING)

	public:
		class UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeGizmoActor
	 * Size -> 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
	 */
	class ALandscapeGizmoActor : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeGizmoActiveActor
	 * Size -> 0x0050 (FullSize[0x0290] - InheritedSize[0x0240])
	 */
	class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
	{
	public:
		unsigned char                                              UnknownData_UULG[0x50];                                  // 0x0240(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeGizmoRenderComponent
	 * Size -> 0x0008 (FullSize[0x0410] - InheritedSize[0x0408])
	 */
	class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_M7ED[0x8];                                   // 0x0408(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeGrassType
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class ULandscapeGrassType : public UObject
	{
	public:
		TArray<struct FGrassVariety>                               GrassVarieties;                                          // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              bEnableDensityScaling : 1;                               // 0x0038(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PAXF[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         GrassMesh;                                               // 0x0040(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GrassDensity;                                            // 0x0048(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlacementJitter;                                         // 0x004C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StartCullDistance;                                       // 0x0050(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EndCullDistance;                                         // 0x0054(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RandomRotation;                                          // 0x0058(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AlignToSurface;                                          // 0x0059(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YNVE[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeHeightfieldCollisionComponent
	 * Size -> 0x00E0 (FullSize[0x04E8] - InheritedSize[0x0408])
	 */
	class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
	{
	public:
		TArray<class ULandscapeLayerInfoObject*>                   ComponentLayerInfos;                                     // 0x0408(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    SectionBaseX;                                            // 0x0418(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SectionBaseY;                                            // 0x041C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CollisionSizeQuads;                                      // 0x0420(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollisionScale;                                          // 0x0424(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SimpleCollisionSizeQuads;                                // 0x0428(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LE0T[0x4];                                   // 0x042C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      CollisionQuadFlags;                                      // 0x0430(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FGuid                                               HeightfieldGuid;                                         // 0x0440(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBox                                                CachedLocalBox;                                          // 0x0450(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TLazyObjectPtr<class ULandscapeComponent>                  RenderComponent;                                         // 0x046C(0x001C) ExportObject, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4CKI[0x10];                                  // 0x0488(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPhysicalMaterial*>                           CookedPhysicalMaterials;                                 // 0x0498(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S41T[0x40];                                  // 0x04A8(0x0040) Fix size for supers

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeInfo
	 * Size -> 0x01D8 (FullSize[0x0200] - InheritedSize[0x0028])
	 */
	class ULandscapeInfo : public UObject
	{
	public:
		TLazyObjectPtr<class ALandscape>                           LandscapeActor;                                          // 0x0028(0x001C) IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               LandscapeGuid;                                           // 0x0044(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ComponentSizeQuads;                                      // 0x0054(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SubsectionSizeQuads;                                     // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ComponentNumSubsections;                                 // 0x005C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DrawScale;                                               // 0x0060(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ABT9[0x54];                                  // 0x006C(0x0054) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Proxies[0x50];                                           // 0x00C0(0x0050) UNKNOWN PROPERTY: SetProperty Landscape.LandscapeInfo.Proxies
		unsigned char                                              UnknownData_IH19[0xF0];                                  // 0x0110(0x00F0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeInfoMap
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class ULandscapeInfoMap : public UObject
	{
	public:
		unsigned char                                              UnknownData_TILM[0x58];                                  // 0x0028(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeLayerInfoObject
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class ULandscapeLayerInfoObject : public UObject
	{
	public:
		class FName                                                LayerName;                                               // 0x0028(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPhysicalMaterial*                                   PhysMaterial;                                            // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Hardness;                                                // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        LayerUsageDebugColor;                                    // 0x003C(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5NOY[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeMaterialInstanceConstant
	 * Size -> 0x0008 (FullSize[0x01D0] - InheritedSize[0x01C8])
	 */
	class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
	{
	public:
		unsigned char                                              bIsLayerThumbnail : 1;                                   // 0x01C8(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDisableTessellation : 1;                                // 0x01C8(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bMobile : 1;                                             // 0x01C8(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEditorToolUsage : 1;                                    // 0x01C8(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7BTX[0x7];                                   // 0x01C9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeMeshCollisionComponent
	 * Size -> 0x0018 (FullSize[0x0500] - InheritedSize[0x04E8])
	 */
	class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
	{
	public:
		struct FGuid                                               MeshGuid;                                                // 0x04E8(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R54Z[0x8];                                   // 0x04F8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeMeshProxyActor
	 * Size -> 0x0008 (FullSize[0x0248] - InheritedSize[0x0240])
	 */
	class ALandscapeMeshProxyActor : public AActor
	{
	public:
		class ULandscapeMeshProxyComponent*                        LandscapeMeshProxyComponent;                             // 0x0240(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeMeshProxyComponent
	 * Size -> 0x0028 (FullSize[0x04C0] - InheritedSize[0x0498])
	 */
	class ULandscapeMeshProxyComponent : public UStaticMeshComponent
	{
	public:
		struct FGuid                                               LandscapeGuid;                                           // 0x0498(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FIntPoint>                                   ProxyComponentBases;                                     // 0x04A8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		int8_t                                                     ProxyLOD;                                                // 0x04B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_U6PQ[0x7];                                   // 0x04B9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeSettings
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class ULandscapeSettings : public UDeveloperSettings
	{
	public:
		int32_t                                                    MaxNumberOfLayers;                                       // 0x0038(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y3A1[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeSplinesComponent
	 * Size -> 0x0038 (FullSize[0x0440] - InheritedSize[0x0408])
	 */
	class ULandscapeSplinesComponent : public UPrimitiveComponent
	{
	public:
		TArray<class ULandscapeSplineControlPoint*>                ControlPoints;                                           // 0x0408(0x0010) ZeroConstructor, Protected, TextExportTransient, NativeAccessSpecifierProtected
		TArray<class ULandscapeSplineSegment*>                     Segments;                                                // 0x0418(0x0010) ZeroConstructor, Protected, TextExportTransient, NativeAccessSpecifierProtected
		TArray<class UMeshComponent*>                              CookedForeignMeshComponents;                             // 0x0428(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, TextExportTransient, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CCFF[0x8];                                   // 0x0438(0x0008) MISSED OFFSET (PADDING)

	public:
		TArray<class USplineMeshComponent*> GetSplineMeshComponents();
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeSplineControlPoint
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class ULandscapeSplineControlPoint : public UObject
	{
	public:
		struct FVector                                             Location;                                                // 0x0028(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0034(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Width;                                                   // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SideFalloff;                                             // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndFalloff;                                              // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WMK1[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLandscapeSplineConnection>                  ConnectedSegments;                                       // 0x0050(0x0010) ZeroConstructor, TextExportTransient, NativeAccessSpecifierPublic
		TArray<struct FLandscapeSplineInterpPoint>                 Points;                                                  // 0x0060(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		struct FBox                                                Bounds;                                                  // 0x0070(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SVV7[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UControlPointMeshComponent*                          LocalMeshComponent;                                      // 0x0090(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeSplineSegment
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class ULandscapeSplineSegment : public UObject
	{
	public:
		struct FLandscapeSplineSegmentConnection                   Connections[0x2];                                        // 0x0028(0x0030) Edit, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic
		struct FInterpCurveVector                                  SplineInfo;                                              // 0x0058(0x0018) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FLandscapeSplineInterpPoint>                 Points;                                                  // 0x0070(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		struct FBox                                                Bounds;                                                  // 0x0080(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SYUY[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USplineMeshComponent*>                        LocalMeshComponents;                                     // 0x00A0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, TextExportTransient, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeStreamingProxy
	 * Size -> 0x0020 (FullSize[0x0558] - InheritedSize[0x0538])
	 */
	class ALandscapeStreamingProxy : public ALandscapeProxy
	{
	public:
		TLazyObjectPtr<class ALandscape>                           LandscapeActor;                                          // 0x0538(0x001C) Edit, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1G8A[0x4];                                   // 0x0554(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.LandscapeWeightmapUsage
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class ULandscapeWeightmapUsage : public UObject
	{
	public:
		class ULandscapeComponent*                                 ChannelUsage[0x4];                                       // 0x0028(0x0020) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               LayerGuid;                                               // 0x0048(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.MaterialExpressionLandscapeGrassOutput
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
	{
	public:
		TArray<struct FGrassInput>                                 GrassTypes;                                              // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.MaterialExpressionLandscapeLayerBlend
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
	{
	public:
		TArray<struct FLayerBlendInput>                            Layers;                                                  // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FGuid                                               ExpressionGUID;                                          // 0x0050(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.MaterialExpressionLandscapeLayerCoords
	 * Size -> 0x0018 (FullSize[0x0058] - InheritedSize[0x0040])
	 */
	class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
	{
	public:
		ETerrainCoordMappingType                                   MappingType;                                             // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELandscapeCustomizedCoordType                              CustomUVType;                                            // 0x0041(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YGEU[0x2];                                   // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MappingScale;                                            // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MappingRotation;                                         // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MappingPanU;                                             // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MappingPanV;                                             // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HM7D[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.MaterialExpressionLandscapeLayerSample
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
	{
	public:
		class FName                                                ParameterName;                                           // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PreviewWeight;                                           // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ExpressionGUID;                                          // 0x004C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7F4Z[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.MaterialExpressionLandscapeLayerSwitch
	 * Size -> 0x0048 (FullSize[0x0088] - InheritedSize[0x0040])
	 */
	class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
	{
	public:
		struct FExpressionInput                                    LayerUsed;                                               // 0x0040(0x000C) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UO5Y[0x8];                                   // 0x004C(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FExpressionInput                                    LayerNotUsed;                                            // 0x0054(0x000C) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1O3L[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ParameterName;                                           // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PreviewUsed : 1;                                         // 0x0070(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CBGR[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               ExpressionGUID;                                          // 0x0074(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3EUH[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.MaterialExpressionLandscapeLayerWeight
	 * Size -> 0x0050 (FullSize[0x0090] - InheritedSize[0x0040])
	 */
	class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
	{
	public:
		struct FExpressionInput                                    Base;                                                    // 0x0040(0x000C) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OFMJ[0x8];                                   // 0x004C(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FExpressionInput                                    Layer;                                                   // 0x0054(0x000C) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_81OI[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ParameterName;                                           // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PreviewWeight;                                           // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ConstBase;                                               // 0x0074(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ExpressionGUID;                                          // 0x0080(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Landscape.MaterialExpressionLandscapeVisibilityMask
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
	{
	public:
		struct FGuid                                               ExpressionGUID;                                          // 0x0040(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
