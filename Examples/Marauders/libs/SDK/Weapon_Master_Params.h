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
	 * Function Weapon_Master.Weapon_Master_C.GetweaponSkelMesh
	 */
	struct AWeapon_Master_C_GetweaponSkelMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              SkelMesh;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Weapon_Master.Weapon_Master_C.BurstStartFireEvent
	 */
	struct AWeapon_Master_C_BurstStartFireEvent_Params
	{
	public:
		bool                                                       HasAmmo;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Weapon_Master.Weapon_Master_C.BurstStopedFireEvent
	 */
	struct AWeapon_Master_C_BurstStopedFireEvent_Params
	{
	public:
		bool                                                       HasAmmo;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Weapon_Master.Weapon_Master_C.StartLengthShootTimer
	 */
	struct AWeapon_Master_C_StartLengthShootTimer_Params
	{	};

	/**
	 * Function Weapon_Master.Weapon_Master_C.BrokenWeaponEvent
	 */
	struct AWeapon_Master_C_BrokenWeaponEvent_Params
	{	};

	/**
	 * Function Weapon_Master.Weapon_Master_C.ExecuteUbergraph_Weapon_Master
	 */
	struct AWeapon_Master_C_ExecuteUbergraph_Weapon_Master_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
