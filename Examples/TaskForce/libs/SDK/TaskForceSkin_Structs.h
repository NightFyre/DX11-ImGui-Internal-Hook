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
	 * UserDefinedStruct TaskForceSkin.TaskForceSkin
	 * Size -> 0x02F0
	 */
	struct FTaskForceSkin
	{
	public:
		struct FTaskForceSkinMeshes                                Meshes_48_9B7A5C6341B5142E026A67A687E02BC4;              // 0x0000(0x0040) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTaskForceSkinMaterials                             Materials_50_A603E6524C0D64B234D429B1FA398A0B;           // 0x0040(0x0280) Edit, BlueprintVisible, HasGetValueTypeHash
		TArray<class USoundCue*>                                   Grenades_54_AADEF44E48279CB7F7B432B2F10476B6;            // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class USoundCue*>                                   Taunts_56_BCE66DFF4D6FD6B7357C03BF0F101EC3;              // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class FString>                                      Messages_60_CF35BB74411FC3FE603BE5ACA607F838;            // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
