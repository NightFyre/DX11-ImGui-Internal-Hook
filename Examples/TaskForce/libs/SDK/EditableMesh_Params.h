#pragma once

/**
 * Name: Task_Force
 * Version: 0.3.6.1537
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function EditableMesh.EditableMesh.WeldVertices
	 */
	struct UEditableMesh_WeldVertices_Params
	{
	public:
		TArray<struct FVertexID>                                   VertexIDs;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FVertexID                                           OutNewVertexID;                                          // 0x0010(0x0004)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.TryToRemoveVertex
	 */
	struct UEditableMesh_TryToRemoveVertex_Params
	{
	public:
		struct FVertexID                                           VertexID;                                                // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOutWasVertexRemoved;                                    // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_82DQ[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEdgeID                                             OutNewEdgeID;                                            // 0x0008(0x0004)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.TryToRemovePolygonEdge
	 */
	struct UEditableMesh_TryToRemovePolygonEdge_Params
	{
	public:
		struct FEdgeID                                             EdgeID;                                                  // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOutWasEdgeRemoved;                                      // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5KYI[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPolygonID                                          OutNewPolygonID;                                         // 0x0008(0x0004)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.TriangulatePolygons
	 */
	struct UEditableMesh_TriangulatePolygons_Params
	{
	public:
		TArray<struct FPolygonID>                                  PolygonIDs;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FPolygonID>                                  OutNewTrianglePolygons;                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.TessellatePolygons
	 */
	struct UEditableMesh_TessellatePolygons_Params
	{
	public:
		TArray<struct FPolygonID>                                  PolygonIDs;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		ETriangleTessellationMode                                  TriangleTessellationMode;                                // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WFEE[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FPolygonID>                                  OutNewPolygonIDs;                                        // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.StartModification
	 */
	struct UEditableMesh_StartModification_Params
	{
	public:
		EMeshModificationType                                      MeshModificationType;                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMeshTopologyChange                                        MeshTopologyChange;                                      // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.SplitPolygons
	 */
	struct UEditableMesh_SplitPolygons_Params
	{
	public:
		TArray<struct FPolygonToSplit>                             PolygonsToSplit;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FEdgeID>                                     OutNewEdgeIDs;                                           // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.SplitPolygonalMesh
	 */
	struct UEditableMesh_SplitPolygonalMesh_Params
	{
	public:
		struct FPlane                                              InPlane;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FPolygonID>                                  PolygonIDs1;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FPolygonID>                                  PolygonIDs2;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FEdgeID>                                     BoundaryIDs;                                             // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.SplitEdge
	 */
	struct UEditableMesh_SplitEdge_Params
	{
	public:
		struct FEdgeID                                             EdgeID;                                                  // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TGRO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<float>                                              Splits;                                                  // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FVertexID>                                   OutNewVertexIDs;                                         // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.SetVerticesCornerSharpness
	 */
	struct UEditableMesh_SetVerticesCornerSharpness_Params
	{
	public:
		TArray<struct FVertexID>                                   VertexIDs;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<float>                                              VerticesNewCornerSharpness;                              // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.SetVerticesAttributes
	 */
	struct UEditableMesh_SetVerticesAttributes_Params
	{
	public:
		TArray<struct FAttributesForVertex>                        AttributesForVertices;                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.SetVertexInstancesAttributes
	 */
	struct UEditableMesh_SetVertexInstancesAttributes_Params
	{
	public:
		TArray<struct FAttributesForVertexInstance>                AttributesForVertexInstances;                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.SetTextureCoordinateCount
	 */
	struct UEditableMesh_SetTextureCoordinateCount_Params
	{
	public:
		int32_t                                                    NumTexCoords;                                            // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.SetSubdivisionCount
	 */
	struct UEditableMesh_SetSubdivisionCount_Params
	{
	public:
		int32_t                                                    NewSubdivisionCount;                                     // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.SetPolygonsVertexAttributes
	 */
	struct UEditableMesh_SetPolygonsVertexAttributes_Params
	{
	public:
		TArray<struct FVertexAttributesForPolygon>                 VertexAttributesForPolygons;                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.SetEdgesVertices
	 */
	struct UEditableMesh_SetEdgesVertices_Params
	{
	public:
		TArray<struct FVerticesForEdge>                            VerticesForEdges;                                        // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.SetEdgesHardnessAutomatically
	 */
	struct UEditableMesh_SetEdgesHardnessAutomatically_Params
	{
	public:
		TArray<struct FEdgeID>                                     EdgeIDs;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      MaxDotProductForSoftEdge;                                // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.SetEdgesHardness
	 */
	struct UEditableMesh_SetEdgesHardness_Params
	{
	public:
		TArray<struct FEdgeID>                                     EdgeIDs;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<bool>                                               EdgesNewIsHard;                                          // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.SetEdgesCreaseSharpness
	 */
	struct UEditableMesh_SetEdgesCreaseSharpness_Params
	{
	public:
		TArray<struct FEdgeID>                                     EdgeIDs;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<float>                                              EdgesNewCreaseSharpness;                                 // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.SetEdgesAttributes
	 */
	struct UEditableMesh_SetEdgesAttributes_Params
	{
	public:
		TArray<struct FAttributesForEdge>                          AttributesForEdges;                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.SetAllowUndo
	 */
	struct UEditableMesh_SetAllowUndo_Params
	{
	public:
		bool                                                       bInAllowUndo;                                            // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.SetAllowSpatialDatabase
	 */
	struct UEditableMesh_SetAllowSpatialDatabase_Params
	{
	public:
		bool                                                       bInAllowSpatialDatabase;                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.SetAllowCompact
	 */
	struct UEditableMesh_SetAllowCompact_Params
	{
	public:
		bool                                                       bInAllowCompact;                                         // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane
	 */
	struct UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane_Params
	{
	public:
		struct FPlane                                              InPlane;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FPolygonID>                                  OutPolygons;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment
	 */
	struct UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Params
	{
	public:
		struct FVector                                             LineSegmentStart;                                        // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LineSegmentEnd;                                          // 0x000C(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FPolygonID>                                  OutPolygons;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsInVolume
	 */
	struct UEditableMesh_SearchSpatialDatabaseForPolygonsInVolume_Params
	{
	public:
		TArray<struct FPlane>                                      Planes;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FPolygonID>                                  OutPolygons;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.RevertInstance
	 */
	struct UEditableMesh_RevertInstance_Params
	{
	public:
		class UEditableMesh*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.Revert
	 */
	struct UEditableMesh_Revert_Params
	{	};

	/**
	 * Function EditableMesh.EditableMesh.RemovePolygonPerimeterVertices
	 */
	struct UEditableMesh_RemovePolygonPerimeterVertices_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    FirstVertexNumberToRemove;                               // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumVerticesToRemove;                                     // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDeleteOrphanedVertexInstances;                          // 0x000C(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.RebuildRenderMesh
	 */
	struct UEditableMesh_RebuildRenderMesh_Params
	{	};

	/**
	 * Function EditableMesh.EditableMesh.QuadrangulateMesh
	 */
	struct UEditableMesh_QuadrangulateMesh_Params
	{
	public:
		TArray<struct FPolygonID>                                  OutNewPolygonIDs;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.PropagateInstanceChanges
	 */
	struct UEditableMesh_PropagateInstanceChanges_Params
	{	};

	/**
	 * Function EditableMesh.EditableMesh.MoveVertices
	 */
	struct UEditableMesh_MoveVertices_Params
	{
	public:
		TArray<struct FVertexToMove>                               VerticesToMove;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.MakeVertexID
	 */
	struct UEditableMesh_MakeVertexID_Params
	{
	public:
		int32_t                                                    VertexIndex;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVertexID                                           ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.MakePolygonID
	 */
	struct UEditableMesh_MakePolygonID_Params
	{
	public:
		int32_t                                                    PolygonIndex;                                            // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPolygonID                                          ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.MakePolygonGroupID
	 */
	struct UEditableMesh_MakePolygonGroupID_Params
	{
	public:
		int32_t                                                    PolygonGroupIndex;                                       // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPolygonGroupID                                     ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.MakeEdgeID
	 */
	struct UEditableMesh_MakeEdgeID_Params
	{
	public:
		int32_t                                                    EdgeIndex;                                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEdgeID                                             ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.IsValidVertex
	 */
	struct UEditableMesh_IsValidVertex_Params
	{
	public:
		struct FVertexID                                           VertexID;                                                // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.IsValidPolygonGroup
	 */
	struct UEditableMesh_IsValidPolygonGroup_Params
	{
	public:
		struct FPolygonGroupID                                     PolygonGroupID;                                          // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.IsValidPolygon
	 */
	struct UEditableMesh_IsValidPolygon_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.IsValidEdge
	 */
	struct UEditableMesh_IsValidEdge_Params
	{
	public:
		struct FEdgeID                                             EdgeID;                                                  // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.IsUndoAllowed
	 */
	struct UEditableMesh_IsUndoAllowed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.IsSpatialDatabaseAllowed
	 */
	struct UEditableMesh_IsSpatialDatabaseAllowed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.IsPreviewingSubdivisions
	 */
	struct UEditableMesh_IsPreviewingSubdivisions_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.IsOrphanedVertex
	 */
	struct UEditableMesh_IsOrphanedVertex_Params
	{
	public:
		struct FVertexID                                           VertexID;                                                // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.IsCompactAllowed
	 */
	struct UEditableMesh_IsCompactAllowed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.IsCommittedAsInstance
	 */
	struct UEditableMesh_IsCommittedAsInstance_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.IsCommitted
	 */
	struct UEditableMesh_IsCommitted_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.IsBeingModified
	 */
	struct UEditableMesh_IsBeingModified_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.InvalidVertexID
	 */
	struct UEditableMesh_InvalidVertexID_Params
	{
	public:
		struct FVertexID                                           ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.InvalidPolygonID
	 */
	struct UEditableMesh_InvalidPolygonID_Params
	{
	public:
		struct FPolygonID                                          ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.InvalidPolygonGroupID
	 */
	struct UEditableMesh_InvalidPolygonGroupID_Params
	{
	public:
		struct FPolygonGroupID                                     ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.InvalidEdgeID
	 */
	struct UEditableMesh_InvalidEdgeID_Params
	{
	public:
		struct FEdgeID                                             ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.InsetPolygons
	 */
	struct UEditableMesh_InsetPolygons_Params
	{
	public:
		TArray<struct FPolygonID>                                  PolygonIDs;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      InsetFixedDistance;                                      // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InsetProgressTowardCenter;                               // 0x0014(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EInsetPolygonsMode                                         Mode;                                                    // 0x0018(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HT7F[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FPolygonID>                                  OutNewCenterPolygonIDs;                                  // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FPolygonID>                                  OutNewSidePolygonIDs;                                    // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.InsertPolygonPerimeterVertices
	 */
	struct UEditableMesh_InsertPolygonPerimeterVertices_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InsertBeforeVertexNumber;                                // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVertexAndAttributes>                        VerticesToInsert;                                        // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.InsertEdgeLoop
	 */
	struct UEditableMesh_InsertEdgeLoop_Params
	{
	public:
		struct FEdgeID                                             EdgeID;                                                  // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_B6YM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<float>                                              Splits;                                                  // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FEdgeID>                                     OutNewEdgeIDs;                                           // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.InitializeAdapters
	 */
	struct UEditableMesh_InitializeAdapters_Params
	{	};

	/**
	 * Function EditableMesh.EditableMesh.GetVertexPairEdge
	 */
	struct UEditableMesh_GetVertexPairEdge_Params
	{
	public:
		struct FVertexID                                           VertexID;                                                // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVertexID                                           NextVertexID;                                            // 0x0004(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOutEdgeWindingIsReversed;                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_N762[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEdgeID                                             ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetVertexInstanceVertex
	 */
	struct UEditableMesh_GetVertexInstanceVertex_Params
	{
	public:
		struct FVertexInstanceID                                   VertexInstanceID;                                        // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVertexID                                           ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetVertexInstanceCount
	 */
	struct UEditableMesh_GetVertexInstanceCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons
	 */
	struct UEditableMesh_GetVertexInstanceConnectedPolygons_Params
	{
	public:
		struct FVertexInstanceID                                   VertexInstanceID;                                        // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WU6P[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FPolygonID>                                  OutConnectedPolygonIDs;                                  // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount
	 */
	struct UEditableMesh_GetVertexInstanceConnectedPolygonCount_Params
	{
	public:
		struct FVertexInstanceID                                   VertexInstanceID;                                        // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon
	 */
	struct UEditableMesh_GetVertexInstanceConnectedPolygon_Params
	{
	public:
		struct FVertexInstanceID                                   VertexInstanceID;                                        // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ConnectedPolygonNumber;                                  // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPolygonID                                          ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetVertexCount
	 */
	struct UEditableMesh_GetVertexCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetVertexConnectedPolygons
	 */
	struct UEditableMesh_GetVertexConnectedPolygons_Params
	{
	public:
		struct FVertexID                                           VertexID;                                                // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_M2NT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FPolygonID>                                  OutConnectedPolygonIDs;                                  // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetVertexConnectedEdges
	 */
	struct UEditableMesh_GetVertexConnectedEdges_Params
	{
	public:
		struct FVertexID                                           VertexID;                                                // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_I7AY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FEdgeID>                                     OutConnectedEdgeIDs;                                     // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetVertexConnectedEdgeCount
	 */
	struct UEditableMesh_GetVertexConnectedEdgeCount_Params
	{
	public:
		struct FVertexID                                           VertexID;                                                // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetVertexConnectedEdge
	 */
	struct UEditableMesh_GetVertexConnectedEdge_Params
	{
	public:
		struct FVertexID                                           VertexID;                                                // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ConnectedEdgeNumber;                                     // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEdgeID                                             ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetVertexAdjacentVertices
	 */
	struct UEditableMesh_GetVertexAdjacentVertices_Params
	{
	public:
		struct FVertexID                                           VertexID;                                                // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FMWI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVertexID>                                   OutAdjacentVertexIDs;                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetTextureCoordinateCount
	 */
	struct UEditableMesh_GetTextureCoordinateCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetSubdivisionLimitData
	 */
	struct UEditableMesh_GetSubdivisionLimitData_Params
	{
	public:
		struct FSubdivisionLimitData                               ReturnValue;                                             // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetSubdivisionCount
	 */
	struct UEditableMesh_GetSubdivisionCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount
	 */
	struct UEditableMesh_GetPolygonTriangulatedTriangleCount_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle
	 */
	struct UEditableMesh_GetPolygonTriangulatedTriangle_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PolygonTriangleNumber;                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMeshTriangle                                       ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetPolygonPerimeterVertices
	 */
	struct UEditableMesh_GetPolygonPerimeterVertices_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NHIC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVertexID>                                   OutPolygonPerimeterVertexIDs;                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances
	 */
	struct UEditableMesh_GetPolygonPerimeterVertexInstances_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4SYA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVertexInstanceID>                           OutPolygonPerimeterVertexInstanceIDs;                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance
	 */
	struct UEditableMesh_GetPolygonPerimeterVertexInstance_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PolygonVertexNumber;                                     // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVertexInstanceID                                   ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount
	 */
	struct UEditableMesh_GetPolygonPerimeterVertexCount_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetPolygonPerimeterVertex
	 */
	struct UEditableMesh_GetPolygonPerimeterVertex_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PolygonVertexNumber;                                     // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVertexID                                           ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetPolygonPerimeterEdges
	 */
	struct UEditableMesh_GetPolygonPerimeterEdges_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LI5S[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FEdgeID>                                     OutPolygonPerimeterEdgeIDs;                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount
	 */
	struct UEditableMesh_GetPolygonPerimeterEdgeCount_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetPolygonPerimeterEdge
	 */
	struct UEditableMesh_GetPolygonPerimeterEdge_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PerimeterEdgeNumber;                                     // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOutEdgeWindingIsReversedForPolygon;                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_L3SQ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FEdgeID                                             ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetPolygonInGroup
	 */
	struct UEditableMesh_GetPolygonInGroup_Params
	{
	public:
		struct FPolygonGroupID                                     PolygonGroupID;                                          // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PolygonNumber;                                           // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPolygonID                                          ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetPolygonGroupCount
	 */
	struct UEditableMesh_GetPolygonGroupCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetPolygonCountInGroup
	 */
	struct UEditableMesh_GetPolygonCountInGroup_Params
	{
	public:
		struct FPolygonGroupID                                     PolygonGroupID;                                          // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetPolygonCount
	 */
	struct UEditableMesh_GetPolygonCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetPolygonAdjacentPolygons
	 */
	struct UEditableMesh_GetPolygonAdjacentPolygons_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JD58[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FPolygonID>                                  OutAdjacentPolygons;                                     // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetGroupForPolygon
	 */
	struct UEditableMesh_GetGroupForPolygon_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPolygonGroupID                                     ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetFirstValidPolygonGroup
	 */
	struct UEditableMesh_GetFirstValidPolygonGroup_Params
	{
	public:
		struct FPolygonGroupID                                     ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetEdgeVertices
	 */
	struct UEditableMesh_GetEdgeVertices_Params
	{
	public:
		struct FEdgeID                                             EdgeID;                                                  // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVertexID                                           OutEdgeVertexID0;                                        // 0x0004(0x0004)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVertexID                                           OutEdgeVertexID1;                                        // 0x0008(0x0004)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetEdgeVertex
	 */
	struct UEditableMesh_GetEdgeVertex_Params
	{
	public:
		struct FEdgeID                                             EdgeID;                                                  // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    EdgeVertexNumber;                                        // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVertexID                                           ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetEdgeThatConnectsVertices
	 */
	struct UEditableMesh_GetEdgeThatConnectsVertices_Params
	{
	public:
		struct FVertexID                                           VertexID0;                                               // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVertexID                                           VertexID1;                                               // 0x0004(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEdgeID                                             ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetEdgeLoopElements
	 */
	struct UEditableMesh_GetEdgeLoopElements_Params
	{
	public:
		struct FEdgeID                                             EdgeID;                                                  // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OUQ0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FEdgeID>                                     EdgeLoopIDs;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetEdgeCount
	 */
	struct UEditableMesh_GetEdgeCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetEdgeConnectedPolygons
	 */
	struct UEditableMesh_GetEdgeConnectedPolygons_Params
	{
	public:
		struct FEdgeID                                             EdgeID;                                                  // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_I57U[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FPolygonID>                                  OutConnectedPolygonIDs;                                  // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount
	 */
	struct UEditableMesh_GetEdgeConnectedPolygonCount_Params
	{
	public:
		struct FEdgeID                                             EdgeID;                                                  // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GetEdgeConnectedPolygon
	 */
	struct UEditableMesh_GetEdgeConnectedPolygon_Params
	{
	public:
		struct FEdgeID                                             EdgeID;                                                  // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ConnectedPolygonNumber;                                  // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPolygonID                                          ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals
	 */
	struct UEditableMesh_GeneratePolygonTangentsAndNormals_Params
	{
	public:
		TArray<struct FPolygonID>                                  PolygonIDs;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.FlipPolygons
	 */
	struct UEditableMesh_FlipPolygons_Params
	{
	public:
		TArray<struct FPolygonID>                                  PolygonIDs;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex
	 */
	struct UEditableMesh_FindPolygonPerimeterVertexNumberForVertex_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVertexID                                           VertexID;                                                // 0x0004(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices
	 */
	struct UEditableMesh_FindPolygonPerimeterEdgeNumberForVertices_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVertexID                                           EdgeVertexID0;                                           // 0x0004(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVertexID                                           EdgeVertexID1;                                           // 0x0008(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.FindPolygonLoop
	 */
	struct UEditableMesh_FindPolygonLoop_Params
	{
	public:
		struct FEdgeID                                             EdgeID;                                                  // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Z809[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FEdgeID>                                     OutEdgeLoopEdgeIDs;                                      // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FEdgeID>                                     OutFlippedEdgeIDs;                                       // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FEdgeID>                                     OutReversedEdgeIDPathToTake;                             // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FPolygonID>                                  OutPolygonIDsToSplit;                                    // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.ExtrudePolygons
	 */
	struct UEditableMesh_ExtrudePolygons_Params
	{
	public:
		TArray<struct FPolygonID>                                  Polygons;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      ExtrudeDistance;                                         // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bKeepNeighborsTogether;                                  // 0x0014(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_U8QG[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FPolygonID>                                  OutNewExtrudedFrontPolygons;                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.ExtendVertices
	 */
	struct UEditableMesh_ExtendVertices_Params
	{
	public:
		TArray<struct FVertexID>                                   VertexIDs;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bOnlyExtendClosestEdge;                                  // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KM76[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReferencePosition;                                       // 0x0014(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVertexID>                                   OutNewExtendedVertexIDs;                                 // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.ExtendEdges
	 */
	struct UEditableMesh_ExtendEdges_Params
	{
	public:
		TArray<struct FEdgeID>                                     EdgeIDs;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bWeldNeighbors;                                          // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VMAA[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FEdgeID>                                     OutNewExtendedEdgeIDs;                                   // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.EndModification
	 */
	struct UEditableMesh_EndModification_Params
	{
	public:
		bool                                                       bFromUndo;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.DeleteVertexInstances
	 */
	struct UEditableMesh_DeleteVertexInstances_Params
	{
	public:
		TArray<struct FVertexInstanceID>                           VertexInstanceIDsToDelete;                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bDeleteOrphanedVertices;                                 // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons
	 */
	struct UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Params
	{
	public:
		struct FVertexID                                           VertexID;                                                // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDeleteOrphanedEdges;                                    // 0x0004(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDeleteOrphanedVertices;                                 // 0x0005(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDeleteOrphanedVertexInstances;                          // 0x0006(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDeleteEmptyPolygonGroups;                               // 0x0007(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.DeletePolygons
	 */
	struct UEditableMesh_DeletePolygons_Params
	{
	public:
		TArray<struct FPolygonID>                                  PolygonIDsToDelete;                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bDeleteOrphanedEdges;                                    // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDeleteOrphanedVertices;                                 // 0x0011(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDeleteOrphanedVertexInstances;                          // 0x0012(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDeleteEmptyPolygonGroups;                               // 0x0013(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.DeletePolygonGroups
	 */
	struct UEditableMesh_DeletePolygonGroups_Params
	{
	public:
		TArray<struct FPolygonGroupID>                             PolygonGroupIDs;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.DeleteOrphanVertices
	 */
	struct UEditableMesh_DeleteOrphanVertices_Params
	{
	public:
		TArray<struct FVertexID>                                   VertexIDsToDelete;                                       // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.DeleteEdges
	 */
	struct UEditableMesh_DeleteEdges_Params
	{
	public:
		TArray<struct FEdgeID>                                     EdgeIDsToDelete;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bDeleteOrphanedVertices;                                 // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons
	 */
	struct UEditableMesh_DeleteEdgeAndConnectedPolygons_Params
	{
	public:
		struct FEdgeID                                             EdgeID;                                                  // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDeleteOrphanedEdges;                                    // 0x0004(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDeleteOrphanedVertices;                                 // 0x0005(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDeleteOrphanedVertexInstances;                          // 0x0006(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDeleteEmptyPolygonGroups;                               // 0x0007(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.CreateVertices
	 */
	struct UEditableMesh_CreateVertices_Params
	{
	public:
		TArray<struct FVertexToCreate>                             VerticesToCreate;                                        // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FVertexID>                                   OutNewVertexIDs;                                         // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.CreateVertexInstances
	 */
	struct UEditableMesh_CreateVertexInstances_Params
	{
	public:
		TArray<struct FVertexInstanceToCreate>                     VertexInstancesToCreate;                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FVertexInstanceID>                           OutNewVertexInstanceIDs;                                 // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.CreatePolygons
	 */
	struct UEditableMesh_CreatePolygons_Params
	{
	public:
		TArray<struct FPolygonToCreate>                            PolygonsToCreate;                                        // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FPolygonID>                                  OutNewPolygonIDs;                                        // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FEdgeID>                                     OutNewEdgeIDs;                                           // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.CreatePolygonGroups
	 */
	struct UEditableMesh_CreatePolygonGroups_Params
	{
	public:
		TArray<struct FPolygonGroupToCreate>                       PolygonGroupsToCreate;                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FPolygonGroupID>                             OutNewPolygonGroupIDs;                                   // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges
	 */
	struct UEditableMesh_CreateMissingPolygonPerimeterEdges_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AIRO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FEdgeID>                                     OutNewEdgeIDs;                                           // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.CreateEmptyVertexRange
	 */
	struct UEditableMesh_CreateEmptyVertexRange_Params
	{
	public:
		int32_t                                                    NumVerticesToCreate;                                     // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QXRP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVertexID>                                   OutNewVertexIDs;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.CreateEdges
	 */
	struct UEditableMesh_CreateEdges_Params
	{
	public:
		TArray<struct FEdgeToCreate>                               EdgesToCreate;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FEdgeID>                                     OutNewEdgeIDs;                                           // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.ComputePolygonTriangulation
	 */
	struct UEditableMesh_ComputePolygonTriangulation_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8EDI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FMeshTriangle>                               OutTriangles;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.ComputePolygonsSharedEdges
	 */
	struct UEditableMesh_ComputePolygonsSharedEdges_Params
	{
	public:
		TArray<struct FPolygonID>                                  PolygonIDs;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FEdgeID>                                     OutSharedEdgeIDs;                                        // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.ComputePolygonPlane
	 */
	struct UEditableMesh_ComputePolygonPlane_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WS8M[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPlane                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.ComputePolygonNormal
	 */
	struct UEditableMesh_ComputePolygonNormal_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.ComputePolygonCenter
	 */
	struct UEditableMesh_ComputePolygonCenter_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere
	 */
	struct UEditableMesh_ComputeBoundingBoxAndSphere_Params
	{
	public:
		struct FBoxSphereBounds                                    ReturnValue;                                             // 0x0000(0x001C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.ComputeBoundingBox
	 */
	struct UEditableMesh_ComputeBoundingBox_Params
	{
	public:
		struct FBox                                                ReturnValue;                                             // 0x0000(0x001C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.ComputeBarycentricWeightForPointOnPolygon
	 */
	struct UEditableMesh_ComputeBarycentricWeightForPointOnPolygon_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             PointOnPolygon;                                          // 0x0004(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMeshTriangle                                       OutTriangle;                                             // 0x0010(0x000C)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             OutTriangleVertexWeights;                                // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.CommitInstance
	 */
	struct UEditableMesh_CommitInstance_Params
	{
	public:
		class UPrimitiveComponent*                                 ComponentToInstanceTo;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UEditableMesh*                                       ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.Commit
	 */
	struct UEditableMesh_Commit_Params
	{	};

	/**
	 * Function EditableMesh.EditableMesh.ChangePolygonsVertexInstances
	 */
	struct UEditableMesh_ChangePolygonsVertexInstances_Params
	{
	public:
		TArray<struct FChangeVertexInstancesForPolygon>            VertexInstancesForPolygons;                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.BevelPolygons
	 */
	struct UEditableMesh_BevelPolygons_Params
	{
	public:
		TArray<struct FPolygonID>                                  PolygonIDs;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      BevelFixedDistance;                                      // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      BevelProgressTowardCenter;                               // 0x0014(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FPolygonID>                                  OutNewCenterPolygonIDs;                                  // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FPolygonID>                                  OutNewSidePolygonIDs;                                    // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups
	 */
	struct UEditableMesh_AssignPolygonsToPolygonGroups_Params
	{
	public:
		TArray<struct FPolygonGroupForPolygon>                     PolygonGroupForPolygons;                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bDeleteOrphanedPolygonGroups;                            // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMesh.AnyChangesToUndo
	 */
	struct UEditableMesh_AnyChangesToUndo_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EditableMesh.EditableMeshFactory.MakeEditableMesh
	 */
	struct UEditableMeshFactory_MakeEditableMesh_Params
	{
	public:
		class UPrimitiveComponent*                                 PrimitiveComponent;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    LODIndex;                                                // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9WSS[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UEditableMesh*                                       ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
