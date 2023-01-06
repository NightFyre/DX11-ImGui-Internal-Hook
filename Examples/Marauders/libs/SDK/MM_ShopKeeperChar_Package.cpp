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
	 * 		Name   -> Function MM_ShopKeeperChar.MM_ShopKeeperChar_C.SetShopKeepVisuals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WhichShopKeep                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMM_ShopKeeperChar_C::SetShopKeepVisuals(int32_t WhichShopKeep)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_ShopKeeperChar.MM_ShopKeeperChar_C.SetShopKeepVisuals");
		
		AMM_ShopKeeperChar_C_SetShopKeepVisuals_Params params {};
		params.WhichShopKeep = WhichShopKeep;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_ShopKeeperChar.MM_ShopKeeperChar_C.ExecuteUbergraph_MM_ShopKeeperChar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMM_ShopKeeperChar_C::ExecuteUbergraph_MM_ShopKeeperChar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_ShopKeeperChar.MM_ShopKeeperChar_C.ExecuteUbergraph_MM_ShopKeeperChar");
		
		AMM_ShopKeeperChar_C_ExecuteUbergraph_MM_ShopKeeperChar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMM_ShopKeeperChar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMM_ShopKeeperChar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MM_ShopKeeperChar.MM_ShopKeeperChar_C");
		return ptr;
	}

}


