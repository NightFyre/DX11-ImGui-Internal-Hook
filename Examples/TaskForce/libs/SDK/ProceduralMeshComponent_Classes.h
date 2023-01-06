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
	 * Class ProceduralMeshComponent.KismetProceduralMeshLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UKismetProceduralMeshLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SliceProceduralMesh(class UProceduralMeshComponent* InProcMesh, const struct FVector& PlanePosition, const struct FVector& PlaneNormal, bool bCreateOtherHalf, class UProceduralMeshComponent** OutOtherHalfProcMesh, EProcMeshSliceCapOption CapOption, class UMaterialInterface* CapMaterial);
		void STATIC_GetSectionFromStaticMesh(class UStaticMesh* InMesh, int32_t LODIndex, int32_t SectionIndex, TArray<struct FVector>* Vertices, TArray<int32_t>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents);
		void STATIC_GetSectionFromProceduralMesh(class UProceduralMeshComponent* InProcMesh, int32_t SectionIndex, TArray<struct FVector>* Vertices, TArray<int32_t>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents);
		void STATIC_GenerateBoxMesh(const struct FVector& BoxRadius, TArray<struct FVector>* Vertices, TArray<int32_t>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents);
		void STATIC_CreateGridMeshWelded(int32_t NumX, int32_t NumY, TArray<int32_t>* Triangles, TArray<struct FVector>* Vertices, TArray<struct FVector2D>* UVs, float GridSpacing);
		void STATIC_CreateGridMeshTriangles(int32_t NumX, int32_t NumY, bool bWinding, TArray<int32_t>* Triangles);
		void STATIC_CreateGridMeshSplit(int32_t NumX, int32_t NumY, TArray<int32_t>* Triangles, TArray<struct FVector>* Vertices, TArray<struct FVector2D>* UVs, TArray<struct FVector2D>* UV1s, float GridSpacing);
		void STATIC_CopyProceduralMeshFromStaticMeshComponent(class UStaticMeshComponent* StaticMeshComponent, int32_t LODIndex, class UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision);
		void STATIC_ConvertQuadToTriangles(TArray<int32_t>* Triangles, int32_t Vert0, int32_t Vert1, int32_t Vert2, int32_t Vert3);
		void STATIC_CalculateTangentsForMesh(TArray<struct FVector> Vertices, TArray<int32_t> Triangles, TArray<struct FVector2D> UVs, TArray<struct FVector>* Normals, TArray<struct FProcMeshTangent>* Tangents);
		static UClass* StaticClass();
	};

	/**
	 * Class ProceduralMeshComponent.ProceduralMeshComponent
	 * Size -> 0x0070 (FullSize[0x04A0] - InheritedSize[0x0430])
	 */
	class UProceduralMeshComponent : public UMeshComponent
	{
	public:
		unsigned char                                              UnknownData_RJEL[0x8];                                   // 0x0430(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bUseComplexAsSimpleCollision;                            // 0x0438(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAsyncCooking;                                        // 0x0439(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LXHA[0x6];                                   // 0x043A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBodySetup*                                          ProcMeshBodySetup;                                       // 0x0440(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FProcMeshSection>                            ProcMeshSections;                                        // 0x0448(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FKConvexElem>                                CollisionConvexElems;                                    // 0x0458(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		struct FBoxSphereBounds                                    LocalBounds;                                             // 0x0468(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XDZD[0x4];                                   // 0x0484(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UBodySetup*>                                  AsyncBodySetupQueue;                                     // 0x0488(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7FN7[0x8];                                   // 0x0498(0x0008) MISSED OFFSET (PADDING)

	public:
		void UpdateMeshSection_LinearColor(int32_t SectionIndex, TArray<struct FVector> Vertices, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FVector2D> UV1, TArray<struct FVector2D> UV2, TArray<struct FVector2D> UV3, TArray<struct FLinearColor> VertexColors, TArray<struct FProcMeshTangent> Tangents);
		void UpdateMeshSection(int32_t SectionIndex, TArray<struct FVector> Vertices, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FColor> VertexColors, TArray<struct FProcMeshTangent> Tangents);
		void SetMeshSectionVisible(int32_t SectionIndex, bool bNewVisibility);
		bool IsMeshSectionVisible(int32_t SectionIndex);
		int32_t GetNumSections();
		void CreateMeshSection_LinearColor(int32_t SectionIndex, TArray<struct FVector> Vertices, TArray<int32_t> Triangles, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FVector2D> UV1, TArray<struct FVector2D> UV2, TArray<struct FVector2D> UV3, TArray<struct FLinearColor> VertexColors, TArray<struct FProcMeshTangent> Tangents, bool bCreateCollision);
		void CreateMeshSection(int32_t SectionIndex, TArray<struct FVector> Vertices, TArray<int32_t> Triangles, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FColor> VertexColors, TArray<struct FProcMeshTangent> Tangents, bool bCreateCollision);
		void ClearMeshSection(int32_t SectionIndex);
		void ClearCollisionConvexMeshes();
		void ClearAllMeshSections();
		void AddCollisionConvexMesh(TArray<struct FVector> ConvexVerts);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
