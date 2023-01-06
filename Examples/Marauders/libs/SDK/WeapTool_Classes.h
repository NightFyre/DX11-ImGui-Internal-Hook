#pragma once

/**
 * Name: RaidGame
 * Version: 1
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
	 * BlueprintGeneratedClass WeapTool.WeapTool_C
	 * Size -> 0x0020 (FullSize[0x0980] - InheritedSize[0x0960])
	 */
	class AWeapTool_C : public ARaidWeapon_Tool
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0960(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class FName                                                WeaponDataTableName;                                     // 0x0968(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          WpnBreakSoundToUse;                                      // 0x0970(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     WpnBreakParticleToUse;                                   // 0x0978(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetToolSkeletalMesh(class USkeletalMeshComponent** SkelMesh);
		void BrokenWeaponEvent();
		void ExecuteUbergraph_WeapTool(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
