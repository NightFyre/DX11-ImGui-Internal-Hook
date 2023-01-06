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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum MeshDescription.EComputeNTBsOptions
	 */
	enum class EComputeNTBsOptions : uint8_t
	{
		None         = 0,
		Normals      = 1,
		Tangents     = 2,
		WeightedNTBs = 3,
		MAX          = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MeshDescription.ElementID
	 * Size -> 0x0004
	 */
	struct FElementID
	{
	public:
		int32_t                                                    IDValue;                                                 // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct MeshDescription.PolygonGroupID
	 * Size -> 0x0000 (FullSize[0x0004] - InheritedSize[0x0004])
	 */
	struct FPolygonGroupID : public FElementID
	{	};

	/**
	 * ScriptStruct MeshDescription.PolygonID
	 * Size -> 0x0000 (FullSize[0x0004] - InheritedSize[0x0004])
	 */
	struct FPolygonID : public FElementID
	{	};

	/**
	 * ScriptStruct MeshDescription.VertexID
	 * Size -> 0x0000 (FullSize[0x0004] - InheritedSize[0x0004])
	 */
	struct FVertexID : public FElementID
	{	};

	/**
	 * ScriptStruct MeshDescription.EdgeID
	 * Size -> 0x0000 (FullSize[0x0004] - InheritedSize[0x0004])
	 */
	struct FEdgeID : public FElementID
	{	};

	/**
	 * ScriptStruct MeshDescription.VertexInstanceID
	 * Size -> 0x0000 (FullSize[0x0004] - InheritedSize[0x0004])
	 */
	struct FVertexInstanceID : public FElementID
	{	};

	/**
	 * ScriptStruct MeshDescription.MeshTriangle
	 * Size -> 0x000C
	 */
	struct FMeshTriangle
	{
	public:
		struct FVertexInstanceID                                   VertexInstanceID0;                                       // 0x0000(0x0004) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVertexInstanceID                                   VertexInstanceID1;                                       // 0x0004(0x0004) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVertexInstanceID                                   VertexInstanceID2;                                       // 0x0008(0x0004) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
