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
	 * Function SkinnedDecalComponent.SkinnedDecalInstance.UpdateDecal
	 */
	struct USkinnedDecalInstance_UpdateDecal_Params
	{	};

	/**
	 * Function SkinnedDecalComponent.SkinnedDecalInstance.GetSampler
	 */
	struct USkinnedDecalInstance_GetSampler_Params
	{
	public:
		class USkinnedDecalSampler*                                ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SkinnedDecalComponent.SkinnedDecalSampler.UpdateInstance
	 */
	struct USkinnedDecalSampler_UpdateInstance_Params
	{
	public:
		class USkinnedDecalInstance*                               Instance;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SkinnedDecalComponent.SkinnedDecalSampler.UpdateAllDecals
	 */
	struct USkinnedDecalSampler_UpdateAllDecals_Params
	{	};

	/**
	 * Function SkinnedDecalComponent.SkinnedDecalSampler.SpawnDecal
	 */
	struct USkinnedDecalSampler_SpawnDecal_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RSE0[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FQuat                                               Rotation;                                                // 0x0010(0x0010)  (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class FName                                                BoneName;                                                // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Size;                                                    // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SubUV;                                                   // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0034(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SkinnedDecalComponent.SkinnedDecalSampler.SetupMaterials
	 */
	struct USkinnedDecalSampler_SetupMaterials_Params
	{	};

	/**
	 * Function SkinnedDecalComponent.SkinnedDecalSampler.SetMeshComponent
	 */
	struct USkinnedDecalSampler_SetMeshComponent_Params
	{
	public:
		class USkeletalMeshComponent*                              MeshComponent;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Child;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SkinnedDecalComponent.SkinnedDecalSampler.RemoveDecal
	 */
	struct USkinnedDecalSampler_RemoveDecal_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SkinnedDecalComponent.SkinnedDecalSampler.GetDataTarget
	 */
	struct USkinnedDecalSampler_GetDataTarget_Params
	{
	public:
		class UTextureRenderTarget2D*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SkinnedDecalComponent.SkinnedDecalSampler.CloneDecals
	 */
	struct USkinnedDecalSampler_CloneDecals_Params
	{
	public:
		class USkinnedDecalSampler*                                Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SkinnedDecalComponent.SkinnedDecalSampler.ClearAllDecals
	 */
	struct USkinnedDecalSampler_ClearAllDecals_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
