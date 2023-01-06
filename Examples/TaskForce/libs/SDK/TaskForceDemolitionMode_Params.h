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
	 * Function TaskForceDemolitionMode.TaskForceDemolitionMode_C.SetDemolitionMessages
	 */
	struct UTaskForceDemolitionMode_C_SetDemolitionMessages_Params
	{
	public:
		TMap<int32_t, class FString>                               BombPickup;                                              // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
		TMap<int32_t, class FString>                               BombDropped;                                             // 0x0050(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
		TMap<int32_t, class FString>                               BombPlanted;                                             // 0x00A0(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
		TMap<int32_t, class FString>                               BombExploded;                                            // 0x00F0(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
		TMap<int32_t, class FString>                               BombDefused;                                             // 0x0140(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	};

	/**
	 * Function TaskForceDemolitionMode.TaskForceDemolitionMode_C.SetDemolitionSounds
	 */
	struct UTaskForceDemolitionMode_C_SetDemolitionSounds_Params
	{
	public:
		TArray<class USoundCue*>                                   BombPickupMusic;                                         // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class USoundCue*>                                   BombPlantedVoice;                                        // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class USoundCue*>                                   BombPlantedMusic;                                        // 0x0020(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class USoundCue*>                                   BombExplodedVoice;                                       // 0x0030(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class USoundCue*>                                   BombDefusedVoice;                                        // 0x0040(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function TaskForceDemolitionMode.TaskForceDemolitionMode_C.RemoveBombZone
	 */
	struct UTaskForceDemolitionMode_C_RemoveBombZone_Params
	{
	public:
		class UBoxComponent*                                       Zone;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TaskForceDemolitionMode.TaskForceDemolitionMode_C.ClearBombZones
	 */
	struct UTaskForceDemolitionMode_C_ClearBombZones_Params
	{	};

	/**
	 * Function TaskForceDemolitionMode.TaskForceDemolitionMode_C.AddBombZone
	 */
	struct UTaskForceDemolitionMode_C_AddBombZone_Params
	{
	public:
		class UBoxComponent*                                       Zone;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TeamID;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0VPU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTaskForceIcon                                      AttackIcon;                                              // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FTaskForceIcon                                      DefendIcon;                                              // 0x0028(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TaskForceDemolitionMode.TaskForceDemolitionMode_C.SetBomb
	 */
	struct UTaskForceDemolitionMode_C_SetBomb_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		class UStaticMesh*                                         Mesh;                                                    // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       AttachCustom;                                            // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ETaskForceBone                                             AttachBone;                                              // 0x0039(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y6MI[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          AttachTransform;                                         // 0x0040(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FTaskForceIcon                                      Icon;                                                    // 0x0070(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
