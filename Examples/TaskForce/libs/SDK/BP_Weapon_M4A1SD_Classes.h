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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_Weapon_M4A1SD.BP_Weapon_M4A1SD_C
	 * Size -> 0x0008 (FullSize[0x05F0] - InheritedSize[0x05E8])
	 */
	class ABP_Weapon_M4A1SD_C : public ATaskForceHitscanWeapon
	{
	public:
		class UStaticMeshComponent*                                Suppressor;                                              // 0x05E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
