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
	 * Class MeshDescription.MeshDescription
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMeshDescription : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshDescription.MeshDescriptionBase
	 * Size -> 0x0368 (FullSize[0x0390] - InheritedSize[0x0028])
	 */
	class UMeshDescriptionBase : public UObject
	{
	public:
		unsigned char                                              UnknownData_89WH[0x368];                                 // 0x0028(0x0368) MISSED OFFSET (PADDING)

	public:
		void SetVertexPosition(const struct FVertexID& VertexID, const struct FVector& Position);
		void SetPolygonVertexInstance(const struct FPolygonID& PolygonID, int32_t PerimeterIndex, const struct FVertexInstanceID& VertexInstanceID);
		void SetPolygonPolygonGroup(const struct FPolygonID& PolygonID, const struct FPolygonGroupID& PolygonGroupID);
		void ReversePolygonFacing(const struct FPolygonID& PolygonID);
		void ReserveNewVertices(int32_t NumberOfNewVertices);
		void ReserveNewVertexInstances(int32_t NumberOfNewVertexInstances);
		void ReserveNewTriangles(int32_t NumberOfNewTriangles);
		void ReserveNewPolygons(int32_t NumberOfNewPolygons);
		void ReserveNewPolygonGroups(int32_t NumberOfNewPolygonGroups);
		void ReserveNewEdges(int32_t NumberOfNewEdges);
		bool IsVertexValid(const struct FVertexID& VertexID);
		bool IsVertexOrphaned(const struct FVertexID& VertexID);
		bool IsVertexInstanceValid(const struct FVertexInstanceID& VertexInstanceID);
		bool IsTriangleValid(const struct FTriangleID& TriangleID);
		bool IsTrianglePartOfNgon(const struct FTriangleID& TriangleID);
		bool IsPolygonValid(const struct FPolygonID& PolygonID);
		bool IsPolygonGroupValid(const struct FPolygonGroupID& PolygonGroupID);
		bool IsEmpty();
		bool IsEdgeValid(const struct FEdgeID& EdgeID);
		bool IsEdgeInternalToPolygon(const struct FEdgeID& EdgeID, const struct FPolygonID& PolygonID);
		bool IsEdgeInternal(const struct FEdgeID& EdgeID);
		void GetVertexVertexInstances(const struct FVertexID& VertexID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs);
		struct FVector GetVertexPosition(const struct FVertexID& VertexID);
		struct FEdgeID GetVertexPairEdge(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1);
		struct FVertexID GetVertexInstanceVertex(const struct FVertexInstanceID& VertexInstanceID);
		struct FEdgeID GetVertexInstancePairEdge(const struct FVertexInstanceID& VertexInstanceID0, const struct FVertexInstanceID& VertexInstanceID1);
		struct FVertexInstanceID GetVertexInstanceForTriangleVertex(const struct FTriangleID& TriangleID, const struct FVertexID& VertexID);
		struct FVertexInstanceID GetVertexInstanceForPolygonVertex(const struct FPolygonID& PolygonID, const struct FVertexID& VertexID);
		void GetVertexInstanceConnectedTriangles(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FTriangleID>* OutConnectedTriangleIDs);
		void GetVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FPolygonID>* OutConnectedPolygonIDs);
		void GetVertexConnectedTriangles(const struct FVertexID& VertexID, TArray<struct FTriangleID>* OutConnectedTriangleIDs);
		void GetVertexConnectedPolygons(const struct FVertexID& VertexID, TArray<struct FPolygonID>* OutConnectedPolygonIDs);
		void GetVertexConnectedEdges(const struct FVertexID& VertexID, TArray<struct FEdgeID>* OutEdgeIDs);
		void GetVertexAdjacentVertices(const struct FVertexID& VertexID, TArray<struct FVertexID>* OutAdjacentVertexIDs);
		void GetTriangleVertices(const struct FTriangleID& TriangleID, TArray<struct FVertexID>* OutVertexIDs);
		void GetTriangleVertexInstances(const struct FTriangleID& TriangleID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs);
		struct FVertexInstanceID GetTriangleVertexInstance(const struct FTriangleID& TriangleID, int32_t Index);
		struct FPolygonGroupID GetTrianglePolygonGroup(const struct FTriangleID& TriangleID);
		struct FPolygonID GetTrianglePolygon(const struct FTriangleID& TriangleID);
		void GetTriangleEdges(const struct FTriangleID& TriangleID, TArray<struct FEdgeID>* OutEdgeIDs);
		void GetTriangleAdjacentTriangles(const struct FTriangleID& TriangleID, TArray<struct FTriangleID>* OutTriangleIDs);
		void GetPolygonVertices(const struct FPolygonID& PolygonID, TArray<struct FVertexID>* OutVertexIDs);
		void GetPolygonVertexInstances(const struct FPolygonID& PolygonID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs);
		void GetPolygonTriangles(const struct FPolygonID& PolygonID, TArray<struct FTriangleID>* OutTriangleIDs);
		struct FPolygonGroupID GetPolygonPolygonGroup(const struct FPolygonID& PolygonID);
		void GetPolygonPerimeterEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutEdgeIDs);
		void GetPolygonInternalEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutEdgeIDs);
		void GetPolygonGroupPolygons(const struct FPolygonGroupID& PolygonGroupID, TArray<struct FPolygonID>* OutPolygonIDs);
		void GetPolygonAdjacentPolygons(const struct FPolygonID& PolygonID, TArray<struct FPolygonID>* OutPolygonIDs);
		int32_t GetNumVertexVertexInstances(const struct FVertexID& VertexID);
		int32_t GetNumVertexInstanceConnectedTriangles(const struct FVertexInstanceID& VertexInstanceID);
		int32_t GetNumVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID);
		int32_t GetNumVertexConnectedTriangles(const struct FVertexID& VertexID);
		int32_t GetNumVertexConnectedPolygons(const struct FVertexID& VertexID);
		int32_t GetNumVertexConnectedEdges(const struct FVertexID& VertexID);
		int32_t GetNumPolygonVertices(const struct FPolygonID& PolygonID);
		int32_t GetNumPolygonTriangles(const struct FPolygonID& PolygonID);
		int32_t GetNumPolygonInternalEdges(const struct FPolygonID& PolygonID);
		int32_t GetNumPolygonGroupPolygons(const struct FPolygonGroupID& PolygonGroupID);
		int32_t GetNumEdgeConnectedTriangles(const struct FEdgeID& EdgeID);
		int32_t GetNumEdgeConnectedPolygons(const struct FEdgeID& EdgeID);
		void GetEdgeVertices(const struct FEdgeID& EdgeID, TArray<struct FVertexID>* OutVertexIDs);
		struct FVertexID GetEdgeVertex(const struct FEdgeID& EdgeID, int32_t VertexNumber);
		void GetEdgeConnectedTriangles(const struct FEdgeID& EdgeID, TArray<struct FTriangleID>* OutConnectedTriangleIDs);
		void GetEdgeConnectedPolygons(const struct FEdgeID& EdgeID, TArray<struct FPolygonID>* OutConnectedPolygonIDs);
		void Empty();
		void DeleteVertexInstance(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FVertexID>* OrphanedVertices);
		void DeleteVertex(const struct FVertexID& VertexID);
		void DeleteTriangle(const struct FTriangleID& TriangleID, TArray<struct FEdgeID>* OrphanedEdges, TArray<struct FVertexInstanceID>* OrphanedVertexInstances, TArray<struct FPolygonGroupID>* OrphanedPolygonGroupsPtr);
		void DeletePolygonGroup(const struct FPolygonGroupID& PolygonGroupID);
		void DeletePolygon(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OrphanedEdges, TArray<struct FVertexInstanceID>* OrphanedVertexInstances, TArray<struct FPolygonGroupID>* OrphanedPolygonGroups);
		void DeleteEdge(const struct FEdgeID& EdgeID, TArray<struct FVertexID>* OrphanedVertices);
		void CreateVertexWithID(const struct FVertexID& VertexID);
		void CreateVertexInstanceWithID(const struct FVertexInstanceID& VertexInstanceID, const struct FVertexID& VertexID);
		struct FVertexInstanceID CreateVertexInstance(const struct FVertexID& VertexID);
		struct FVertexID CreateVertex();
		void CreateTriangleWithID(const struct FTriangleID& TriangleID, const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID> VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs);
		struct FTriangleID CreateTriangle(const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID> VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs);
		void CreatePolygonWithID(const struct FPolygonID& PolygonID, const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs);
		void CreatePolygonGroupWithID(const struct FPolygonGroupID& PolygonGroupID);
		struct FPolygonGroupID CreatePolygonGroup();
		struct FPolygonID CreatePolygon(const struct FPolygonGroupID& PolygonGroupID, TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs);
		void CreateEdgeWithID(const struct FEdgeID& EdgeID, const struct FVertexID& VertexID0, const struct FVertexID& VertexID1);
		struct FEdgeID CreateEdge(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1);
		void ComputePolygonTriangulation(const struct FPolygonID& PolygonID);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
