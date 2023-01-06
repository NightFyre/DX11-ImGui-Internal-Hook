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
	 * Class EditableMesh.EditableMeshAdapter
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEditableMeshAdapter : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EditableMesh.EditableGeometryCollectionAdapter
	 * Size -> 0x00B0 (FullSize[0x00D8] - InheritedSize[0x0028])
	 */
	class UEditableGeometryCollectionAdapter : public UEditableMeshAdapter
	{
	public:
		class UGeometryCollection*                                 GeometryCollection;                                      // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGeometryCollection*                                 OriginalGeometryCollection;                              // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    GeometryCollectionLODIndex;                              // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_566Y[0x9C];                                  // 0x003C(0x009C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EditableMesh.EditableMesh
	 * Size -> 0x06E0 (FullSize[0x0708] - InheritedSize[0x0028])
	 */
	class UEditableMesh : public UObject
	{
	public:
		unsigned char                                              UnknownData_XIYB[0x390];                                 // 0x0028(0x0390) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UEditableMeshAdapter*>                        Adapters;                                                // 0x03B8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GYGN[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TextureCoordinateCount;                                  // 0x03D0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7JPR[0x148];                                 // 0x03D4(0x0148) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PendingCompactCounter;                                   // 0x051C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SubdivisionCount;                                        // 0x0520(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FWEW[0x1E4];                                 // 0x0524(0x01E4) MISSED OFFSET (PADDING)

	public:
		void WeldVertices(TArray<struct FVertexID> VertexIDs, struct FVertexID* OutNewVertexID);
		void TryToRemoveVertex(const struct FVertexID& VertexID, bool* bOutWasVertexRemoved, struct FEdgeID* OutNewEdgeID);
		void TryToRemovePolygonEdge(const struct FEdgeID& EdgeID, bool* bOutWasEdgeRemoved, struct FPolygonID* OutNewPolygonID);
		void TriangulatePolygons(TArray<struct FPolygonID> PolygonIDs, TArray<struct FPolygonID>* OutNewTrianglePolygons);
		void TessellatePolygons(TArray<struct FPolygonID> PolygonIDs, ETriangleTessellationMode TriangleTessellationMode, TArray<struct FPolygonID>* OutNewPolygonIDs);
		void StartModification(EMeshModificationType MeshModificationType, EMeshTopologyChange MeshTopologyChange);
		void SplitPolygons(TArray<struct FPolygonToSplit> PolygonsToSplit, TArray<struct FEdgeID>* OutNewEdgeIDs);
		void SplitPolygonalMesh(const struct FPlane& InPlane, TArray<struct FPolygonID>* PolygonIDs1, TArray<struct FPolygonID>* PolygonIDs2, TArray<struct FEdgeID>* BoundaryIDs);
		void SplitEdge(const struct FEdgeID& EdgeID, TArray<float> Splits, TArray<struct FVertexID>* OutNewVertexIDs);
		void SetVerticesCornerSharpness(TArray<struct FVertexID> VertexIDs, TArray<float> VerticesNewCornerSharpness);
		void SetVerticesAttributes(TArray<struct FAttributesForVertex> AttributesForVertices);
		void SetVertexInstancesAttributes(TArray<struct FAttributesForVertexInstance> AttributesForVertexInstances);
		void SetTextureCoordinateCount(int32_t NumTexCoords);
		void SetSubdivisionCount(int32_t NewSubdivisionCount);
		void SetPolygonsVertexAttributes(TArray<struct FVertexAttributesForPolygon> VertexAttributesForPolygons);
		void SetEdgesHardnessAutomatically(TArray<struct FEdgeID> EdgeIDs, float MaxDotProductForSoftEdge);
		void SetEdgesHardness(TArray<struct FEdgeID> EdgeIDs, TArray<bool> EdgesNewIsHard);
		void SetEdgesCreaseSharpness(TArray<struct FEdgeID> EdgeIDs, TArray<float> EdgesNewCreaseSharpness);
		void SetEdgesAttributes(TArray<struct FAttributesForEdge> AttributesForEdges);
		void SetAllowUndo(bool bInAllowUndo);
		void SetAllowSpatialDatabase(bool bInAllowSpatialDatabase);
		void SetAllowCompact(bool bInAllowCompact);
		void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(const struct FPlane& InPlane, TArray<struct FPolygonID>* OutPolygons);
		void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(const struct FVector& LineSegmentStart, const struct FVector& LineSegmentEnd, TArray<struct FPolygonID>* OutPolygons);
		void SearchSpatialDatabaseForPolygonsInVolume(TArray<struct FPlane> Planes, TArray<struct FPolygonID>* OutPolygons);
		class UEditableMesh* RevertInstance();
		void Revert();
		void RebuildRenderMesh();
		void QuadrangulateMesh(TArray<struct FPolygonID>* OutNewPolygonIDs);
		void PropagateInstanceChanges();
		void MoveVertices(TArray<struct FVertexToMove> VerticesToMove);
		struct FVertexID MakeVertexID(int32_t VertexIndex);
		struct FPolygonID MakePolygonID(int32_t PolygonIndex);
		struct FPolygonGroupID MakePolygonGroupID(int32_t PolygonGroupIndex);
		struct FEdgeID MakeEdgeID(int32_t EdgeIndex);
		bool IsValidVertex(const struct FVertexID& VertexID);
		bool IsValidPolygonGroup(const struct FPolygonGroupID& PolygonGroupID);
		bool IsValidPolygon(const struct FPolygonID& PolygonID);
		bool IsValidEdge(const struct FEdgeID& EdgeID);
		bool IsUndoAllowed();
		bool IsSpatialDatabaseAllowed();
		bool IsPreviewingSubdivisions();
		bool IsOrphanedVertex(const struct FVertexID& VertexID);
		bool IsCompactAllowed();
		bool IsCommittedAsInstance();
		bool IsCommitted();
		bool IsBeingModified();
		struct FVertexID InvalidVertexID();
		struct FPolygonID InvalidPolygonID();
		struct FPolygonGroupID InvalidPolygonGroupID();
		struct FEdgeID InvalidEdgeID();
		void InsetPolygons(TArray<struct FPolygonID> PolygonIDs, float InsetFixedDistance, float InsetProgressTowardCenter, EInsetPolygonsMode Mode, TArray<struct FPolygonID>* OutNewCenterPolygonIDs, TArray<struct FPolygonID>* OutNewSidePolygonIDs);
		void InsertEdgeLoop(const struct FEdgeID& EdgeID, TArray<float> Splits, TArray<struct FEdgeID>* OutNewEdgeIDs);
		void InitializeAdapters();
		struct FEdgeID GetVertexPairEdge(const struct FVertexID& VertexID, const struct FVertexID& NextVertexID, bool* bOutEdgeWindingIsReversed);
		struct FVertexID GetVertexInstanceVertex(const struct FVertexInstanceID& VertexInstanceID);
		int32_t GetVertexInstanceCount();
		void GetVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FPolygonID>* OutConnectedPolygonIDs);
		int32_t GetVertexInstanceConnectedPolygonCount(const struct FVertexInstanceID& VertexInstanceID);
		struct FPolygonID GetVertexInstanceConnectedPolygon(const struct FVertexInstanceID& VertexInstanceID, int32_t ConnectedPolygonNumber);
		int32_t GetVertexCount();
		void GetVertexConnectedPolygons(const struct FVertexID& VertexID, TArray<struct FPolygonID>* OutConnectedPolygonIDs);
		void GetVertexConnectedEdges(const struct FVertexID& VertexID, TArray<struct FEdgeID>* OutConnectedEdgeIDs);
		int32_t GetVertexConnectedEdgeCount(const struct FVertexID& VertexID);
		struct FEdgeID GetVertexConnectedEdge(const struct FVertexID& VertexID, int32_t ConnectedEdgeNumber);
		void GetVertexAdjacentVertices(const struct FVertexID& VertexID, TArray<struct FVertexID>* OutAdjacentVertexIDs);
		int32_t GetTextureCoordinateCount();
		struct FSubdivisionLimitData GetSubdivisionLimitData();
		int32_t GetSubdivisionCount();
		int32_t GetPolygonTriangulatedTriangleCount(const struct FPolygonID& PolygonID);
		struct FTriangleID GetPolygonTriangulatedTriangle(const struct FPolygonID& PolygonID, int32_t PolygonTriangleNumber);
		void GetPolygonPerimeterVertices(const struct FPolygonID& PolygonID, TArray<struct FVertexID>* OutPolygonPerimeterVertexIDs);
		void GetPolygonPerimeterVertexInstances(const struct FPolygonID& PolygonID, TArray<struct FVertexInstanceID>* OutPolygonPerimeterVertexInstanceIDs);
		struct FVertexInstanceID GetPolygonPerimeterVertexInstance(const struct FPolygonID& PolygonID, int32_t PolygonVertexNumber);
		int32_t GetPolygonPerimeterVertexCount(const struct FPolygonID& PolygonID);
		struct FVertexID GetPolygonPerimeterVertex(const struct FPolygonID& PolygonID, int32_t PolygonVertexNumber);
		void GetPolygonPerimeterEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutPolygonPerimeterEdgeIDs);
		int32_t GetPolygonPerimeterEdgeCount(const struct FPolygonID& PolygonID);
		struct FEdgeID GetPolygonPerimeterEdge(const struct FPolygonID& PolygonID, int32_t PerimeterEdgeNumber, bool* bOutEdgeWindingIsReversedForPolygon);
		struct FPolygonID GetPolygonInGroup(const struct FPolygonGroupID& PolygonGroupID, int32_t PolygonNumber);
		int32_t GetPolygonGroupCount();
		int32_t GetPolygonCountInGroup(const struct FPolygonGroupID& PolygonGroupID);
		int32_t GetPolygonCount();
		void GetPolygonAdjacentPolygons(const struct FPolygonID& PolygonID, TArray<struct FPolygonID>* OutAdjacentPolygons);
		struct FPolygonGroupID GetGroupForPolygon(const struct FPolygonID& PolygonID);
		struct FPolygonGroupID GetFirstValidPolygonGroup();
		void GetEdgeVertices(const struct FEdgeID& EdgeID, struct FVertexID* OutEdgeVertexID0, struct FVertexID* OutEdgeVertexID1);
		struct FVertexID GetEdgeVertex(const struct FEdgeID& EdgeID, int32_t EdgeVertexNumber);
		struct FEdgeID GetEdgeThatConnectsVertices(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1);
		void GetEdgeLoopElements(const struct FEdgeID& EdgeID, TArray<struct FEdgeID>* EdgeLoopIDs);
		int32_t GetEdgeCount();
		void GetEdgeConnectedPolygons(const struct FEdgeID& EdgeID, TArray<struct FPolygonID>* OutConnectedPolygonIDs);
		int32_t GetEdgeConnectedPolygonCount(const struct FEdgeID& EdgeID);
		struct FPolygonID GetEdgeConnectedPolygon(const struct FEdgeID& EdgeID, int32_t ConnectedPolygonNumber);
		void GeneratePolygonTangentsAndNormals(TArray<struct FPolygonID> PolygonIDs);
		void FlipPolygons(TArray<struct FPolygonID> PolygonIDs);
		int32_t FindPolygonPerimeterVertexNumberForVertex(const struct FPolygonID& PolygonID, const struct FVertexID& VertexID);
		int32_t FindPolygonPerimeterEdgeNumberForVertices(const struct FPolygonID& PolygonID, const struct FVertexID& EdgeVertexID0, const struct FVertexID& EdgeVertexID1);
		void FindPolygonLoop(const struct FEdgeID& EdgeID, TArray<struct FEdgeID>* OutEdgeLoopEdgeIDs, TArray<struct FEdgeID>* OutFlippedEdgeIDs, TArray<struct FEdgeID>* OutReversedEdgeIDPathToTake, TArray<struct FPolygonID>* OutPolygonIDsToSplit);
		void ExtrudePolygons(TArray<struct FPolygonID> Polygons, float ExtrudeDistance, bool bKeepNeighborsTogether, TArray<struct FPolygonID>* OutNewExtrudedFrontPolygons);
		void ExtendVertices(TArray<struct FVertexID> VertexIDs, bool bOnlyExtendClosestEdge, const struct FVector& ReferencePosition, TArray<struct FVertexID>* OutNewExtendedVertexIDs);
		void ExtendEdges(TArray<struct FEdgeID> EdgeIDs, bool bWeldNeighbors, TArray<struct FEdgeID>* OutNewExtendedEdgeIDs);
		void EndModification(bool bFromUndo);
		void DeleteVertexInstances(TArray<struct FVertexInstanceID> VertexInstanceIDsToDelete, bool bDeleteOrphanedVertices);
		void DeleteVertexAndConnectedEdgesAndPolygons(const struct FVertexID& VertexID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups);
		void DeletePolygons(TArray<struct FPolygonID> PolygonIDsToDelete, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups);
		void DeletePolygonGroups(TArray<struct FPolygonGroupID> PolygonGroupIDs);
		void DeleteOrphanVertices(TArray<struct FVertexID> VertexIDsToDelete);
		void DeleteEdges(TArray<struct FEdgeID> EdgeIDsToDelete, bool bDeleteOrphanedVertices);
		void DeleteEdgeAndConnectedPolygons(const struct FEdgeID& EdgeID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups);
		void CreateVertices(TArray<struct FVertexToCreate> VerticesToCreate, TArray<struct FVertexID>* OutNewVertexIDs);
		void CreateVertexInstances(TArray<struct FVertexInstanceToCreate> VertexInstancesToCreate, TArray<struct FVertexInstanceID>* OutNewVertexInstanceIDs);
		void CreatePolygons(TArray<struct FPolygonToCreate> PolygonsToCreate, TArray<struct FPolygonID>* OutNewPolygonIDs, TArray<struct FEdgeID>* OutNewEdgeIDs);
		void CreatePolygonGroups(TArray<struct FPolygonGroupToCreate> PolygonGroupsToCreate, TArray<struct FPolygonGroupID>* OutNewPolygonGroupIDs);
		void CreateMissingPolygonPerimeterEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutNewEdgeIDs);
		void CreateEmptyVertexRange(int32_t NumVerticesToCreate, TArray<struct FVertexID>* OutNewVertexIDs);
		void CreateEdges(TArray<struct FEdgeToCreate> EdgesToCreate, TArray<struct FEdgeID>* OutNewEdgeIDs);
		void ComputePolygonsSharedEdges(TArray<struct FPolygonID> PolygonIDs, TArray<struct FEdgeID>* OutSharedEdgeIDs);
		struct FPlane ComputePolygonPlane(const struct FPolygonID& PolygonID);
		struct FVector ComputePolygonNormal(const struct FPolygonID& PolygonID);
		struct FVector ComputePolygonCenter(const struct FPolygonID& PolygonID);
		struct FBoxSphereBounds ComputeBoundingBoxAndSphere();
		struct FBox ComputeBoundingBox();
		class UEditableMesh* CommitInstance(class UPrimitiveComponent* ComponentToInstanceTo);
		void Commit();
		void ChangePolygonsVertexInstances(TArray<struct FChangeVertexInstancesForPolygon> VertexInstancesForPolygons);
		void BevelPolygons(TArray<struct FPolygonID> PolygonIDs, float BevelFixedDistance, float BevelProgressTowardCenter, TArray<struct FPolygonID>* OutNewCenterPolygonIDs, TArray<struct FPolygonID>* OutNewSidePolygonIDs);
		void AssignPolygonsToPolygonGroups(TArray<struct FPolygonGroupForPolygon> PolygonGroupForPolygons, bool bDeleteOrphanedPolygonGroups);
		bool AnyChangesToUndo();
		static UClass* StaticClass();
	};

	/**
	 * Class EditableMesh.EditableMeshFactory
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEditableMeshFactory : public UObject
	{
	public:
		class UEditableMesh* MakeEditableMesh(class UPrimitiveComponent* PrimitiveComponent, int32_t LODIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class EditableMesh.EditableStaticMeshAdapter
	 * Size -> 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
	 */
	class UEditableStaticMeshAdapter : public UEditableMeshAdapter
	{
	public:
		class UStaticMesh*                                         StaticMesh;                                              // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMesh*                                         OriginalStaticMesh;                                      // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    StaticMeshLODIndex;                                      // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LLDP[0xA4];                                  // 0x003C(0x00A4) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
