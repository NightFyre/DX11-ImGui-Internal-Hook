#pragma once

/**
 * Name: RaidGame
 * Version: 1
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
	 * Function MeshDescription.MeshDescriptionBase.SetVertexPosition
	 */
	struct UMeshDescriptionBase_SetVertexPosition_Params
	{
	public:
		struct FVertexID                                           VertexID;                                                // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Position;                                                // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.SetPolygonVertexInstance
	 */
	struct UMeshDescriptionBase_SetPolygonVertexInstance_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PerimeterIndex;                                          // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVertexInstanceID                                   VertexInstanceID;                                        // 0x0008(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup
	 */
	struct UMeshDescriptionBase_SetPolygonPolygonGroup_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPolygonGroupID                                     PolygonGroupID;                                          // 0x0004(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.ReversePolygonFacing
	 */
	struct UMeshDescriptionBase_ReversePolygonFacing_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.ReserveNewVertices
	 */
	struct UMeshDescriptionBase_ReserveNewVertices_Params
	{
	public:
		int32_t                                                    NumberOfNewVertices;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances
	 */
	struct UMeshDescriptionBase_ReserveNewVertexInstances_Params
	{
	public:
		int32_t                                                    NumberOfNewVertexInstances;                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.ReserveNewTriangles
	 */
	struct UMeshDescriptionBase_ReserveNewTriangles_Params
	{
	public:
		int32_t                                                    NumberOfNewTriangles;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.ReserveNewPolygons
	 */
	struct UMeshDescriptionBase_ReserveNewPolygons_Params
	{
	public:
		int32_t                                                    NumberOfNewPolygons;                                     // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups
	 */
	struct UMeshDescriptionBase_ReserveNewPolygonGroups_Params
	{
	public:
		int32_t                                                    NumberOfNewPolygonGroups;                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.ReserveNewEdges
	 */
	struct UMeshDescriptionBase_ReserveNewEdges_Params
	{
	public:
		int32_t                                                    NumberOfNewEdges;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.IsVertexValid
	 */
	struct UMeshDescriptionBase_IsVertexValid_Params
	{
	public:
		struct FVertexID                                           VertexID;                                                // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.IsVertexOrphaned
	 */
	struct UMeshDescriptionBase_IsVertexOrphaned_Params
	{
	public:
		struct FVertexID                                           VertexID;                                                // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.IsVertexInstanceValid
	 */
	struct UMeshDescriptionBase_IsVertexInstanceValid_Params
	{
	public:
		struct FVertexInstanceID                                   VertexInstanceID;                                        // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.IsTriangleValid
	 */
	struct UMeshDescriptionBase_IsTriangleValid_Params
	{
	public:
		struct FTriangleID                                         TriangleID;                                              // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon
	 */
	struct UMeshDescriptionBase_IsTrianglePartOfNgon_Params
	{
	public:
		struct FTriangleID                                         TriangleID;                                              // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.IsPolygonValid
	 */
	struct UMeshDescriptionBase_IsPolygonValid_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.IsPolygonGroupValid
	 */
	struct UMeshDescriptionBase_IsPolygonGroupValid_Params
	{
	public:
		struct FPolygonGroupID                                     PolygonGroupID;                                          // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.IsEmpty
	 */
	struct UMeshDescriptionBase_IsEmpty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.IsEdgeValid
	 */
	struct UMeshDescriptionBase_IsEdgeValid_Params
	{
	public:
		struct FEdgeID                                             EdgeID;                                                  // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon
	 */
	struct UMeshDescriptionBase_IsEdgeInternalToPolygon_Params
	{
	public:
		struct FEdgeID                                             EdgeID;                                                  // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPolygonID                                          PolygonID;                                               // 0x0004(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.IsEdgeInternal
	 */
	struct UMeshDescriptionBase_IsEdgeInternal_Params
	{
	public:
		struct FEdgeID                                             EdgeID;                                                  // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetVertexVertexInstances
	 */
	struct UMeshDescriptionBase_GetVertexVertexInstances_Params
	{
	public:
		struct FVertexID                                           VertexID;                                                // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XPN0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVertexInstanceID>                           OutVertexInstanceIDs;                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetVertexPosition
	 */
	struct UMeshDescriptionBase_GetVertexPosition_Params
	{
	public:
		struct FVertexID                                           VertexID;                                                // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetVertexPairEdge
	 */
	struct UMeshDescriptionBase_GetVertexPairEdge_Params
	{
	public:
		struct FVertexID                                           VertexID0;                                               // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVertexID                                           VertexID1;                                               // 0x0004(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEdgeID                                             ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex
	 */
	struct UMeshDescriptionBase_GetVertexInstanceVertex_Params
	{
	public:
		struct FVertexInstanceID                                   VertexInstanceID;                                        // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVertexID                                           ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge
	 */
	struct UMeshDescriptionBase_GetVertexInstancePairEdge_Params
	{
	public:
		struct FVertexInstanceID                                   VertexInstanceID0;                                       // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVertexInstanceID                                   VertexInstanceID1;                                       // 0x0004(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEdgeID                                             ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex
	 */
	struct UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Params
	{
	public:
		struct FTriangleID                                         TriangleID;                                              // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVertexID                                           VertexID;                                                // 0x0004(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVertexInstanceID                                   ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex
	 */
	struct UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVertexID                                           VertexID;                                                // 0x0004(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVertexInstanceID                                   ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles
	 */
	struct UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Params
	{
	public:
		struct FVertexInstanceID                                   VertexInstanceID;                                        // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GV04[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FTriangleID>                                 OutConnectedTriangleIDs;                                 // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons
	 */
	struct UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Params
	{
	public:
		struct FVertexInstanceID                                   VertexInstanceID;                                        // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VW4A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FPolygonID>                                  OutConnectedPolygonIDs;                                  // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles
	 */
	struct UMeshDescriptionBase_GetVertexConnectedTriangles_Params
	{
	public:
		struct FVertexID                                           VertexID;                                                // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1008[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FTriangleID>                                 OutConnectedTriangleIDs;                                 // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons
	 */
	struct UMeshDescriptionBase_GetVertexConnectedPolygons_Params
	{
	public:
		struct FVertexID                                           VertexID;                                                // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HUGZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FPolygonID>                                  OutConnectedPolygonIDs;                                  // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges
	 */
	struct UMeshDescriptionBase_GetVertexConnectedEdges_Params
	{
	public:
		struct FVertexID                                           VertexID;                                                // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JOSZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FEdgeID>                                     OutEdgeIDs;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices
	 */
	struct UMeshDescriptionBase_GetVertexAdjacentVertices_Params
	{
	public:
		struct FVertexID                                           VertexID;                                                // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5UPU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVertexID>                                   OutAdjacentVertexIDs;                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetTriangleVertices
	 */
	struct UMeshDescriptionBase_GetTriangleVertices_Params
	{
	public:
		struct FTriangleID                                         TriangleID;                                              // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8NDS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVertexID>                                   OutVertexIDs;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances
	 */
	struct UMeshDescriptionBase_GetTriangleVertexInstances_Params
	{
	public:
		struct FTriangleID                                         TriangleID;                                              // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PUP7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVertexInstanceID>                           OutVertexInstanceIDs;                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance
	 */
	struct UMeshDescriptionBase_GetTriangleVertexInstance_Params
	{
	public:
		struct FTriangleID                                         TriangleID;                                              // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVertexInstanceID                                   ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup
	 */
	struct UMeshDescriptionBase_GetTrianglePolygonGroup_Params
	{
	public:
		struct FTriangleID                                         TriangleID;                                              // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPolygonGroupID                                     ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetTrianglePolygon
	 */
	struct UMeshDescriptionBase_GetTrianglePolygon_Params
	{
	public:
		struct FTriangleID                                         TriangleID;                                              // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPolygonID                                          ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetTriangleEdges
	 */
	struct UMeshDescriptionBase_GetTriangleEdges_Params
	{
	public:
		struct FTriangleID                                         TriangleID;                                              // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RHVH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FEdgeID>                                     OutEdgeIDs;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles
	 */
	struct UMeshDescriptionBase_GetTriangleAdjacentTriangles_Params
	{
	public:
		struct FTriangleID                                         TriangleID;                                              // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RV0B[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FTriangleID>                                 OutTriangleIDs;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetPolygonVertices
	 */
	struct UMeshDescriptionBase_GetPolygonVertices_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HJJU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVertexID>                                   OutVertexIDs;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances
	 */
	struct UMeshDescriptionBase_GetPolygonVertexInstances_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3NHP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVertexInstanceID>                           OutVertexInstanceIDs;                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetPolygonTriangles
	 */
	struct UMeshDescriptionBase_GetPolygonTriangles_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3DLJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FTriangleID>                                 OutTriangleIDs;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup
	 */
	struct UMeshDescriptionBase_GetPolygonPolygonGroup_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPolygonGroupID                                     ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges
	 */
	struct UMeshDescriptionBase_GetPolygonPerimeterEdges_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ST0X[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FEdgeID>                                     OutEdgeIDs;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges
	 */
	struct UMeshDescriptionBase_GetPolygonInternalEdges_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TTX1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FEdgeID>                                     OutEdgeIDs;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons
	 */
	struct UMeshDescriptionBase_GetPolygonGroupPolygons_Params
	{
	public:
		struct FPolygonGroupID                                     PolygonGroupID;                                          // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EODZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FPolygonID>                                  OutPolygonIDs;                                           // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons
	 */
	struct UMeshDescriptionBase_GetPolygonAdjacentPolygons_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZH6K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FPolygonID>                                  OutPolygonIDs;                                           // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances
	 */
	struct UMeshDescriptionBase_GetNumVertexVertexInstances_Params
	{
	public:
		struct FVertexID                                           VertexID;                                                // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles
	 */
	struct UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Params
	{
	public:
		struct FVertexInstanceID                                   VertexInstanceID;                                        // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons
	 */
	struct UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Params
	{
	public:
		struct FVertexInstanceID                                   VertexInstanceID;                                        // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles
	 */
	struct UMeshDescriptionBase_GetNumVertexConnectedTriangles_Params
	{
	public:
		struct FVertexID                                           VertexID;                                                // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons
	 */
	struct UMeshDescriptionBase_GetNumVertexConnectedPolygons_Params
	{
	public:
		struct FVertexID                                           VertexID;                                                // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges
	 */
	struct UMeshDescriptionBase_GetNumVertexConnectedEdges_Params
	{
	public:
		struct FVertexID                                           VertexID;                                                // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetNumPolygonVertices
	 */
	struct UMeshDescriptionBase_GetNumPolygonVertices_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles
	 */
	struct UMeshDescriptionBase_GetNumPolygonTriangles_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges
	 */
	struct UMeshDescriptionBase_GetNumPolygonInternalEdges_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons
	 */
	struct UMeshDescriptionBase_GetNumPolygonGroupPolygons_Params
	{
	public:
		struct FPolygonGroupID                                     PolygonGroupID;                                          // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles
	 */
	struct UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Params
	{
	public:
		struct FEdgeID                                             EdgeID;                                                  // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons
	 */
	struct UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Params
	{
	public:
		struct FEdgeID                                             EdgeID;                                                  // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetEdgeVertices
	 */
	struct UMeshDescriptionBase_GetEdgeVertices_Params
	{
	public:
		struct FEdgeID                                             EdgeID;                                                  // 0x0000(0x0004)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GQ7C[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVertexID>                                   OutVertexIDs;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetEdgeVertex
	 */
	struct UMeshDescriptionBase_GetEdgeVertex_Params
	{
	public:
		struct FEdgeID                                             EdgeID;                                                  // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    VertexNumber;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVertexID                                           ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles
	 */
	struct UMeshDescriptionBase_GetEdgeConnectedTriangles_Params
	{
	public:
		struct FEdgeID                                             EdgeID;                                                  // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_684K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FTriangleID>                                 OutConnectedTriangleIDs;                                 // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons
	 */
	struct UMeshDescriptionBase_GetEdgeConnectedPolygons_Params
	{
	public:
		struct FEdgeID                                             EdgeID;                                                  // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IZIJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FPolygonID>                                  OutConnectedPolygonIDs;                                  // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.Empty
	 */
	struct UMeshDescriptionBase_Empty_Params
	{	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.DeleteVertexInstance
	 */
	struct UMeshDescriptionBase_DeleteVertexInstance_Params
	{
	public:
		struct FVertexInstanceID                                   VertexInstanceID;                                        // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OAN0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVertexID>                                   OrphanedVertices;                                        // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.DeleteVertex
	 */
	struct UMeshDescriptionBase_DeleteVertex_Params
	{
	public:
		struct FVertexID                                           VertexID;                                                // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.DeleteTriangle
	 */
	struct UMeshDescriptionBase_DeleteTriangle_Params
	{
	public:
		struct FTriangleID                                         TriangleID;                                              // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1TV4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FEdgeID>                                     OrphanedEdges;                                           // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FVertexInstanceID>                           OrphanedVertexInstances;                                 // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FPolygonGroupID>                             OrphanedPolygonGroupsPtr;                                // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.DeletePolygonGroup
	 */
	struct UMeshDescriptionBase_DeletePolygonGroup_Params
	{
	public:
		struct FPolygonGroupID                                     PolygonGroupID;                                          // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.DeletePolygon
	 */
	struct UMeshDescriptionBase_DeletePolygon_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZA5B[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FEdgeID>                                     OrphanedEdges;                                           // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FVertexInstanceID>                           OrphanedVertexInstances;                                 // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FPolygonGroupID>                             OrphanedPolygonGroups;                                   // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.DeleteEdge
	 */
	struct UMeshDescriptionBase_DeleteEdge_Params
	{
	public:
		struct FEdgeID                                             EdgeID;                                                  // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1AJ0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVertexID>                                   OrphanedVertices;                                        // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.CreateVertexWithID
	 */
	struct UMeshDescriptionBase_CreateVertexWithID_Params
	{
	public:
		struct FVertexID                                           VertexID;                                                // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID
	 */
	struct UMeshDescriptionBase_CreateVertexInstanceWithID_Params
	{
	public:
		struct FVertexInstanceID                                   VertexInstanceID;                                        // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVertexID                                           VertexID;                                                // 0x0004(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.CreateVertexInstance
	 */
	struct UMeshDescriptionBase_CreateVertexInstance_Params
	{
	public:
		struct FVertexID                                           VertexID;                                                // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVertexInstanceID                                   ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.CreateVertex
	 */
	struct UMeshDescriptionBase_CreateVertex_Params
	{
	public:
		struct FVertexID                                           ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.CreateTriangleWithID
	 */
	struct UMeshDescriptionBase_CreateTriangleWithID_Params
	{
	public:
		struct FTriangleID                                         TriangleID;                                              // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPolygonGroupID                                     PolygonGroupID;                                          // 0x0004(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVertexInstanceID>                           VertexInstanceIDs;                                       // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FEdgeID>                                     NewEdgeIDs;                                              // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.CreateTriangle
	 */
	struct UMeshDescriptionBase_CreateTriangle_Params
	{
	public:
		struct FPolygonGroupID                                     PolygonGroupID;                                          // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9V91[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVertexInstanceID>                           VertexInstanceIDs;                                       // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FEdgeID>                                     NewEdgeIDs;                                              // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FTriangleID                                         ReturnValue;                                             // 0x0028(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.CreatePolygonWithID
	 */
	struct UMeshDescriptionBase_CreatePolygonWithID_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPolygonGroupID                                     PolygonGroupID;                                          // 0x0004(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVertexInstanceID>                           VertexInstanceIDs;                                       // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FEdgeID>                                     NewEdgeIDs;                                              // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID
	 */
	struct UMeshDescriptionBase_CreatePolygonGroupWithID_Params
	{
	public:
		struct FPolygonGroupID                                     PolygonGroupID;                                          // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.CreatePolygonGroup
	 */
	struct UMeshDescriptionBase_CreatePolygonGroup_Params
	{
	public:
		struct FPolygonGroupID                                     ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.CreatePolygon
	 */
	struct UMeshDescriptionBase_CreatePolygon_Params
	{
	public:
		struct FPolygonGroupID                                     PolygonGroupID;                                          // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_83CD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVertexInstanceID>                           VertexInstanceIDs;                                       // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FEdgeID>                                     NewEdgeIDs;                                              // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FPolygonID                                          ReturnValue;                                             // 0x0028(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.CreateEdgeWithID
	 */
	struct UMeshDescriptionBase_CreateEdgeWithID_Params
	{
	public:
		struct FEdgeID                                             EdgeID;                                                  // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVertexID                                           VertexID0;                                               // 0x0004(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVertexID                                           VertexID1;                                               // 0x0008(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.CreateEdge
	 */
	struct UMeshDescriptionBase_CreateEdge_Params
	{
	public:
		struct FVertexID                                           VertexID0;                                               // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVertexID                                           VertexID1;                                               // 0x0004(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEdgeID                                             ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation
	 */
	struct UMeshDescriptionBase_ComputePolygonTriangulation_Params
	{
	public:
		struct FPolygonID                                          PolygonID;                                               // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
