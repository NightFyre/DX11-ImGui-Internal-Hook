/**
 * Name: RaidGame
 * Version: 1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Weapon_Master.Weapon_Master_C.GetweaponSkelMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      SkelMesh                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeapon_Master_C::GetweaponSkelMesh(class USkeletalMeshComponent** SkelMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Master.Weapon_Master_C.GetweaponSkelMesh");
		
		AWeapon_Master_C_GetweaponSkelMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SkelMesh != nullptr)
			*SkelMesh = params.SkelMesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Weapon_Master.Weapon_Master_C.BurstStartFireEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasAmmo                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapon_Master_C::BurstStartFireEvent(bool HasAmmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Master.Weapon_Master_C.BurstStartFireEvent");
		
		AWeapon_Master_C_BurstStartFireEvent_Params params {};
		params.HasAmmo = HasAmmo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Weapon_Master.Weapon_Master_C.BurstStopedFireEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasAmmo                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWeapon_Master_C::BurstStopedFireEvent(bool HasAmmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Master.Weapon_Master_C.BurstStopedFireEvent");
		
		AWeapon_Master_C_BurstStopedFireEvent_Params params {};
		params.HasAmmo = HasAmmo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Weapon_Master.Weapon_Master_C.StartLengthShootTimer
	 * 		Flags  -> ()
	 */
	void AWeapon_Master_C::StartLengthShootTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Master.Weapon_Master_C.StartLengthShootTimer");
		
		AWeapon_Master_C_StartLengthShootTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Weapon_Master.Weapon_Master_C.BrokenWeaponEvent
	 * 		Flags  -> ()
	 */
	void AWeapon_Master_C::BrokenWeaponEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Master.Weapon_Master_C.BrokenWeaponEvent");
		
		AWeapon_Master_C_BrokenWeaponEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Weapon_Master.Weapon_Master_C.ExecuteUbergraph_Weapon_Master
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeapon_Master_C::ExecuteUbergraph_Weapon_Master(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weapon_Master.Weapon_Master_C.ExecuteUbergraph_Weapon_Master");
		
		AWeapon_Master_C_ExecuteUbergraph_Weapon_Master_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapon_Master_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapon_Master_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Master.Weapon_Master_C");
		return ptr;
	}

}


