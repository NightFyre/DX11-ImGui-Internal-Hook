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
	 * UserDefinedStruct BP_ArmoryItem.BP_ArmoryItem
	 * Size -> 0x0058
	 */
	struct FBP_ArmoryItem
	{
	public:
		class USkeletalMesh*                                       Mesh_2_46F98AE54C49431599290E807DBC5565;                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class FName, class UMaterialInterface*>               Materials_8_0A3D03A14F206EBB3EC79DADCA9D4296;            // 0x0008(0x0050) Edit, BlueprintVisible, ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
