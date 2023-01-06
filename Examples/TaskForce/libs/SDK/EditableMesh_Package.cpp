/**
 * Name: Task_Force
 * Version: 0.3.6.1537
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditableMeshAdapter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditableMeshAdapter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EditableMesh.EditableMeshAdapter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditableGeometryCollectionAdapter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditableGeometryCollectionAdapter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EditableMesh.EditableGeometryCollectionAdapter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005030E0
	 * 		Name   -> Function EditableMesh.EditableMesh.WeldVertices
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FVertexID>                           VertexIDs                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   OutNewVertexID                                             (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::WeldVertices(TArray<struct FVertexID> VertexIDs, struct FVertexID* OutNewVertexID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.WeldVertices");
		
		UEditableMesh_WeldVertices_Params params {};
		params.VertexIDs = VertexIDs;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewVertexID != nullptr)
			*OutNewVertexID = params.OutNewVertexID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00502FB0
	 * 		Name   -> Function EditableMesh.EditableMesh.TryToRemoveVertex
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOutWasVertexRemoved                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEdgeID                                     OutNewEdgeID                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::TryToRemoveVertex(const struct FVertexID& VertexID, bool* bOutWasVertexRemoved, struct FEdgeID* OutNewEdgeID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.TryToRemoveVertex");
		
		UEditableMesh_TryToRemoveVertex_Params params {};
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutWasVertexRemoved != nullptr)
			*bOutWasVertexRemoved = params.bOutWasVertexRemoved;
		if (OutNewEdgeID != nullptr)
			*OutNewEdgeID = params.OutNewEdgeID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00502E80
	 * 		Name   -> Function EditableMesh.EditableMesh.TryToRemovePolygonEdge
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOutWasEdgeRemoved                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPolygonID                                  OutNewPolygonID                                            (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::TryToRemovePolygonEdge(const struct FEdgeID& EdgeID, bool* bOutWasEdgeRemoved, struct FPolygonID* OutNewPolygonID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.TryToRemovePolygonEdge");
		
		UEditableMesh_TryToRemovePolygonEdge_Params params {};
		params.EdgeID = EdgeID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutWasEdgeRemoved != nullptr)
			*bOutWasEdgeRemoved = params.bOutWasEdgeRemoved;
		if (OutNewPolygonID != nullptr)
			*OutNewPolygonID = params.OutNewPolygonID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00502D60
	 * 		Name   -> Function EditableMesh.EditableMesh.TriangulatePolygons
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FPolygonID>                          PolygonIDs                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutNewTrianglePolygons                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::TriangulatePolygons(TArray<struct FPolygonID> PolygonIDs, TArray<struct FPolygonID>* OutNewTrianglePolygons)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.TriangulatePolygons");
		
		UEditableMesh_TriangulatePolygons_Params params {};
		params.PolygonIDs = PolygonIDs;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewTrianglePolygons != nullptr)
			*OutNewTrianglePolygons = params.OutNewTrianglePolygons;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00502C00
	 * 		Name   -> Function EditableMesh.EditableMesh.TessellatePolygons
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FPolygonID>                          PolygonIDs                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		ETriangleTessellationMode                          TriangleTessellationMode                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutNewPolygonIDs                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::TessellatePolygons(TArray<struct FPolygonID> PolygonIDs, ETriangleTessellationMode TriangleTessellationMode, TArray<struct FPolygonID>* OutNewPolygonIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.TessellatePolygons");
		
		UEditableMesh_TessellatePolygons_Params params {};
		params.PolygonIDs = PolygonIDs;
		params.TriangleTessellationMode = TriangleTessellationMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewPolygonIDs != nullptr)
			*OutNewPolygonIDs = params.OutNewPolygonIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00502B40
	 * 		Name   -> Function EditableMesh.EditableMesh.StartModification
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EMeshModificationType                              MeshModificationType                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMeshTopologyChange                                MeshTopologyChange                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::StartModification(EMeshModificationType MeshModificationType, EMeshTopologyChange MeshTopologyChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.StartModification");
		
		UEditableMesh_StartModification_Params params {};
		params.MeshModificationType = MeshModificationType;
		params.MeshTopologyChange = MeshTopologyChange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00502A00
	 * 		Name   -> Function EditableMesh.EditableMesh.SplitPolygons
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FPolygonToSplit>                     PolygonsToSplit                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutNewEdgeIDs                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SplitPolygons(TArray<struct FPolygonToSplit> PolygonsToSplit, TArray<struct FEdgeID>* OutNewEdgeIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SplitPolygons");
		
		UEditableMesh_SplitPolygons_Params params {};
		params.PolygonsToSplit = PolygonsToSplit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewEdgeIDs != nullptr)
			*OutNewEdgeIDs = params.OutNewEdgeIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00502830
	 * 		Name   -> Function EditableMesh.EditableMesh.SplitPolygonalMesh
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FPlane                                      InPlane                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          PolygonIDs1                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          PolygonIDs2                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             BoundaryIDs                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SplitPolygonalMesh(const struct FPlane& InPlane, TArray<struct FPolygonID>* PolygonIDs1, TArray<struct FPolygonID>* PolygonIDs2, TArray<struct FEdgeID>* BoundaryIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SplitPolygonalMesh");
		
		UEditableMesh_SplitPolygonalMesh_Params params {};
		params.InPlane = InPlane;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PolygonIDs1 != nullptr)
			*PolygonIDs1 = params.PolygonIDs1;
		if (PolygonIDs2 != nullptr)
			*PolygonIDs2 = params.PolygonIDs2;
		if (BoundaryIDs != nullptr)
			*BoundaryIDs = params.BoundaryIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005026D0
	 * 		Name   -> Function EditableMesh.EditableMesh.SplitEdge
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      Splits                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexID>                           OutNewVertexIDs                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SplitEdge(const struct FEdgeID& EdgeID, TArray<float> Splits, TArray<struct FVertexID>* OutNewVertexIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SplitEdge");
		
		UEditableMesh_SplitEdge_Params params {};
		params.EdgeID = EdgeID;
		params.Splits = Splits;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewVertexIDs != nullptr)
			*OutNewVertexIDs = params.OutNewVertexIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005025B0
	 * 		Name   -> Function EditableMesh.EditableMesh.SetVerticesCornerSharpness
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FVertexID>                           VertexIDs                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      VerticesNewCornerSharpness                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SetVerticesCornerSharpness(TArray<struct FVertexID> VertexIDs, TArray<float> VerticesNewCornerSharpness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetVerticesCornerSharpness");
		
		UEditableMesh_SetVerticesCornerSharpness_Params params {};
		params.VertexIDs = VertexIDs;
		params.VerticesNewCornerSharpness = VerticesNewCornerSharpness;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005024E0
	 * 		Name   -> Function EditableMesh.EditableMesh.SetVerticesAttributes
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FAttributesForVertex>                AttributesForVertices                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SetVerticesAttributes(TArray<struct FAttributesForVertex> AttributesForVertices)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetVerticesAttributes");
		
		UEditableMesh_SetVerticesAttributes_Params params {};
		params.AttributesForVertices = AttributesForVertices;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00502410
	 * 		Name   -> Function EditableMesh.EditableMesh.SetVertexInstancesAttributes
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FAttributesForVertexInstance>        AttributesForVertexInstances                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SetVertexInstancesAttributes(TArray<struct FAttributesForVertexInstance> AttributesForVertexInstances)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetVertexInstancesAttributes");
		
		UEditableMesh_SetVertexInstancesAttributes_Params params {};
		params.AttributesForVertexInstances = AttributesForVertexInstances;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00502390
	 * 		Name   -> Function EditableMesh.EditableMesh.SetTextureCoordinateCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NumTexCoords                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SetTextureCoordinateCount(int32_t NumTexCoords)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetTextureCoordinateCount");
		
		UEditableMesh_SetTextureCoordinateCount_Params params {};
		params.NumTexCoords = NumTexCoords;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00502310
	 * 		Name   -> Function EditableMesh.EditableMesh.SetSubdivisionCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NewSubdivisionCount                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SetSubdivisionCount(int32_t NewSubdivisionCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetSubdivisionCount");
		
		UEditableMesh_SetSubdivisionCount_Params params {};
		params.NewSubdivisionCount = NewSubdivisionCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00502180
	 * 		Name   -> Function EditableMesh.EditableMesh.SetPolygonsVertexAttributes
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FVertexAttributesForPolygon>         VertexAttributesForPolygons                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SetPolygonsVertexAttributes(TArray<struct FVertexAttributesForPolygon> VertexAttributesForPolygons)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetPolygonsVertexAttributes");
		
		UEditableMesh_SetPolygonsVertexAttributes_Params params {};
		params.VertexAttributesForPolygons = VertexAttributesForPolygons;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005020D0
	 * 		Name   -> Function EditableMesh.EditableMesh.SetEdgesVertices
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FVerticesForEdge>                    VerticesForEdges                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SetEdgesVertices(TArray<struct FVerticesForEdge> VerticesForEdges)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetEdgesVertices");
		
		UEditableMesh_SetEdgesVertices_Params params {};
		params.VerticesForEdges = VerticesForEdges;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00501FD0
	 * 		Name   -> Function EditableMesh.EditableMesh.SetEdgesHardnessAutomatically
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FEdgeID>                             EdgeIDs                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              MaxDotProductForSoftEdge                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SetEdgesHardnessAutomatically(TArray<struct FEdgeID> EdgeIDs, float MaxDotProductForSoftEdge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetEdgesHardnessAutomatically");
		
		UEditableMesh_SetEdgesHardnessAutomatically_Params params {};
		params.EdgeIDs = EdgeIDs;
		params.MaxDotProductForSoftEdge = MaxDotProductForSoftEdge;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00501EB0
	 * 		Name   -> Function EditableMesh.EditableMesh.SetEdgesHardness
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FEdgeID>                             EdgeIDs                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<bool>                                       EdgesNewIsHard                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SetEdgesHardness(TArray<struct FEdgeID> EdgeIDs, TArray<bool> EdgesNewIsHard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetEdgesHardness");
		
		UEditableMesh_SetEdgesHardness_Params params {};
		params.EdgeIDs = EdgeIDs;
		params.EdgesNewIsHard = EdgesNewIsHard;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00501D90
	 * 		Name   -> Function EditableMesh.EditableMesh.SetEdgesCreaseSharpness
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FEdgeID>                             EdgeIDs                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      EdgesNewCreaseSharpness                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SetEdgesCreaseSharpness(TArray<struct FEdgeID> EdgeIDs, TArray<float> EdgesNewCreaseSharpness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetEdgesCreaseSharpness");
		
		UEditableMesh_SetEdgesCreaseSharpness_Params params {};
		params.EdgeIDs = EdgeIDs;
		params.EdgesNewCreaseSharpness = EdgesNewCreaseSharpness;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00501CC0
	 * 		Name   -> Function EditableMesh.EditableMesh.SetEdgesAttributes
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FAttributesForEdge>                  AttributesForEdges                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SetEdgesAttributes(TArray<struct FAttributesForEdge> AttributesForEdges)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetEdgesAttributes");
		
		UEditableMesh_SetEdgesAttributes_Params params {};
		params.AttributesForEdges = AttributesForEdges;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00501C40
	 * 		Name   -> Function EditableMesh.EditableMesh.SetAllowUndo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInAllowUndo                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SetAllowUndo(bool bInAllowUndo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetAllowUndo");
		
		UEditableMesh_SetAllowUndo_Params params {};
		params.bInAllowUndo = bInAllowUndo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00501BB0
	 * 		Name   -> Function EditableMesh.EditableMesh.SetAllowSpatialDatabase
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInAllowSpatialDatabase                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SetAllowSpatialDatabase(bool bInAllowSpatialDatabase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetAllowSpatialDatabase");
		
		UEditableMesh_SetAllowSpatialDatabase_Params params {};
		params.bInAllowSpatialDatabase = bInAllowSpatialDatabase;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00501B30
	 * 		Name   -> Function EditableMesh.EditableMesh.SetAllowCompact
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInAllowCompact                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SetAllowCompact(bool bInAllowCompact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SetAllowCompact");
		
		UEditableMesh_SetAllowCompact_Params params {};
		params.bInAllowCompact = bInAllowCompact;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00501A30
	 * 		Name   -> Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPlane                                      InPlane                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutPolygons                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(const struct FPlane& InPlane, TArray<struct FPolygonID>* OutPolygons)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane");
		
		UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane_Params params {};
		params.InPlane = InPlane;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPolygons != nullptr)
			*OutPolygons = params.OutPolygons;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005018E0
	 * 		Name   -> Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     LineSegmentStart                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     LineSegmentEnd                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutPolygons                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(const struct FVector& LineSegmentStart, const struct FVector& LineSegmentEnd, TArray<struct FPolygonID>* OutPolygons)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment");
		
		UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Params params {};
		params.LineSegmentStart = LineSegmentStart;
		params.LineSegmentEnd = LineSegmentEnd;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPolygons != nullptr)
			*OutPolygons = params.OutPolygons;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005017C0
	 * 		Name   -> Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsInVolume
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<struct FPlane>                              Planes                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutPolygons                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::SearchSpatialDatabaseForPolygonsInVolume(TArray<struct FPlane> Planes, TArray<struct FPolygonID>* OutPolygons)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsInVolume");
		
		UEditableMesh_SearchSpatialDatabaseForPolygonsInVolume_Params params {};
		params.Planes = Planes;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPolygons != nullptr)
			*OutPolygons = params.OutPolygons;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00501790
	 * 		Name   -> Function EditableMesh.EditableMesh.RevertInstance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UEditableMesh* UEditableMesh::RevertInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.RevertInstance");
		
		UEditableMesh_RevertInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00501550
	 * 		Name   -> Function EditableMesh.EditableMesh.Revert
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UEditableMesh::Revert()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.Revert");
		
		UEditableMesh_Revert_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00501640
	 * 		Name   -> Function EditableMesh.EditableMesh.RemovePolygonPerimeterVertices
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FirstVertexNumberToRemove                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumVerticesToRemove                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteOrphanedVertexInstances                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::RemovePolygonPerimeterVertices(const struct FPolygonID& PolygonID, int32_t FirstVertexNumberToRemove, int32_t NumVerticesToRemove, bool bDeleteOrphanedVertexInstances)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.RemovePolygonPerimeterVertices");
		
		UEditableMesh_RemovePolygonPerimeterVertices_Params params {};
		params.PolygonID = PolygonID;
		params.FirstVertexNumberToRemove = FirstVertexNumberToRemove;
		params.NumVerticesToRemove = NumVerticesToRemove;
		params.bDeleteOrphanedVertexInstances = bDeleteOrphanedVertexInstances;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00501620
	 * 		Name   -> Function EditableMesh.EditableMesh.RebuildRenderMesh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UEditableMesh::RebuildRenderMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.RebuildRenderMesh");
		
		UEditableMesh_RebuildRenderMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00501570
	 * 		Name   -> Function EditableMesh.EditableMesh.QuadrangulateMesh
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FPolygonID>                          OutNewPolygonIDs                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::QuadrangulateMesh(TArray<struct FPolygonID>* OutNewPolygonIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.QuadrangulateMesh");
		
		UEditableMesh_QuadrangulateMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewPolygonIDs != nullptr)
			*OutNewPolygonIDs = params.OutNewPolygonIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00501550
	 * 		Name   -> Function EditableMesh.EditableMesh.PropagateInstanceChanges
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UEditableMesh::PropagateInstanceChanges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.PropagateInstanceChanges");
		
		UEditableMesh_PropagateInstanceChanges_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005014A0
	 * 		Name   -> Function EditableMesh.EditableMesh.MoveVertices
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FVertexToMove>                       VerticesToMove                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::MoveVertices(TArray<struct FVertexToMove> VerticesToMove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MoveVertices");
		
		UEditableMesh_MoveVertices_Params params {};
		params.VerticesToMove = VerticesToMove;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00501420
	 * 		Name   -> Function EditableMesh.EditableMesh.MakeVertexID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            VertexIndex                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVertexID UEditableMesh::STATIC_MakeVertexID(int32_t VertexIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MakeVertexID");
		
		UEditableMesh_MakeVertexID_Params params {};
		params.VertexIndex = VertexIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00501420
	 * 		Name   -> Function EditableMesh.EditableMesh.MakePolygonID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            PolygonIndex                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPolygonID UEditableMesh::STATIC_MakePolygonID(int32_t PolygonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MakePolygonID");
		
		UEditableMesh_MakePolygonID_Params params {};
		params.PolygonIndex = PolygonIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00501420
	 * 		Name   -> Function EditableMesh.EditableMesh.MakePolygonGroupID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            PolygonGroupIndex                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPolygonGroupID UEditableMesh::STATIC_MakePolygonGroupID(int32_t PolygonGroupIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MakePolygonGroupID");
		
		UEditableMesh_MakePolygonGroupID_Params params {};
		params.PolygonGroupIndex = PolygonGroupIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00501420
	 * 		Name   -> Function EditableMesh.EditableMesh.MakeEdgeID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            EdgeIndex                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEdgeID UEditableMesh::STATIC_MakeEdgeID(int32_t EdgeIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.MakeEdgeID");
		
		UEditableMesh_MakeEdgeID_Params params {};
		params.EdgeIndex = EdgeIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00501390
	 * 		Name   -> Function EditableMesh.EditableMesh.IsValidVertex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEditableMesh::IsValidVertex(const struct FVertexID& VertexID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsValidVertex");
		
		UEditableMesh_IsValidVertex_Params params {};
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00501300
	 * 		Name   -> Function EditableMesh.EditableMesh.IsValidPolygonGroup
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPolygonGroupID                             PolygonGroupID                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEditableMesh::IsValidPolygonGroup(const struct FPolygonGroupID& PolygonGroupID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsValidPolygonGroup");
		
		UEditableMesh_IsValidPolygonGroup_Params params {};
		params.PolygonGroupID = PolygonGroupID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00501270
	 * 		Name   -> Function EditableMesh.EditableMesh.IsValidPolygon
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEditableMesh::IsValidPolygon(const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsValidPolygon");
		
		UEditableMesh_IsValidPolygon_Params params {};
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005011E0
	 * 		Name   -> Function EditableMesh.EditableMesh.IsValidEdge
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEditableMesh::IsValidEdge(const struct FEdgeID& EdgeID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsValidEdge");
		
		UEditableMesh_IsValidEdge_Params params {};
		params.EdgeID = EdgeID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005011C0
	 * 		Name   -> Function EditableMesh.EditableMesh.IsUndoAllowed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UEditableMesh::IsUndoAllowed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsUndoAllowed");
		
		UEditableMesh_IsUndoAllowed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005011A0
	 * 		Name   -> Function EditableMesh.EditableMesh.IsSpatialDatabaseAllowed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UEditableMesh::IsSpatialDatabaseAllowed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsSpatialDatabaseAllowed");
		
		UEditableMesh_IsSpatialDatabaseAllowed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00501170
	 * 		Name   -> Function EditableMesh.EditableMesh.IsPreviewingSubdivisions
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UEditableMesh::IsPreviewingSubdivisions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsPreviewingSubdivisions");
		
		UEditableMesh_IsPreviewingSubdivisions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005010E0
	 * 		Name   -> Function EditableMesh.EditableMesh.IsOrphanedVertex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEditableMesh::IsOrphanedVertex(const struct FVertexID& VertexID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsOrphanedVertex");
		
		UEditableMesh_IsOrphanedVertex_Params params {};
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005010C0
	 * 		Name   -> Function EditableMesh.EditableMesh.IsCompactAllowed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UEditableMesh::IsCompactAllowed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsCompactAllowed");
		
		UEditableMesh_IsCompactAllowed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00501090
	 * 		Name   -> Function EditableMesh.EditableMesh.IsCommittedAsInstance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UEditableMesh::IsCommittedAsInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsCommittedAsInstance");
		
		UEditableMesh_IsCommittedAsInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00501060
	 * 		Name   -> Function EditableMesh.EditableMesh.IsCommitted
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UEditableMesh::IsCommitted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsCommitted");
		
		UEditableMesh_IsCommitted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00501030
	 * 		Name   -> Function EditableMesh.EditableMesh.IsBeingModified
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UEditableMesh::IsBeingModified()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.IsBeingModified");
		
		UEditableMesh_IsBeingModified_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00501010
	 * 		Name   -> Function EditableMesh.EditableMesh.InvalidVertexID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	struct FVertexID UEditableMesh::STATIC_InvalidVertexID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InvalidVertexID");
		
		UEditableMesh_InvalidVertexID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00500FF0
	 * 		Name   -> Function EditableMesh.EditableMesh.InvalidPolygonID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	struct FPolygonID UEditableMesh::STATIC_InvalidPolygonID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InvalidPolygonID");
		
		UEditableMesh_InvalidPolygonID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00500FD0
	 * 		Name   -> Function EditableMesh.EditableMesh.InvalidPolygonGroupID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	struct FPolygonGroupID UEditableMesh::STATIC_InvalidPolygonGroupID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InvalidPolygonGroupID");
		
		UEditableMesh_InvalidPolygonGroupID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00500FB0
	 * 		Name   -> Function EditableMesh.EditableMesh.InvalidEdgeID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	struct FEdgeID UEditableMesh::STATIC_InvalidEdgeID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InvalidEdgeID");
		
		UEditableMesh_InvalidEdgeID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00500D80
	 * 		Name   -> Function EditableMesh.EditableMesh.InsetPolygons
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FPolygonID>                          PolygonIDs                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              InsetFixedDistance                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InsetProgressTowardCenter                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EInsetPolygonsMode                                 Mode                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutNewCenterPolygonIDs                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutNewSidePolygonIDs                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::InsetPolygons(TArray<struct FPolygonID> PolygonIDs, float InsetFixedDistance, float InsetProgressTowardCenter, EInsetPolygonsMode Mode, TArray<struct FPolygonID>* OutNewCenterPolygonIDs, TArray<struct FPolygonID>* OutNewSidePolygonIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InsetPolygons");
		
		UEditableMesh_InsetPolygons_Params params {};
		params.PolygonIDs = PolygonIDs;
		params.InsetFixedDistance = InsetFixedDistance;
		params.InsetProgressTowardCenter = InsetProgressTowardCenter;
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewCenterPolygonIDs != nullptr)
			*OutNewCenterPolygonIDs = params.OutNewCenterPolygonIDs;
		if (OutNewSidePolygonIDs != nullptr)
			*OutNewSidePolygonIDs = params.OutNewSidePolygonIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00500C30
	 * 		Name   -> Function EditableMesh.EditableMesh.InsertPolygonPerimeterVertices
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InsertBeforeVertexNumber                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexAndAttributes>                VerticesToInsert                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::InsertPolygonPerimeterVertices(const struct FPolygonID& PolygonID, int32_t InsertBeforeVertexNumber, TArray<struct FVertexAndAttributes> VerticesToInsert)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InsertPolygonPerimeterVertices");
		
		UEditableMesh_InsertPolygonPerimeterVertices_Params params {};
		params.PolygonID = PolygonID;
		params.InsertBeforeVertexNumber = InsertBeforeVertexNumber;
		params.VerticesToInsert = VerticesToInsert;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00500AD0
	 * 		Name   -> Function EditableMesh.EditableMesh.InsertEdgeLoop
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      Splits                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutNewEdgeIDs                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::InsertEdgeLoop(const struct FEdgeID& EdgeID, TArray<float> Splits, TArray<struct FEdgeID>* OutNewEdgeIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InsertEdgeLoop");
		
		UEditableMesh_InsertEdgeLoop_Params params {};
		params.EdgeID = EdgeID;
		params.Splits = Splits;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewEdgeIDs != nullptr)
			*OutNewEdgeIDs = params.OutNewEdgeIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00500AB0
	 * 		Name   -> Function EditableMesh.EditableMesh.InitializeAdapters
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UEditableMesh::InitializeAdapters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.InitializeAdapters");
		
		UEditableMesh_InitializeAdapters_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00500980
	 * 		Name   -> Function EditableMesh.EditableMesh.GetVertexPairEdge
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   NextVertexID                                               (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOutEdgeWindingIsReversed                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEdgeID UEditableMesh::GetVertexPairEdge(const struct FVertexID& VertexID, const struct FVertexID& NextVertexID, bool* bOutEdgeWindingIsReversed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexPairEdge");
		
		UEditableMesh_GetVertexPairEdge_Params params {};
		params.VertexID = VertexID;
		params.NextVertexID = NextVertexID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutEdgeWindingIsReversed != nullptr)
			*bOutEdgeWindingIsReversed = params.bOutEdgeWindingIsReversed;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005008E0
	 * 		Name   -> Function EditableMesh.EditableMesh.GetVertexInstanceVertex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVertexInstanceID                           VertexInstanceID                                           (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVertexID UEditableMesh::GetVertexInstanceVertex(const struct FVertexInstanceID& VertexInstanceID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceVertex");
		
		UEditableMesh_GetVertexInstanceVertex_Params params {};
		params.VertexInstanceID = VertexInstanceID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005008B0
	 * 		Name   -> Function EditableMesh.EditableMesh.GetVertexInstanceCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UEditableMesh::GetVertexInstanceCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceCount");
		
		UEditableMesh_GetVertexInstanceCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005007C0
	 * 		Name   -> Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVertexInstanceID                           VertexInstanceID                                           (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutConnectedPolygonIDs                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::GetVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons");
		
		UEditableMesh_GetVertexInstanceConnectedPolygons_Params params {};
		params.VertexInstanceID = VertexInstanceID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutConnectedPolygonIDs != nullptr)
			*OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00500730
	 * 		Name   -> Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVertexInstanceID                           VertexInstanceID                                           (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEditableMesh::GetVertexInstanceConnectedPolygonCount(const struct FVertexInstanceID& VertexInstanceID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount");
		
		UEditableMesh_GetVertexInstanceConnectedPolygonCount_Params params {};
		params.VertexInstanceID = VertexInstanceID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00500660
	 * 		Name   -> Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVertexInstanceID                           VertexInstanceID                                           (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ConnectedPolygonNumber                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPolygonID UEditableMesh::GetVertexInstanceConnectedPolygon(const struct FVertexInstanceID& VertexInstanceID, int32_t ConnectedPolygonNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon");
		
		UEditableMesh_GetVertexInstanceConnectedPolygon_Params params {};
		params.VertexInstanceID = VertexInstanceID;
		params.ConnectedPolygonNumber = ConnectedPolygonNumber;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00500630
	 * 		Name   -> Function EditableMesh.EditableMesh.GetVertexCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UEditableMesh::GetVertexCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexCount");
		
		UEditableMesh_GetVertexCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00500540
	 * 		Name   -> Function EditableMesh.EditableMesh.GetVertexConnectedPolygons
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutConnectedPolygonIDs                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::GetVertexConnectedPolygons(const struct FVertexID& VertexID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexConnectedPolygons");
		
		UEditableMesh_GetVertexConnectedPolygons_Params params {};
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutConnectedPolygonIDs != nullptr)
			*OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00500450
	 * 		Name   -> Function EditableMesh.EditableMesh.GetVertexConnectedEdges
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutConnectedEdgeIDs                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::GetVertexConnectedEdges(const struct FVertexID& VertexID, TArray<struct FEdgeID>* OutConnectedEdgeIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexConnectedEdges");
		
		UEditableMesh_GetVertexConnectedEdges_Params params {};
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutConnectedEdgeIDs != nullptr)
			*OutConnectedEdgeIDs = params.OutConnectedEdgeIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005003C0
	 * 		Name   -> Function EditableMesh.EditableMesh.GetVertexConnectedEdgeCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEditableMesh::GetVertexConnectedEdgeCount(const struct FVertexID& VertexID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexConnectedEdgeCount");
		
		UEditableMesh_GetVertexConnectedEdgeCount_Params params {};
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005002F0
	 * 		Name   -> Function EditableMesh.EditableMesh.GetVertexConnectedEdge
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ConnectedEdgeNumber                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEdgeID UEditableMesh::GetVertexConnectedEdge(const struct FVertexID& VertexID, int32_t ConnectedEdgeNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexConnectedEdge");
		
		UEditableMesh_GetVertexConnectedEdge_Params params {};
		params.VertexID = VertexID;
		params.ConnectedEdgeNumber = ConnectedEdgeNumber;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00500200
	 * 		Name   -> Function EditableMesh.EditableMesh.GetVertexAdjacentVertices
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexID>                           OutAdjacentVertexIDs                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::GetVertexAdjacentVertices(const struct FVertexID& VertexID, TArray<struct FVertexID>* OutAdjacentVertexIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetVertexAdjacentVertices");
		
		UEditableMesh_GetVertexAdjacentVertices_Params params {};
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAdjacentVertexIDs != nullptr)
			*OutAdjacentVertexIDs = params.OutAdjacentVertexIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005001D0
	 * 		Name   -> Function EditableMesh.EditableMesh.GetTextureCoordinateCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UEditableMesh::GetTextureCoordinateCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetTextureCoordinateCount");
		
		UEditableMesh_GetTextureCoordinateCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00500190
	 * 		Name   -> Function EditableMesh.EditableMesh.GetSubdivisionLimitData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FSubdivisionLimitData UEditableMesh::GetSubdivisionLimitData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetSubdivisionLimitData");
		
		UEditableMesh_GetSubdivisionLimitData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00500160
	 * 		Name   -> Function EditableMesh.EditableMesh.GetSubdivisionCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UEditableMesh::GetSubdivisionCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetSubdivisionCount");
		
		UEditableMesh_GetSubdivisionCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x005000D0
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEditableMesh::GetPolygonTriangulatedTriangleCount(const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount");
		
		UEditableMesh_GetPolygonTriangulatedTriangleCount_Params params {};
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FFFF0
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PolygonTriangleNumber                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FMeshTriangle UEditableMesh::GetPolygonTriangulatedTriangle(const struct FPolygonID& PolygonID, int32_t PolygonTriangleNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle");
		
		UEditableMesh_GetPolygonTriangulatedTriangle_Params params {};
		params.PolygonID = PolygonID;
		params.PolygonTriangleNumber = PolygonTriangleNumber;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FFF00
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonPerimeterVertices
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexID>                           OutPolygonPerimeterVertexIDs                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::GetPolygonPerimeterVertices(const struct FPolygonID& PolygonID, TArray<struct FVertexID>* OutPolygonPerimeterVertexIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertices");
		
		UEditableMesh_GetPolygonPerimeterVertices_Params params {};
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPolygonPerimeterVertexIDs != nullptr)
			*OutPolygonPerimeterVertexIDs = params.OutPolygonPerimeterVertexIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FFE10
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexInstanceID>                   OutPolygonPerimeterVertexInstanceIDs                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::GetPolygonPerimeterVertexInstances(const struct FPolygonID& PolygonID, TArray<struct FVertexInstanceID>* OutPolygonPerimeterVertexInstanceIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances");
		
		UEditableMesh_GetPolygonPerimeterVertexInstances_Params params {};
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPolygonPerimeterVertexInstanceIDs != nullptr)
			*OutPolygonPerimeterVertexInstanceIDs = params.OutPolygonPerimeterVertexInstanceIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FFD40
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PolygonVertexNumber                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVertexInstanceID UEditableMesh::GetPolygonPerimeterVertexInstance(const struct FPolygonID& PolygonID, int32_t PolygonVertexNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance");
		
		UEditableMesh_GetPolygonPerimeterVertexInstance_Params params {};
		params.PolygonID = PolygonID;
		params.PolygonVertexNumber = PolygonVertexNumber;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FFAF0
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEditableMesh::GetPolygonPerimeterVertexCount(const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount");
		
		UEditableMesh_GetPolygonPerimeterVertexCount_Params params {};
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FFC70
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonPerimeterVertex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PolygonVertexNumber                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVertexID UEditableMesh::GetPolygonPerimeterVertex(const struct FPolygonID& PolygonID, int32_t PolygonVertexNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterVertex");
		
		UEditableMesh_GetPolygonPerimeterVertex_Params params {};
		params.PolygonID = PolygonID;
		params.PolygonVertexNumber = PolygonVertexNumber;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FFB80
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonPerimeterEdges
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutPolygonPerimeterEdgeIDs                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::GetPolygonPerimeterEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutPolygonPerimeterEdgeIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterEdges");
		
		UEditableMesh_GetPolygonPerimeterEdges_Params params {};
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPolygonPerimeterEdgeIDs != nullptr)
			*OutPolygonPerimeterEdgeIDs = params.OutPolygonPerimeterEdgeIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FFAF0
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEditableMesh::GetPolygonPerimeterEdgeCount(const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount");
		
		UEditableMesh_GetPolygonPerimeterEdgeCount_Params params {};
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FF9D0
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonPerimeterEdge
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PerimeterEdgeNumber                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOutEdgeWindingIsReversedForPolygon                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEdgeID UEditableMesh::GetPolygonPerimeterEdge(const struct FPolygonID& PolygonID, int32_t PerimeterEdgeNumber, bool* bOutEdgeWindingIsReversedForPolygon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonPerimeterEdge");
		
		UEditableMesh_GetPolygonPerimeterEdge_Params params {};
		params.PolygonID = PolygonID;
		params.PerimeterEdgeNumber = PerimeterEdgeNumber;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutEdgeWindingIsReversedForPolygon != nullptr)
			*bOutEdgeWindingIsReversedForPolygon = params.bOutEdgeWindingIsReversedForPolygon;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FF900
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonInGroup
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPolygonGroupID                             PolygonGroupID                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PolygonNumber                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPolygonID UEditableMesh::GetPolygonInGroup(const struct FPolygonGroupID& PolygonGroupID, int32_t PolygonNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonInGroup");
		
		UEditableMesh_GetPolygonInGroup_Params params {};
		params.PolygonGroupID = PolygonGroupID;
		params.PolygonNumber = PolygonNumber;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FF8D0
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonGroupCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UEditableMesh::GetPolygonGroupCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonGroupCount");
		
		UEditableMesh_GetPolygonGroupCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FF840
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonCountInGroup
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPolygonGroupID                             PolygonGroupID                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEditableMesh::GetPolygonCountInGroup(const struct FPolygonGroupID& PolygonGroupID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonCountInGroup");
		
		UEditableMesh_GetPolygonCountInGroup_Params params {};
		params.PolygonGroupID = PolygonGroupID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FF810
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UEditableMesh::GetPolygonCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonCount");
		
		UEditableMesh_GetPolygonCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FF720
	 * 		Name   -> Function EditableMesh.EditableMesh.GetPolygonAdjacentPolygons
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutAdjacentPolygons                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::GetPolygonAdjacentPolygons(const struct FPolygonID& PolygonID, TArray<struct FPolygonID>* OutAdjacentPolygons)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetPolygonAdjacentPolygons");
		
		UEditableMesh_GetPolygonAdjacentPolygons_Params params {};
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAdjacentPolygons != nullptr)
			*OutAdjacentPolygons = params.OutAdjacentPolygons;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FF680
	 * 		Name   -> Function EditableMesh.EditableMesh.GetGroupForPolygon
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPolygonGroupID UEditableMesh::GetGroupForPolygon(const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetGroupForPolygon");
		
		UEditableMesh_GetGroupForPolygon_Params params {};
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FF640
	 * 		Name   -> Function EditableMesh.EditableMesh.GetFirstValidPolygonGroup
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FPolygonGroupID UEditableMesh::GetFirstValidPolygonGroup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetFirstValidPolygonGroup");
		
		UEditableMesh_GetFirstValidPolygonGroup_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FF510
	 * 		Name   -> Function EditableMesh.EditableMesh.GetEdgeVertices
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   OutEdgeVertexID0                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   OutEdgeVertexID1                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::GetEdgeVertices(const struct FEdgeID& EdgeID, struct FVertexID* OutEdgeVertexID0, struct FVertexID* OutEdgeVertexID1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeVertices");
		
		UEditableMesh_GetEdgeVertices_Params params {};
		params.EdgeID = EdgeID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEdgeVertexID0 != nullptr)
			*OutEdgeVertexID0 = params.OutEdgeVertexID0;
		if (OutEdgeVertexID1 != nullptr)
			*OutEdgeVertexID1 = params.OutEdgeVertexID1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FF440
	 * 		Name   -> Function EditableMesh.EditableMesh.GetEdgeVertex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EdgeVertexNumber                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVertexID UEditableMesh::GetEdgeVertex(const struct FEdgeID& EdgeID, int32_t EdgeVertexNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeVertex");
		
		UEditableMesh_GetEdgeVertex_Params params {};
		params.EdgeID = EdgeID;
		params.EdgeVertexNumber = EdgeVertexNumber;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FF370
	 * 		Name   -> Function EditableMesh.EditableMesh.GetEdgeThatConnectsVertices
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVertexID                                   VertexID0                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   VertexID1                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEdgeID UEditableMesh::GetEdgeThatConnectsVertices(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeThatConnectsVertices");
		
		UEditableMesh_GetEdgeThatConnectsVertices_Params params {};
		params.VertexID0 = VertexID0;
		params.VertexID1 = VertexID1;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FF280
	 * 		Name   -> Function EditableMesh.EditableMesh.GetEdgeLoopElements
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             EdgeLoopIDs                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::GetEdgeLoopElements(const struct FEdgeID& EdgeID, TArray<struct FEdgeID>* EdgeLoopIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeLoopElements");
		
		UEditableMesh_GetEdgeLoopElements_Params params {};
		params.EdgeID = EdgeID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EdgeLoopIDs != nullptr)
			*EdgeLoopIDs = params.EdgeLoopIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FF250
	 * 		Name   -> Function EditableMesh.EditableMesh.GetEdgeCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UEditableMesh::GetEdgeCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeCount");
		
		UEditableMesh_GetEdgeCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FF160
	 * 		Name   -> Function EditableMesh.EditableMesh.GetEdgeConnectedPolygons
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutConnectedPolygonIDs                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::GetEdgeConnectedPolygons(const struct FEdgeID& EdgeID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeConnectedPolygons");
		
		UEditableMesh_GetEdgeConnectedPolygons_Params params {};
		params.EdgeID = EdgeID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutConnectedPolygonIDs != nullptr)
			*OutConnectedPolygonIDs = params.OutConnectedPolygonIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FF0D0
	 * 		Name   -> Function EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEditableMesh::GetEdgeConnectedPolygonCount(const struct FEdgeID& EdgeID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount");
		
		UEditableMesh_GetEdgeConnectedPolygonCount_Params params {};
		params.EdgeID = EdgeID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FF000
	 * 		Name   -> Function EditableMesh.EditableMesh.GetEdgeConnectedPolygon
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ConnectedPolygonNumber                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPolygonID UEditableMesh::GetEdgeConnectedPolygon(const struct FEdgeID& EdgeID, int32_t ConnectedPolygonNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GetEdgeConnectedPolygon");
		
		UEditableMesh_GetEdgeConnectedPolygon_Params params {};
		params.EdgeID = EdgeID;
		params.ConnectedPolygonNumber = ConnectedPolygonNumber;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FEF50
	 * 		Name   -> Function EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FPolygonID>                          PolygonIDs                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::GeneratePolygonTangentsAndNormals(TArray<struct FPolygonID> PolygonIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals");
		
		UEditableMesh_GeneratePolygonTangentsAndNormals_Params params {};
		params.PolygonIDs = PolygonIDs;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FEEA0
	 * 		Name   -> Function EditableMesh.EditableMesh.FlipPolygons
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FPolygonID>                          PolygonIDs                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::FlipPolygons(TArray<struct FPolygonID> PolygonIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.FlipPolygons");
		
		UEditableMesh_FlipPolygons_Params params {};
		params.PolygonIDs = PolygonIDs;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FEDD0
	 * 		Name   -> Function EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   VertexID                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEditableMesh::FindPolygonPerimeterVertexNumberForVertex(const struct FPolygonID& PolygonID, const struct FVertexID& VertexID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex");
		
		UEditableMesh_FindPolygonPerimeterVertexNumberForVertex_Params params {};
		params.PolygonID = PolygonID;
		params.VertexID = VertexID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FECC0
	 * 		Name   -> Function EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   EdgeVertexID0                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVertexID                                   EdgeVertexID1                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UEditableMesh::FindPolygonPerimeterEdgeNumberForVertices(const struct FPolygonID& PolygonID, const struct FVertexID& EdgeVertexID0, const struct FVertexID& EdgeVertexID1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices");
		
		UEditableMesh_FindPolygonPerimeterEdgeNumberForVertices_Params params {};
		params.PolygonID = PolygonID;
		params.EdgeVertexID0 = EdgeVertexID0;
		params.EdgeVertexID1 = EdgeVertexID1;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FEAA0
	 * 		Name   -> Function EditableMesh.EditableMesh.FindPolygonLoop
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutEdgeLoopEdgeIDs                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutFlippedEdgeIDs                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutReversedEdgeIDPathToTake                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutPolygonIDsToSplit                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::FindPolygonLoop(const struct FEdgeID& EdgeID, TArray<struct FEdgeID>* OutEdgeLoopEdgeIDs, TArray<struct FEdgeID>* OutFlippedEdgeIDs, TArray<struct FEdgeID>* OutReversedEdgeIDPathToTake, TArray<struct FPolygonID>* OutPolygonIDsToSplit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.FindPolygonLoop");
		
		UEditableMesh_FindPolygonLoop_Params params {};
		params.EdgeID = EdgeID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEdgeLoopEdgeIDs != nullptr)
			*OutEdgeLoopEdgeIDs = params.OutEdgeLoopEdgeIDs;
		if (OutFlippedEdgeIDs != nullptr)
			*OutFlippedEdgeIDs = params.OutFlippedEdgeIDs;
		if (OutReversedEdgeIDPathToTake != nullptr)
			*OutReversedEdgeIDPathToTake = params.OutReversedEdgeIDPathToTake;
		if (OutPolygonIDsToSplit != nullptr)
			*OutPolygonIDsToSplit = params.OutPolygonIDsToSplit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FE8F0
	 * 		Name   -> Function EditableMesh.EditableMesh.ExtrudePolygons
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FPolygonID>                          Polygons                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              ExtrudeDistance                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bKeepNeighborsTogether                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutNewExtrudedFrontPolygons                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::ExtrudePolygons(TArray<struct FPolygonID> Polygons, float ExtrudeDistance, bool bKeepNeighborsTogether, TArray<struct FPolygonID>* OutNewExtrudedFrontPolygons)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ExtrudePolygons");
		
		UEditableMesh_ExtrudePolygons_Params params {};
		params.Polygons = Polygons;
		params.ExtrudeDistance = ExtrudeDistance;
		params.bKeepNeighborsTogether = bKeepNeighborsTogether;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewExtrudedFrontPolygons != nullptr)
			*OutNewExtrudedFrontPolygons = params.OutNewExtrudedFrontPolygons;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FE750
	 * 		Name   -> Function EditableMesh.EditableMesh.ExtendVertices
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FVertexID>                           VertexIDs                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bOnlyExtendClosestEdge                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ReferencePosition                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexID>                           OutNewExtendedVertexIDs                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::ExtendVertices(TArray<struct FVertexID> VertexIDs, bool bOnlyExtendClosestEdge, const struct FVector& ReferencePosition, TArray<struct FVertexID>* OutNewExtendedVertexIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ExtendVertices");
		
		UEditableMesh_ExtendVertices_Params params {};
		params.VertexIDs = VertexIDs;
		params.bOnlyExtendClosestEdge = bOnlyExtendClosestEdge;
		params.ReferencePosition = ReferencePosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewExtendedVertexIDs != nullptr)
			*OutNewExtendedVertexIDs = params.OutNewExtendedVertexIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FE5F0
	 * 		Name   -> Function EditableMesh.EditableMesh.ExtendEdges
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FEdgeID>                             EdgeIDs                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bWeldNeighbors                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutNewExtendedEdgeIDs                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::ExtendEdges(TArray<struct FEdgeID> EdgeIDs, bool bWeldNeighbors, TArray<struct FEdgeID>* OutNewExtendedEdgeIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ExtendEdges");
		
		UEditableMesh_ExtendEdges_Params params {};
		params.EdgeIDs = EdgeIDs;
		params.bWeldNeighbors = bWeldNeighbors;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewExtendedEdgeIDs != nullptr)
			*OutNewExtendedEdgeIDs = params.OutNewExtendedEdgeIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FE560
	 * 		Name   -> Function EditableMesh.EditableMesh.EndModification
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bFromUndo                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::EndModification(bool bFromUndo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.EndModification");
		
		UEditableMesh_EndModification_Params params {};
		params.bFromUndo = bFromUndo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FE460
	 * 		Name   -> Function EditableMesh.EditableMesh.DeleteVertexInstances
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FVertexInstanceID>                   VertexInstanceIDsToDelete                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteOrphanedVertices                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::DeleteVertexInstances(TArray<struct FVertexInstanceID> VertexInstanceIDsToDelete, bool bDeleteOrphanedVertices)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteVertexInstances");
		
		UEditableMesh_DeleteVertexInstances_Params params {};
		params.VertexInstanceIDsToDelete = VertexInstanceIDsToDelete;
		params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FE2B0
	 * 		Name   -> Function EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FVertexID                                   VertexID                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteOrphanedEdges                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteOrphanedVertices                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteOrphanedVertexInstances                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteEmptyPolygonGroups                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::DeleteVertexAndConnectedEdgesAndPolygons(const struct FVertexID& VertexID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons");
		
		UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Params params {};
		params.VertexID = VertexID;
		params.bDeleteOrphanedEdges = bDeleteOrphanedEdges;
		params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;
		params.bDeleteOrphanedVertexInstances = bDeleteOrphanedVertexInstances;
		params.bDeleteEmptyPolygonGroups = bDeleteEmptyPolygonGroups;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FE0C0
	 * 		Name   -> Function EditableMesh.EditableMesh.DeletePolygons
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FPolygonID>                          PolygonIDsToDelete                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteOrphanedEdges                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteOrphanedVertices                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteOrphanedVertexInstances                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteEmptyPolygonGroups                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::DeletePolygons(TArray<struct FPolygonID> PolygonIDsToDelete, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeletePolygons");
		
		UEditableMesh_DeletePolygons_Params params {};
		params.PolygonIDsToDelete = PolygonIDsToDelete;
		params.bDeleteOrphanedEdges = bDeleteOrphanedEdges;
		params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;
		params.bDeleteOrphanedVertexInstances = bDeleteOrphanedVertexInstances;
		params.bDeleteEmptyPolygonGroups = bDeleteEmptyPolygonGroups;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FE010
	 * 		Name   -> Function EditableMesh.EditableMesh.DeletePolygonGroups
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FPolygonGroupID>                     PolygonGroupIDs                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::DeletePolygonGroups(TArray<struct FPolygonGroupID> PolygonGroupIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeletePolygonGroups");
		
		UEditableMesh_DeletePolygonGroups_Params params {};
		params.PolygonGroupIDs = PolygonGroupIDs;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FDF60
	 * 		Name   -> Function EditableMesh.EditableMesh.DeleteOrphanVertices
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FVertexID>                           VertexIDsToDelete                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::DeleteOrphanVertices(TArray<struct FVertexID> VertexIDsToDelete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteOrphanVertices");
		
		UEditableMesh_DeleteOrphanVertices_Params params {};
		params.VertexIDsToDelete = VertexIDsToDelete;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FDE60
	 * 		Name   -> Function EditableMesh.EditableMesh.DeleteEdges
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FEdgeID>                             EdgeIDsToDelete                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteOrphanedVertices                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::DeleteEdges(TArray<struct FEdgeID> EdgeIDsToDelete, bool bDeleteOrphanedVertices)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteEdges");
		
		UEditableMesh_DeleteEdges_Params params {};
		params.EdgeIDsToDelete = EdgeIDsToDelete;
		params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FDCB0
	 * 		Name   -> Function EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FEdgeID                                     EdgeID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteOrphanedEdges                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteOrphanedVertices                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteOrphanedVertexInstances                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteEmptyPolygonGroups                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::DeleteEdgeAndConnectedPolygons(const struct FEdgeID& EdgeID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons");
		
		UEditableMesh_DeleteEdgeAndConnectedPolygons_Params params {};
		params.EdgeID = EdgeID;
		params.bDeleteOrphanedEdges = bDeleteOrphanedEdges;
		params.bDeleteOrphanedVertices = bDeleteOrphanedVertices;
		params.bDeleteOrphanedVertexInstances = bDeleteOrphanedVertexInstances;
		params.bDeleteEmptyPolygonGroups = bDeleteEmptyPolygonGroups;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FDB70
	 * 		Name   -> Function EditableMesh.EditableMesh.CreateVertices
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FVertexToCreate>                     VerticesToCreate                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexID>                           OutNewVertexIDs                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::CreateVertices(TArray<struct FVertexToCreate> VerticesToCreate, TArray<struct FVertexID>* OutNewVertexIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateVertices");
		
		UEditableMesh_CreateVertices_Params params {};
		params.VerticesToCreate = VerticesToCreate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewVertexIDs != nullptr)
			*OutNewVertexIDs = params.OutNewVertexIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FDA30
	 * 		Name   -> Function EditableMesh.EditableMesh.CreateVertexInstances
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FVertexInstanceToCreate>             VertexInstancesToCreate                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexInstanceID>                   OutNewVertexInstanceIDs                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::CreateVertexInstances(TArray<struct FVertexInstanceToCreate> VertexInstancesToCreate, TArray<struct FVertexInstanceID>* OutNewVertexInstanceIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateVertexInstances");
		
		UEditableMesh_CreateVertexInstances_Params params {};
		params.VertexInstancesToCreate = VertexInstancesToCreate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewVertexInstanceIDs != nullptr)
			*OutNewVertexInstanceIDs = params.OutNewVertexInstanceIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FD880
	 * 		Name   -> Function EditableMesh.EditableMesh.CreatePolygons
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FPolygonToCreate>                    PolygonsToCreate                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutNewPolygonIDs                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutNewEdgeIDs                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::CreatePolygons(TArray<struct FPolygonToCreate> PolygonsToCreate, TArray<struct FPolygonID>* OutNewPolygonIDs, TArray<struct FEdgeID>* OutNewEdgeIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreatePolygons");
		
		UEditableMesh_CreatePolygons_Params params {};
		params.PolygonsToCreate = PolygonsToCreate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewPolygonIDs != nullptr)
			*OutNewPolygonIDs = params.OutNewPolygonIDs;
		if (OutNewEdgeIDs != nullptr)
			*OutNewEdgeIDs = params.OutNewEdgeIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FD740
	 * 		Name   -> Function EditableMesh.EditableMesh.CreatePolygonGroups
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FPolygonGroupToCreate>               PolygonGroupsToCreate                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonGroupID>                     OutNewPolygonGroupIDs                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::CreatePolygonGroups(TArray<struct FPolygonGroupToCreate> PolygonGroupsToCreate, TArray<struct FPolygonGroupID>* OutNewPolygonGroupIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreatePolygonGroups");
		
		UEditableMesh_CreatePolygonGroups_Params params {};
		params.PolygonGroupsToCreate = PolygonGroupsToCreate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewPolygonGroupIDs != nullptr)
			*OutNewPolygonGroupIDs = params.OutNewPolygonGroupIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FD650
	 * 		Name   -> Function EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutNewEdgeIDs                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::CreateMissingPolygonPerimeterEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutNewEdgeIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges");
		
		UEditableMesh_CreateMissingPolygonPerimeterEdges_Params params {};
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewEdgeIDs != nullptr)
			*OutNewEdgeIDs = params.OutNewEdgeIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FD570
	 * 		Name   -> Function EditableMesh.EditableMesh.CreateEmptyVertexRange
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NumVerticesToCreate                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVertexID>                           OutNewVertexIDs                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::CreateEmptyVertexRange(int32_t NumVerticesToCreate, TArray<struct FVertexID>* OutNewVertexIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateEmptyVertexRange");
		
		UEditableMesh_CreateEmptyVertexRange_Params params {};
		params.NumVerticesToCreate = NumVerticesToCreate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewVertexIDs != nullptr)
			*OutNewVertexIDs = params.OutNewVertexIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FD420
	 * 		Name   -> Function EditableMesh.EditableMesh.CreateEdges
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FEdgeToCreate>                       EdgesToCreate                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutNewEdgeIDs                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::CreateEdges(TArray<struct FEdgeToCreate> EdgesToCreate, TArray<struct FEdgeID>* OutNewEdgeIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CreateEdges");
		
		UEditableMesh_CreateEdges_Params params {};
		params.EdgesToCreate = EdgesToCreate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewEdgeIDs != nullptr)
			*OutNewEdgeIDs = params.OutNewEdgeIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FD210
	 * 		Name   -> Function EditableMesh.EditableMesh.ComputePolygonTriangulation
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FMeshTriangle>                       OutTriangles                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::ComputePolygonTriangulation(const struct FPolygonID& PolygonID, TArray<struct FMeshTriangle>* OutTriangles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputePolygonTriangulation");
		
		UEditableMesh_ComputePolygonTriangulation_Params params {};
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTriangles != nullptr)
			*OutTriangles = params.OutTriangles;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FD300
	 * 		Name   -> Function EditableMesh.EditableMesh.ComputePolygonsSharedEdges
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<struct FPolygonID>                          PolygonIDs                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FEdgeID>                             OutSharedEdgeIDs                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::ComputePolygonsSharedEdges(TArray<struct FPolygonID> PolygonIDs, TArray<struct FEdgeID>* OutSharedEdgeIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputePolygonsSharedEdges");
		
		UEditableMesh_ComputePolygonsSharedEdges_Params params {};
		params.PolygonIDs = PolygonIDs;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSharedEdgeIDs != nullptr)
			*OutSharedEdgeIDs = params.OutSharedEdgeIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FD170
	 * 		Name   -> Function EditableMesh.EditableMesh.ComputePolygonPlane
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPlane UEditableMesh::ComputePolygonPlane(const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputePolygonPlane");
		
		UEditableMesh_ComputePolygonPlane_Params params {};
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FD0D0
	 * 		Name   -> Function EditableMesh.EditableMesh.ComputePolygonNormal
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UEditableMesh::ComputePolygonNormal(const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputePolygonNormal");
		
		UEditableMesh_ComputePolygonNormal_Params params {};
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FD030
	 * 		Name   -> Function EditableMesh.EditableMesh.ComputePolygonCenter
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UEditableMesh::ComputePolygonCenter(const struct FPolygonID& PolygonID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputePolygonCenter");
		
		UEditableMesh_ComputePolygonCenter_Params params {};
		params.PolygonID = PolygonID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FCFE0
	 * 		Name   -> Function EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FBoxSphereBounds UEditableMesh::ComputeBoundingBoxAndSphere()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere");
		
		UEditableMesh_ComputeBoundingBoxAndSphere_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FCF90
	 * 		Name   -> Function EditableMesh.EditableMesh.ComputeBoundingBox
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FBox UEditableMesh::ComputeBoundingBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputeBoundingBox");
		
		UEditableMesh_ComputeBoundingBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FCDF0
	 * 		Name   -> Function EditableMesh.EditableMesh.ComputeBarycentricWeightForPointOnPolygon
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FPolygonID                                  PolygonID                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     PointOnPolygon                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMeshTriangle                               OutTriangle                                                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutTriangleVertexWeights                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEditableMesh::ComputeBarycentricWeightForPointOnPolygon(const struct FPolygonID& PolygonID, const struct FVector& PointOnPolygon, struct FMeshTriangle* OutTriangle, struct FVector* OutTriangleVertexWeights)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ComputeBarycentricWeightForPointOnPolygon");
		
		UEditableMesh_ComputeBarycentricWeightForPointOnPolygon_Params params {};
		params.PolygonID = PolygonID;
		params.PointOnPolygon = PointOnPolygon;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTriangle != nullptr)
			*OutTriangle = params.OutTriangle;
		if (OutTriangleVertexWeights != nullptr)
			*OutTriangleVertexWeights = params.OutTriangleVertexWeights;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FCD60
	 * 		Name   -> Function EditableMesh.EditableMesh.CommitInstance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         ComponentToInstanceTo                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UEditableMesh* UEditableMesh::CommitInstance(class UPrimitiveComponent* ComponentToInstanceTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.CommitInstance");
		
		UEditableMesh_CommitInstance_Params params {};
		params.ComponentToInstanceTo = ComponentToInstanceTo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FCD40
	 * 		Name   -> Function EditableMesh.EditableMesh.Commit
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UEditableMesh::Commit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.Commit");
		
		UEditableMesh_Commit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FCC20
	 * 		Name   -> Function EditableMesh.EditableMesh.ChangePolygonsVertexInstances
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FChangeVertexInstancesForPolygon>    VertexInstancesForPolygons                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::ChangePolygonsVertexInstances(TArray<struct FChangeVertexInstancesForPolygon> VertexInstancesForPolygons)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.ChangePolygonsVertexInstances");
		
		UEditableMesh_ChangePolygonsVertexInstances_Params params {};
		params.VertexInstancesForPolygons = VertexInstancesForPolygons;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FCA40
	 * 		Name   -> Function EditableMesh.EditableMesh.BevelPolygons
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FPolygonID>                          PolygonIDs                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              BevelFixedDistance                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BevelProgressTowardCenter                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutNewCenterPolygonIDs                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPolygonID>                          OutNewSidePolygonIDs                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::BevelPolygons(TArray<struct FPolygonID> PolygonIDs, float BevelFixedDistance, float BevelProgressTowardCenter, TArray<struct FPolygonID>* OutNewCenterPolygonIDs, TArray<struct FPolygonID>* OutNewSidePolygonIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.BevelPolygons");
		
		UEditableMesh_BevelPolygons_Params params {};
		params.PolygonIDs = PolygonIDs;
		params.BevelFixedDistance = BevelFixedDistance;
		params.BevelProgressTowardCenter = BevelProgressTowardCenter;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutNewCenterPolygonIDs != nullptr)
			*OutNewCenterPolygonIDs = params.OutNewCenterPolygonIDs;
		if (OutNewSidePolygonIDs != nullptr)
			*OutNewSidePolygonIDs = params.OutNewSidePolygonIDs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FC940
	 * 		Name   -> Function EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FPolygonGroupForPolygon>             PolygonGroupForPolygons                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bDeleteOrphanedPolygonGroups                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEditableMesh::AssignPolygonsToPolygonGroups(TArray<struct FPolygonGroupForPolygon> PolygonGroupForPolygons, bool bDeleteOrphanedPolygonGroups)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups");
		
		UEditableMesh_AssignPolygonsToPolygonGroups_Params params {};
		params.PolygonGroupForPolygons = PolygonGroupForPolygons;
		params.bDeleteOrphanedPolygonGroups = bDeleteOrphanedPolygonGroups;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004FC910
	 * 		Name   -> Function EditableMesh.EditableMesh.AnyChangesToUndo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UEditableMesh::AnyChangesToUndo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMesh.AnyChangesToUndo");
		
		UEditableMesh_AnyChangesToUndo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditableMesh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditableMesh::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EditableMesh.EditableMesh");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00506930
	 * 		Name   -> Function EditableMesh.EditableMeshFactory.MakeEditableMesh
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         PrimitiveComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            LODIndex                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UEditableMesh* UEditableMeshFactory::STATIC_MakeEditableMesh(class UPrimitiveComponent* PrimitiveComponent, int32_t LODIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMeshFactory.MakeEditableMesh");
		
		UEditableMeshFactory_MakeEditableMesh_Params params {};
		params.PrimitiveComponent = PrimitiveComponent;
		params.LODIndex = LODIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditableMeshFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditableMeshFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EditableMesh.EditableMeshFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditableStaticMeshAdapter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditableStaticMeshAdapter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EditableMesh.EditableStaticMeshAdapter");
		return ptr;
	}

}


