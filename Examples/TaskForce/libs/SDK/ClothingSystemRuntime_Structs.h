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
	 * Enum ClothingSystemRuntime.EClothingWindMethod
	 */
	enum class EClothingWindMethod : uint8_t
	{
		Legacy   = 0,
		Accurate = 1,
		MAX      = 2
	};

	/**
	 * Enum ClothingSystemRuntime.MaskTarget_PhysMesh
	 */
	enum class EMaskTarget_PhysMesh : uint8_t
	{
		MaskTarget_PhysMesh_None                = 0,
		MaskTarget_PhysMesh_MaxDistance         = 1,
		MaskTarget_PhysMesh_BackstopDistance    = 2,
		MaskTarget_PhysMesh_BackstopRadius      = 3,
		MaskTarget_PhysMesh_AnimDriveMultiplier = 4,
		MaskTarget_PhysMesh_MaskTarget_MAX      = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ClothingSystemRuntime.ClothConstraintSetup
	 * Size -> 0x0010
	 */
	struct FClothConstraintSetup
	{
	public:
		float                                                      Stiffness;                                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StiffnessMultiplier;                                     // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StretchLimit;                                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CompressionLimit;                                        // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ClothingSystemRuntime.ClothConfig
	 * Size -> 0x00D4
	 */
	struct FClothConfig
	{
	public:
		EClothingWindMethod                                        WindMethod;                                              // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7SXG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FClothConstraintSetup                               VerticalConstraintConfig;                                // 0x0004(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FClothConstraintSetup                               HorizontalConstraintConfig;                              // 0x0014(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FClothConstraintSetup                               BendConstraintConfig;                                    // 0x0024(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FClothConstraintSetup                               ShearConstraintConfig;                                   // 0x0034(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      SelfCollisionRadius;                                     // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SelfCollisionStiffness;                                  // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SelfCollisionCullScale;                                  // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Damping;                                                 // 0x0050(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Friction;                                                // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WindDragCoefficient;                                     // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WindLiftCoefficient;                                     // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LinearDrag;                                              // 0x0068(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AngularDrag;                                             // 0x0074(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LinearInertiaScale;                                      // 0x0080(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AngularInertiaScale;                                     // 0x008C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CentrifugalInertiaScale;                                 // 0x0098(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SolverFrequency;                                         // 0x00A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StiffnessFrequency;                                      // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GravityScale;                                            // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             GravityOverride;                                         // 0x00B0(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseGravityOverride;                                     // 0x00BC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RIIL[0x3];                                   // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TetherStiffness;                                         // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TetherLimit;                                             // 0x00C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollisionThickness;                                      // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimDriveSpringStiffness;                                // 0x00CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimDriveDamperStiffness;                                // 0x00D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ClothingSystemRuntime.ClothVertBoneData
	 * Size -> 0x0034
	 */
	struct FClothVertBoneData
	{
	public:
		int32_t                                                    NumInfluences;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   BoneIndices[0x8];                                        // 0x0004(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoneWeights[0x8];                                        // 0x0014(0x0020) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ClothingSystemRuntime.ClothPhysicalMeshData
	 * Size -> 0x00A8
	 */
	struct FClothPhysicalMeshData
	{
	public:
		TArray<struct FVector>                                     Vertices;                                                // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     Normals;                                                 // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           Indices;                                                 // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              MaxDistances;                                            // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              BackstopDistances;                                       // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              BackstopRadiuses;                                        // 0x0050(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              AnimDriveMultipliers;                                    // 0x0060(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              InverseMasses;                                           // 0x0070(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FClothVertBoneData>                          BoneData;                                                // 0x0080(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    MaxBoneWeights;                                          // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumFixedVerts;                                           // 0x0094(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           SelfCollisionIndices;                                    // 0x0098(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ClothingSystemRuntime.ClothLODData
	 * Size -> 0x00F8
	 */
	struct FClothLODData
	{
	public:
		struct FClothPhysicalMeshData                              PhysicalMeshData;                                        // 0x0000(0x00A8) Edit, NativeAccessSpecifierPublic
		struct FClothCollisionData                                 CollisionData;                                           // 0x00A8(0x0030) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YGFV[0x20];                                  // 0x00D8(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ClothingSystemRuntime.ClothParameterMask_PhysMesh
	 * Size -> 0x0030
	 */
	struct FClothParameterMask_PhysMesh
	{
	public:
		class FName                                                MaskName;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMaskTarget_PhysMesh                                       CurrentTarget;                                           // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1J2W[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxValue;                                                // 0x000C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinValue;                                                // 0x0010(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UY0D[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              Values;                                                  // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FW9L[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
