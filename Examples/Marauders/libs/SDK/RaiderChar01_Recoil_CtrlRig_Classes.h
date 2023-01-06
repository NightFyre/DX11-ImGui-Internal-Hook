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
	 * ControlRigBlueprintGeneratedClass RaiderChar01_Recoil_CtrlRig.RaiderChar01_Recoil_CtrlRig_C
	 * Size -> 0x0164 (FullSize[0x07B4] - InheritedSize[0x0650])
	 */
	class URaiderChar01_Recoil_CtrlRig_C : public UControlRig
	{
	public:
		struct FTransform                                          IdleRestingTransform;                                    // 0x0650(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		bool                                                       isUnarmed;                                               // 0x0680(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       isADS;                                                   // 0x0681(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_3WN9[0x2];                                   // 0x0682(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            DelayRotation;                                           // 0x0684(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		struct FS_Weapon_ControlRig_Settings                       WeaponControlRigSettings;                                // 0x0690(0x00E8) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      BlockingOffsetAlpha;                                     // 0x0778(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FVector                                             ADS_Breathing_Value;                                     // 0x077C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       JustADS_NormalChange;                                    // 0x0788(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       WasADSing_Previously;                                    // 0x0789(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MZIR[0x2];                                   // 0x078A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UseTranslationDelayWeight;                               // 0x078C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      JumpTransitionZValue;                                    // 0x0790(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      ShootShaking;                                            // 0x0794(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RecoilOnOff;                                             // 0x0798(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Recoil_XRotRand;                                         // 0x079C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Recoil_OnOff_Rotation;                                   // 0x07A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Recoil_Rotation_ADS_Strength;                            // 0x07AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PlayerPitchLook;                                         // 0x07B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
