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
	 * UserDefinedStruct TaskForceSkinMaterials.TaskForceSkinMaterials
	 * Size -> 0x0280
	 */
	struct FTaskForceSkinMaterials
	{
	public:
		TMap<class FString, class UMaterialInterface*>             Body_56_9B7A5C6341B5142E026A67A687E02BC4;                // 0x0000(0x0050) Edit, BlueprintVisible, ZeroConstructor
		TMap<class FString, class UMaterialInterface*>             Head_64_A603E6524C0D64B234D429B1FA398A0B;                // 0x0050(0x0050) Edit, BlueprintVisible, ZeroConstructor
		TMap<class FString, class UMaterialInterface*>             Hat_65_E734287044CC2A3D56A7DF8C41380DDF;                 // 0x00A0(0x0050) Edit, BlueprintVisible, ZeroConstructor
		TMap<class FString, class UMaterialInterface*>             Top_66_19B7D14847AC769EFF9F2DB82EA4968A;                 // 0x00F0(0x0050) Edit, BlueprintVisible, ZeroConstructor
		TMap<class FString, class UMaterialInterface*>             Bottom_67_276D41684D2B300A68AC78B6D41EF000;              // 0x0140(0x0050) Edit, BlueprintVisible, ZeroConstructor
		TMap<class FString, class UMaterialInterface*>             Gloves_68_B734A9CC4B4BC51C2D57C689CDFA44A4;              // 0x0190(0x0050) Edit, BlueprintVisible, ZeroConstructor
		TMap<class FString, class UMaterialInterface*>             Shoes_69_1B3A11B64930DE7C501C1B956B05CE27;               // 0x01E0(0x0050) Edit, BlueprintVisible, ZeroConstructor
		TMap<class FString, class UMaterialInterface*>             Gear_70_A69014FD42ECB8719B9773B36ED05061;                // 0x0230(0x0050) Edit, BlueprintVisible, ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
