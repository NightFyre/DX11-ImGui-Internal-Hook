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
	 * Function BP_Armory.BP_Armory_C.ResetSkin
	 */
	struct ABP_Armory_C_ResetSkin_Params
	{	};

	/**
	 * Function BP_Armory.BP_Armory_C.UpdateWorkshopMesh
	 */
	struct ABP_Armory_C_UpdateWorkshopMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMesh*                                       SkinMesh;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TMap<class FString, class UMaterialInterface*>             SkinMaterials;                                           // 0x0010(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function BP_Armory.BP_Armory_C.UpdateWorkshopArmory
	 */
	struct ABP_Armory_C_UpdateWorkshopArmory_Params
	{
	public:
		TMap<class FString, struct FTaskForceSkin>                 CommandoLookup;                                          // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
		TMap<class FString, struct FTaskForceSkin>                 TerroristLookup;                                         // 0x0050(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
		TMap<class FString, struct FTaskForceSkin>                 BotLookup;                                               // 0x00A0(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
		int32_t                                                    TeamID;                                                  // 0x00F0(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6VHL[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Key;                                                     // 0x00F8(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Armory.BP_Armory_C.UpdateWorkshopSkin
	 */
	struct ABP_Armory_C_UpdateWorkshopSkin_Params
	{
	public:
		TMap<class FString, struct FTaskForceSkin>                 Skins;                                                   // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
		class FString                                              Key;                                                     // 0x0050(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Armory.BP_Armory_C.UpdateArmoryMesh
	 */
	struct ABP_Armory_C_UpdateArmoryMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FBP_ArmoryItem                                      Item;                                                    // 0x0008(0x0058)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Armory.BP_Armory_C.UpdateArmoryComponent
	 */
	struct ABP_Armory_C_UpdateArmoryComponent_Params
	{
	public:
		TMap<class FString, struct FBP_ArmoryItem>                 CommandoLookup;                                          // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
		TMap<class FString, struct FBP_ArmoryItem>                 TerroristLookup;                                         // 0x0050(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
		int32_t                                                    TeamID;                                                  // 0x00A0(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_81C5[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Key;                                                     // 0x00A8(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x00B8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Armory.BP_Armory_C.updateArmory
	 */
	struct ABP_Armory_C_updateArmory_Params
	{
	public:
		int32_t                                                    TeamID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A0J2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ATaskForceSettings_C*                                Workshop;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Body;                                                    // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Head;                                                    // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Top;                                                     // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Bottom;                                                  // 0x0040(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Hat;                                                     // 0x0050(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Gloves;                                                  // 0x0060(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Shoes;                                                   // 0x0070(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Gear;                                                    // 0x0080(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Armory.BP_Armory_C.sleepArmory
	 */
	struct ABP_Armory_C_sleepArmory_Params
	{	};

	/**
	 * Function BP_Armory.BP_Armory_C.renderArmory
	 */
	struct ABP_Armory_C_renderArmory_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Armory.BP_Armory_C.ReceiveBeginPlay
	 */
	struct ABP_Armory_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Armory.BP_Armory_C.ExecuteUbergraph_BP_Armory
	 */
	struct ABP_Armory_C_ExecuteUbergraph_BP_Armory_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FTW9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
