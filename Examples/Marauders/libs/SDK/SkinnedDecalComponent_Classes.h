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
	 * Class SkinnedDecalComponent.SkinnedDecalInstance
	 * Size -> 0x0018 (FullSize[0x0210] - InheritedSize[0x01F8])
	 */
	class USkinnedDecalInstance : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_VV8A[0x4];                                   // 0x01F8(0x0004) Fix Super Size
		int32_t                                                    SubUV;                                                   // 0x01FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Size;                                                    // 0x0200(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HX1I[0xC];                                   // 0x0204(0x000C) MISSED OFFSET (PADDING)

	public:
		void UpdateDecal();
		class USkinnedDecalSampler* GetSampler();
		static UClass* StaticClass();
	};

	/**
	 * Class SkinnedDecalComponent.SkinnedDecalSampler
	 * Size -> 0x00C8 (FullSize[0x0178] - InheritedSize[0x00B0])
	 */
	class USkinnedDecalSampler : public UActorComponent
	{
	public:
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x00B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     DecalLocations;                                          // 0x00B8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            EmptyIndexes;                                            // 0x00C8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    LayerIndex;                                              // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMaterialParameterAssociation                              Association;                                             // 0x00DC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESkinnedDecalAdditionalData                                AdditionalData;                                          // 0x00DD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LJ6T[0x2];                                   // 0x00DE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInstanceDynamic*>                    Materials;                                               // 0x00E0(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    LastDecalIndex;                                          // 0x00F0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxDecals;                                               // 0x00F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDecalDistance;                                        // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TranslucentBlend;                                        // 0x00FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I5WH[0x3];                                   // 0x00FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  TranslucentBlendMaterial;                                // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class USkinnedDecalInstance*, int32_t>                InstanceMap;                                             // 0x0108(0x0050) ContainsInstancedReference, NativeAccessSpecifierPublic
		class UMaterialInstanceDynamic*                            TranslucentBlendMaterialDynamic;                         // 0x0158(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class USkeletalMeshComponent*>                      RenderMeshes;                                            // 0x0160(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UTextureRenderTarget2D*                              DataTarget;                                              // 0x0170(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void UpdateInstance(class USkinnedDecalInstance* Instance);
		void UpdateAllDecals();
		int32_t SpawnDecal(const struct FVector& Location, const struct FQuat& Rotation, const class FName& BoneName, float Size, int32_t SubUV, int32_t Index);
		void SetupMaterials();
		void SetMeshComponent(class USkeletalMeshComponent* MeshComponent, bool Child);
		void RemoveDecal(int32_t Index);
		class UTextureRenderTarget2D* GetDataTarget();
		void CloneDecals(class USkinnedDecalSampler* Source);
		void ClearAllDecals();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
