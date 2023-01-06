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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
	 * Size -> 0x0014
	 */
	struct FClothCollisionPrim_Sphere
	{
	public:
		int32_t                                                    BoneIndex;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LocalPosition;                                           // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
	 * Size -> 0x0008
	 */
	struct FClothCollisionPrim_SphereConnection
	{
	public:
		int32_t                                                    SphereIndices[0x2];                                      // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
	 * Size -> 0x0018
	 */
	struct FClothCollisionPrim_Convex
	{
	public:
		TArray<struct FPlane>                                      Planes;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    BoneIndex;                                               // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OA61[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionData
	 * Size -> 0x0030
	 */
	struct FClothCollisionData
	{
	public:
		TArray<struct FClothCollisionPrim_Sphere>                  Spheres;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FClothCollisionPrim_SphereConnection>        SphereConnections;                                       // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FClothCollisionPrim_Convex>                  Convexes;                                                // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
