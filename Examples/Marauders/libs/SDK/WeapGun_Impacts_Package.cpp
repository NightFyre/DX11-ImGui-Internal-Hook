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
	 * 		Name   -> Function WeapGun_Impacts.WeapGun_Impacts_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AWeapGun_Impacts_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGun_Impacts.WeapGun_Impacts_C.ReceiveBeginPlay");
		
		AWeapGun_Impacts_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeapGun_Impacts.WeapGun_Impacts_C.ExecuteUbergraph_WeapGun_Impacts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeapGun_Impacts_C::ExecuteUbergraph_WeapGun_Impacts(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapGun_Impacts.WeapGun_Impacts_C.ExecuteUbergraph_WeapGun_Impacts");
		
		AWeapGun_Impacts_C_ExecuteUbergraph_WeapGun_Impacts_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapGun_Impacts_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapGun_Impacts_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapGun_Impacts.WeapGun_Impacts_C");
		return ptr;
	}

}


