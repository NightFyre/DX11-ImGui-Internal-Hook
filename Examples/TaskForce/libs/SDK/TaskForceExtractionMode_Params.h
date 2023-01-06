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
	 * Function TaskForceExtractionMode.TaskForceExtractionMode_C.SetExtractionMessages
	 */
	struct UTaskForceExtractionMode_C_SetExtractionMessages_Params
	{
	public:
		TMap<int32_t, class FString>                               HostageGrabbed;                                          // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
		TMap<int32_t, class FString>                               HostageKilled;                                           // 0x0050(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
		TMap<int32_t, class FString>                               HostageExtracted;                                        // 0x00A0(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	};

	/**
	 * Function TaskForceExtractionMode.TaskForceExtractionMode_C.SetExtractionSounds
	 */
	struct UTaskForceExtractionMode_C_SetExtractionSounds_Params
	{
	public:
		TArray<class USoundCue*>                                   HostageGrabbedVoice;                                     // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class USoundCue*>                                   HostageKilledVoice;                                      // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TMap<int32_t, class USoundCue*>                            HostageKilledMusic;                                      // 0x0020(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
		TArray<class USoundCue*>                                   HostageExtractedVoice;                                   // 0x0070(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TMap<int32_t, class USoundCue*>                            HostageExtractedMusic;                                   // 0x0080(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	};

	/**
	 * Function TaskForceExtractionMode.TaskForceExtractionMode_C.RemoveExtractionZone
	 */
	struct UTaskForceExtractionMode_C_RemoveExtractionZone_Params
	{
	public:
		class UBoxComponent*                                       Zone;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TaskForceExtractionMode.TaskForceExtractionMode_C.ClearExtractionZones
	 */
	struct UTaskForceExtractionMode_C_ClearExtractionZones_Params
	{	};

	/**
	 * Function TaskForceExtractionMode.TaskForceExtractionMode_C.AddExtractionZone
	 */
	struct UTaskForceExtractionMode_C_AddExtractionZone_Params
	{
	public:
		class UBoxComponent*                                       Zone;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TeamID;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WOTE[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTaskForceIcon                                      Icon;                                                    // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TaskForceExtractionMode.TaskForceExtractionMode_C.RemoveHostage
	 */
	struct UTaskForceExtractionMode_C_RemoveHostage_Params
	{
	public:
		class APlayerStart*                                        Spawn;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TaskForceExtractionMode.TaskForceExtractionMode_C.ClearHostages
	 */
	struct UTaskForceExtractionMode_C_ClearHostages_Params
	{	};

	/**
	 * Function TaskForceExtractionMode.TaskForceExtractionMode_C.AddHostage
	 */
	struct UTaskForceExtractionMode_C_AddHostage_Params
	{
	public:
		class APlayerStart*                                        Spawn;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Name;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMeshComponent*                              Head;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMeshComponent*                              Body;                                                    // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMeshComponent*                              Hat;                                                     // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMeshComponent*                              Shirt;                                                   // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMeshComponent*                              Pants;                                                   // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMeshComponent*                              Shoes;                                                   // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMeshComponent*                              Gloves;                                                  // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMeshComponent*                              Gear;                                                    // 0x0048(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
